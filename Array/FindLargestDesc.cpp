    bool check(int n)
    {
        int x=n%10; //last digit
        n=n/10;
        while(n>0)
        {
            if(n%10>x)
                return false;
            x=n%10;
            n=n/10;
        }
        return true;
    }
    int find(int N){
        while(N>1)
        {
            if(check(N))
                return N;
            N--;
        }
        return N;
    }
};
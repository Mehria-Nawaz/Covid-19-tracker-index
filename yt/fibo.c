int fibo(int n)
{
    if(n==0 || n==1)
    return 1;
    else
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    for (int i=0;i<=6;i++)
    {
        printf(fibo(i));
    }
    return 0;
}
#include<stdio.h>
    // 计算第n个斐波那契数
    long long fibonacci_nth(int n);
    // 输出前n项斐波那契数列
    void fibonacci_sequence(int n);
    // 计算前n项斐波那契数列的和
    long long fibonacci_sum(int n);
int main()
{  
    int n=10;
     // 计算第n个斐波那契数
    long long num = fibonacci_nth(n);
    printf("第%d个斐波那契数:%lld\n",n, num);

    // 输出前n项斐波那契数列
    printf("前%d项数列:\n", n);
    fibonacci_sequence(n);
    printf("\n");

    // 计算前n项斐波那契数列的和
    long long sum=fibonacci_sum(n);
    printf("前%d项和:%lld", n, sum);
    
    
    return 0;
}

// 计算第n个斐波那契数
long long fibonacci_nth(int n)
{
    long long a = 0;
    long long b = 1;
    long long c;
    if(n<=2)
    {
        return n - 1;
    }
    for(int i=0;i<n-2;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}


// 输出前n项斐波那契数列
void fibonacci_sequence(int n)
{
    long long a = 0;
    long long b = 1;
    long long c;
    
    if(n==1)
    {
        printf("%lld", a);
    }
    else if(n ==2)
    {
        printf("%lld"   "%lld", a, b);
    }
    else if (n > 2)
    {
        printf("%lld\t""%lld\t", a, b);
        int count = 2;
        for (int i = 0; i < n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
            printf("%lld\t", b);
            count++;
            if (count%8 == 0)
                printf("\n");

        }
    }

}

// 计算前n项斐波那契数列的和
long long fibonacci_sum(int n)
{
    long long a = 0;
    long long b = 1;
    long long c;

    if (n == 1)
    {
        return a;
    }
    else if (n == 2)
    {
        return a + b;
    }
    else if (n > 2)
    {
        long long sum = a + b;
        for (int i = 0; i < n - 2; i++)
        {
            c = a + b;
            a = b;
            b = c;
            sum = sum + b;
        }
        return sum;
    }
}
#include<stdio.h>
int isPrime(int n) 
{
    if (n <= 3) {
        if(n>1) return 1;
	else return 0;
    } else if (n % 2 == 0 || n % 3 == 0) {
        return 0;
    } else {
	int i;
        for (i = 5; i * i <= n; i += 6) {
            if (n % i == 0 || n % (i + 2) == 0) {
                return 0;
            }
        }
        return 1;
    }
}

int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		int i,a,b;
		scanf("%d %d",&a,&b);
		for(i=a;i<=b;i++)
		{
			if(isPrime(i))
				printf("%d\n",i);
		}
		printf("\n");
	}
	return 0;
}

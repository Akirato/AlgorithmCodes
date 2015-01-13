#include<stdio.h>
#include<string.h>
int main()
{
	int test;
	scanf("%d",&test);
	while(test--)
	{
		char s1[10000],s2[10000];
		scanf("%s %s",s1,s2);
		int len1=strlen(s1),ans=0;
		int i,len2=strlen(s2);
		if(len1!=len2)
			printf("-1\n");
		for(i=0;i<len1;i++)
		{
			if(s1[i]!=s2[i])
				ans++;
		}
		if(len1==len2)
			printf("%d\n",ans);
	}
	return 0;
}

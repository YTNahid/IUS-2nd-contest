// https://www.codechef.com/problems/TWOSTR
#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    char x[11],y[11];
	    int check;
	    scanf("%s%s",x,y);
	    for(int i=0;x[i]!='\0';i++)
	    {
	        if( x[i]==y[i] || x[i]=='?' || y[i]=='?' )
	        {
	            check=1;
	        }
	        else
	        {
	            check=0;
	            break;
	        }
	    }
	    if(check) printf("Yes\n");
	    else printf("No\n");
	    
	}
	return 0;
}

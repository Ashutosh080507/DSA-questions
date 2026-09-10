#include <stdio.h>

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t>0)
	{
	    t--;
	    int x,y;
	    scanf("%d",x);
	    scanf("%d",y);
	    printf("%d/n",((x*4)+y));
	}

}


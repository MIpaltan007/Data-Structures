#include <stdio.h>

int main(void) {
	// your code goes here
	int t,a,b,c,d;
	scanf("%d\n",&t);
	while(t--){
	    scanf("%d %d %d %d",&a,&b,&c,&d);
	    if((a==c||a==d)&&(b==c||b==d)){
	        printf("0\n");
	    }
	    else if(a!=c&&a!=d&&b!=c&&b!=d){
	        printf("2\n");
	    }
	    else{
	        printf("1\n");
	    }
	}
	return 0;
}


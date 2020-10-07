#include<progressions.h>
#include<stdio.h>
int ar_prog(int a,int d,int n){
	int loop_var=1,next_term=a;
	printf("%d",a);
	for(;loop_var<n;loop_var++){
		next_term+=d;
		printf(" %d",next_term);
	}
	return next_term;
}

int geo_prog(int a,int r,int n){
	int loop_var=1,next_term=a;
	printf("%d",a);
	for(;loop_var<n;loop_var++){
		next_term*=n;
		printf(" %d",next_term);
	}
	return next_term;
}

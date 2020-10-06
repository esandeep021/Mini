#include<stdio.h>

void ar_prog(int a,int d,int n){
	int loop_var=1,next_term=a;
	printf("%d",a);
	for(;loop_var<n;loop_var++){
		next_term+=d;
		printf(" %d",next_term);
	}
}

void geo_prog(int a,int r,int n){
	int loop_var=1,next_term=a;
	printf("%d",a);
	for(;loop_var<n;loop_var++){
		next_term*=n;
		printf(" %d",next_term);
	}
}

void main(){
	int a,d,r,n,menu;
	printf("Choose the type of progression:\n1.Arithmetic Progression\n2.Geometric Progression\n");
	scanf("%d",&menu);
	switch(menu){
		case 1: printf("Enter values of a,d,n:");
				scanf("%d %d %d",&a,&d,&n);
				ar_prog(a,d,n);
				break;
		case 2: printf("Enter values of a,r,n:");
				scanf("%d %d %d",&a,&r,&n);
				geo_prog(a,r,n);
				break;
		default:printf("Choose correct option:\n");
	}
}

#include<stdio.h>
#include<progressions.c>


void main(){
	int a,d,r,n,menu,x;
	printf("Choose the type of progression:\n1.Arithmetic Progression\n2.Geometric Progression\n");
	scanf("%d",&menu);
	switch(menu){
		case 1: printf("Enter values of a,d,n:");
				scanf("%d %d %d",&a,&d,&n);
				x = ar_prog(a,d,n);
				break;
		case 2: printf("Enter values of a,r,n:");
				scanf("%d %d %d",&a,&r,&n);
				x = geo_prog(a,r,n);
				break;
		default:printf("Choose correct option:\n");
	}
}

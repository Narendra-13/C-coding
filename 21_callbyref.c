#include<stdio.h>
int main(){
    printf("Functions using call by reference\n");
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d%d",&a,&b);
    printf("The greater number is : %d",grt(&a,&b));
}
int grt(int *x,int *y){
	if(*x>*y){
		return *x;
	}else if(*y>*x){
		return *y;
	}else{
		return 0;
	}
}

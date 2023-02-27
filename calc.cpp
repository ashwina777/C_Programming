#include<iostream>
using namespace std;
int sum1(int,int);
int sum2(int a,int b,int c);
int sub1(int a, int b);
int mul1(int a, int b);
// int mul2();
// void sub2();
// void div();
int main(){
	char c1;
	printf("Press a to find sum of two numbers\n Press b to find  sum of three numbers\n Press c to find difference between two numbers\n Press d to find product of two numbers\n");
	scanf("%c",&c1);
	switch(c1){
		case 'a':
    int n1,n2,res1;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    res1=sum1(n1,n2);
    printf("sum is %d\n",res1);
	break;
	 
	 case 'b':
    int n3,n4,n5,res2;
    printf("Enter any three numbers\n");
    scanf("%d%d%d",&n3,&n4,&n5);
    res2=sum2(n3,n4,n5);
    printf("sum is %d\n",res2);
    break;
    
    case 'c':
    int n6,n7,res3;
    printf("Enter any two numbers for subtraction\n");
    scanf("%d%d",&n6,&n7);
    res3=sub1(n6,n7);
    printf("Difference between the numbers is %d\n",res3);
    break;
    
    case 'd':    
    int n9,n10,res4;
    printf("Enter any two numbers for multipllication\n");
    scanf("%d%d",&n9,&n10);
    res4=mul1(n9,n10);
    printf("The product is %d\n",res4);
    break;
    }
  return 0;
}
int sum1(int a , int b){
    return a+b;
}
int sum2(int a, int b, int c){
    return a+b+c;
}
int sub1(int a , int b){
    return a-b;
}
int mul1(int a , int b){
    return a*b;
}


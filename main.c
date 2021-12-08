
#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
    int a,b,c;
    // without using third varibale
    printf("Enter the value variable: ");
    scanf("%d%d",&a,&b);
    printf("\n Before swapping a=%d & b=%d:\n",a,b);
   a=a+b; // a=10+20=30
    b=a-b;//   b=30-20=10
   a=a-b; // a=30-10=20
   printf("\n After swapping a=%d & b=%d:\n",a,b);
    printf("Enter values of two variables: ");
scanf("%d%d",&a,&b);
printf("\n Before swapping a=%d & b=%d:\n",a,b);
   c=a;// c=10
    a=b;//   10=20
    b=c;// 20=10
    printf("\nAfter swapping a=%d & b=%d:\n",a,b);

//   with using third variable

    
    return 0;
}

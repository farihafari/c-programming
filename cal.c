#include<stdio.h>
#include<conio.h>
#include<math.h>
// mini calculator
int main(){
    float a,b,sqr,result;
    int r;
    printf("Select anyone operation \n1:square\n2:square root\n3:log\n4:area of square\n5:area of triangle\n6:area of rectangle\n7:area and circumferences of circle");
scanf("%d",&r);
switch(r){
    case 1: 
    printf("\nEnter varibale of square:");
    scanf("%f",&a);
    result=a*a;
    printf("\nsquare of %f  is:  %f ",a,result);
    break;
    case 2: 
    printf("\nEnter varibale of square root:");
    scanf("%f",&a);
    result=sqrt(a);
    printf("\nsquare root of %f is:%f ",a,result);
      break;
    case 3: 
    printf("\nEnter varibale of log:");
    scanf("%f",&a);
    result=log(a);
    printf("\nlog of %f is: %f ",a,result);
      break;
    case 4: 
    printf("\nEnter varibale of area of square :");
    scanf("%f",&a);
    result=(a*a);
    printf("\narea of square  is: %f ",result);
      break;
    case 5: 
    printf("\nEnter values of base and height of area of triangle:");
    scanf("%f%f",&a,&b);
    result=(a*b)/2;
    printf("\narea  of  triangle  is :%f",result);
      break;
    case 6: 
    printf("\nEnter values of base and height of area of recangle:");
    scanf("%f%f",&a,&b);
    result=(a*b);
    printf("\narea of rectangle  is :%f",result);
     break;
    case 7: 
    printf("\nTo find the area and circumference of circle enter the value of radius:");
    scanf("%f",&a);
    result=3.142*a*a;  // area of circle
    b=2*3.142*a; //circumference of circle
    printf("\narea of circle %f is and circumference of circle is %f  :",result,b);
    break;
}
return 0;
}
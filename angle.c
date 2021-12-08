#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    // by using hypot function
    double base,perp,hyp;
    printf("Enter the value of base and perpendicular:");
    scanf("%lf %lf",&base,&perp);
    hyp=hypot(base,perp);
    printf("\n value of hypotenus is %.2f:",hyp);
    // by using pow function
    double bs,prp,hypo;
    printf("\nEnter the value of base and perpendicular:");
    scanf("%lf %lf",&bs,&prp);
    hypo=pow(bs,2)+pow(prp,2);
    printf("\n value of hypotenus is %.2f:",sqrt(hypo));
        // by using defined function
    double basee,pp,hp;
    printf("\nEnter the value of base and perpendicular:");
    scanf("%lf %lf",&basee,&pp);
    hp=(basee*basee)+(pp*pp);
    printf("\n value of hypotenus is %.2f:",sqrt(hp));
    // area of triangle
    double bb,ppp,area;
    printf("\nEnter the value of base and perpendicular:");
    scanf("%lf %lf",&bb,&ppp);
    area=(bb*ppp)/2;
    printf("\n value of area is %.2f:",area);
    // for perameters
    double H,P,B,SUM;
    printf("\nEnter the value of base,hypotenus and perpendicular:");
    scanf("%lf %lf %lf",&B,&H,&P);
    SUM=B+H+P;
    printf("\n value of perameters is %.3f:",SUM);
    
    return 0;
    
}
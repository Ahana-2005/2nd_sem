//Write a c program to implement Adamas University semester marking system.
#include<stdio.h>
int main(){
    int i,credit=0,n=2;
    struct{
        char sub[20];
        int credit;
        float marks;
    }s[n];
    float xf[n],sum=0,sgpa;
    for(i=0;i<n;i++) {
        printf("Enter name of subject : ");
        scanf("%s",&s[i].sub);
        printf("\nEnter credit of subject : ");
        scanf("%d",&s[i].credit);
        printf("\nEnter marks obtained in subject : ");
        scanf("%f",&s[i].marks);
        xf[i]=s[i].marks*s[i].credit;
        credit+=s[i].credit;
        sum+=xf[i];
    }
    sgpa=(sum/credit)/10;
    printf("The credit is %f\nGrade : ",sgpa);
    if(sgpa<3.5)
        printf("F");
    else if(sgpa>3.5&&sgpa<4)
        printf("P");
    else if(sgpa>4&&sgpa<5)
        printf("C");
    else if(sgpa>5&&sgpa<6)
        printf("B");
    else if(sgpa>6&&sgpa<7)
        printf("B+");
    else if(sgpa>7&&sgpa<8)
        printf("A");
    else if(sgpa>8&&sgpa<9)
        printf("A+");
    else if(sgpa>9&&sgpa<10)
        printf("O");
    else
        printf("Unable to calculate gpa !!");
}
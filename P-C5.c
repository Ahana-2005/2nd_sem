//Write a c program to add 2 distances given in feet and inches using structures.
#include <stdio.h>
int main()
{
    struct dis{
        int feet;
        int inch;
    };
    struct dis s1,s2,s3;
    printf("Enter the first distance:");
    scanf("%d %d",&s1.feet,&s1.inch);
    printf("Enter the second distance:");
    scanf("%d %d",&s2.feet,&s2.inch);
    s3.feet=s1.feet+s2.feet;
    s3.inch=s1.inch+s2.inch;
    if (s3.inch>12)
    {
        s3.feet++;
        s3.inch-=12;
    }
    printf("The total distance is %d feet and %d inches",s3.feet,s3.inch);
}
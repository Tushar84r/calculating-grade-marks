#include<stdio.h>
int main()
{
    int marks;
    printf("\n enter the marks between 0 to 100:");
    printf("\n enter the marks:");
    scanf("%d",&marks);
    if(marks>100)
    {
        printf("\n Erorr the numbers should be in between in 0 to 100:");
    }
    else
    {
        switch( marks/10)

    {
    case 10:
        case 9:printf ("\n your grade is :A");
        break;
        case 8:printf ("\n your grade is :B");
        break;
        case 6:printf ("\n your grade is :c");
        break;
        case 5:printf ("\n your grade is :D");
        break;
        default:
            printf("\n you have failed better luck next time :");


                }
    }
    return 0;
}

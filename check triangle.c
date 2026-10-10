#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c;
    while(1)

    {
       printf("enter sides of triangle");
       scanf("%d,%d,%d",&a,&b,&c);
       switch(a,b,c)
       {
        case 1:
        {
            if(a==b && b==!c)
            {
                printf("isosceles triangle");

            }
            else
            {
                printf("not isoceles triangle");
            }
            break ;
        }

        case 2:
        {
            if(a+b==90 || b+c== 90 || a+c ==90)
            {
                printf("right angled triangle");

            }
            else
            {
                printf("not right angled triangled");
            }
            break ;
        }

        case 3:
        {
            if(a==b && b==c && a==c)
            {
                printf("equlateral triangle");
            }
            else
             {
                printf("not equilateral triangle");
             }
             break ;
        }

        default:
        {
            printf("invalid triangle");
            break ;
             exit(0);

        }


       }

       printf("end of program");
    }

    return 0;
}

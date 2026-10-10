#include<stdio.h>
#include<stdlib.h>
int main()
{
    int x,a,b;
    while(1)
    {
        system("cls");
        printf("\n1.Addiditon");
        printf("\n2.subtract");
        printf("\n3.multiply");
        printf("\n4.divide");

        switch(x)
        {
            case 1:
            {
                printf("enter two numbers");
                scanf("%d%d",&a,&b);
                printf("sum is%d",a+b);
                break ;
            }

            case 2:
             {
                printf("enter two numbers");
                scanf("%d%d",&a,&b);
                printf("sub is%d",a-b);
                break ;
            }

            case 3:
             {
                printf("enter two numbers");
                scanf("%d%d",&a,&b);
                printf("product is%d",a*b);
                break ;
            }

            case 4:
             {
                printf("enter two numbers");
                scanf("%d%d",&a,&b);
                printf("%d",a/b);
                break ;
            }

            defalt:
            {
                printf("invalid choice");
                break ;

                exit(0);
            }

        }
        printf("end program");

    }
    return 0;

}

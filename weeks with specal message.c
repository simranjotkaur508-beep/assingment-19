#include<stdio.h>
#include<stdlib.h>
int main()
{
    int days;
    while(days)
    {
       
        printf("enter a number(1-7):");
        scanf("%d",&days);
        switch(days)
{
        case 1:
        {
            printf(" day monday start your week with a fresh mind");
            break ;
        }

        case 2:
        {
            printf("day tuesday  keep learning and keep growth");
            break ;
        }

        case 3:
        {
            printf("day wednesday  half of the week is done");
            break ;
        }

        case 4:

        {
           printf("day thursday  stay strong because sucess is near ");
           break ;

        }
        case 5:
        {
            printf("day friday finish the week with a smile ");
            break ;

        }

        case 6:
        {
            printf("day saturday enjoy your and spreed happiness");
            break ;
        }

        case 7:
        {
            printf("day sunday relax ,recharge and prepere for next week ");
            break ;
        }

        default:
        {
            printf("not valid chooice");
            break ;
         exit(0);
        }
      printf("end of program");


    }


    }

    return 0;
}
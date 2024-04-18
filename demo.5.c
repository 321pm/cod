/*#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter the value for num1,num2 and num3");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2)
    {
        if(num1>num3)
        {
            printf("num1 is greater than num3\n");
        }
        else
        {
            printf("num3 is gerater than num1\n");
        }
    }
    else if(num2>num3)
    {
        printf("num2 is greater than num3\n");
    }
    else
    {
        printf("num3 is greater than num2");
    }
    return 0;
}*/


/*#include<stdio.h>
int main()
{
    int num1,num2;
    printf("enter the value for num1 and num2:");
    scanf("%d%d",&num1,&num2 );

    num1>num2 ?printf("num1 is greater!"):printf("num2 is greater!");
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int num1,num2,num3,max;
    printf("enter the value for  num1,num2 and num3 :");
    scanf("%d%d%d",&num1,&num2,&num3);

    max= num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);
    printf("max=%d\n",max);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int num1=10,num2=20,choice;
    printf("1.addition\n.2.subtraction\n.3.multiplication\n.4.division\n");
    printf("enter your choice :");
    scanf("%d",&choice);

    switch (choice)
    {
        case 1:
              printf("addition=%d\n",num1+num2);
              break;

        case 2:
              printf("subtraction=%d\n",num1-num2);
              break;

        case 3:
              printf("multiplication=%d\n",num1*num2);
              break;

        case 4:
              printf("division=%d\n",num1/num2);
              break;

        default:
              printf("enter the valid choice between 1 to 4\n");
              break;


    }
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    int num1=10,i=1;
    while(i<=10)
    {
        printf("%d*%d=%d\n",num1,i,num1*i);
        i++;
    }
}*/

/*#include<stdio.h>
int main()
{
    int num1=10,i;
    for(i=1;i<=10;i++)
    {
        printf("%d*%d=%d\n",num1,i,num1*i);
    }
}*/

/*#include<stdio.h>
int main()
{
    int num1=5;
    do
    {
        printf("num1=%d\n",num1);
    }while(num1<=3);
    return 0;

    
}*/

/*#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num1=10,num2=15;
    do{
        printf("0.exit\n2.addition\n3.multiplication\n4.division");
        printf("enter your choice:");
        scanf("%d",&choice);

        switch(choice);
        {
            default :
                     printf("enter the valid choice between 1 to 4\n");
                     break;
            case 0:  exit(0);
                     break;

            case 1:
                    printf("addition=%d\n",num1+num2);
                    break;

            case 2: printf("subtraction=%d\n",num1-num2);
                    break;

            case 3:
                    printf("multiplication=%d\n",num1*num2);
                    break;

            case 4:
                    printf("division=%d\n",num1/num2);
                    break;

                   
            }

        
    }while(choice!=0);
}*/


#include<stdio.h>
void swap(int num1,int num2);
int main()
{
    int num1=15,num2=20;
    printf("before swap num1=%d,num2=%d\n",num1,num2);
    swap(num1,num2);
    printf("after swap num1=%d,num2=%d\n",num1,num2);
    return 0;
}

void swap(int num1,int num2)
{   
    int temp;
    num1=temp;
    num1=num2;
    num2=temp;
}



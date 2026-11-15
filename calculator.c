#include<stdio.h>
void main()
{
    float a,b,res;
    char op;
    printf("Enter the operands\n");
    scanf("%f%f",&a,&b);
    printf("Enter the operator\n");
    scanf("%s",&op);
    switch(op)
    {
        case'+':res=a+b;
        printf("Sum = %f\n",res);
        break;
        case'-':res=a-b;
        printf("Difference = %f\n",res);
        break;
        case'*':res=a*b;
        printf("Product = %f\n",res);
        break;
        case'/':res=a/b;
        printf("Quotient = %f\n",res);
        break;
        case'%':if(b!=0)
        {
            res=(int)a%(int)b;
            printf("Remainder =  %f\n",res);
        }
        else
        {
            printf("Division by zero is not possible\n");
        }
        break;
        default: printf("Invalid option\n");
        break;
    }
}
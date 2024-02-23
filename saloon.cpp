#include<stdio.h>
main()
{
    int c ,r,style;
    char ch,a;
    float amount;
    do
    {
	
    printf("\n 1. hair");
    printf("\n 2 . massage");
    printf(" \n enter your choice");
    scanf("%c",&ch);
        switch(ch)
        {
            case '1':printf("\n a. hair cut ");
                     printf("\n b.trimming");
                     printf("\n enter your choices in washing:");
                     scanf("%c",&c);
                     switch(c)
                     {
                     	case 'S':printf("\n Enter r & style");
                				scanf("%d%d",&r,&style);
                				amount=r*style;
               					printf("amount=%f",amount);
                				break;
                		case 'C':printf("\n Enter r & style");
                				scanf("%d%d",&r,&style);
                				amount=r*style;
                				printf("amount=%f",amount);
                				break;
					 }
					 break;
                    
            case '2':printf("\n a. head massage");
                     printf("\n b.hair setting");
                     printf("\n enter your choices in washing:");
                     scanf("%c",&c);
                     switch(c)
                     {
                     	case 'W':printf("\n Enter r & style");
                				scanf("%d%d",&r,&style);
                				amount=r*style;
               					printf("amount=%f",amount);
                				break;
                		case 'T':printf("\n Enter r & style");
                				scanf("%d%d",&r,&style);
                				amount=r*style;
                				printf("amount=%f",amount);
                				break;
                     	
					 }
                     break;
            
        }
        printf("\n do you want to continue: %c");
        scanf("%c",&a);
}
while (a=='y');
}

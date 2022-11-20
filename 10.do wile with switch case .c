//my reg no is RA2211042010032
#include<stdio.h>  
void main ()  
{  
    char c;  
    int choice,ans;    
    do{  
    printf("1. Print Hello\n2. Print how are you\n3. Exit\n\n");  
    printf("enter your choice : ");
    scanf("%d",&choice); 
    switch(choice)  
    {  
        case 1 :   
        printf("Hello\n");   
        break;  
        case 2:    
        printf("how are you\n");  
        break;  
        case 3:  
        exit(0);   
        break;  
        default:   
        printf("please enter valid choice\n");      
    }  
    printf("do you want to enter more?\n");   
    scanf("%d",&ans);  
    scanf("%c",&c);  
    }while(c=='y');  
} 

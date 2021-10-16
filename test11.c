#include<stdio.h>
#include<conio.h>
int main()
{
	 char alph,rev;                                                              
    printf("Enter an alphabet  ");                                             
    scanf("%c", &alph);                                                         
                                                                                
    if(islower(alph))                                                           
      rev = toupper(alph);                                                      
    else                                                                        
      rev = tolower(alph);  
	
    printf("Reverse case of %c is : %c\n", alph, rev);                        
                                                                                
}                                   


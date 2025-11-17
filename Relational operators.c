#include<stdio.h>

// Relational operators 


int main()
{
    int a=5, b=5, c=10, result;
    result= (a==b);                                             // equal to 
    printf("%d == %d is : %d", a,b,result);                     // a is == b
    
    
    result= (a<=c);                                             // less than equal to 
    printf("\n %d <= %d is : %d", a,c,result);                  // a is less than or equal to c 


   result= (c<=b);
   printf("\n %d <= %d is : %d", c,b,result);                   // c is less than or equal to b - False 
    

   result= (c>=a);                                              // greater than equal to
   printf("\n %d is %d is : %d", c,a,result);                   // c is greater than equal to a 

  
   result= (a!=c);                                              // a not equal to c 
   printf("\n %d != %d is : %d", a,c,result);

    
    
    
    
    return 0;
    
}
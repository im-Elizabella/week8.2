#include <stdio.h>
#include <string.h>
int main()
{
   char str[1000];
   int i;
   printf("Enter String : ");
   gets(str);
   while (str[i] != '\0')
    {
      if(str[i] >= 65 && str[i] <= 90) //A is 65 , Z is 90
      {    
          str[i]= str[i]+32;
          i++;
      }
      if(str[i] >= 97 && str[i] <= 122)   //a is 97 , z is 122
      {
          str[i] = str[i]-32;
          i++;
      }
   }
   printf ("Output : %s",str);
   return  0;
}
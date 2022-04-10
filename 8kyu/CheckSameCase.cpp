
/*
Write a function that will check if two given characters are the same case.

If any of characters is not a letter, return -1
If both characters are the same case, return 1
If both characters are letters and not the same case, return 0
*/

#include <ctype.h>
int same_case (char a, char b)
{
 if(!isalpha(a) || !isalpha(b))
   {
   return -1;
   }
  else if(islower(a) && islower(b) || isupper(a) && isupper(b))
    {
    return 1;
   }
  else
    {
    return 0;
    } 
}

/*********************************************************************************************
 * © 2022 RuggedBOARRD. - All Rights Reserved. Permission to use, modify, copy, and distribute
 * this source code, object code, or executable code (collectively, Software), is granted only
 * under the terms of a valid written license agreement with RuggedBOARD. Unauthorized copying
 * or other use of the Software is strictly prohibited.  Software is owned by and constitutes
 * the proprietary works, trade secrets, and copyrights of Embitel or its licensors.
 * For further information, contact community.ruggedboard.com / info@ruggedboard.com
 *
 * Application: 
 * Brief: 
 * Author: Manjula Patil  ( manjulasn.123@gmail.com )
 * Title: Project Engineer
 * Last Modified Date: 19.09.2022
 *
/*********************************************************************************************/

// Header File
#include <stdio.h>
#include <string.h>

// Main Function
int main()
{
     char str[] = "RUggEd bOaRD";
     int i;

     printf("Given string is: %s\n",str);

     for (i = 0; str[i] != '\0'; i++) {
          if (islower(str[i])) {
               str[i] = toupper(str[i]);
          } else if (isupper(str[i])) {
               str[i] = tolower(str[i]);
          }
     }
          
     printf("Toggled string is: %s\n", str);

     return 0;
}

// Program End

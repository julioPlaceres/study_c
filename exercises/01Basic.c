#include <stdio.h>
#include <string.h>

int main(void) 
{

    printf("\n");
}

// ======================================================================================//
// Question 1
// Write a C program to tpint your name, date of birth and mobile phone number
// Expected Output:
// Name   : Alexandra Abramov
// DOB    : July 14, 1975
// Mobile : 99-9999999999

// Answer 1
    // Print Name
    // printf("Name   : Alexandra Abramov\n"); 
    // Print Date of Birth
    // printf("DOB    : July 14, 1975\n"); 
    // Print Mobile Number
    // printf("Mobile : 99-9999999999\n"); 
    // Indicate successful execution
    // return(0);

// =============================================================================================//
//  Quesiton 2
//     2. Write a C program to get the C version you are using.
//      Expected Output:
//          We are using C18!
//
//      Answer:
//      long version = __STDC_VERSION__;
//      if (version >= 201710L)
//          printf("We are using C18!\n");
//      else if (version >= 201112L)
//          printf("We are using C11!\n");
//      else if (version >= 199901L)
//          printf("We are using C99!\n");
//      else
//          printf("We are using C89/C90!\n");
//      return(0); 

//==============================================================================================//
// Question 3
//  // 3. Write a C program to print a block F using the hash (#), where the F has a height of six characters and width of five and four characters. And also print a very large 'C'.
// Expected Output:

// ######
// #
// #
// #####
// #
// #
// #
//     ######
//   ##      ##
//  #
//  #
//  #
//  #
//  #
//   ##      ##
//     ######

//  Print a line of hashes
//  printf("######\n");
    
//  Print a single hash
//  printf("#\n");
    
//  Print a single hash
//  printf("#\n");
    
//  Print a line of hashes
//  printf("#####\n");
    
//  Print a single hash
//  printf("#\n");
    
//  Print a single hash
//  printf("#\n");
    
//  Print a single hash
//  printf("#\n");
//  return(0);

//========================================================================================//

// 4. Write a C program to print the following characters in reverse.
// Test Characters: 'X', 'M', 'L'
// Expected Output:
// The reverse of XML is LMX

// Answer:
    // char string[30] = "";

    // // Get the input from the user
    // printf("Provide characters: ");
    // scanf("%s", string);

    // int lngth = strlen(string);

    // for(int i = 0; i < lngth + 1; i++)
    // {
    //     printf("%c", string[lngth - i]);
    // }
    // printf("\n");
    // return(0);

//=========================================================================================//

// 5. Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.
// Expected Output:
// Perimeter of the rectangle = 24 inches
// Area of the rectangle = 35 square inches

//  Answer: 
// Get input from the user
// int height = 0;
// int width = 0;

// printf("Enter a Height integer: ");
// scanf("%i", &height);
// printf("Enter a Width integer: ");
// scanf("%i", &width);
// printf("\n");

// int perimeter = calculatePerimeter(height, width);
// drawRectangle(height, width, perimeter);
// printf("The perimeter of a rectangle with %i Height, and %i Width is %i\n", height, width, perimeter);
// return 0;
// }

// int calculatePerimeter(int height, int width)
// {
//     int p = 0;
//     p = 2 * (height + width);

//     if(p < 0)
//     {
//         return 0;
//     }

//     return p;
// }

// void drawRectangle(int pHeight, int pWidth, int perimeter)
// {
//     int width = pWidth * 2;
//     int height = pHeight;

//     // Calculate middle points
//     int wOffset = pWidth / 2;
//     int hOffset = height / 2;

//     printf("Height: %i Width: %i wOffset: %i hOffset: %i\n", height, pWidth, wOffset, hOffset);
//     printf("\n");

//     // Print width Text
//     printf("Width: %i\n", pWidth);

//     // Create vertical columns of hashes
//     char vhash[width + 1];
//     for (int i = 0; i < width; i++)
//     {
//         vhash[i] = ' ';
//     }
//     vhash[0] = '#';
//     vhash[width -1] = '#';
//     vhash[width] = '\0';

//     // Print Height & Width square hashes
//     for (int i = 0; i < height; i++)
//     {
//         // Print first horizontal line
//         if(i == 0){
//             for(int j = 0; j < width; j++)
//             {
//                 printf("#");
//             }
//             printf("\n");
//         }
//         else {
//             if(i == height -1)
//             {
//             // Print last horizontal line
//             for(int j = 0; j < width; j++)
//             {
//                 printf("#");
//             }
//             printf("\n");

//             } else {
            
//             // Print vertical lines
//             printf("%s", vhash);

//             if(i == hOffset){
//                 printf(" Height: %i", height);
//             }
//             printf("\n");
//             }
//         }

//     }

//======================================================================//






//========================================================================================//

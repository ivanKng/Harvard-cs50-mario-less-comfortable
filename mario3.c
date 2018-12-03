#include<cs50.h>
#include<stdio.h>

/*
determine how to ask user for input at least once?
    a do while loop will prompt user at least once.
        the loop should only accept positive integers.
    if requirement returns false user will be prompted again for valid input
    if requirement returns true loop will break
        **so far the loop prompts the user for a value. invalid value will continuously prompt user for input; valid input breaks loop.
    create a loop that will iterate over each level of height in the pyramid for however tall the user inputs into pyramid
    for every row //(for loop)
        print spaces
        print hashes
        print new line
*/
//int h;  //this variable declaration represents the hash or bricks of the pyramid
int height;  //this variable declaration represents the height of user prompted pyramid
int row;  //this variable declaration represents the number of rows in the pyramid
int spaces;  //this variable declaration represents the spaces in row of the pyramid
int main(void)
{
    do
    {
        //ask user for height
        height = get_int("enter height of pyramid: ");
    }
    //now that you've prompted user for height, write a looping condition that will keep prompting user if input is invalid
    //the pyramid must have a height > than 0 || less than 23
    while(height <= 0 || height > 23);    //this condition stipulates the integer n must be >0 && <23. otherwise prompt user for value that meets criteria

    /*

    **the clue is here**
    for every row //(for loop)
        print spaces
        print hashes
        print new-line
    */

   for (row = 0; row < height; row++) //create a for loop for row
   {
       for (spaces = 0; spaces < height-1-row; spaces++)   //creating a for loop within a for loop results in the inner loop being executed first
       {
           printf(" "); //print for spaces
       }
       for (spaces = 0; spaces < row+1; spaces++)   //creating additional sibling for loop (same indentation) results in 2nd inner for loop to be executed after 1st nested for loop (for loop for spaces)
       {
           printf("#"); //print for hashes
       }
       printf("\n");
   }

}
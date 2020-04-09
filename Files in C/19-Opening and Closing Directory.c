// Programme to open and close a particular directory

#include <stdio.h> 
#include <dirent.h> //Header to include the directory methods and functions 
  
void main(){ 
    struct dirent *de;  // Pointer for directory entry same as FILE*
  
    DIR *dr = opendir("."); //Declare the pointer to the specific directory 
  
    closedir(dr); // To close the pointer of the directory and it is considered as good practise for security and efficiency 
} 

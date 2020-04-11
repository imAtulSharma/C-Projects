// Programme to list directory

#include <stdio.h> 
#include <dirent.h> 

void main(){ 
    struct dirent *de;  // Pointer for directory entry same as FILE*
  
    DIR *dr = opendir("."); //Declare the pointer to the specific directory 
  
    if (dr == NULL)  // opendir returns NULL if couldn't open the directory 
    { 
        printf("Unable to open specified directory" );  
    } 

    // To read the files and sub-directories in the specified eddirectory
    while ( ( de = readdir(dr) ) != NULL){  
        printf("%s\n", de->d_name);
    } 
  
    closedir(dr);// To close the pointer of the directory and it is considered as good practise for security and efficiency
}
#include <iostream>
using namespace std;
#include <string.h>
#include <cmath>
#include <fstream>
#include <string.h>

#include <stdio.h>

#include <string.h>
int main(int argc, char *argv[]) {
  
  //Flags 
  string myText;
  ifstream MyFile("conf.ini");
  while (getline(MyFile, myText)) {
  // Output the text from the file
  cout << "Hello, " + myText + "\n";
  
  }
  // Output the text from the file


  cout <<"Flags:\n";
  cout << "-v Shows The Version Number\n";
  cout << "--HELLOWORLD Displays Hello, World! \n";
   // Main loop for command line arguments
    for (int i = 0; i < argc; i++){
      int lol = i + 1;
      // I wanna update to case but The code is to BIG
        if(strcmp(argv[i], "-v") == 0){
          system("clear");
          cout << "Code Name MAGAPP Version 0.0.2";
        } 
        if(strcmp(argv[i], "--HELLOWORLD") == 0) {

          system("HELLOWORLD");
         
        }
          
          

      
          
          
        
          
          
          

          
        }
          

          


          
        
          

          
          
          
          
          
        }
    

  


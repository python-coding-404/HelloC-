#include <iostream>
#include <string.h>
#include <fstream>
int main(int argc, char *argv[]){
 
          
  char* Name;
  std::cout << "Welcome to the Setup Application for MAG-APP\n";
  std::cout << "Setup ERROR:Will not setup Application if in develovment\n";
     for (int i = 0; i < argc; i++){
      int lol = i + 1;
      // I wanna update to case but The code is to BIG
        if(strcmp(argv[i], "-v") == 0){
          system("clear");
          std::cout << "Code Name MAGAPP Version 0.0.2\n";
        } 
        if(strcmp(argv[i], "--Version=alpha") == 0) {
          system("clear");
          std::cout << "Welcome to the Setup Application for MAG-APP\n";
          std::cout << "Whats Your Name?";
          std::cin >> Name;
             
          std::ofstream MyFile("ini.conf");
          MyFile << Name;
          MyFile.close();
          std::cout << "Starting Install";
          system("cd files");
          system("cd /etc/");
          system("mkdir lol");
          system("cp HELLOWORLD /bin");
          system("cp HELLOWORLD /usr/bin");
          system("cp MAGAPP /bin");
          system("cp MAGAPP /usr/bin");
          system("mv ini.conf /etc/lol/");
          
          



        }
   }

  
  

}

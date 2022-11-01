
/*
  Simple dual mode calculator by Geotrix
  It has arithmetic mode that is for basic addition, subraction 
  multiplication & division
 
  And "Special mode" which calculates cube roots, square roots and others

*/


#include <iostream>
#include <vector>
#include <cmath>
#include <Windows.h>


void menu(){
   std::cout 
        << "***ALL PURPOSE CALCULATOR***\n"
        << "options:\n"
        << "type r for arithmetic mode\n"
        << "type s for special math functions" //menu and options

    <<std::endl;
}

void mode1ShowText(){
    std::cout << "A - Mode \n";
}
void mode2ShowText(){
    std::cout << "Sf - Mode \n";
    std::cout 
        << "Options:\n"
        << "q - square root\n"
        << "c - cube root\n"
        << std::endl;
}

typedef char dual_t;

int main(){
    menu();
   
   dual_t mode_options;

   std::cout << "choose either 'r' or 's': ";
   std::cin >> mode_options;
   
   if(mode_options == 'r'){
     mode1ShowText();
     char op;
        int num1,num2,result;
        std::cout << "choose either(+, -, *, /): \n";
        std::cin >> op;
    
        std:: cout << "Enter #1: ";
        std::cin >> num1;

        std:: cout << "Enter #2: ";
        std::cin >> num2;

        switch(op){ 
            case '+':
            result = num1 + num2;
            std::cout << result << '\n';
            break;

            case '-':
            result = num1 - num2;
            std::cout << result << '\n';
            break;

            case '*':
            result = num1 * num2;
            std::cout << result << '\n';
            break;

            case '/':
            result = num1 / num2;
            std::cout << result << '\n';
            break;

          default:
          HANDLE jNoOprInp = GetStdHandle(STD_OUTPUT_HANDLE); //Sets the error message text to red
          SetConsoleTextAttribute(jNoOprInp,4);
          std::cout << "Error: No operation entered or incorrect input";
       }   

  }
  else if(mode_options == 's'){
    mode2ShowText();
    char sf;
    int val1;
    double sfresult;
    
    std::cout << "continue: ";
    std::cin >> sf;

    std::cout << "Enter a number: ";
    std::cin >> val1;

    switch(sf){
      case 'q':
      sfresult = sqrt(val1);
      std::cout << "square root: " << sfresult << '\n';
      break;

      case 'c':
      sfresult = cbrt(val1);
      std::cout << "cube root: " << sfresult << '\n';
      break;

    }
  }

  else {
    HANDLE kNomode = GetStdHandle(STD_OUTPUT_HANDLE); 
      SetConsoleTextAttribute(kNomode,4);
      std::cout << "Error: No mode selected";
  }    
   return 0;
     
  }

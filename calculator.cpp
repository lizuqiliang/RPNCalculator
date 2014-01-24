#include<stdio.h>
#include<iostream>
#include<fstream>
#include<istream.h>
#include<string>
#include<math.h>
#include<conio.h>

#include "stack.h"
#include "stack.cpp"
#include "RPN.h"
#include "RPN.cpp"

using namespace std;

int main()
{
    RPN c;						//Declaring the class
    float n;					//Declaring a float input variable
    char input[20];				//Declaring the input
    bool quit = false;			//Declaring and initializing the exit option		
    cout << "Available Commands: "<< endl << endl << "add = + \tsub = - \tmul = * \tdiv = /" << endl << "exp = ^ \t ln = n \tlog = l \t10^ = m" <<endl << "sin = s \tcos = c \ttan = t \t ^2 = q"<< endl << " pi = p \t  e = e \t" << endl << "Exit = exit \tHelp = help"<< endl << endl;
    //^This is the command menu that shows all the available commands
    
	while (quit == false){		//while loop to make sure the program keeps working until exited
	
		cout << "Command: ";
		cin >> input;			//Command Input
		
		
		
		if(input[0]>='0' && input[0]<='9'){			//Check if input is a number
			n=strtof(input, NULL);
			c.push(n);
		}
		else if(strcmp("+",input) == 0){			//addition
			c.add();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("-",input)== 0){				//subtraction
			c.sub();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("*",input)== 0){				//multiplication
			c.mul();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("/",input)== 0){				//Division
			c.div();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("^",input)== 0){				//Exponential
			c.exp();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("n",input)== 0){				//Natural Log
			c.ln();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("l",input)== 0){				//Log base ten
			c.lgm();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("m",input)== 0){				//10 to the power of
			c.mag();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("p",input)== 0){				//Input constant pi
			c.pi();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("s",input)== 0){				//Sine
			c.sn();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("c",input)== 0){				//Cosine
			c.cs();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("t",input)== 0){				//Tangent
			c.tn();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("e",input)== 0){				//Input constant e
			c.ee();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("q",input)== 0){				//Squareroot
			c.sq();
			cout << endl << "ans: "<< c.show() << endl << endl;
		}
		else if(strcmp("help",input)== 0){			//Display the commands menu
			cout << endl << "Available Commands: "<< endl << endl << "add = + \tsub = - \tmul = * \tdiv = /" << endl << "exp = ^ \t ln = n \tlog = l \t10^ = m" <<endl << "sin = s \tcos = c \ttan = t \t ^2 = q"<< endl << " pi = p \t  e = e \t" << endl << "Exit = exit \tHelp = help"<< endl << endl;
		}
		else if(strcmp("exit",input)== 0){			//Exits program
			quit = true;
		}
		else if(strcmp("a",input)== 0){			//Exits program
			cout << endl << c.show2() << endl;
		}
		else if(strcmp("b",input)== 0){			//Exits program
			cout << endl << c.show() << endl;
		}
		else cout << "error" << endl;				//Error checking
		
    }
	return 0;
}

/*Exercise 2 - Selection

Convert the C program given below which calculates an employee's salary to a C++ program.

Input Type, Salary, otHours

Type = 1
OtRate = 1000
Type = 2
OtRate = 1500
Type = 3
OtRate = 1700
Please Note that the input command in C++ is std::cin. This is a representation of the Keyboard.*/

# include <iostream> 
using namespace std ;

int main () 
{
	double salary,netsalary ;
	int etype,othrs,otrate ; 
	
	cout << "Enter employee type : " ;
	cin  >> etype ;
	
	cout << "Enter salary : " ;
	cin  >> salary ; 
	
	cout << "Enter othrs : " ; 
	cin  >> othrs ; 
	
	switch (etype) {
		
		case 1 : otrate = 1000 ; 
		         break ; 
		         
		case 2 : otrate = 1500 ; 
		         break ;  
	    
	    default : otrate = 1700 ; 
	              break ; 
	              
	} 
	
	netsalary = salary + othrs * otrate ; 
	cout << "Net salary is" << netsalary ; 
	
	return 0 ; 
} 
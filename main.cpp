// Perry Holloway
// Dr. T  
// Fundamentals Comp II
// November 30,2019 
// solve tower of hanoi puzzle & Recursive Factorial 
// 
#include <bits/stdc++.h> 
#include<vector>
#include<iostream> 
using namespace std; 
  
void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod)  
{  
    if (n == 1)  
    {  
        cout << "Move disk 1 from rod " << from_rod <<  
                            " to rod " << to_rod<<endl;  
        return;  
    }  
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);  
    cout << "Move disk " << n << " from rod " << from_rod << 
                                " to rod " << to_rod << endl;  
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);  
}  


using namespace std; 

// function to find factorial of given number 
unsigned int factorial(unsigned int n) 
{ 
	if (n == 0) 
	return 1; 
	return n * factorial(n - 1); 
}
// Driver code 
int main()  
{  
   int n = 5; // Number of disks  
   cout << "How many do you want for the Towers of Hanoi? " << endl; 
  cin >> n; 
    towerOfHanoi(n, 'A', 'C', 'B'); // A, B and C are names of rods     


  
  
   

// Make a new line for the recursive function 
    cout << "\n\n" << endl; 

/*Write a recursive function factorialR that will generate factorials based upon the user starting point (validated) input from the keyboard. i.e. When the user enters, 4, the function should multiply 4 x 3 x 2 x 1, and output the result of 24. */

    	int num = 4; 
      cout << "Enter a Number for Factorial Recursion: " << endl; 
      cin >> num; 

    
	cout << "Factorial of " << num << " is " << factorial(num) << endl; 
	return 0; 
    return 0;  
}  
  
// \ This code is contributed by rathbhupendra and Shivi_Aggarwal 



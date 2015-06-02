/*
 * main.cpp
 * HealthProfile program . This file represents HealthProfile's public
 * interface without revealing implementations of HealthProfile's member
 * functions, which are defined in HealthProfile.cpp
 *
 * Stub file for Programming Assignment #2
 *
 * Name: EGBE ISRAEL EDOKI
 * Department: DEPARTMENT OF COMPUTER SCIENCE
 * Matric. No: PDS/2013/0118
 *
 */

#include <iostream>
#include <string>           // uses C++ string class
#include "HealthProfile.h"  // include definition of class HealthProfile
using namespace std;

int main()
{
    // Variable declarations
    string firstName;
    string lastName;
    string gender;
    int month;
    int day;
    int year;
    double height;
    int weight;
    int currentDay;
    int currentMonth;
    int currentYear;
    
    // Prompt for patient information
    cout << "Welcome to our program to computerize healthcare records\n";
    cout << "please fill-in your information as requested. Thank you\n";
    cout << "\nKindly enter todays day, month and year using numeric representations only\n";
    cout << "e.g. 3, 5, 2015 indicating 3rd of May, 2015, else software would break\n";
    
    // TODO: Put your code to receive input from user here
    
    // TODO: Put your code to receive input from user here
    cout<<" input first name";
    getline(cin,firstName); 
      cout<<" input last name";  
    getline(cin,lastName); 
     cout<<" input gender";  
    getline(cin,gender);
     cout<<" input month";     
    cin>>month;    
     cout<<" input day";          
    cin>>day; 
     cout<<" input year";               
    cin>>year;    
     cout<<" input current year";           
    cin>>currentYear; 
     cout<<" input current day";         
    cin>>currentDay;  
     cout<<" input curr month";     
    cin>>currentMonth; 
     cout<<" input weight";   
    cin>>weight;
     cout<<" input height";
    cin>>height;
    
    // Instantiate an object of class HealthProfile - passing relevant values to the constructor
    HealthProfile myHealthProfile(firstName, lastName, gender, month, day, year, weight, height, currentMonth, currentDay, currentYear);
    myHealthProfile.getInformation();
    
    system("PAUSE");
    return 0;
    
    // Print information from the object - by calling getInformation() function
    

    
}

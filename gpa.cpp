
#include <iostream> //includes the I/O library
#include <fstream> //library that lets you read info from files
#include <string> //lets you create strings and access them
using namespace std;


int main() 
{
  float myGPA;
  cout << "Enter your GPA: ";
  cin >> myGPA;
  float gpaArray[5];
  ifstream gpaFile; //made a variable so you can open and read files
  gpaFile.open("gpa.txt"); //opens the gpa.txt file

  for (int i = 0; i < 5; i++)  //for loop to loop through the array. 
  {
     gpaFile >> gpaArray[i];  //insert numbers from gpa.txt file into gpaArray
  }


  if (myGPA > gpaArray[0] && myGPA > gpaArray[1] && myGPA > gpaArray[3] && myGPA > gpaArray[4])//comparing user GPA with array of GPA's
  {
    cout << "This student is doing well";
  }
  else if(myGPA < gpaArray[0] && myGPA < gpaArray[1] && myGPA < gpaArray[3] && myGPA < gpaArray[4])
  {
    cout << "This student could improve";
  }
  else 
  {
    cout << "This student is doing fine";
  }
  
      
  return 0;

} 

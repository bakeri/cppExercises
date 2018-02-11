#include <iostream>
#include "CountingCharacters.cpp"
#include "SayHello.cpp"
#include "PrintingQuotes.cpp"
using namespace std;

class Chapter1
{
   int score;
  public:    void Start() 

  	{
  		  int selection;
   system("clear");
   cout << "  Input Processing and Output" << endl;

   cout << "_______________________________________" << endl;
   cout << endl;
   cout << "1) Saying Hello" << endl;
   cout << "2) Counting the Number of Characters" << endl;
   cout << "3) Printing Quotes" << endl;
   cout << "4) Mad Lib" << endl;
   cout << "5) Simple Math" << endl;
   cout << "7) Retirment Calculator" << endl;
    
   cout << endl;
   cout << "Please select which program to run..";
   cin >>selection;

   switch(selection)
   
   {
      case 1:
      {
         SayHello hello;
         hello.Start();
         break;

      }
      case 2:
      {
         CountingCharacters countingCharacters;
         countingCharacters.Start();
         break;

      }
      case 3:
      {
         PrintingQuotes PQuotes;
         PQuotes.Start();
         break;

      }
    case 6 :
      {
         MathTest mt;
         mt.Start();
         break;
      }
   }
  	}
};
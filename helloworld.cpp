#include <iostream>
#include <cstdlib> 
#include "mathtest.cpp"
#include "Chapter1.cpp"

using namespace std;
 
int main() {

   int selection;
   system("clear");
   cout << "  Menu" << endl;

   cout << "___________________" << endl;
   cout << endl;
   cout << "1) Input Processing and Output" << endl;
   cout << "2) " << endl;
   cout << "3)" << endl; 
   cout << "4) "<< endl;
   cout << "5) " << endl;
   cout << "6) Maths test" << endl;
   cout << endl;
   cout << "Please select an opton by typing the number...";
   cin >>selection;
   cout<<endl;
   //cout<<"you selected " <<selection<<endl;

   switch(selection)
   
   {
      case 1:
      {
         Chapter1 cp1;
         cp1.Start();
         break;

      }
   	case 6 :
      {
         MathTest mt;
         mt.Start();
         break;
      }
   }
   //cout <<"You skipped the if statement" <<endl;
   return 0;
}
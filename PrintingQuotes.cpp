#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

class PrintingQuotes
{  

public:
    void Start()

    {


        string input;



        string quote;
        string author;
        system("clear");
        cout << "  Printing Quotes" << endl;
        cout << "_______________________________________" << endl;
        cout << endl;
        cout<<"What is the Quote?  ";
       
       std::cin.ignore(INT_MAX);
 std::cin.clear();
        getline(cin,quote,'\n');

       
        cout<<"Who said it?  ";
        getline(cin,author,'\n');
      
  
        cout<<endl;

        cout<< author << "says, " << "\""<< quote <<  "\"";

        cout<<endl;


    }

};

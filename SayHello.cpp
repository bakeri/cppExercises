#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class SayHello
{

   public:    void Start() 

  	{

 	  
  	  string name;
  	  string upperName;
  	  

  	  string statement;
  	  system("clear");
      cout << "  Input Processing and Output" << endl;
      cout << "_______________________________________" << endl;
      cout << endl;
      cout<<"What is your name?  ";
   
      cin>>name;
      //upperName.assign(name);
      upperName=name;

	  transform(upperName.begin(), upperName.end(), upperName.begin(), ::toupper);
      cout<<endl;
     

      if(upperName=="IAN") statement="Hows it going";
      if(upperName=="ELAINE")statement="Why are you using this computer?";
 

      cout<<"Hello, " + name + ", " + statement;

      cout<<endl;


  	}

};

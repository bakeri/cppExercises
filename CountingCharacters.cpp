#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class CountingCharacters
{

public:
    void Start()

    {


        string input;



        string statement;
        system("clear");
        cout << "  Counting the Number of Charaters" << endl;
        cout << "_______________________________________" << endl;
        cout << endl;
        cout<<"What is the input?  ";

        cin>>input;
        //upperName.assign(name);


        cout<<endl;


        cout<< input;
        cout<< " contains " << input.length() << " characters";
        cout<<endl;

    }

};

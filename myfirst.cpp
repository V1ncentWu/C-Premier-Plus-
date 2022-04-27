//myfirst.cpp -- displays a message

#include<iostream>                                      //a preprocessor directive

int main()
{                                                       //function header
    using namespace std;                                //make definitions visible, but it's a lazy approach and makes all names availible
    //using std::cout;
    //using std::cin;
    //using std::endl; 
    cout << "Come up and C++ me some time.";            //message
    cout << endl;                                       //start a new line
    cout << "You won't regret it!" << endl;             //more output

    cin.get();                                          //keep the window open
    
    return 0;                                           //terminate main()
}
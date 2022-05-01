//limits.cpp -- some integer limits
#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int n_int = INT_MAX;        //initialize n_int to max int value
    short n_short = SHRT_MAX;   //symbols defined in climits file
    long n_long = LONG_MAX;
    long long n_llong = LLONG_MAX;

    //sizeof operator yields size of type or of variable
    cout << "int is " << sizeof(int) << " bytes." << endl
         << "short is " << sizeof n_short << " bytes." << endl  //sizeof expression也可
         << "long is " << sizeof n_long << " bytes." << endl
         << "long long is " << sizeof n_llong << " bytes." << endl;

    cout << "Maximum values:" << endl
         << "int: " << n_int << endl
         << "short: " << n_short << endl
         << "long: " << n_long << endl
         << "long long: " << n_llong << endl << endl;

    cout << "Minimum int value = " << INT_MIN << endl;
    cout << "Bits per byte = " << CHAR_BIT << endl;

    return 0;
}
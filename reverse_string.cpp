#include <iostream>
#include <string>

using namespace std;

string reverseString( string str){
    int start = 0, end = str.length() - 1;
    for (start; start < end; start++, end--)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
    }
    return str;
}

int main()
{
    string str = "Hello, World!";
    // Output the reversed string
    cout << "Reversed string: \n" << reverseString(str)<<endl;


    return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Hello HUY!" << endl;
    string username;
    string password;
    cout << "Enter your username: \n";
    getline(cin,username,'\n');
    cout << "Enter your password: \n";
    getline(cin,password,'\n');
    if((username=="Huy" && password=="1996") || (username=="Tham" && password=="1990") || (username=="Tien" && password=="1989")){
        cout << "Access allowed";
    }
    else
    {
        cout << "Bad username or password. Denied access!";
    }
    return 0;
}

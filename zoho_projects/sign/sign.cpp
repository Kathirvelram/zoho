#include<iostream>
using namespace std;
#include<fstream>
int main()
{
    // filestream variable file
    ofstream file;
    string username,password;
    file.open("sign.txt");
    int i = 0;
    while (i<5)
    {
        cout << "enter username:" << endl;

        cin >> username;
        cout << "enter password:" << endl;
        cin >> password;
        file << username+"_";
        file << password+' ';

        cout << "success"<<endl;
        i++;
    }

    return 0;
}
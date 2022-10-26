#include<iostream>
using namespace std;
#include<fstream>

int main()
{
    // filestream variable file
    fstream file;
    string word, t, q, filename;

    // filename of the file
    filename = "password.txt";

    // opening file
    file.open(filename.c_str());
    string user ;
    string pass;
    string temp;
    int tempi;
    // extracting words from the file
    while (file >> word)
    {
        // displaying content
        //cout << word << endl;
        temp = word;
        user = " ";
        pass = " ";
        for (int i = 0; i < temp.length(); i++)
        {

            if (temp[i] != '_')
            {
                user = user + temp[i];
            }
            else if (temp[i] == '_')
            {
                tempi = i+1;
                while (tempi < temp.length())
                {
                    pass = pass + temp[tempi];
                    tempi++;
                }
                break;
            }
        }
        cout << user << endl;
        cout << pass << endl;
    }

    return 0;
}
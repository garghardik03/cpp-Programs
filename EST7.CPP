#include <fstream>
#include <string>
#include <cctype>
using namespace std;

int vowelwords()
{
    ifstream ifs("FIRST.TXT");
    ofstream ofs("SECOND.TXT");
    string word;

    while (ifs)
    {
        ifs >> word;
        intch = tolower(word[0]);
        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u')
        {
            ofs << word << ' ';
        }
    }
}

intmain()
{
    vowelwords();
}
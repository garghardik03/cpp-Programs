#include <iostream>
#include <fstream>
#include <string>
using namespace std;
intmain()
{
   fstream file;
   char name[100];
   cout << "Enter the name of the file: ";
   cin >> name;
   file.open(name, ios::binary|ios::out);
   if (!file)
   {
      cout << "File not found";
      return 0;
   }
   cout << "File is created" << endl;
   file << "This is a test file" << endl;
   file << "This is made for exams" << endl;
   file << "The exams are called EST" << endl;
   inta[] = {10, 23, 3, 7, 9, 11, 25};
   file.write((char *)&a, sizeof(a));
   file.close();
   file.open(name, ios::binary | ios::in);
   if (!file)
   {
      cout << "File not found";
      return 0;
   }
   cout << "File is created" << endl;
   file.read((char *)&a, sizeof(a));
   for (inti = 0; i < sizeof(a); i++)
      cout << a[i] << " ";
   file.close();
   return 0;
}
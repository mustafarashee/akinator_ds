#include<iostream>
#include<fstream>
#include <string>
using namespace std;
class File
{
  public:
  string file (int line)
  {
    string temp;
    int i=1;
    ifstream quest("questions.txt");
    while(getline(quest , temp))
    {
     if(i==line)
      {
        
        return temp;
      
      }
     i++;
    }
  }

};
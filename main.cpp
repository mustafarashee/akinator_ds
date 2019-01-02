#include <iostream>
using namespace std;
#include "game.h"

main()
{
   
  cout<<"       ~AKINATOR THE GENIE~       "<<endl;
  cout<<"THINK ABOUT ANY TEACHER AND I WILL TRY TO GUESS IT"<<endl;
 string start="yes";
system("pause");
  
  while(start=="yes"||start=="YES"||start=="Yes")
  {
game a;
a.start();
cout<<endl<<"do you want to play again"<<endl;
cin>>start;
  }
system("pasue");
}
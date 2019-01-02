#include <iostream>
using namespace std;
#include <string>
#include "tree.h"

class game{
public:
File fptr;
string ans;
  void start()
  {
    do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
    cout<<"is your teacher permanent?"<<endl;
    cin>>ans;
    }
    while (ans!="yes"&&ans!="YES"&&ans!="Yes"&&ans!="no"&&ans!="NO"&&ans!="No");
    if(ans=="yes"||ans=="YES"||ans=="Yes")
    {

    tree *start=NULL;
    tree a;
    a.insert(50,&start,fptr.file(1));
    a.insert(150,&start,fptr.file(2));
   a.insert(40,&start,fptr.file(3));
   a.insert(25,&start,fptr.file(4));
   a.insert(45,&start,fptr.file(5));
   a.insert(100,&start,fptr.file(6));
   a.insert(160,&start,fptr.file(7));
   a.insert(20,&start,fptr.file(8));
   a.insert(35,&start,fptr.file(9));
a.insert(125,&start,fptr.file(10));
   a.insert(155,&start,fptr.file(11));
  a.insert(165,&start,fptr.file(12));
  a.insert(15,&start,fptr.file(13));
  a.insert(22,&start,fptr.file(14));
  a.insert(30,&start,fptr.file(15));
  a.insert(36,&start,fptr.file(16));
  a.insert(80,&start,fptr.file(17));
  a.insert(105,&start,fptr.file(18));
  a.insert(126,&start,fptr.file(19));
  a.insert(10,&start,fptr.file(20));
  a.insert(16,&start,fptr.file(21));
  a.insert(27,&start,fptr.file(22));
  a.insert(31,&start,fptr.file(23));
  a.insert(60,&start,fptr.file(24));
  a.insert(90,&start,fptr.file(25));
  a.insert(104,&start,fptr.file(26));
a.insert(120,&start,fptr.file(27));
a.insert(26,&start,fptr.file(28));
a.insert(28,&start,fptr.file(29));
a.insert(55,&start,fptr.file(30));
a.insert(56,&start,fptr.file(75));
a.insert(51,&start,fptr.file(76));
a.insert(65,&start,fptr.file(31));
a.insert(85,&start,fptr.file(32));
a.insert(95,&start,fptr.file(33));
a.insert(118,&start,fptr.file(34));
a.insert(121,&start,fptr.file(35));
a.insert(116,&start,fptr.file(36));
a.insert(119,&start,fptr.file(37));
a.insert(114,&start,fptr.file(38));
a.insert(117,&start,fptr.file(39));
a.insert(115,&start,fptr.file(40));
a.insert(112,&start,fptr.file(41));
a.insert(113,&start,fptr.file(42));
a.insert(110,&start,fptr.file(43));
a.insert(111,&start,fptr.file(44));
 a.insert(109,&start,fptr.file(45));

   //a.print(start);
   a.play(start);
   //a.edit(start);
    }
    else{
tree *start=NULL;
    tree a;
a.insert(50,&start,fptr.file(46));
a.insert(40,&start,fptr.file(47));
a.insert(150,&start,fptr.file(48));
a.insert(30,&start,fptr.file(49));
a.insert(45,&start,fptr.file(50));
a.insert(100,&start,fptr.file(51));
a.insert(160,&start,fptr.file(52));
a.insert(20,&start,fptr.file(53));
a.insert(35,&start,fptr.file(54));
a.insert(43,&start,fptr.file(55));
a.insert(46,&start,fptr.file(56));
a.insert(90,&start,fptr.file(57));     
a.insert(105,&start,fptr.file(58));
a.insert(31,&start,fptr.file(59));
a.insert(36,&start,fptr.file(60));
a.insert(41,&start,fptr.file(61));
a.insert(44,&start,fptr.file(62));
a.insert(80,&start,fptr.file(63));
a.insert(95,&start,fptr.file(64)); 
a.insert(70,&start,fptr.file(65));
a.insert(85,&start,fptr.file(66)); 
a.insert(91,&start,fptr.file(67));
a.insert(96,&start,fptr.file(68));   
a.insert(60,&start,fptr.file(69));
a.insert(75,&start,fptr.file(70));
 a.insert(55,&start,fptr.file(71)); 
 a.insert(65,&start,fptr.file(72));
 a.insert(51,&start,fptr.file(73));
 a.insert(56,&start,fptr.file(74));     
     
a.play(start);

    
     
  
     
    
     
    
     
     
     
 
     



    }


  }
};

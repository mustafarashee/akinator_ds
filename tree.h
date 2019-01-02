#include <iostream>
using namespace std;
#include <string>
#include "file.h"
#include "queue.h"
 quew *front=NULL;
  quew *rear=NULL;

  quew A;

class tree{
public:
float key;
string ques;
tree *left;
tree *right;
string ans;
File fptr;



  void insert(float data,tree **start,string quess)
{
  
  tree *ptr=new tree;
  ptr->ques=quess;
  ptr->key=data;
  ptr->left=NULL;
  ptr->right=NULL;
  ptr->ans=" ";

  if(*start==NULL)
  {
    *start=ptr;
    return;
  }
  else{
    tree *curr=*start;
      while(curr!=NULL)
      {
        if(curr->key > data)
        {
          
          if(curr->left==NULL)
          {
            curr->left=ptr;
            break;
          }
          curr=curr->left;
        }
        else
        {
          
          if(curr->right==NULL)
          {
            curr->right=ptr;
            break;
          }
          curr=curr->right;
        }
  }}}
  int height(tree *ptr,tree *start)
  {
    int i=0;
    tree *curr=start;
    while (curr->key!=ptr->key)
    {
      i++;
      if(curr->key<ptr->key)
      {
        curr=curr->right;
      }
      else{
        curr=curr->left;
      }
    }
    return i;

  }
  void difficulty(tree *ptr,tree *start)
  {
    int h;
    h=height(ptr,start);
    if(h<4)
    {
      cout<<endl<<"THAT WAS EASY";
    }
    else if(h>=4&&h<=7)
    {
cout<<endl<<"THAT WAS CHALLENGING";
    }
    else{

      cout<<endl<<"YOU MADE ME THINK SO HARD";
    }

  }
  void bio(void)
  {
    while(A.top(front)!=1)
    {
      string temp;
       temp=A.pop(&front,&rear);
      string target="is ";
    
  int found =-1;
  do{
    found =temp.find(target,found+1);
    if(found!=-1)
    {
      temp=temp.substr(0,found)+temp.substr(found+target.length());
    }

  }while(found!=-1);
  target="does ";
    
  found =-1;
  do{
    found =temp.find(target,found+1);
    if(found!=-1)
    {
      temp=temp.substr(0,found)+temp.substr(found+target.length());
    }

  }while(found!=-1);
   target="?";
    
  found =-1;
  do{
    found =temp.find(target,found+1);
    if(found!=-1)
    {
      temp=temp.substr(0,found)+temp.substr(found+target.length());
    }

  }while(found!=-1);
  cout<<temp<<" and "<<endl;

    }
  }
void play(tree *start)
{
tree *curr=start;

while(curr->left!=NULL && curr->right!=NULL)
{
  do{system("cls");
  cout<<endl<<"           ***************THE AKINATOR***************"<<endl<<endl;
  cout<<curr->ques<<endl;
  cin>>curr->ans;}
  while (curr->ans!="yes"&&curr->ans!="YES"&&curr->ans!="Yes"&&curr->ans!="no"&&curr->ans!="NO"&&curr->ans!="No");
if(curr->ans=="yes"||curr->ans=="YES"||curr->ans=="Yes")
{
A.insert(curr->ques,&front,&rear);
  curr=curr->right;
}
else{
  curr=curr->left;
}
}
bio();
cout<<" "<<curr->ques<<endl;
difficulty(curr,start);

  return;
  

}



  
  

  
};
#include <iostream>
using namespace std;
#include <string>
class quew{
  public:
 string data;
  quew *next;

  void insert(string data,quew **front,quew **rear)
  {
    quew *ptr=new quew;
    ptr->data=data;
    ptr->next=NULL;

    if(*front==NULL)
    {
      *front=ptr;
      *rear=ptr;
    }
    else{
      (*rear)->next=ptr;
      *rear=ptr;
    }
  }
  string pop(quew **front,quew **rear)
  {
  
    string a;
    a=(*front)->data;
    *front=(*front)->next;
    return a;
  }
  bool top(quew *front)
  {
    if(front==NULL)
    return 1;
    else
    return 0;
  }



};
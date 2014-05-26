#include <iostream>
#include "portfolio.h"
#include "helper_objs.h"

using namespace std;


int main(int argc, char* argv[])
{

  try{
    // portfolio myaccount;
    date adate(5,20,2014);
    cout<<"Hello world...nothing here...!"<<endl;
    cout<<"date = ";adate.print();
    
    //date adate1(5,32,2014);
    //cout<<"date = ";adate.print();
   
    date adate2(13,31,1910);
    cout<<"date = ";adate.print();
   
    } catch(invalid_argument& e){
      cout<<"Exception Catch: "<<e.what()<<endl;
    }
  return 0; 
}

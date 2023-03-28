/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <iostream>
using namespace std;
int shampoo()
{
    cout<<"Shampoo 1 bottle = rs 220";
    int quantity;
    cout<<"\n Enter the quantity : ";
    cin>>quantity;
    cout<<"The total cost is :"<<quantity*220;
    return quantity*220;
}
int soap()
{
    cout<<"Soap = rs 35";
    int quantity ;
    cout<<"\n Enter the quantity : "; 
    cin>>quantity;
    cout<<"The total cost is :"<<quantity*35;
    return quantity*35;
}
int washing_powerder()
{
    cout<<"Washing_powerder  1kg = rs 175";
    int quantity ;
    cout<<"\n Enter the quantity : ";
    cin>>quantity;
    cout<<"The total cost is : "<<quantity*175;
    return quantity*175;
}
int chilli_powerder()
{
    cout<<"Chilli_powerder  1kg = rs 40";
    int quantity ;
    cout<<"\n Enter the quantity : "; 
    cin>>quantity;
    cout<<"The total cost is : "<<quantity*40;
    return quantity*40;
}
int oil()
{
    cout<<"Oil 1litre = rs 167";
    int quantity ;
    cout<<"\n Enter the quantity : ";
    cin>>quantity;
    cout<<"The total cost is : "<<quantity*167;
    return quantity*167;
}
int sugar()
{
    cout<<"Sugar 1kg = rs 25";
    int quantity ;
    cout<<"\n Enter the quantity : ";
    cin>>quantity;
    cout<<"The total cost is : "<<quantity*25;
    return quantity*25;
}
int rice()
{
    cout<<"Rice 1kg = rs 54";
    int quantity ;
    cout<<"\n Enter the quantity : ";
    cin>>quantity;
    cout<<"The total cost is : "<<quantity*54;
    return quantity*54;
}
int makeup_items()
{
    cout<<" Dalsar Makeup_items = rs 540";
    int quantity ;
    cout<<"\n Enter the quantity : ";
    cin>>quantity;
    cout<<"The total cost is : "<<quantity*540;
    return quantity*540;
}
int salt()
{
    cout<<"Salt 1kg = rs 15";
    int quantity ;
    cout<<"\n Enter the quantity : ";
    cin>>quantity;
    cout<<"The total cost is : "<<quantity*15;
    return quantity*15;
}

int egg()
{
    cout<<"Egg = rs 5";
    int quantity ;
    cout<<"\n Enter the quantity :  ";
    cin>>quantity;
    cout<<"The total cost is : "<<quantity*5;
    return quantity*5;
}

int main()
{
    int option; 
    int baseamount, totalamount,a,b,c,d,e,f,g,h,i,j;
    char choice;
    cout<<"\t\t ************ DHARSHINI SUPERMARKET ****************";
    start:
    cout<<"\n1.Shampoo \n2.Soap \n3.Washing_powerder \n4.Chilli_powerder \n5.Oil \n6.Sugar \n7.Rice \n8.Makeup_items \n9.Salt \n10.Egg";
     cout<<"\n Enter your choice:";
     cin>>option;
      switch(option)
      {
          case 1:
          a = shampoo();
          break;
          case 2:
          b = soap();
          break;
          case 3:
          c = washing_powerder();
          break;
          case 4:
          d = chilli_powerder();
          break;
          case 5:
          e = oil();
          break;
          case 6:
          f = sugar();
          break;
          case 7:
          g = rice();
          break;
          case 8:
          h = makeup_items();
          break;
          case 9:
          i = salt();
          break;
          case 10:
          j = egg();
          break;
          default:
            exit(0);
      }
      totalamount = a+b+c+d+e+f+g+h+i+j;
      cout<<"\n The total products cost is : rs "<<totalamount;
      cout<<"\t\t***************THANK YOU***************";
}




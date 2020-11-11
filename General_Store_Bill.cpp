#include<iostream>
#include<stdlib.h>
#include<iomanip>
using namespace std;
static float total1;
static float total2;
static float total3;
static float total;
static float total_gst;
static int count;
class Getitems
{
    public:
        string item_name;
        int item_price;
        float gst_per_item;
        float price_with_gst;
        void display()
        {
          cout<<setiosflags(ios::internal)<<setw(15)<<item_name
              <<setiosflags(ios::internal)<<setw(17)<<item_price<<setiosflags(ios::internal)<<setw(15)<<gst_per_item<<"%"<<setiosflags(ios::right)<<setprecision(4)<<setw(13)<<price_with_gst<<endl<<endl;
        }
};
Getitems g[30];
class Stationary
{
protected:
    int c;
public:
    void show_stationary_items()
    {
        cout<<"1) Book      -  Rs 30"<<endl;
        cout<<"2) Pencil    -  Rs  5"<<endl;
        cout<<"3) Eraser    -  Rs  3"<<endl;
        cout<<"4) Sharpener -  Rs  4"<<endl;
        cout<<endl;
    }

    void purchase_item()
    {
        cout<<"Enter the stationary item number you want to purchase:";
        cin>>c;
        switch(c)
        {
        case 1:
            total1=total1+30;
            g[count].item_name="Book";
            g[count].item_price=30;
            g[count].gst_per_item=12;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 2:
            total1=total1+5;
            g[count].item_name="Pencil";
            g[count].item_price=5;
            g[count].gst_per_item=12;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 3:
            total1=total1+3;
            g[count].item_name="Eraser";
            g[count].item_price=3;
            g[count].gst_per_item=12;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 4:
            total1=total1+4;
            g[count].item_name="Sharpener";
            g[count].item_price=4;
            g[count].gst_per_item=12;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }
};



class Grocery
{
protected:
    int ga;
public:
    void show_grocery_items()
    {
        cout<<"1) Biscuits      -  Rs  15"<<endl;
        cout<<"2) Shampoo       -  Rs  69"<<endl;
        cout<<"3) Maggie        -  Rs  18"<<endl;
        cout<<"4) Perfume       -  Rs 105"<<endl;
        cout<<endl;
    }

    void purchase_item()
    {
        cout<<"Enter the grocery item number you want to purchase:";
        cin>>ga;
        switch(ga)
        {
        case 1:
            total2=total2+15;
            g[count].item_name="Biscuits ";
            g[count].item_price=15;
            g[count].gst_per_item=18;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 2:
            total2=total2+69;
            g[count].item_name="Shampoo";
            g[count].item_price=69;
            g[count].gst_per_item=18;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 3:
            total2=total2+18;
            g[count].item_name="Maggie";
            g[count].item_price=18;
            g[count].gst_per_item=18;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 4:
            total2=total2+105;
            g[count].item_name="Perfume";
            g[count].item_price=105;
            g[count].gst_per_item=18;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }
};

class Dairy_items
{
protected:
    int e;
public:
    void show_dairy_items()
    {
        cout<<"1) Milk          -  Rs  24"<<endl;
        cout<<"2) Buttermilk    -  Rs  12"<<endl;
        cout<<"3) Cheese cube   -  Rs  20"<<endl;
        cout<<"4) Ice-cream     -  Rs 150"<<endl;
        cout<<endl;
    }

    void purchase_item()
    {
        cout<<"Enter the dairy item number you want to purchase:";
        cin>>e;
        switch(e)
        {
        case 1:
            total3=total3+24;
            g[count].item_name="Milk";
            g[count].item_price=24;
            g[count].gst_per_item=5;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 2:
            total3=total3+12;
            g[count].item_name="Buttermilk";
            g[count].item_price=12;
            g[count].gst_per_item=5;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 3:
            total3=total3+20;
            g[count].item_name="Cheese cube";
            g[count].item_price=20;
            g[count].gst_per_item=5;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        case 4:
            total3=total3+150;
            g[count].item_name="Ice-cream ";
            g[count].item_price=15;
            g[count].gst_per_item=5;
            g[count].price_with_gst=(g[count].item_price*g[count].gst_per_item)/100 + g[count].item_price;
            count++;
            break;
        default:
            cout<<"Invalid input"<<endl;
            break;
        }
    }
};


class Store: public Stationary,public Grocery,public Dairy_items
{
    int category_of_items ;
public:
        Stationary s1;
        Grocery g1;
        Dairy_items d1;
   /* void total_items()
    {
        cout<<"Enter total number of items :";
        cin>>no_of_items;
        cout<<endl;
    }*/
    void show_items()
    {
        /*Stationary s1;
        Grocery g1;
        Dairy_items d1;*/
       /* cout<<"1. Stationary are :"<<endl;
        cout<<endl;
        s1.show_stationary_items();
        cout<<"2. Grocery are :"<<endl;
        cout<<endl;
        g1.show_grocery_items();
        cout<<"3. Dairy_items are :"<<endl;
        cout<<endl;
        d1.show_dairy_items();*/
        cout<<endl;
        cout<<endl;
        cout<<"1. Stationary        "<<"     "<<"2. Grocery              "<<"     "<<"3. Dairy items"<<endl;
        cout<<endl;
        cout<<"1) Book      -  Rs 30"<<"     "<<"1) Biscuits  -  Rs  15"<<"     "<<"1) Milk          -  Rs  24"<<endl;
        cout<<"2) Pencil    -  Rs  5"<<"     "<<"2) Shampoo   -  Rs  69"<<"     "<<"2) Buttermilk    -  Rs  12"<<endl;
        cout<<"3) Eraser    -  Rs  3"<<"     "<<"3) Maggie    -  Rs  18"<<"     "<<"3) Cheese cube   -  Rs  20"<<endl;
        cout<<"4) Sharpener -  Rs  4"<<"     "<<"4) Perfume   -  Rs 105"<<"     "<<"4) Ice-cream     -  Rs 150"<<endl;








    }
    void select_item()
    {
        for(int i=0;i<30;i++)
        {
            cout<<"Enter the your choice(1,2,3) you want to select item from or enter (4) to exit:";
            cin>>category_of_items;
            switch(category_of_items)
            {
                case 1:
                {
                        s1.show_stationary_items();
                        int st;//st is the number of stationary item user wants
                        cout<<"Enter numbers of Stationary items you want to buy :";
                        cin>>st;
                        cout<<endl;
                        int i;
                        i=st;
                        Stationary stat[st];//creating array of objects of stationary items and array named as stat
                        for(st=0;st<i;st++)
                        {
                            stat[st].purchase_item();
                        }
                    break;
                }
                case 2:
                {
                    int gr;//Total number of Grocery items to be item
                    g1.show_grocery_items();
                    cout<<"Enter numbers of Grocery items you want to buy :";
                    cin>>gr;
                    cout<<endl;
                    int i;
                    i=gr;
                    Grocery Groc[gr];
                    for(gr=0;gr<i;gr++)
                    {
                        Groc[gr].purchase_item();
                    }
                    break;
                }
                case 3:
                {
                    int da;//Total number of Dairy items to be item
                    d1.show_dairy_items();
                    cout<<"Enter numbers of Dairy items you want to buy :";
                    cin>>da;
                    cout<<endl;
                    int i;
                    i=da;
                    Dairy_items dair[da];
                    for(da=0;da<i;da++)
                    {
                        dair[da].purchase_item();
                    }
                    break;
                }
                case 4:
                    {
                        for(int j=0;j<80;j++)
                        //for(int j=0;j<120;j++)
                        {
                            cout<<"*";
                        }
                        cout<<endl;
                         cout<<"                                     "<<"PAYMENT BILL"<<endl;
                         for(int j=0;j<80;j++)
                         //for(int j=0;j<120;j++)
                         {
                            cout<<"*";
                         }

                        cout<<endl;
                        cout<<"\tItem name"<<setw(17)<<"Price"<<setw(16)<<"GST/Item"<<setw(15)<<"GST Price"<<endl;
                        cout<<endl;
                         for(i=0;i<count;i++)
                           {
                               g[i].display();
                               //cout<<endl;
                           }
                            total=total1+total2+total;
                            //cout<<"Total is "<<setw(35)<<total<<endl;
                            total1=(total1*0.12)+total1;
                            total2=(total2*0.18)+total2;
                            total3=(total3*0.5)+total3;
                            total_gst=total1+total2+total3;
                           cout<<"Total price with GST:"<<setw(40)<<total_gst<<endl;
                           cout<<endl;
                           cout<<"Total number of items:"<<count<<endl;
                           for(int j=0;j<80;j++)
                           //for(int j=0;j<120;j++)
                           {
                               cout<<"*";
                           }
                            cout<<endl;
                           exit(0);
                    }
                default :
                    {
                        cout<<"invalid input"<<endl;
                        break;
                    }
                }
            }
        }
};
int main()
{

   cout<<"                               "<<"WELCOME TO GENERAL STORE"<<endl;
   for(int j=0;j<80;j++)
   //for(int j=0;j<120;j++)
   {
       cout<<"*";
   }
   cout<<endl;
    Store s1;
    s1.show_items();
    cout<<endl;
    s1.select_item();
    //for(int j=0;j<80;j++)
    for(int j=0;j<120;j++)
    {
        cout<<"*";
    }
    cout<<endl;
     cout<<"                                  "<<"PAYMENT BILL"<<endl;
     for(int j=0;j<80;j++)
     //for(int j=0;j<120;j++)
     {
        cout<<"*";
     }

    cout<<endl;
    cout<<"\tItem name"<<setw(17)<<"Price"<<setw(16)<<"GST/Item"<<setw(15)<<"GST Price"<<endl;
    cout<<endl;
     for(int i=0;i<count;i++)
       {
           g[i].display();
           cout<<endl;
       }
        total=total1+total2+total;
       // cout<<"Total is "<<setw(35)<<total<<endl;
        total1=(total1*0.12)+total1;
        total2=(total2*0.18)+total2;
        total3=(total3*0.5)+total3;
        total_gst=total1+total2+total3;
       cout<<"Total price with GST:"<<setw(40)<<total_gst<<endl;
       cout<<endl;
        cout<<"Total number of items :"<<count<<endl;
       for(int j=0;j<80;j++)
       //for(int j=0;j<120;j++)
       {
           cout<<"*";
       }
    cout<<endl;
     return 0;
}

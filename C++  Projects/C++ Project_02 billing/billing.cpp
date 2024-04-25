// Billing of food items 

#include<iostream>
using namespace std;



int main(){
    int returnTotalBill(void);
    int totalBill = returnTotalBill();
    cout<<"Your total Bill Amount is : "<<totalBill<<endl;
    cout<<"Thank you for your order";
}

int returnTotalBill(){
    char c;
    char item;
    char vegItem;
    char nonvegItem;
    int billAmount=0;
    char selectAgain;
    cout<<"------------------Welcone to online food order----------------------"<<endl;
    cout<<"----------------Please follow below instructions--------------------"<<endl;
    cout<<"step 1 : Please press s to start your order"<<endl;
    cout<<"step 2 : You can order both veg and nonveg item"<<endl;
    cout<<"step 3 : Please press a to select veg item"<<endl;
    cout<<"step 2 : Please press b to select nonveg item"<<endl;
    cout<<"step 5 : You will get your final bill after your order"<<endl;
    start:
    cin>>c;
    if (c=='s' || c=='S'){
        items:
        cout<<"Please select your choice"<<endl;
        cout<<"(a) Veg Items                        (b) Non Veg Items";
        cin>>item;
        if(item=='a' || item=='A'){
            vegItemList:
            cout<<"Please select 1,2,3,4,5 as per your chice"<<endl;
            cout<<"(1) Panner : Price : Rs-250"<<endl;
            cout<<"(2) Burger : Price : Rs-50"<<endl;
            cout<<"(3) Pizza : Price : Rs-100"<<endl;
            cout<<"(4) Chowmin : Price : Rs-150"<<endl;
            cout<<"(5) Veg Rolll : Price : Rs-100"<<endl;

            cin>>vegItem;
            if(vegItem=='1'){
                billAmount += 250;
            }
            else if(vegItem=='2'){
                billAmount += 50;
            }
            else if(vegItem=='3'){
                billAmount += 100;
            }
            else if(vegItem=='4'){
                billAmount += 150;
            }
            else if(vegItem=='5'){
                billAmount += 100;
            }
            else{
                cout<<"You entered wrong value , please try again!"<<endl;
                goto vegItemList;
            }
            cout<<"Do you want to add more items , y or n"<<endl;
            cin>>selectAgain;
            if (selectAgain=='y' || selectAgain=='Y'){
                goto items;
            }
            else{
                return billAmount;
            }
        }
        else if (item=='b'  || item=='B'){
            nonvegItemList:
            cout<<"Please select 1,2,3,4,5 as per your chice"<<endl;
            cout<<"(1) Chicken : Price : Rs-350"<<endl;
            cout<<"(2) Burger : Price : Rs-100"<<endl;
            cout<<"(3) Pizza : Price : Rs-150"<<endl;
            cout<<"(4) Chowmin : Price : Rs-200"<<endl;
            cout<<"(5) Non Veg Rolll : Price : Rs-200"<<endl;

            cin>>nonvegItem;
            if(nonvegItem=='1'){
                billAmount += 350;
            }
            else if(nonvegItem=='2'){
                billAmount += 100;
            }
            else if(nonvegItem=='3'){
                billAmount += 150;
            }
            else if(nonvegItem=='4'){
                billAmount += 200;
            }
            else if(nonvegItem=='5'){
                billAmount += 200;
            }
            else{
                cout<<"You entered wrong value , please try again!"<<endl;
                goto nonvegItemList;
            }
            cout<<"Do you want to add more items , y or n"<<endl;
            cin>>selectAgain;
            if (selectAgain=='y' || selectAgain=='Y'){
                goto items;
            }
            else{
                return billAmount;
            }

        }
        else{
            cout<<"You have entered wrong value , please try again!";
            goto items;
        }

    }
    else{
        cout<<"You have enter wrong value ,please press s!"<<endl;
        goto start;
    }

    return billAmount;
}
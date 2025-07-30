#include<iostream>
using namespace std;

int main(){
    int returnTotalBill(void);
    int totalBill=returnTotalBill();
    cout<<"Your total Bill Amount Is: "<<totalBill;
    cout<<"Thank You For Your Order !"<<endl;
}
int returnTotalBill(){
    char c, items, vegitem, nonvegitem, selectAgain;
    int billAmount=0;
    start:
    cout<<"--------------------Welcome To Online Food odering System--------------------"<<endl;
    cout<<"--------------------Please Follow The Below Instruction----------------------"<<endl;
    cout<<endl;
    cout<<"Step 1 : Please Press S to Start Your Order."<<endl;
    cout<<"Step 2 : Please Press V For Veg Food."<<endl;
    cout<<"Step 3 : Please Press N for Non-Veg Food"<<endl;
    cout<<"Step 4 : You Will Get Your Bill After Your Order."<<endl;
    cout<<endl;
    cout<<"Enter Your Choice: ";cin>>c;
    if(c=='s'||c=='S'){
        items:
        cout<<"Please Select Food From Veg Or Non-Veg"<<endl;
        cout<<"(Y)Veg Food                              (N)Non-Veg Food"<<endl;
        cout<<endl;
        cout<<"Enter your Choice: "<<endl;
        cin>>items;
        if(items == 'Y'||items == 'y'){
            vegitemList:
            cout<<endl;
            cout<<"Please Select From 1, 2, 3, 4, 5 From The Menu."<<endl;
            cout<<"(1) Paneer Sandwich :   Rs 90"<<endl;
            cout<<"(2) BigSamsh Burger :   Rs 120"<<endl;
            cout<<"(3) Peprica Pizza :   Rs 190"<<endl;
            cout<<"(4) Tandori Soya Chaap with Rumali Rooti :   Rs 250"<<endl;
            cout<<"(5) Paneer Maggie :   Rs 70"<<endl;
            cout<<endl;
            cout<<"Enter your Choice: "<<endl;
            cin>>vegitem;
            if(vegitem == '1'){
                billAmount = billAmount + 90;
            }
            else if(vegitem == '2'){
                billAmount = billAmount + 120;
            }
            else if(vegitem == '3'){
                billAmount = billAmount + 190;
            }
            else if(vegitem == '4'){
                billAmount = billAmount + 250;
            }
            else if(vegitem == '5'){
                billAmount = billAmount + 70;
            }
            else{
                cout<<"Invalid Choice"<<endl;
                goto vegitemList;
            }
            cout<<"Do You Want To Add More Items. (Y) Or (N)"<<endl;
            cout<<endl;
            cout<<"Enter your Choice: "<<endl;
            cin>>selectAgain;
            if(selectAgain == 'Y'||selectAgain == 'y'){
                goto vegitemList;
            }
            else{
                return billAmount;
            }
        }
        else if(items == 'N'||items == 'n'){
            NonvegitemList:
            cout<<endl;
            cout<<"Please Select From 1, 2, 3, 4, 5 From The Menu."<<endl;
            cout<<"(1) Chicken Tikka Wrap :   Rs 190"<<endl;
            cout<<"(2) Butter Chicken Pasta :   Rs 280"<<endl;
            cout<<"(3) BBQ Chicken Pizza :   Rs 350"<<endl;
            cout<<"(4) Keema Pav :   Rs 150"<<endl;
            cout<<"(5) Chicken Club Sandwich :   Rs 170"<<endl;
            cout<<endl;
            cout<<"Enter your Choice: "<<endl;
            cin>>nonvegitem;
            if(nonvegitem == '1'){
                billAmount = billAmount + 190;
            }
            else if(nonvegitem == '2'){
                billAmount = billAmount + 280;
            }
            else if(nonvegitem == '3'){
                billAmount = billAmount + 350;
            }
            else if(nonvegitem == '4'){
                billAmount = billAmount + 150;
            }
            else if(nonvegitem == '5'){
                billAmount = billAmount + 170;
            }
            else{
                cout<<"Invalid Choice"<<endl;
                goto NonvegitemList;
            }
            cout<<"Do You Want To Add More Items. (Y) Or (N)"<<endl;
            cout<<endl;
            cout<<"Enter your Choice: "<<endl;
            cin>>selectAgain;
            if(selectAgain == 'Y'||selectAgain == 'y'){
                goto NonvegitemList;
            }
            else{
                return billAmount;
            }
        }
        else{
            cout<<"Invalid Input, Try Again."<<endl;
            goto items;
        }
    }
    else{
        cout<<"Invalid Input, Try Again."<<endl;
        goto start;
    }
    return billAmount;
}
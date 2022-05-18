#include <iostream>
#include <cstring>
#define SIZE 2

using namespace std;

// Cart class create

class Cart {

private:
  int cartID;
  char cartName[20];
  int itemID;
  char itemName[20];
  int quantity;
  int dateAdded;

public:
  Cart();
  Cart(int cID,char cName[],int itID,char itName[],int qunty,int dateAd);
  void addItem();
  void viewCartDetails();
  void updateQuantity();
  void deleteCart();
  void checkOut();
  ~Cart();
};

// DelivaryInfo class creation

class DelivaryInfo {

private:
  int delivaryID;
  int delivaryFee;
  char time[15];
  char Location[25];

public:
  DelivaryInfo();
  DelivaryInfo(int dID,int dFee,char t[15],char place[25]);
  void displayDelivaryTime();
  void updateDelivaryTime();
  void cancelDelivary();
  ~DelivaryInfo();
};


// History class creation

class History{
private:
char orderDetails[40];
char paymentDetails[40];

public:
History(char oDetails[],char ptDetails[]);
void getOrderDetails();
void getPaymentDetails();

};



int main() {
  /*Cart(int cID,char cName[],int itID,char itName[],int qunty,int dateAd);

  Order(int dID,int dFee,char t[],char place[]);

Customer(char nic[],char nam[],char add[],char mail[],int contN);


*/
  Cart *cID1 = new Cart(01,"cart001",001,"pot",2,20);
  Cart *cID2 = new Cart(01,"cart002",001,"brush",2,20);
  Customer *cus = new Customer(cID1,cID2);
  cus -> displayCart();
  delete cus;

  printf("\n");

  Order *o1 = new   Order(01,1000,"13.00","colombo");
  delete o1;

  History *h = new History("this is order details","this is payment detauls");
  
    printf("\n");


  Customer *cus1 = new Customer("12346986v","pasindu","colombo","pw@gmail.com",1030436);
  cus1->getCustomerDetails(h);



  return 0;
  
}



  //Cart class function declaration
  Cart::Cart(){}

  Cart::Cart(int cID,char cName[],int itID,char itName[],int qunty,int dateAd){
    cartID = cID;
    strcpy(cartName,cName);
    itemID = itID;
    strcpy(itemName,itName);
    quantity=qunty;
    dateAdded= dateAd;
    
  }

  void Cart::addItem(){}

  void Cart::viewCartDetails(){
    
    cout<<endl;
    cout<<"CartID : "<<cartID<<endl;
    cout<<"cartName : "<< cartName<<endl;
    cout<<"itemID : "<< itemID<<endl;
    cout<<"itemName : "<< itemName<<endl;
    cout<<"quantity : "<<quantity <<endl;
    cout<<"dateAdded : "<<dateAdded <<endl;
    cout<<endl;
  }

  void Cart::updateQuantity(){}

  void Cart::deleteCart(){}

  void Cart::checkOut(){}

  Cart::~Cart(){
    cout<<"Cart is deleted"<<endl;
  }




  //DelivaryInfo class function declaration
  DelivaryInfo::DelivaryInfo(){}
  DelivaryInfo::DelivaryInfo(int dID,int dFee,char t[15],char place[25]){

    delivaryID=dID;
    delivaryFee=dFee;
    strcpy(time,t);
    strcpy(Location,place);
    
  }
  void DelivaryInfo::displayDelivaryTime(){

     cout<< "delivaryID : " <<delivaryID <<endl;
     cout<< "delivaryFee : "<< delivaryFee<<endl;
     cout<<"time : " << time<<endl;
     cout<<"Location : " << Location<<endl;

  }
  void DelivaryInfo::updateDelivaryTime(){}
  void DelivaryInfo::cancelDelivary(){}
  DelivaryInfo::~DelivaryInfo(){

    cout<<"DelivaryInfo Invoice deleted"<<endl;
    
  }


  History::History(char oDetails[],char ptDetails[]){
    strcpy(orderDetails,oDetails);
    strcpy(paymentDetails,ptDetails);
  }
  void History::getOrderDetails(){
    cout<<"Details : "<< orderDetails<<endl;
  }
  void History::getPaymentDetails(){
    cout<<"Details : "<< paymentDetails<<endl;
  }

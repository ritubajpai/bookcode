#include<iostream>

using namespace std;

class book{
	
	public : int bid;
	string bname;
	double bprice;
	
	void book(){
	cout<<"default----";
	int bid=101;
	string book="Let Us C";
	double bprice=400;
}
	book(int bid,string bname, double bprice)
{
	cout<<"parameterised---";
    this->bid=bid;
	this->bname=bname;
	this->bprice=bprice;	
}
display(){
	cout<<"BOOK DETAILS: BOOKID: " <<bid<<" BOOKNAME: "<<bname<<" BOOKPRICE "<<bprice<<endl;
}


public :void store(int qty){
	cout<<"Enter Quantity: "<<endl;
	cin>>qty;
	double total_price= qty * bprice;
}
};



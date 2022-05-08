#include <iostream>
#include <iomanip>

using namespace std;
int T=0;
struct cart
{
	int S;
	string Prod;
	string Brd;
	int Qua;
	int pr;
	int Tpr;
	int Disc;
}ob[10];
void Purchase();

class Product
{
	public:
		int Sno;
		string brand;
		string avail;
		int price;
		int discount;
		
		
		Product(int n,string Br,string Av,int Pr,int Di)
		{
			Sno = n;
			brand = Br;
			avail = Av;
			price = Pr;
			discount = Di;
		}
		void display()
		{
			if(Sno==1)
			{
			cout<<"\n"<< left<< setw(7)<< "Sno."<< left<< setw(15)<< "Brand"<< left<< setw(17)<< "Availability"
			<< left<< setw(17)<< "Price"<<left<<"Discount"<< endl;
			}
			
        	cout<< left<< setw(7)<< Sno
            	<< left<< setw(15)<< brand
            	<< left<< setw(17)<< avail
            	<< left<<"Rs. "<< setw(13)<< price
            	<< left<< discount<<" %"<<endl;
		}
		void bought(int I,string PR)
		{int q;
			cout<<"\nHow many do you want: ";
			cin>>q;
			ob[I].Prod = PR;
			ob[I].S = I+1;
			ob[I].Brd = brand;
			ob[I].Qua = q;
			ob[I].pr = price;
			ob[I].Disc = discount;
			ob[I].Tpr = (price-((discount/100)*price))*q;
		}
		
};

class Bill 
{
	public:
	void prt_bill()
	{int j=0;
	 int Gt=0;
		cout<<"\nItems you have purchased are:"<<endl;
		cout<<"\n"<<left<<setw(7)<<"Sno."<<left<<setw(17)<<"Product"<<left<<setw(15)<<"Brand"<<left<<setw(17)
			<<"Price"<< left<< setw(15)<< "Discount"<<left<<setw(15)<<"Quantity"<<left<<"Total price"<<endl;
			
		for(j;j<T;++j)
		{
			cout<<"\n"<< left<< setw(7)<< ob[j].S
            	<< left<< setw(16)<< ob[j].Prod
            	<< left<< setw(16)<< ob[j].Brd
            	<< left<<"Rs. "<< setw(15)<< ob[j].pr
            	<< left<< ob[j].Disc<<left<< setw(14)<<" %"
            	<< left<< setw(14)<< ob[j].Qua
				<<left<<"Rs. "<< ob[j].Tpr<<endl;
			Gt += ob[j].Tpr;
		}
		cout<<"\n\t\t\tGrand Total "<<Gt;
	}
};

Product Mobi[3] = {Product(1,"Apple","Available",65000,0),Product(2,"Samsung","Available",25000,5),
Product(3,"One+","Available",30000,10)};
Product Tv[3] = {Product(1,"LG","Available",40000,5),Product(2,"Samsung","Available",55000,0),
Product(3,"Panasonic","Out of stock",45000,0)};
Product Fridge[3] = {Product(1,"LG","Available",15000,0),Product(2,"Panasonic","Available",18800,2),
Product(3,"Samsung","Available",22000,5)};
Product Lap[3] = {Product(1,"Lenovo","Available",71000,10),Product(2,"Asus","Available",64500,0),
Product(3,"Apple","Available",150000,0)};
Product Hdpho[3] = {Product(1,"Boat","Available",7500,0),Product(2,"Skullcandy","Available",6899,2),
Product(3,"JBL","Out of Stock",8000,0)};

void Purchase()
{int A,b,i=0;

	do
	{T=i+1;
	 b=0;
	 int p,j;
	 cout<<"\nEnter the product Sno. from main menu : ";
	 cin>>A;
		switch(A)
		{
			case 1: Mobi[0].display();
					Mobi[1].display();
					Mobi[2].display();
					V:cout<<"\nWhat would you like to buy: ";
					cin>>p;
					if(p>3)
					{
						goto V;
					}
					Mobi[p-1].bought(i,"Mobile");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			case 2: Tv[0].display();
					Tv[1].display();
					Tv[2].display();
					W:cout<<"\nWhat would you like to buy: ";
					cin>>p;
					if(p>3)
					{
						goto W;
					}
					Tv[p-1].bought(i,"Television");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			case 3: Fridge[0].display();
					Fridge[1].display();
					Fridge[2].display();
					X:cout<<"\nWhat would you like to buy: ";
					cin>>p;
					if(p>3)
					{
						goto X;
					}
					Fridge[p-1].bought(i,"Refrigerator");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			case 4: Lap[0].display();
					Lap[1].display();
					Lap[2].display();
					Y:cout<<"\nWhat would you like to buy: ";
					cin>>p;
					if(p>3)
					{
						goto Y;
					}
					Lap[p-1].bought(i,"Laptop");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			case 5: Hdpho[0].display();
					Hdpho[1].display();
					Hdpho[2].display();
					Z:cout<<"\nWhat would you like to buy: ";
					cin>>p;
					if(p>3)
					{
						goto Z;
					}
					Hdpho[p-1].bought(i,"Headphone");
					cout<<"\nDo you want to continue shopping if yes/no(1/0): ";
					cin>>j;
					if(j==1)
					{
						++i;
						b=1;
					}
					break;
			default: cout<<"\nPlease select the product from the list of items: "<<endl;
				 	 b = 1;
		}
	}while (b==1);

}

int main()
{Bill obj;	
	cout << "\nWelcome!"<<endl;
	cout << "\nWhat would you like to buy?"<<endl;
	cout << "\nMain menu";
	cout << "\n1.> Mobile"<<"\n2.> Television"<<"\n3.> Refrigerator"<<"\n4.> Laptop"<<"\n5.> Headphone"<<endl;
	Purchase();
	obj.prt_bill();
		
	return 0;
}

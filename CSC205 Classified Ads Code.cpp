#include<iostream>
using namespace std;
#define MaxAds 50

int main()
{
//int MaxAds = 50
int adcode[MaxAds];
int adwords[MaxAds];
int sortcode;
int adnum;
int i,j,k;
int subtotal;
int temp;

cout<<"Please Enter Number of Ads: ";
cin>>adnum;

if ((adnum>0) and (adnum<=MaxAds))
{
	for (i=0;i<adnum;i++)
	{
		cout<<"Please Enter Ad Code (1-15): ";
		cin>>adcode[i]
		cout<<"Please Enter Number of Words for Ad: "
		cin>>adwords[i]
	}

	for (i=0;i<adnum-1, i++)
	{
		for (j=0;j<adnum-1, j++)
		{
			if (adcode[j] > adcode[j+1])
			{
				temp = adcode[j];
				adcode[j]= adcode[j+1];
				adcode[j+1]= temp;
				temp = adwords[j];
				adwords[j] = adwords[j+1]
				adwords[j+1] = temp;	
			}
		}
	
	}
	
	cout<<"Total Ad Words Sorted By Category Code"<<endl;
	cout<<"---------------------------------------"<<endl;
	
	// Now gather sorted data to print using the next while loop
	
	k = 0
	while(k<=adnum-1)
	{
		subtotal = 0;
		sortcode = adcode[k];
		while((sortcode == adcode[k]) and (k<= adnum-1))
		{
			subtotal = subtotal + adwords[k];
			k = k+1;
		}
	cout<<"Category: "<<adcode[k-1]<<" "<<"Word Count: "<<subtotal<<endl;	
	}
}
else
{
	cout<<"Number of Ads reqested is not Valid";
}

return 0;


}
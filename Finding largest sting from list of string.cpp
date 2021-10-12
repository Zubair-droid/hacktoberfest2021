#include<iostream>
#include<cstring>
using namespace std;

int main()
{
	char a[1000];
	char largest[1000];
	
	int l=0,largest_l=0;
	
    int n;
    
    cin>>n;
    
    cin.get(); //to ignore \n after the n input.
    for(int i=0;i<n;i++)
    {
    cin.getline(a,1000);
    l=strlen(a);
    if(l>largest_l)
    {
    	largest_l=l;
    	strcpy(largest,a);
	}
	}
	cout<<largest<<" and "<<largest_l;
	return 0;
	
}

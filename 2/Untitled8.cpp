#include <iostream>
using namespace std;
int main ()
{
	int a[10];
	int count=0;
	char b[14];
	for(int i=1;i<=13;i++)
		cin>>b[i];
	int k =1;
	for(int j =1;j<=13;j++){
		if(b[j]!='-'){
			a[k]=b[j]-'0';
			k++;
		}
	}
	for(int l=1;l<=9;l++)
		count+=(l*a[l]);
	int temp=count%11;
	char h;
	if(temp==10)
		h='X';
	else
		h='0'+temp;
	if(h==b[13])
		cout<<"Right";
	else{
		for(int g=1;g<=12;g++)
			cout<<b[g];
		cout<<h;
	}
	return 0;
}

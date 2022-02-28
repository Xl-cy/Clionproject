#include <iostream>
using namespace std;
int main ()
{
	int store=0;
	int i;
	int hand=0;
	int s[13];
	for(int j=1;j<=12;j++)
		cin>>s[j];
	for(i=1;i<=12;i++){
		hand+=300;
		if(hand>=s[i]){
			hand-=s[i];
			if(hand>=100){
				store+=(hand/100*100);
				hand%=100;
			}
		}
		else{
			cout<<'-'<<i;
			break;
		}
	}
	if(i==13)
		cout<<store*1.2+hand;
	return 0;
}

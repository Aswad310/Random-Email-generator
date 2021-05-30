#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

static const char genalpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ" "abcdefghijklmnopqrstuvwxyz";
static const char genNum1[] = "0123456789";


int len = sizeof(genalpha) - 1;
int len1 = sizeof(genNum1) - 1;

char genEmail(int a) {
	
	for(int z = 1; z < a; z++) {
		cout<<genalpha[rand() % len];
	}
}

char genNum(){
	cout<< genNum1[rand() % len1];
}

char genEmail2(int a) {
	
	for(int z = 0; z < a; z++) {
		cout<<genalpha[rand() % len];
	}
}

char genUrl(){
	

	string urls[] = {"com", "net", "org"};
	string url = "";
	
	for(int i = 0; i< 3; i++){
		url = urls[rand() % 3];
    }
	cout<<url;
}

char genone(int n)
{
	genEmail(n);
	genNum();
	cout<< ".";
	genEmail(n);
	genNum();
	cout<< "@";
	genEmail2(n);
	cout<< ".";
	genUrl();
	cout<<endl;
}

int main()
{
	int n, i = 0, j = 0, k = 0;
	int choice1, count = 0;
	static const char found[] = "vNFg8.XmFL0@wcLcz.org" "hRqI0.VELr4@ZjNAo.org" "wJlx1.NdKD4@ItDGz.com" "DFaM7.sTnv4@TSQyW.com" "QCPf6.zhUt3@iSjkB.com" "sDy2.zmz9@AqsN.org" "ebA1.RWK8@ljxB.net" "vev5.OPF5@DRXw.org" "rlk9.msT0@dgAn.net" "lTE8.JiH3@aVIy.org";
	static const char notfound[] = "Lrcg0.npYE3@ocIDQ.org" "PJyF6.PWKU7@efNKO.net" "ZRHG6.EiWY5@PouLM.com" "FWrx8.wwdS7@zfvwz.net" "XVBh9.przM1@IxJag.org" "yzo7.koP8@glpZ.net" "pHG5.TPR4@GcPL.org" "nXa1.ulu9@YIWx.net" "mJF1.oqo7@ZLxq.org" "nrS6.was6@nuvE.org";

	srand(time(0));


	cout<< "Enter Email length: ";
	cin>> n;


	cout<< "\n***Generating Set A (100)***\n" <<endl;
	while(i< 100)								//Set A
	{
		genone(n);

		if(found[i] == genone(n)){
			count = 1;
		}
		i++;
	}
	
	
	cout<< "\n*****Do you want to search Set A or print Set B?*****\n\n";


	while(true)
	{
		cout<< "For Search Select\t\t = 1 \nFor Set B (100,000) Select\t = 2 \nExit to Set C (500,000) Select\t = 3\n";
		cin>> choice1;
		
		if(choice1 == 1){
			if(count == 1){
				cout<< "Can't be found as the chances of finding similar value in the random array of alphanumeric string is astronimical" <<endl;
			}
			else{
				cout<<"\nNOT FOUND\n\n";
			}
		}
		
		else if(choice1 == 2){
			cout<< "\n*****Generating Set B (100,000)*****\n" <<endl;
			while(j < 100000)														//Set B
			{
				genEmail(n);
				genNum();
				cout<< ".";
				genEmail(n);
				genNum();
				cout<< "@";
				genEmail2(n);
				cout<< ".";
				genUrl();
				cout<< "\t" << j <<endl;
				j++;
			}
			j = 0;
			cout<<endl;
		}
		
		else if(choice1 == 3){
			break;
		}
		
		else{
			cout<< "\nYou entered the wrong number, Try Again.\n\n";
		}
}

	cout<< "\nGenerating Set C" <<endl;
	while(k < 500000)								//Set C
	{
		genEmail(n);
		genNum();
		cout<< ".";
		genEmail(n);
		genNum();
		cout<< "@";
		genEmail2(n);
		cout<< ".";
		genUrl();
		cout<< "\t" << k <<endl;
		k++;
	}
}

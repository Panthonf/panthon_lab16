#include<iostream>
#include<string>
using namespace std;

void myString(char *&P,int M){
	P = new char[M+1];    
	for(int i = 0; i < M;i++) P[i]= 'A'+i;
	P[M] = 0;
	
}

int main(){
	char *p;
	int N;	
	cout << "N = ";
	cin >> N;		
	myString(p,N);
	cout << p;	
	delete [] p;
	return 0;
}

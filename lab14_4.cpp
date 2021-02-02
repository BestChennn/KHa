#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int m = 50, n = 100, o = 500, p = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(m,n,o,p);
	    cout << m << " " << n << " " << o << " " << p << "\n";
	}
	
	return 0;
}
void shuffle (int &w,int &e,int &r,int &t){
	int N=4;
	for(int i=0;i<=N;i++){
		int q = rand()%12+1;
		switch(q)
		{
			case 1:
				swap(w,e);
				break;
			case 2:
				swap(w,r);
				break;
			case 3:
				swap(w,t);
				break;
			case 4:
				swap(e,w);
				break;
			case 5:
				swap(e,r);
				break;
			case 6:
				swap(e,t);
				break;
			case 7:
				swap(r,w);
				break;
			case 8:
				swap(r,e);
				break;
			case 9:
				swap(r,t);
				break;
			case 10:
				swap(t,w);
				break;
			case 11:
				swap(t,e);
				break;
			case 12:
				swap(t,r);
				break;
		}
	}
}
void swap(int &a,int &b){
	int kak =a;
	a=b;
	b=kak;
}
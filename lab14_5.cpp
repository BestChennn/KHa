#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *,int *,int *,int *);

int main(){
	int m = 50, n = 100, o = 500, p = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&m,&n,&o,&p); 
	    cout << m << " " << n << " " << o << " " << p << "\n";
	}
	
	return 0;
}

void shuffle(int *m,int *n,int *o,int *p){
	int N=4;
	for(int i=0;i<=N;i++){
		int q = rand()%12+1;
		switch(q)
		{
			case 1:
				swap(*m,*n);
				break;
			case 2:
				swap(*m,*o);
				break;
			case 3:
				swap(*m,*p);
				break;
			case 4:
				swap(*n,*m);
				break;
			case 5:
				swap(*n,*o);
				break;
			case 6:
				swap(*n,*p);
				break;
			case 7:
				swap(*o,*m);
				break;
			case 8:
				swap(*o,*n);
				break;
			case 9:
				swap(*o,*p);
				break;
			case 10:
				swap(*p,*m);
				break;
			case 11:
				swap(*p,*n);
				break;
			case 12:
				swap(*p,*o);
				break;
		}
	}
}
void swap(int &a,int &b){
	int kak =a;
	a=b;
	a=kak;
}
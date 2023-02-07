#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int &,int &,int &,int &);

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(a,b,c,d);
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}
void shuffle(int &a,int &b,int &c,int &d)
{
	int A[4];
	int B[] = {a,b,c,d};
	for(int i=0;i<4;i++)
	{
		A[i] = rand()%4 ;
		for(int j=0;j<i;j++)
		{
			if(A[i] == A[j])
			{
				i--;
				break;
			}
		}
	}
	a = B[A[0]];
	b = B[A[1]];
	c = B[A[2]];
	d = B[A[3]];
}
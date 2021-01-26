
#include <iostream>
using namespace std;

int howManyWalls(int n, int w, int h) {
	//n = meter persegi tembok
	//w = panjang
	//h = lebar
	//r = jumlah wall
	//l=luas yg dicat
	int r;
	int l = w * h;
	r = n / l;

	return r;

}
int main()
{
	int n = 10;
	int w = 20;
	int h = 30;
	howManyWalls(n, w, h);
}

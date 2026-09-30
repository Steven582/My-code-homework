#include <iostream>
using namespace std;
int main()
{
	int ay,am,ad;
	int by,bm,bd;
	int cy,cm,cd;
    int sa,sb,sc;
	
	cin>>ay>>am>>ad;
	cin>>by>>bm>>bd;
	cin>>cy>>cm>>cd;
	
	sa=10000*ay+100*am+ad;
	sb=10000*by+100*bm+bd;
	sc=10000*cy+100*cm+cd;
	
	if (sa <= sb && sb <= sc) cout << "ABC" << endl;
    if (sa <= sc && sc <= sb) cout << "ACB" << endl;
    if (sb <= sa && sa <= sc) cout << "BAC" << endl;
    if (sb <= sc && sc <= sa) cout << "BCA" << endl;
    if (sc <= sa && sa <= sb) cout << "CAB" << endl;
    if (sc <= sb && sb <= sa) cout << "CBA" << endl;
}

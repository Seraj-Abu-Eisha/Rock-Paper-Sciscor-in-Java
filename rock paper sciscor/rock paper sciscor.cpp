#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
	srand(time(0));
	int E = 0;
	int a = 0;
	char g;
	do {
		cout << " Rock Paper Scicoer game \n1) Rock \n2) Paper \n3) Scissor" << endl;
	    E = rand() % 3 + 1;
		cin >> a;
		switch (a) {
		case 1:
			if (E == 1) cout << "C:Rock\n P: Rock.\nTIE" << endl; else if (E == 2) cout << "C:Paper\nP:Rock.\nPlayer lost" << endl; else cout << "C:Scissor\nP:Rock.\nPlayer won" << endl; break;
		case 2:
			if (E == 1) cout << "C:Rock\nP: Paper.\nPlayer won" << endl; else if (E == 2) cout << "C:Paper\nP:Paper.\nTIE" << endl; else cout << "C:Scissor\nP:Paper.\nPlayer lost" << endl; break;
		case 3:
			if (E == 1) cout << "C:Rock\nP: Scissor.\nPlayer lost" << endl; else if (E == 2) cout << "C:Paper\nP:Scissor.\nPlayer won" << endl; else cout << "C:Scissor\nP:Scissor.\nTIE"<<endl; break;
		defult: cout << "Error" << endl; break;
		}
		cout << "again? press 'y' if no press anything else"<< endl;
		cin >> g;
	} while (g == 'y');
	return 0;
}


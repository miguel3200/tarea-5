#include <iostream>
using std::cout;
using std::cin;


int main()
{
	int type = 0; 
	int syze = 0;
	cout << "Select shape type: (1-pyramyth. 2- diamond )\n";
	cin >> type;

	if (type == 1) {

		cout << "Select the pyramyth size \n";
		cin >> syze;
		for (int s = 0; s < syze; s++) {
			for (int i = 0; i < s; i++) {
				cout << "*";
				cout << " ";
			}
			cout << "\n";
		}
		for (int s = syze; s > 0; s--) {
			for (int i = s; i > 0; i--) {
				cout << "*";
				cout << " ";
			}
			cout << "\n";
		}

	}
	else {

		cout << "Select the diamond size\n";
		cin >> syze;
		for (int s = 0; s < syze; s++) {
			for (int i = s; i < syze; i++) {
				cout << " ";
			}
			for (int x = 0; x < s; x++) {
				cout << "*";
				for (int g = 0; g < 1; g++) {
					cout << " ";
				}
			}


			cout << "\n";
		}
		for (int s = syze; s > 0; s--) {

			for (int i = syze; i > s; i--) {
				cout << " ";
			}
			for (int f = s; f > 0; f--) {
				cout << "*";
				cout << " ";
			}
			cout << "\n";
		}

	}
}
#include<iostream>
#include<iomanip>
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
using namespace std;
void display(int num[5][6]);
void graph(int num[5][6]);
int main(){
	srand(time(NULL));
	int num[5][6];
	for (int i = 0; i<5; i++){
		for (int l = 0; l<6; l++){
			num[i][l] = rand() % (10);

		}
	}
	display(num);
	graph(num);

	return(0);
}
void display(int num[5][6])
{
	for (int i = 0; i<5; i++){
		for (int l = 0; l<6; l++){
			cout << num[i][l] << "\t";
		}
		cout << endl;
	}
}
void graph(int num[5][6]){
	cout << "--------------display graph-----------------------" << endl;
	cout << "       0       1       2        3       4      5" << endl;
	cout << "--------------------------------------------------" << endl;

	for (int i = 0; i<5; i++){
		cout << i << "|\t\t" << endl;
		for (int l = 0; l<6; l++){
			if (num[i][l] == int(0))  cout << setw(8) << " ";
			else cout << setw(8) << "*";
		}
		cout << endl;
	}
}
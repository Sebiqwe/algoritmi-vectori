#pragma once
#include <iostream>
using namespace std;
//ex1)Sa se sorteze de tip munte cu pozitia de control al celui de al 4-lea element ce are intre 3-5 divizori proprii
void sortareCrescator(int x[],int a ,int b) {

	bool sortat = false;
	do {
	
		sortat = true;
		for (int i = a; i < b-1; i++) {
			if (x[i] > x[i + 1]) {
			
			
				int aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
			
			
				sortat = false;
			}
		
		}
	
	} while (sortat == false);

}
void sortareDescrescator(int x[],int a, int b) {

	bool sortat = false;
	do {

		sortat = true;
		for (int i = a; i < b - 1; i++) {
			if (x[i] < x[i + 1]) {
				int aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;


				sortat = false;
			}

		}

	} while (sortat == false);

}
void afisare(int x[], int d) {

	for (int i = 0; i < d; i++) {
	
		cout << x[i] << " ";
	
	}










}
int divProprii(int n) {
	int contor = 0;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			contor++;
		}
	}
	return contor;
}
bool areDivPropriiIntre3Si5(int n) {

	return divProprii(n) >= 3 && (divProprii(n)) <= 5;

}
int pozitieAl4leaEmenet35Div(int v[], int d) {

	int ct = 0;
	for (int i = 0; i < d; i++) {


		if (areDivPropriiIntre3Si5(v[i])) {


			ct++;

			if (ct == 4) {
				return i;
			}
		}

	}
	return -1;


}
void testare() {

		int v[100] = { 12, 10, 18, 20, 16,10, 11, 28, 14,13 };
		int d = 10;
	

		int pozitiaDeControl= pozitieAl4leaEmenet35Div(v, d);



		sortareCrescator(v,0, pozitiaDeControl);

		sortareDescrescator(v, pozitiaDeControl + 1, d);



		afisare(v, d);

	}
//Sa se sorteze tip vale cu pozitia de control al k-lea element ce are t cifre de 1 in baza 2(k citit de la tastatura).
void sortareCresc(int x[], int a, int b) {
		bool sortat = false;
		do {
			sortat = true;
			for (int i = a; i < b - 1; i++) {
				if (x[i] > x[i + 1]) {
					int aux = x[i];
					x[i] = x[i + 1];
					x[i + 1] = aux;
					sortat = false;
				}
			
			}
		
		
		} while (sortat == false);
	
	
	}
void sortareDesc(int x[], int a, int b) {
	
		bool sortat = false;
		do {
			sortat = true;
			for (int i = a; i < b - 1; i++) {
				if (x[i] < x[i + 1]) {
					int aux = x[i];
					x[i] = x[i + 1];
					x[i + 1] = aux;
					sortat = false;
				}
			
			}
		
		
		} while (sortat == false);
	
	}
//2)Sa se sorteze tip vale cu pozitia de control al k - lea element ce are t cifre de 1.
int contorCifDe1(int n) {
		int contor = 0;
		while (n > 0) {
			int cif = n % 10;
			if (cif == 1) {
				contor++;
			}
		
		
			n = n / 10;
		
		}
		return contor;
		
	
	
	
	}
int pozitieDeControl(int v[],int d,int k,int t ) {

		int ct = 0;

		for (int i = 0; i < d; i++) {
		
			if (contorCifDe1(v[i]) == t) {

				ct++;
			}

			if (k == ct) {

				return i;
			}

		}

		return -1;


	}
void bubbleSortDesc(int v[], int a,int b) {
		bool sortat = false;
		do {
			sortat = true;
			for (int i = a; i < b - 1; i++) {
				if (v[i] < v[i + 1]) {
					int aux = v[i];
					v[i] = v[i + 1];
					v[i + 1] = aux;
					sortat = false;
				}
			
			
			
			}
		
		
		
		
		
		} while (sortat == false);
	
	
	
	}
void bubbleSortCresc(int v[],int a,int b) {
		bool sortat = false;
		do {
			sortat = true;
			for (int i = a; i < b - 1; i++) {
				if (v[i] > v[i + 1]) {
					int aux = v[i];
					v[i] = v[i + 1];
					v[i + 1] = aux;
					sortat = false;
				
				}
			
			}
		
		
		
		} while (sortat == false);
	
	
	
	
	}
void citireVect(int v[], int d) {
		for (int i = 0; i < d; i++) {
			
		
			cout << v[i] << " ";
		
		}
	
	
	}
void testare1() {
		int v[100] = { 121,211,4111,5211,113,611,312,513,981,111 };
		int d = 10;
		int k = 0;
		cout << "k=" << endl;
		cin >> k;
		int t = 0;
		cout << "t=" << endl;
		cin >> t;
		cout << "\n vectorul inainte de sortare este ";
		citireVect(v, d);
		int pozControl= pozitieDeControl(v, d, k,t);
		bubbleSortDesc(v,0,pozControl);
		bubbleSortCresc(v,pozControl+1,d);
		cout << "\n vectorul dupa sortare este ";
		citireVect(v, d);
		
	
	
	
		}
		



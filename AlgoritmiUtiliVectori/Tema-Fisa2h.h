#pragma once
#include<iostream>
using namespace std;


//Sa se sorteze prima jumatate a vectorului crescator iar a doua jumatate descrescator.Sa se caute in interiorul primei jumatati pozitile pe care apare minimul.Sa se caute in interorul celei de-a doua jumatati pozitiile pe care apare maximul 
void buubleSortCresc(int v[], int d, int a, int b) {
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
void bubbleSortDesc(int v[], int d, int a, int b) {
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
int minimVect(int v[], int d) {
	int minim = v[0];
	for (int i = 0; i < d; i++) {
		if (v[i] < minim) {
			minim = v[i];

		}



	}
	return minim;



}
//Sa se verifice daca cifra de control a primului element apare in interiorul celei de-a doua jumatati a vect.
int sumCif(int n) {
	int s = 0;
	while (n > 0) {
		int cif = n % 10;
		s = s + cif;

	
	
		n = n / 10;
	
	
	}

	return s;


}
int cifDeControl(int n) {
	while (n >= 10) {
		n = sumCif(n);
	
	
	
	
	}


	return n;




}
void bubbleSort(int v[], int a,int b) {
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
int  binarySearch(int v[], int a, int b,int key ) {
	bubbleSort(v, a, b);
	int c = a;
	int e = b - 1;
	int mj;
	while (c <= e) {
		mj = (c + e) / 2;
		if (v[mj] == key) {
			return true;
		
		}
		if (v[mj] < key) {
			c = mj + 1;
		
		}
		if (v[mj] > key) {
			e = mj - 1;
		
		}
	}

	return false;





}
void  testare2() {
	int v[100] = { 44,12,21,57,97,43,8,74,23,55 };
	int d = 10;
	int cifControl= cifDeControl(v[0]);
	cout << "cif de control este " << cifControl << endl;
	int mj = d / 2;
	if (binarySearch(v, mj, d, cifControl)) {
	
		cout << "cifra de contor a primului element se afla int a doua jumatate a vectorului " << endl;


	}
	else{
		cout << "cif de control NU se afla in a doua jumatate a vectorului " << endl;


	}

}
//Sa se verifice daca fiecare element din a doua jumatate a vectorului apare cel putin de doua ori in int primei jumatati a vectorului 
int contorAparitii(int v[], int a, int b,int key  ) {
	int contor = 0;
	for (int i = a; i < b-1; i++) {
		if (v[i] == key) {
			contor++;
		}
	
	
	}
	return contor;

}
void bubbleSort3(int v[], int a, int b) {
	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < b - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i]=v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}
		
		}
	
	
	
	} while (sortat == false);





}
int binarySearch2(int v[], int a, int b, int key) {
	bubbleSort(v, a, b);
	int c = a;
	int e = b - 1;
	int mj;
	while (c <= e) {
		mj = (c + e) / 2;
		if (v[mj] == key) {
			return true;

		}
		if (v[mj] < key) {
			c = mj + 1;

		}
		if (v[mj] > key) {
			e = mj - 1;

		}
	}

	return false;






}
bool aparitieDeDouaOri(int v[], int a, int b, int key) {
	int aparitie1 = binarySearch(v, a, b, key);
	if (aparitie1 + 1 < b && v[aparitie1 + 1] == key) {
	
		return true;
	}
	else {
		return false;
	}





}
void testare3() {
	int v[100] = { 3, 5, 6, 7, 8, 3, 7, 5, 3,2 };
	int d = 10;
	int mj = d / 2;
	bubbleSort(v, 0, mj);
	
	bool toateElemRespectaCond = true;
	for (int i = mj; i < d; i++) {
		if (aparitieDeDouaOri(v, 0, mj, v[i]) == false) {
			cout << "elem " << v[i] << "nu apare de doua ori in prima jumatate" << endl;
			toateElemRespectaCond = false;
		}

	}
	if (toateElemRespectaCond) {
		cout << "toate elem respecta conditia" << endl;

	}
	else {
		cout << "nu toate elem respecta cond " << endl;
	}
}
//Sa se sorteze vectorul crescator intre [pmin, pmax] daca elementul minim este anterior celui maxim si [pmax,pmin] daca elementul maxim este anterior celui minim 
void minimVect1(int v[], int d) {
	int minim = v[0];
	int pmin = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] < minim) {
			minim = v[i];
			pmin = i;

		}
	
	
	}



}
void maximVect1(int v[], int d) {
	int maxim = v[0];
	int pmax = 0;
	for (int i = 0; i < d; i++) {
		if (v[i] > maxim) {
			maxim = v[i];
			pmax = i;
		}
	
	}


}
void bubbleSort4(int v[], int a, int b) {

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
void sortareInterval(int v[], int d) {
	int pmin=0;
	int pmax=0;
	int a;
	int b;
	if (pmin < pmax) {
		a = pmin;
		b = pmax+1;
	}
	else {
		a = pmax;
		b = pmin+1;
	
	}
	bubbleSort(v, a, b);





}
void afisareVect(int v[], int d) {

	for (int i = 0; i < d; i++) {
	
		cout << v[i] << " ";
	}

}
void testare4() {
	int v[100] = { 42, 15, 8, 23, 4, 16, 7 };
	int d = 7;
	minimVect1(v, d);
	maximVect1(v, d);
//	cout << " elem minim este " << minim << " la pozitia " << pmin << endl;
//	cout <<  " elem maxim este " << maxim << " la pozitia " << pmax << endl;
	sortareInterval(v, d);
	cout << "vectorul dupa sortare este " << endl;
	afisareVect(v, d);
	





}
//Sa se verifice daca elemntul k(k citit de la tastatutra ) apare in intervalul [pmin,pmax] sau [pmax,pmin].Sa se afiseze un mesaj corespunzator 
void bubbleSort5(int v[], int a, int b) {
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
void sortareInterval2(int v[], int d, int pmin, int pmax) {
	int a;
	int b;
	if (pmin < pmin) {
		a = pmin;
		b = pmax + 1;

	}
	else {
		a = pmax;
		b = pmin + 1;

	
	}


	bubbleSort5(v, a, b);

}
int binarySearch3(int v[], int a, int b, int key) {
	bubbleSort5(v, a, b);
	int c = a;
	int e = b - 1;
	int mj;
	while (c <= e) {
		mj = (c + e) / 2;
		if (v[mj] == key) {
			return true;

		}
		if (v[mj] < key) {
			c = mj + 1;

		}
		if (v[mj] > key) {
			e = mj - 1;

		}
	}

	return false;






}
void existaK(int v[], int d, int pmin, int pmax, int k) {
	int a;
	int b;
	if (pmin < pmax) {
		a = pmin;
		b = pmax;
	
	}
	else {
		a = pmax;
		b = pmin;

	}
	bubbleSort5(v, 0, d);
	bool Kgasit = binarySearch3(v, a, b, k);
		if (Kgasit) {
			cout << k << " se afla in interval" << endl;

		}
		else {
			cout << k <<" nu se afla in interval " << endl;

		}

}
void testare5() {
	int v[100] = { 42, 15, 8, 23, 4, 16, 32,11 };
	int d = 8;
	int k;
	cout << "k=" << endl;
	cin >> k;
	int pmin = 4;
	int pmax = 0;
	existaK(v, d, pmin, pmax, k);


}
// Sa se verifice daca cel mai mic numar prim apartine intervalului [pmax,pmin] sau [pmin,pmax ].Sa se afiseze un mesaj corespunzator
bool nEstePrim(int n) {
	if (n == 1 || n == 0) {
	
		return false;
	
	}
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;



}
int celMaiMicNrPrimDinInterval(int pmin, int pmax) {
	if (pmin > pmax) {
		int aux = pmin;
		pmin = pmax;
		pmax = aux;
	
	}

	for (int i = pmin; i <= pmax; i++) {
		if (nEstePrim(i)) {
			return i;

		}

	}


}
void bubbleSort6(int v[], int a, int b) {
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
void sortatreInterval2(int v[], int d, int pmin, int pmax) {
	int a;
	int b;
	if (pmin < pmin) {
		a = pmin;
		b = pmax + 1;

	}
	else {
		a = pmax;
		b = pmin + 1;


	}


	bubbleSort6(v, a, b);

}
int binarySearch4(int v[], int a, int b,  int key) {
	bubbleSort6(v, a, b);
	int c = a;
	int e = b - 1;
	int mj;
	while (c <= e) {
		mj = (c + e) / 2;
		if (v[mj] == key) {
			return true;

		}
		if (v[mj] < key) {
			c = mj + 1;

		}
		if (v[mj] > key) {
			e = mj - 1;

		}
	}

	return false;







}
void existaPrimInInterval(int v[], int d, int pmin, int pmax, int prim) {
	int a;
	int b;
	if (pmin < pmax) {
		a = pmin;
		b = pmax;

	
	}
	else {
		a = pmax;
		b = pmin;

	}
	bubbleSort6(v, 0, d);
	bool primGasit = binarySearch(v, a, b, prim);
	if(primGasit){
		cout << prim << " se afla in interval" << endl;

	}
	else {
		cout << prim << " NU se afla in interval" << endl;
	
	}

}
void testare6() {
	int v[100] = { 42, 15, 8, 2, 4, 16, 32,11 };
	int d = 8;
	int pmin = 4;
	int pmax = 0;
	int prim = celMaiMicNrPrimDinInterval(pmin, pmax);
	
	existaPrimInInterval(v, d, pmin, pmax, prim);

}
// Sa se verifice daca elementul kk(kk citit de la tastatura ) apare in afara intervalului [pmin,pmax] sau [pmax,pmin]
void bubbleSort6(int v[], int d, int a, int b) {
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
void sortareInterval3(int v[], int d, int pmin, int pmax) {
	int a;
	int b;
	if (pmin < pmin) {
		a = pmin;
		b = pmax + 1;

	}
	else {
		a = pmax;
		b = pmin + 1;


	}


	bubbleSort6(v, a, b);

}
int binarySearc5(int v[], int a, int b, int key) {
	bubbleSort6(v, a, b);
	int c = a;
	int e = b - 1;
	int mj;
	while (c <= e) {
		mj = (c + e) / 2;
		if (v[mj] == key) {
			return true;

		}
		if (v[mj] < key) {
			c = mj + 1;

		}
		if (v[mj] > key) {
			e = mj - 1;

		}
	}

	return false;






}
void existaKK(int v[], int d, int pmin, int pmax, int kk) {
	int a;
	int b;
	if (pmin < pmax) {
		a = pmin;
		b = pmax;

	}
	else {
		a = pmax;
		b = pmin;

	}
	bubbleSort6(v, 0, d);
	bool KKgasit = binarySearch3(v, a, b, kk);
	if (KKgasit) {
		cout << kk << " se afla in interval" << endl;

	}
	else {
		cout << kk << "  se afla in afara  intervalului " << endl;

	}

}
void testare7() {
	int v[100] = { 42, 22, 8, 23, 4, 16, 33 };
	int d = 7;
	int kk;
	cout << "kk=" << endl;
	cin >> kk;
	int pmin = 4;
	int pmax = 0;
	existaKK(v, d, pmin, pmax, kk);


}


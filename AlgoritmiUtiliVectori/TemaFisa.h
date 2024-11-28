#pragma once
#include <iostream>
using namespace std;
//ex1)Sa se sorteze de tip munte cu pozitia de control al celui de al 4-lea element ce are intre 3-5 divizori proprii
void sortareVectCrescator(int x[], int a, int b) {

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
void sortareVectDescrescator(int x[], int a, int b) {

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
int pozitieElem4Cu3Si5Div(int v[], int d) {

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
void testare1() {

	int v[100] = { 12, 10, 18, 20, 16,10, 11, 28, 14,13 };
	int d = 10;


	int pozitiaDeControl = pozitieElem4Cu3Si5Div(v, d);



	sortareVectCrescator(v, 0, pozitiaDeControl);

	sortareVectDescrescator(v, pozitiaDeControl + 1, d);



	afisare(v, d);

}
//ex 2) Sa se sorteze tip vale cu pozitia de control al k-lea element ce are t cifre de 1 in baza 2(k citit de la tastatura).
//ex3)Sa se sorteze crescator intre elementul minim si cel maxim iar descrescator in rest.Se va lua in considerare doar primul element de minim si ultimul element de maxim in cazu lin care ave mma multe elemente de acest tip
void citireVector(int x[], int d) {
	for (int i = 0; i < d; i++) {
	
		cout << x[i] << " ";
	
	
	
	
	}


}
int nrMaxim(int x[],int d) {

	int nrMare = x[0];
	for (int i = 1; i < d; i++) {
	
		if (x[i] > nrMare) {
		
			nrMare = x[i];
		
		
		
		}
	
	
	
	
	
	
	}

	return nrMare;







}
int nrMinim(int x[], int d) {

	int nrMinim = x[0];
	for (int i = 1; i < d; i++) {
	
	
		if (x[i] < nrMinim) {
		
			nrMinim = x[i];
		
		
		
		
		}
	
	
	
	}


	return nrMinim;



}
void bubbleSortCrescator(int x[], int d) {


	bool sortat = false;


	do {

		sortat = true;

		for (int i = 0; i < d - 1; i++) {

			if (x[i] > x[i + 1]) {


				int aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;

				sortat = false;
			}
		}


	} while (sortat == false);

}
void bubbleSortDescrescator(int x[], int d) {


	bool sortat = false;
	do {
	
		sortat = true;
		for (int i = 0; i < d; i++) {
		
			if (x[i] < x[i + 1]) {
			
				int aux = x[i];
				x[i] = x[i + 1];
				x[i + 1] = aux;
			
			
				sortat = false;
			
			}
		
		
		
		}
	
	
	
	} while (sortat == false);



}
void ex3(int x[], int d) {

	citireVector(x, d);

	int maxim = nrMaxim(x, d);
	int minim = nrMinim(x, d);


	bubbleSortCrescator(x, maxim);
	bubbleSortDescrescator(x, minim);

	cout << "vectorul dupa sortare este :";
		for (int i = 0; i < d; i++) {
		
			cout << x[i] << " ";
		
		
		
		}







}
//ex4)Sa se sorteze crescator prima parte a vectorului folosind metoda bulelor si a doua jumatate descrescator folosind metoda selectiei.
void bubbleSortPrimaJumatate(int v[], int d) {


	bool sortat = false;
	int mijlVector = d / 2;

	do {

		sortat = true;

		for (int i = 0; i < mijlVector - 1; i++) {

			if (v[i] > v[i + 1]) {


				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;

				sortat = false;
			}
		}


	} while (sortat == false);

}
void sortareSelectieADouaJumatateAVect(int v[], int d) {

	int mijlVector = d / 2;
	for (int i = mijlVector; i < d-1; i++) {


		for (int j = i + 1; j < d; j++) {

			if (v[i] < v[j]) {


				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;

			}
		}

	}
}
void testare2() {
	int v[100] = { 13, 11, 77, 22, 98, 56,31,88,37,69 };
	int d = 10;
	cout << " vectorul insinte de sortre este  : ";
	citireVector(v, d);
	bubbleSortPrimaJumatate(v, d);
	sortareSelectieADouaJumatateAVect(v, d);
	cout << " vectorul dupa afisare este :  ";
	citireVector(v, d);


}
//ex5)Sa se sorteze crescator numerele pare si descrescator cele impare printr-o singura parcuregere a vectorului
void bubbleSortNrPare(int v[], int d) {
	bool sortat = false;
	do {

		sortat = true;
		for (int i = 0; i < d - 1; i++) {
			if (v[i] % 2 == 0 && v[i + 1] % 2 == 0 && v[i] > v[i + 1]) {
			
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1]=aux;
				sortat = false;
			
			
			}



		}




	} while (sortat == false);
	
}
void bubbleSortImpare(int v[], int d) {

	bool sortat = false;
	do {
	
		sortat = true;
		for (int i = 0; i < d - 1; i++) {
		
			if (v[i] % 2 != 0 && v[i + 1] % 2 != 0 && v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			
			}
		
		
		}
	
	
	} while (sortat == false);


}
void testare3() {

	int v[100] = { 12, 45, 34, 78, 23, 56,89,67,31,92 };
	int d = 10;
	cout << " vectorul inainte de sortare este : " ;
	citireVector(v, d);
	bubbleSortNrPare(v, d);
	bubbleSortImpare(v, d);
	cout << " vectorul dupa sortare este : ";
	citireVector(v, d);



}
//ex6)Să se scrie un program care ordonează elementele unui vector crescător după suma cifrelor.
int sumaCif(int n) {
	int suma = 0;
	while (n > 0) {
		int cif = n % 10;
		suma = suma + cif;

		n = n / 10;

	}

	
	return suma;


}
void bubbleSortCrescSuma(int v[], int d) {
	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < d-1; i++) {
			if (sumaCif(v[i]) > sumaCif(v[i + 1])) {
			
				int aux=v[i];
				v[i]=v[i+1];
				v[i + 1] = aux;
				sortat = false;
			
			
			}
		
		
		
		
		}
	
	
	
	
	
	
	} while (sortat == false);










}
void testare4() {

	int v[100] = { 13,34,76,32,78,99,54,21,24,43};
	int d = 10;
	cout << "vectorul inainte de sortare ";
	citireVector(v, d);
	bubbleSortCrescSuma(v, d);
	cout << "vectorul dupa sortare este ";
	citireVector(v, d);



}
//ex7)Să se scrie un program care ordonează elementele unui vector crescător după prima cifră.
int primaCif(int n) {
	while (n >= 10) {
		n = n / 10;
	}

	return n;

}
void  bubbleSortPrimaCif(int v[], int d) {
	bool sortat = false;
	do{
		sortat = true;
		for(int i=0;i<d-1;i++){
			if (primaCif(v[i]) > primaCif(v[i + 1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			
			
			
			}
		
		
		}
	
	
	
	
	
	} while (sortat == false);




}
void testare5() {
	int v[100] = { 53,34,76,32,78,89,54,21,24.43};
	int d = 10;
	cout << "vectorul inainte de sortare este : ";
	citireVector(v, d);
	bubbleSortPrimaCif(v, d);
	cout << "vectorul dupa sortare este : ";
	citireVector(v, d);




}
//ex8)Se dă un şir cu n elemente, numere naturale nenule cu cel mult 4 cifre fiecare.Afişaţi, în ordine crescătoare, valorile pare din şir.Dacă şirul nu conţine nici o valoare pară, se va afişa mesajul nu exista.
void bubbleSort(int v[], int d) {
	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < d - 1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;


			}



		}





	} while (sortat == false);

}
void nrPareVect(int v[], int d, int vectPare[], int nrElemPare) {
	for (int i = 0; i < d; i++) {
	
		if (v[i] % 2 == 0) {
			vectPare[nrElemPare++] = v[i];


		}
	
	
	}


}
void afisareVect(int v[], int d) {
	if (d == 0) {
	
		cout << "nu exista elsemnte pare" << endl;
	}
	else {
		for (int i = 0; i < d; i++) {

			cout << v[i] << " ";


		}

	}

}
void ex8(int v[], int d,int vectPare[],int nrElemPare) {

	bubbleSort(v, d);
	nrPareVect(v, d, vectPare, nrElemPare);
	cout << "vectorul dupa sortare este : ";
	afisareVect(vectPare, nrElemPare);

	

}
//ex9Să se ordoneze crescător elementele pătrat perfect ale unui şir dat, fără a afecta elementele care nu sunt pătrat perfect.
bool estePP(int n) {
	int radical = sqrt(n);
	if (radical * radical == n) {
		return true;
	}
	else {
		return false;
	}



}
void bubbleSortPP(int v[], int d) {
	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < d-1; i++) {
			if (estePP(v[i]) > estePP(v[i+1])) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			}





		}
	
	
	
	
	
	} while (sortat == false);





}
void testare6() {

	int v[100] = { 5,4,3,9,16,8,25,6 };
	int d = 8;
	cout << "\n vectorul inainte de sortare : ";
	citireVector(v, d);
	bubbleSortPP(v, d);
	cout << " \n vectorul dupa sortare este : ";
	citireVector(v, d);

	
	






}
//ex10)Se dă un vector cu n elemente, numere naturale.Afișați în ordine crescătoare valorile prime din vector
bool nrEstePrim(int n) {
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
void bubbleSortPrime(int v[], int d) {
	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < d - 1; i++) {
			if (nrEstePrim(v[i]) > nrEstePrim(v[i + 1])) {
			
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			
			}
		
		
		}
	
	
	
	
	
	
	
	
	} while (sortat == false);








}
void afisareSortarePrime(int v[], int d) {
	bool estePrim = false;
	for (int i = 0; i < d; i++) {
		if (nrEstePrim(v[i])) {
		
			cout << v[i] << " ";
			estePrim = true;
		}
	
	
	
	}







}
void testare7() {
	int v[100] = {1, 10 ,15 ,3 ,7, 11 };
	int d = 6;
	cout << "\n vectorul inainte de sortare :";
	citireVector(v, d);
	afisareSortarePrime(v, d);
	cout << "\n vectorul inainte de sortare este ";
	afisareSortarePrime(v, d);






}
//ex11)Se dă un vector cu n elemente, numere naturale distincte. Ordonați crescător elementele situate înaintea valorii maxime din vector și descrescător elementele situate după această valoare.
int valMaximVect(int v[],int d) {
	int maxim = 0;
	for (int i = 1; i < d; i++) {
		if (v[i] > v[maxim]) {
			maxim = i;

		
		
		}
	
	
	
	
	}
	return maxim;

}
void bubbleSortCresc(int v[], int d) {
	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < d-1; i++) {
			if (v[i] > v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			
			
			
			}
		
		
		
		}
	
	
	
	
	
	
	
	} while (sortat == false);









}
void bubbleSortDesc(int v[], int d) {
	bool sortat = false;
	do {
		sortat = true;
		for (int i = 0; i < d - 1; i++) {
			if (v[i] < v[i + 1]) {
				int aux = v[i];
				v[i] = v[i + 1];
				v[i + 1] = aux;
				sortat = false;
			
			
			
			
			}
		
		
		}
	
	
	
	
	
	
	
	} while (sortat == false);







}
void testare8() {

	int v[100] = { 12,32,53,21,55,99,54,22,16,25 };
	int d = 10;
	int maximVect = valMaximVect(v, d);
	cout << "\n vectorul inainte de sortare este : ";
	citireVector(v, d);
	bubbleSortCresc(v, maximVect);
	bubbleSortDesc(v+ maximVect, d - 1);
	cout << "\n vectorul dupa sortare este : ";
	citireVector(v, d);





}


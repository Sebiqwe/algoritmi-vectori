#pragma once


#include<iostream>
using namespace std;


//algoritm sortare 
 
 //                          0    1     2   3  4
 //  i<d  j<d   v[i]>v[j]   121   1    15  88 -9  j    i
 //  0<5  1<5    121> 1      1   121              2
//        2<5    1 > 15                           3
//        3<5    1>  88                           4
//        4<5    1>-9        -9               1   5
//        5<5                                          1
//  1<5   2<5    121>15           15   121        3
//        3<5    15 >88                           4
//        4<5    15 >1            1          15   5 
//        5<5										   2
//  2<5   3<5    121>88               88   121    4           
//		  4<5    88>15                15      88  5 
//        5<5                                           3
//  3<5   4<5    121>88                   88  121  5    4
//  4<5  5<5                                            5
//  5<5



//=>-9,1,15,88,121;





void sortareSelectie(int v[], int d) {

	
	for (int i = 0; i < d; i++) {


		for (int j = i + 1; j < d; j++) {

			if (v[i] > v[j]) {


				int aux = v[i];
				v[i] = v[j];
				v[j] = aux;
			}
		}

	}
}







//algoritm sortare 
  
 //                                0    1     2   3   4
 // sortat  i<d-1   v[i]>v[i+1]   121   1    15   88  -9     sortata     i   sortat  == false
 // 
 // true    0<4     123>1          1   121                   false       1
 // 
 //         1<4     131>15              15   121             false       2
 //         2<4     121>88                   88   121        false       3
 //         3<4     121>-9                        -9  121    false       4     
 //         4<4                                                                 true
 // 
 // true    1<4    15>88                                                 2
 //         2<4    88>-9                    -9    88        false        3
 //         3<4    88>121                                                4
 //         4<4                                                                 true       
 // 
 // true    1<4    15>-9               -9   15               false       2   
 //         2<4    15>88                                                 3
 //         3<4    88>21                                                4
 //         4<4                                                                  true
 // 
 // true    1<4                                        
 





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


void afisare(int x[],int d ) {

	for (int i = 0; i < d; i++) {
	
		cout << x[i] << " ";
	
	
	}





}


void  testare() {

	int v[100] = { 121,1,15,88,-9 };
	int d = 5;
	cout << "\n=============INAINTE======================" << endl;
	afisare(v, d);
	bubbleSort(v, d);

	///ana are mere

	cout << "\n=============Dupa======================" << endl;
	afisare(v, d);
}

                               //                 0  1  2  3  4   5   6  7  8  9
//binary search  (vectorul trebuie sa fie sortat) 12 32 43 57 212 321 54 78 98 111				key=54


// a<b   mj   v[mj]==key   v[mj]<key  a    v[mj]>key  b   

// true  5       false       true     6      false    10
// true  8        false      false    6       true     9
// true  7        false      false    6       true      8
// true  7        false      false    6        true     7
// true  6        true 











bool binarySearch(int v[], int d, int key) {           
	bubbleSort(v, d); 
	int a = 0;
	int b = d;
	int mj;

	while (a < b) {

		mj = (a + b) / 2;


		if (v[mj] == key) {

			return true;
		}

		if (v[mj] < key) {

			a = mj + 1;
		}

		if (v[mj] > key) {
			b = mj - 1;
		}
	}

	return false;
}

void testare1() {

	int v[100] = { 12 ,32 ,43, 57, 212, 321 };
	int d = 6;
	cout<<binarySearch(v, d, 321);



}
// algoritm interclasare vectori 
//a[]={1,3,5}
//b[]={2,4,6}
//      ct1            ct2      		ctpozC		a[ct1]		b[ct2]			a[ct1]cu b[ct2]      c[]      
//		0				0				0				1			2			1<2					1
//		1				0				1				3			2			2<3					2
//		1				1				2				3			4			3<4					3
//		2				1				3				5			4			4<5					4
//		2				2				4				5			6			5<6					5
//		3				2				5			nu mai avem		6			6					6
//==>vect final este {1,2,3,4,5,6}
void Interclasare(int a[], int da, int b[], int db, int c[]) {

	int ct1 = 0;
	int ct2 = 0;
	int ctpozC = 0;
	while (ct1 < da && ct2 < db) {
		if (a[ct1] > b[ct2]) {
			c[ctpozC] = b[ct2];
			ct2++;
			ctpozC++;

		}
		else {
			c[ctpozC] = a[ct1];
			ct1++;
			ctpozC++;

		
		}
		
	
	}
	while (ct1 < da) {
	
		c[ctpozC] = a[ct1];
		ct1++;
		ctpozC++;
	
	
	}
	while (ct2 < db) {
		c[ctpozC] = b[ct2];
		ct2++;
		ctpozC++;

	
	
	}

	afisare(c, da+db);











}
void  testare3() {

	int a[100] = { 4,6,12,17 };
	int da = 4;
	int b[100] = { 2,6,9 };
	int db = 3;
	int c[100];
	Interclasare(a, da, b, db, c);





}


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


       
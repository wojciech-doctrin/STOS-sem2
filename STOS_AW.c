#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

#define MAX_N 100
#define MAX_M 20

int tab_int[MAX_N]={0};	
float tab_f[MAX_M]={0};						// potrzebna w f7
unsigned int tab_us_int[MAX_M]={0};			// potrzebna w f9

using namespace std;

    /* === Wczytywanie tablicy === */
void read(int n){
    for(int i=0; i<n; i++)
        scanf("%i", &tab_int[i]);
}

	/* === Wczytanie tablicy zmiennoprzecinkowej === */ 
void read_f(int n){		
    
	for(int i=0; i<n; i++)
        scanf("%f", &tab_f[i]);
}

	/* === Wczytanie tablicy naturalnej === */
void read_us_int(int n){
    
	for(int i=0; i<n; i++)
        scanf ("%ui", &tab_us_int[i]);
}

	//=========================================================================================//
    /* === f0) Znajdź pozycje zawierające najmniejszą wartość dla wejściowego ciągu liczb. === */
	//=========================================================================================//

int f0(int n, int t){
	
	// Argument sterujący wczytywanie nowej tablicy, t==0 - praca na zewnętrznej tablicy (np w f1), t==1 - praca na fablicy f0
	if (t==1)							
    	read(n);						

	// Algorytm szukający indeks min
    int min_i = 0;
    int min_v = tab_int[0];

    for (int i=1; i<n; i++){            // szukanie indeksu min w tablicy
        if (tab_int[i] < min_v){		// warunek na wartość minimalną
            min_v = tab_int[i];			// nadpisanie wartości minimalnej
            min_i = i;                	// nadpisanie indeksu min
        }
    }
	
	// Wypisanie wyniku dla f0
    if (t==1){
        for (int i=1; i<=n; i++){        	
            if (tab_int[i-1] == min_v)
                printf ("%i ", i);        	
        }
    }
    return min_i; 		        // zwrócenie wartość pierwszej funkcji do wykorzystania w kolejnym problemie
}


	//============================================================================//
    /* ===                          MAIN                                      === */
	//============================================================================//

int main(){
    int subprogram, n;

    while(cin >> subprogram >> n){
        switch (subprogram){
            case 0:
                f0(n, 1);
                break;
/*			
			case 1:
                f1(n);
                break;
            case 2:
                f2(n);
                break;
            case 3:
                f3(n);
                break;
*/
        }
    }
    return 0;
}

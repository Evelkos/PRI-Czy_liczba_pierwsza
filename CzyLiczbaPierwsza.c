#include<stdio.h>
#include<math.h>
int main(){
	int liczba, i;

	puts("Program pobiera liczbe naturalna dodatnia od uzytkownika i sprawdza czy jest ona pierwsza\n");

	puts("Podaj liczbe naturalna, dodatnia : ");
	while(scanf("%d", &liczba)!=1 || liczba <= 0){
		puts("Blad danych.\nPodaj liczbe jeszcze raz.\n");
		while(getchar()!='\n');
	}

    if(liczba==2){
        printf("Liczba %d jest liczba pierwsza\n", liczba);
        return 0;
    }

	if(liczba==1 || liczba%2 == 0){ //sprawdzenie w tym miejscu podzielnosci przez 2, by uniknac zbednych operacji w petli
		printf("Liczba %d nie jest liczba pierwsza\n", liczba);
		return 0;
		}

	for(i=3; i<=(sqrt(liczba)) ; i+=2){ // nie sprawdzamy podzielnosci liczby przez wielokrotnosci 2, bo nie byla podzielna przez 2
		if(liczba%i == 0){
			printf("Liczba %d nie jest liczba pierwsza\n", liczba);
			return 0;
        }
    }

    printf("Liczba %d jest liczba pierwsza\n", liczba);

	return 0;
}

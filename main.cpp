#include "iostream"
#include "queue.h"
#include "conio.h"
#include "unistd.h"
using namespace std;

int main(){
	queue q;
	char pilih;
	string lagu;
	
	while(true){
		int playingTime = rand()%((9 - 1) + 1) + 1;
		q.tampilNode();
		cout << "\n\n";
		
		while(true){
			q.nowPlaying(playingTime);
			cout << "1. Tambah Playlist\n"
		 	 	 << "2. Keluar";
			if(kbhit()){
				pilih = getch();
				switch(pilih){
					case '1':
						cout << "\n\nNama Lagu : ";
						getline(cin, lagu);
						q.enqueue(lagu);
						break;
					case '2':
						exit(0);
						break;
					}
				break;
			}
			sleep(1);
				--playingTime;
			if(playingTime == 0){
				q.dequeue();
				break;
			}
			system("cls");
			q.tampilNode();
			cout << "\n\n";
		}
		system("cls");
	}
	return 0;
}

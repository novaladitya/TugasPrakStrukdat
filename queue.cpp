#include "iostream"
using namespace std;

struct node{
	string data;
	node *next;
};
node *head, *tail;

class queue{
	public:	
		void isiNode(){
			head = NULL;
			tail = NULL;
		}
		
		bool ifTailKosong(){
			if(tail == NULL)
				return true;
			else
				return false;
		}
		
		void enqueue(string dataBaru){
			node *nodeBaru = new node;
			nodeBaru->data = dataBaru;
			nodeBaru->next = NULL;
			if(ifTailKosong()){
				head = nodeBaru;
				tail = nodeBaru;
				head->next = NULL;
				tail->next = NULL;
			}else{
				tail->next = nodeBaru;
				tail = nodeBaru;
				tail->next = NULL;
			}
		}

		void dequeue(){
			node *hapus;
			if(!ifTailKosong()){
				if(head != tail){
					hapus = head;
					head = head->next;
					delete hapus;
				}
				else{
					head = NULL;
					tail = NULL;
				}
			}
		}
		
		void tampilNode(){
			node *dta = head;
			if(!ifTailKosong()){
				do{
					cout << dta->data << endl;
					dta = dta->next;
				}while(dta != NULL);
			}else{
				cout << "Playlist kosong";
			}
		}
		
		void nowPlaying(int time){
			if(!ifTailKosong())
				cout << "Now Playing : " << head->data << "    00:0" << time << endl;
			else
				cout << "Now Playing : Nothing\n";
		}
};

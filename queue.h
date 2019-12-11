#include "queue.cpp"

namespace N{
	struct node{
	};
	
	class queue{
		public:
			void isiNode();
			bool ifTailKosong();
			void enqueue(string dataBaru);
			void dequeue();
			void tampilNode();
			void nowPlaying(int time);
	};
}

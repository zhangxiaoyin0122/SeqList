#include <stdio.h>
#include <stdlib.h>

typedef struct seqList {
	size_t* _arrary;
	size_t _size;
	size_t _capacity;
}seqList;

void SeqListInit(seqList* sl) {
	sl->_arrary = (int*)malloc(sizeof(size_t) * 4);
	sl->_size = 0;
	sl->_capacity = 4;
}

void SeqListPushBlak(seqList* sl, size_t vaval) {  //Î²²å
	sl->_arrary[sl->_size++] = vaval;

}
void SeqListPrint(seqList* sl) {
	for (size_t i = 0; i < sl->_size; i++) {
		printf("%d ", sl->_arrary[i]);
	}
}
test() {
	seqList sl;
	SeqListInit(&sl);
	SeqListPushBlak(&sl, 1);
	SeqListPushBlak(&sl, 2);
	SeqListPushBlak(&sl, 3);
	SeqListPrint(&sl);
}
int main() {
	test();
	system("pause");
	return 0;
}
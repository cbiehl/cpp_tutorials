#include <iostream>
#include <string>

using namespace std;

void printElementsOld(const int *const a, const size_t size){
	for(const int *p = a; p != a + size; p++){
		cout << *p << ' ';
	}
}

void printElements(const int *const begin, const int *const end){
	for(const int *p = begin; p != end; p++){
		cout << *p << ' ';
	}
}

int *getArray(const size_t &size){
	//std::cout << "Größe: ";
	//std::cin >> size;
	std::cout << "Gewählte Größe: " << size << endl;
	std::cout << "Bitte die Zahlen eingeben: " << endl;
	
	int *a = new int[size];
	for(int i = 0; i < size; i++){
		std::cin >> a[i];
	}
	
	cout << endl;
	
	return a;
}

int main(int argc, char **argv){
	/*
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	printElements(a + 2, a + sizeof(a)/sizeof(a[0]) - 3);
	*/
	
	if(argc < 2){
		cout << "ERROR: missing argument";
		return -1;
	}
	
	cout << argv[0] << endl;
	const size_t size = stoi(argv[1]);
	int *a = getArray(size);
	printElements(a, a + size);
	
	delete[] a;
	
	return 0;
}

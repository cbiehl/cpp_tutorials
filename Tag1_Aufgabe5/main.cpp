#include <iostream>

void swapp(int *a, int *b){
	int c = *a;
	*a = *b;
	*b = c;
}

void swapr(int &a, int &b){
	int c = a;
	a = b;
	b = c;
}

void foo(int &i){
	int i2 = i;
	int &i3 = i;
	
	std::cout << "i = " << i << std::endl;
	std::cout << "i2 = " << i2 << std::endl;
	std::cout << "i3 = " << i3 << std::endl;
	std::cout << "&i = " << &i << std::endl;
	std::cout << "&i2 = " << &i2 << std::endl;
	std::cout << "&i3 = " << &i3 << std::endl;
}

void consttest(){
	int i = 1;
	int *iP = &i;
	const int *ciP = &i;
	int const *ciP2 = &i;
	int * const icP = &i;
	const int * const cicP = &i;
	
	int test;
	test = *ciP;
	test = *ciP2;
	test = *icP;
	//test = cicP; //invalid conversion from 'const int*' to 'int'
	//*ciP = test; //read-only location cannot be assigned
	//*ciP2 = test; //read-only location cannot be assigned
	//icP = &test; //read-only variable cannot be assigned
	//cicP = &test; //read-only variable cannot be assigned
	//*cicP = test; //read-only location cannot be assigned
	*icP = test;
	ciP2 = &test;
	ciP = &test;
	
	/*
	 *   If the 'const' keyword appears after the asterisk, the pointer variable is constant,
	 *   if it appears before the asterisk, the value that the pointer is pointing to is constant 
	 *   but the pointer variable itself can be assigned another value.
	 * 	 In other words: The 'const' applies to the keyword it's closest to: * or int.
	 * 
	 */
	 
	 int **iPP = &iP;
	 const int * const * cicPP = &iP;
	 int ** const iPcP = &iP;
	 
	 *iPP = &test;
	 //iPP = &test; //cannot convert from int* to int**
	 //*cicPP = &test; //error: assignment of read-only location
	 //**cicPP = &test; //error: assignment of read-only location
	 //iPcP = &test; //error: assignment of read-only variable
	 *iPcP = &test;
	 **iPcP = test;
}

void op1(int *a){
	
}

void op2(int a){
	
}

void op3(int &a){
	
}

void op4(const int **a){
	
}

int main(int argc, char **argv){
	
	int i = 42;
	int *j = &i;
	int const * const k = &i;
	int **l = &j;
	const int *m = &i;
	
	op2(*m);
	//op3(*m);
	op4(&m);
	
	int intVal = 42;
	int *p = &intVal;
	int &r = intVal;
	
	std::cout << intVal << std::endl;
	std::cout << &p << std::endl;
	std::cout << *&intVal << std::endl;
	std::cout << *&p << std::endl;
	std::cout << &*p << std::endl;
	std::cout << r << std::endl;
	std::cout << **&p << std::endl;
	std::cout << *&*&intVal << std::endl;
	std::cout << &*&p << std::endl;
	std::cout << *&*p << std::endl;
	
	int a = 42;
	int b = 7;
	
	swapp(&a, &b);
	
	std::cout << std::endl;
	std::cout << a << ' ' << b << std::endl;
	std::cout << std::endl;
	
	int var = 42;
	std::cout << "&var = " << &var << std::endl;
	
	foo(var);
	
	return 0;
}

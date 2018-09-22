#include <iostream>
#include <iterator>
#include <vector>
#include "AddFortyTwo.hpp"
#include "IsEven.hpp"
#include "Sum.hpp"

template<typename InIt, typename OutIt>
OutIt map(InIt first, InIt last, OutIt out_first, double(*func)(double d)){
	while(first != last){
		*out_first++ = func(*first++);
	}
	
	return out_first;
}

template<typename InIt, typename OutIt, typename Functor>
OutIt map_functor(InIt first, InIt last, OutIt out_first, Functor func) {
	while(first != last) {
		*out_first++ = func(*first++);
	}
	
	return out_first;
}

template<typename InIt, typename OutIt>
OutIt filter(InIt first, InIt last, OutIt out_first, bool(*pred)(double d)){
	while(first != last){
		if(pred(*first)){
			*out_first++ = *first++;
		}else{
			++first;
		}
	}
	
	return out_first;
}

template<typename InIt, typename OutIt, typename Functor>
OutIt filter_functor(InIt first, InIt last, OutIt out_first, Functor func){
	while(first != last){
		if(func(*first)){
			*out_first++ = *first++;
		}else{
			++first;
		}
	}
	
	return out_first;
}


template<typename InIt, typename RetT, typename RHS>
RetT reduce(InIt first, InIt last, RetT initialVal, RetT(*func)(RetT i, RHS j)){
	while(first != last){
		initialVal = func(initialVal, *first++);
	}
	
	return initialVal;
}

template<typename InIt, typename RetT, typename Functor>
RetT reduce_functor(InIt first, InIt last, RetT initialVal, Functor func){
	while(first != last){
		initialVal = func(initialVal, *first++);
	}
	
	return initialVal;
}

double sum(double d1, double d2){
	return d1 + d2;
}

double addFortyTwo(double d){
	return d + 42;
}

bool isGreaterEqualFifty(double d){
	return d >= 50;
}

bool isEven(int d){
	return d % 2 == 0;
}

int main(int argc, char **argv){
	
	std::vector<double> v;
	for(int i = 0; i < 10; ++i){
		//double j = i;
		v.push_back(i);
	}
	
	//map(v.begin(), v.end(), v.begin(), addFortyTwo);
	map_functor(v.begin(), v.end(), v.begin(), AddFortyTwo());
	
	std::vector<double>::iterator it = v.begin();
	for(it; it != v.end(); ++it){
		std::cout << *it << std::endl;
	}
	
	std::cout << std::endl;
	
	std::vector<double> v_filtered;
	//filter(v.begin(), v.end(), std::back_inserter(v_filtered), isGreaterEqualFifty);
	filter_functor(v.begin(), v.end(), std::back_inserter(v_filtered), IsEven());
	
	for(it = v_filtered.begin(); it != v_filtered.end(); ++it){
		std::cout << *it << std::endl;
	}
	
	std::cout << std::endl;
	
	std::cout << "Sum: " << std::endl;
	double d = reduce_functor(v.begin(), v.end(), 0.0, Sum<double>()); //reduce(v.begin(), v.end(), 0.0, sum);
	std::cout << d << std::endl;
	
	return 0;
}

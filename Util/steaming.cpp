#include <iostream>
#include <ostream>
#include <string>
#include "streaming.h"
using namespace std;

template<typename T>
void print(ostream & out, T data[], int count){
	out << "[";	
	for(int i=0; i<count; i++){		
		if(i>0) out << ", ";		
		out << data[i];
	}
	out << "]";
};

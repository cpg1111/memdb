#include "hash.h"
#include <string>
#include <stdlib>
#include <stdio>

template <T>
template <size_t N>
T keys[N];
T values[N];
int instances;

hash::hash(std::string (&keys)[N], std::string (&value)[N]){
	try{
		(keys.length > value.length || keys.length > value.length);
	}
	catch(...){
		printf("ERROR: CANNOT CREATE HASH BECAUSE EITHER THERE ARE MORE KEYS OR VALUES");
		return NULL;
	}
	this->keys = keys;
	this->values = value;
}

hash::stdPrint(){
	for(int i = 0; i<keys.length; i++){
		printf("Key %s : value %s", keys[i], values[i]);
	}
}

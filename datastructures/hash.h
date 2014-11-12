#ifndef HASH_H
#define HASH_H
#include <string>
#include <array>
using namespace std;

class hash{
public:
	hash();

	template <size_t N>
	hash(std::string (&keys)[N], std::string (&value)[N]);

	void stdPrint();

	int getLength();

	void getValue(std::string key);

	void setValue(std::string key);

	void erase();

private:
	template <T>
	template <size_t N>
	T keys[N];
	T values[N];
	int instances;
};

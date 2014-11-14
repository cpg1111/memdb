#ifndef HASH_H
#define HASH_H
#include <string>
#include <array>
using namespace std;

template <typename K, typename V, typename F = KeyHash<K>>
class hash {
	public:
		hash();

		~hash();
	
		bool get(const K &key, V &value);
 
		void put(const K &key, const V &value);
 
		void remove(const K &key);
 
	private:
		HashNode<K, V> **table;
		F hashFunc;
};

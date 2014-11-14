#include "hash.h"

HashNode<K, V> **table;
F hashFunc;

hash::hash() {
	table = new HashNode<K, V> *[TABLE_SIZE]();
}

hash::~hash() {
	for (int i = 0; i < TABLE_SIZE; ++i) {
		HashNode<K, V> *entry = table[i];
		while (entry != NULL) {
			HashNode<K, V> *prev = entry;
			entry = entry->getNext();
			delete prev;
		}
		table[i] = NULL;
	}
	delete [] table;
}

hash::get(const K &key, V &value) {
	unsigned long hashValue = hashFunc(key);
	HashNode<K, V> *entry = table[hashValue];
	while (entry != NULL) {
		if (entry->getKey() == key) {
			value = entry->getValue();
			return true;
		}
		entry = entry->getNext();
	}
	return false;
}

hash::put(const K &key, const V &value) {
	unsigned long hashValue = hashFunc(key);
	HashNode<K, V> *prev = NULL;
	HashNode<K, V> *entry = table[hashValue];
	while (entry != NULL && entry->getKey() != key) {
		prev = entry;
		entry = entry->getNext();
	}
	if (entry == NULL) {
		entry = new HashNode<K, V>(key, value);
		if (prev == NULL) {
			table[hashValue] = entry;
		} 
		else {
			prev->setNext(entry);
		}
	} 
	else {
		entry->setValue(value);
	}
}

hash::remove(const K &key) {
	unsigned long hashValue = hashFunc(key);
	HashNode<K, V> *prev = NULL;
	HashNode<K, V> *entry = table[hashValue];
	while (entry != NULL && entry->getKey() != key) {
		prev = entry;
		entry = entry->getNext();
	}
	if (entry == NULL) {
		return;
	}
	else {
		if (prev == NULL) {
			table[hashValue] = entry->getNext();
		}
		else {
			prev->setNext(entry->getNext());
		}
		delete entry;
	}
}

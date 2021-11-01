#include <string>
#include <map>
#include <utility>

#include "dict.h"

Dict* create_dict() {
	return new Dict{};
}

void free_dict(Dict* d) {
	delete d;
}

void dict_set(Dict* dict, const char*key, void* value) {
	std::string str;
	str.assign(key);
	for(std::pair<std::string, void*> p : dict->pair) {
		if(p.first == str) {
			p.second = value;
			return;
		}
	}
	dict->pair.push_back(std::pair<std::string, void*>(str, value));
}

void* dict_get(Dict* dict, const char*key, void* defaul) {
	std::string str;
	str.assign(key);
	for(std::pair<std::string, void*> p : dict->pair) {
		if(p.first == str) {
			return p.second;
		}
	}
	return defaul;
}

size_t dict_size(Dict* dict) {
	return dict->pair.size();
}

void* dict_at(Dict* dict, size_t pos) {
	std::string str;
	return dict->pair[pos].second;
}


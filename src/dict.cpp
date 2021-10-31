#include <string>

#include "dict.h"

void dict_set(Dict* dict, const char*key, void* value) {
	std::string str;
	str.assign(key);
	(*dict)[str] = value;
}

void* dict_get(Dict* dict, const char*key, void* defaul) {
	std::string str;
	str.assign(key);
	auto value = (*dict).find(str);
	if(value != (*dict).end()) { return (*dict)[str]; }
	return defaul;
}

#include <string>
#include <map>

#include "dict.h"

void dict_set(Dict* dict, const char*key, void* value) {
	std::map<std::string, void*> _dict = dict->_dict;;
	std::string str;
	str.assign(key);
	_dict[str] = value;
}

void* dict_get(Dict* dict, const char*key, void* defaul) {
	std::map<std::string, void*> _dict = dict->_dict;;
	std::string str;
	str.assign(key);
	auto value = _dict.find(str);
	if(value != _dict.end()) { return _dict[str]; }
	return defaul;
}

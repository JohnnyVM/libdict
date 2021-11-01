#ifndef DICT_H
#define DICT_H

#ifdef __cplusplus
#include <map>
#include <vector>
#include <utility>
#include <string>

class Dict {
	public:
	std::vector<std::pair<std::string, void*> > pair;
};

#else

typedef struct Dict Dict;

#endif

#ifdef __cplusplus
extern "C" {
#endif

extern Dict* create_dict();
extern void free_dict(Dict* dict);
extern void dict_set(Dict* dict, const char* key, void* value);
extern void* dict_get(Dict* dict, const char* key, void* defaul);
/* \brief return the value by position */
extern void* dict_at(Dict* dict, size_t pos);
extern size_t dict_size(Dict* dict);

#ifdef __cplusplus
}
#endif

#endif

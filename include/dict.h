#ifndef DICT_H
#define DICT_H

#ifdef __cplusplus
#include <map>
#include <string>

typedef std::map<std::string, void*> Dict;

#else

typedef struct dict Dict;

#endif

#ifdef __cplusplus
extern "C" {
#endif

extern void dict_set(Dict* dict, const char* key, void* value);
extern void* dict_get(Dict* dict, const char* key, void* defaul);

#ifdef __cplusplus
}
#endif

#endif

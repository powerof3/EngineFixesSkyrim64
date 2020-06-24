#ifndef EF_VERSION_INCLUDED
#define EF_VERSION_INCLUDED

#define MAKE_STR_HELPER(a_str) #a_str
#define MAKE_STR(a_str) MAKE_STR_HELPER(a_str)

#define EF_VERSION_MAJOR 5
#define EF_VERSION_MINOR 3
#define EF_VERSION_PATCH 1
#define EF_VERSION_BETA 0
#define EF_VERSION_VERSTRING   \
    MAKE_STR(EF_VERSION_MAJOR) \
    "." MAKE_STR(EF_VERSION_MINOR) "." MAKE_STR(EF_VERSION_PATCH) "." MAKE_STR(EF_VERSION_BETA)

#endif

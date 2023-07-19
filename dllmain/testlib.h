#ifndef CPP_TEST_LIBRARY_H
#define CPP_TEST_LIBRARY_H

#ifdef __cplusplus
#define C_API extern "C"
#else
#define C_API
#endif

typedef int ( *Cbf )(int a);

C_API void hello();

C_API int create(Cbf);

C_API int connect();

#endif //CPP_TEST_LIBRARY_H
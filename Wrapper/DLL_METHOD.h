#ifdef CLI
#define DLL_METHOD   __declspec( dllimport )
#else
#define DLL_METHOD   __declspec( dllexport )
#endif
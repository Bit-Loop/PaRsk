#ifndef CONFIG_H // if CONFIG_H is not defined 
#define CONFIG_H // then define it here.
#ifdef __cplusplus //check if using a C++ compiler
extern "C" { // if true ^ then use C naming rules for C++ compilation
#endif

	define regWidth uint32_t;
	
#ifdef __cplusplus // if true exit the extern c block
}
#endif
#endif

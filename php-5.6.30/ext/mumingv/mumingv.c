//mumingv.c
#include "mumingv.h"

//module entry
zend_module_entry mumingv_module_entry = {
#if ZEND_MODULE_API_NO >= 20010901
     STANDARD_MODULE_HEADER,
#endif
    "mumingv", //这个地方是扩展名称，往往我们会在这个地方使用一个宏。
    NULL, /* Functions */
    NULL, /* MINIT */
    NULL, /* MSHUTDOWN */
    NULL, /* RINIT */
    NULL, /* RSHUTDOWN */
    NULL, /* MINFO */
#if ZEND_MODULE_API_NO >= 20010901
    "2.1", //这个地方是我们扩展的版本
#endif
    STANDARD_MODULE_PROPERTIES
};

#ifdef COMPILE_DL_MUMINGV
ZEND_GET_MODULE(mumingv)
#endif

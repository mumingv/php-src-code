//php_mumingv.h
#ifndef MUMINGV_H
#define MUMINGV_H

//加载config.h，如果配置了的话
#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

//加载php头文件
#include "php.h"
#define phpext_mumingv_ptr &mumingv_module_entry
extern zend_module_entry mumingv_module_entry;

#endif

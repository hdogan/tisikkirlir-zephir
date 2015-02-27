
/* This file was generated automatically by Zephir do not modify it! */

#ifndef PHP_TISIKKIRLIR_H
#define PHP_TISIKKIRLIR_H 1

#ifdef PHP_WIN32
#define ZEPHIR_RELEASE 1
#endif

#include "kernel/globals.h"

#define PHP_TISIKKIRLIR_NAME        "tisikkirlir"
#define PHP_TISIKKIRLIR_VERSION     "0.0.1"
#define PHP_TISIKKIRLIR_EXTNAME     "tisikkirlir"
#define PHP_TISIKKIRLIR_AUTHOR      "Hidayet Dogan"
#define PHP_TISIKKIRLIR_ZEPVERSION  "0.6.0a"
#define PHP_TISIKKIRLIR_DESCRIPTION "Zephir port of @askn's tisikkirlir gem."



ZEND_BEGIN_MODULE_GLOBALS(tisikkirlir)

	int initialized;

	/* Memory */
	zephir_memory_entry *start_memory; /**< The first preallocated frame */
	zephir_memory_entry *end_memory; /**< The last preallocate frame */
	zephir_memory_entry *active_memory; /**< The current memory frame */

	/* Virtual Symbol Tables */
	zephir_symbol_table *active_symbol_table;

	/** Function cache */
	HashTable *fcache;

	/* Cache enabled */
	unsigned int cache_enabled;

	/* Max recursion control */
	unsigned int recursive_lock;

	/* Global constants */
	zval *global_true;
	zval *global_false;
	zval *global_null;
	
ZEND_END_MODULE_GLOBALS(tisikkirlir)

#ifdef ZTS
#include "TSRM.h"
#endif

ZEND_EXTERN_MODULE_GLOBALS(tisikkirlir)

#ifdef ZTS
	#define ZEPHIR_GLOBAL(v) TSRMG(tisikkirlir_globals_id, zend_tisikkirlir_globals *, v)
#else
	#define ZEPHIR_GLOBAL(v) (tisikkirlir_globals.v)
#endif

#ifdef ZTS
	#define ZEPHIR_VGLOBAL ((zend_tisikkirlir_globals *) (*((void ***) tsrm_ls))[TSRM_UNSHUFFLE_RSRC_ID(tisikkirlir_globals_id)])
#else
	#define ZEPHIR_VGLOBAL &(tisikkirlir_globals)
#endif

#define ZEPHIR_API ZEND_API

#define zephir_globals_def tisikkirlir_globals
#define zend_zephir_globals_def zend_tisikkirlir_globals

extern zend_module_entry tisikkirlir_module_entry;
#define phpext_tisikkirlir_ptr &tisikkirlir_module_entry

#endif

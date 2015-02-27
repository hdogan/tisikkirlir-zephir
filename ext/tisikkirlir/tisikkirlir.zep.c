
#ifdef HAVE_CONFIG_H
#include "../ext_config.h"
#endif

#include <php.h>
#include "../php_ext.h"
#include "../ext.h"

#include <Zend/zend_operators.h>
#include <Zend/zend_exceptions.h>
#include <Zend/zend_interfaces.h>

#include "kernel/main.h"
#include "kernel/memory.h"
#include "kernel/fcall.h"


ZEPHIR_INIT_CLASS(Tisikkirlir_Tisikkirlir) {

	ZEPHIR_REGISTER_CLASS(Tisikkirlir, Tisikkirlir, tisikkirlir, tisikkirlir, tisikkirlir_tisikkirlir_method_entry, 0);

	return SUCCESS;

}

PHP_METHOD(Tisikkirlir_Tisikkirlir, tsk) {

	int ZEPHIR_LAST_CALL_STATUS;
	zephir_nts_static zephir_fcall_cache_entry *_3 = NULL;
	zval *message, *_0 = NULL, *_1 = NULL, *_2 = NULL;

	ZEPHIR_MM_GROW();
	zephir_fetch_params(1, 1, 0, &message);



	ZEPHIR_INIT_VAR(_0);
	ZVAL_STRING(_0, "/A|E|I|O|Ö|U|Ü/u", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_VAR(_1);
	ZVAL_STRING(_1, "İ", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_CALL_FUNCTION(&_2, "preg_replace", &_3, _0, _1, message);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	ZEPHIR_INIT_NVAR(_0);
	ZVAL_STRING(_0, "/a|e|ı|o|ö|u|ü/u", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_INIT_NVAR(_1);
	ZVAL_STRING(_1, "i", ZEPHIR_TEMP_PARAM_COPY);
	ZEPHIR_RETURN_CALL_FUNCTION("preg_replace", &_3, _0, _1, _2);
	zephir_check_temp_parameter(_0);
	zephir_check_temp_parameter(_1);
	zephir_check_call_status();
	RETURN_MM();

}


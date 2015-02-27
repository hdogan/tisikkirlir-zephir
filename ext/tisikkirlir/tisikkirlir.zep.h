
extern zend_class_entry *tisikkirlir_tisikkirlir_ce;

ZEPHIR_INIT_CLASS(Tisikkirlir_Tisikkirlir);

PHP_METHOD(Tisikkirlir_Tisikkirlir, tsk);

ZEND_BEGIN_ARG_INFO_EX(arginfo_tisikkirlir_tisikkirlir_tsk, 0, 0, 1)
	ZEND_ARG_INFO(0, message)
ZEND_END_ARG_INFO()

ZEPHIR_INIT_FUNCS(tisikkirlir_tisikkirlir_method_entry) {
	PHP_ME(Tisikkirlir_Tisikkirlir, tsk, arginfo_tisikkirlir_tisikkirlir_tsk, ZEND_ACC_PUBLIC|ZEND_ACC_STATIC)
  PHP_FE_END
};

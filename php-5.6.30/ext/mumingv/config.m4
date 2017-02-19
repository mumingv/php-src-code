PHP_ARG_ENABLE(mumingv,
    [Whether to enable the "mumingv" extension],
    [  enable-mumingv        Enable "mumingv" extension support])

if test $PHP_MUMINGV != "no"; then
    PHP_SUBST(MUMINGV_SHARED_LIBADD)
    PHP_NEW_EXTENSION(mumingv, mumingv.c, $ext_shared)
fi

// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// encrypt_password
String encrypt_password(String password, String user);
RcppExport SEXP rpg_encrypt_password(SEXP passwordSEXP, SEXP userSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type password(passwordSEXP );
        Rcpp::traits::input_parameter< String >::type user(userSEXP );
        String __result = encrypt_password(password, user);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}

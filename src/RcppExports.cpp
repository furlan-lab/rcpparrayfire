// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/RcppArrayFire.h"
#include <Rcpp.h>

using namespace Rcpp;

// fastLmPure
Rcpp::List fastLmPure(const Rcpp::NumericMatrix& X, const Rcpp::NumericVector& y, bool useDouble);
RcppExport SEXP _RcppArrayFire_fastLmPure(SEXP XSEXP, SEXP ySEXP, SEXP useDoubleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::NumericMatrix& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const Rcpp::NumericVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type useDouble(useDoubleSEXP);
    rcpp_result_gen = Rcpp::wrap(fastLmPure(X, y, useDouble));
    return rcpp_result_gen;
END_RCPP
}
// fastRunif
af::array fastRunif(const int32_t n, const double min, const double max, bool useDouble);
RcppExport SEXP _RcppArrayFire_fastRunif(SEXP nSEXP, SEXP minSEXP, SEXP maxSEXP, SEXP useDoubleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int32_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type min(minSEXP);
    Rcpp::traits::input_parameter< const double >::type max(maxSEXP);
    Rcpp::traits::input_parameter< bool >::type useDouble(useDoubleSEXP);
    rcpp_result_gen = Rcpp::wrap(fastRunif(n, min, max, useDouble));
    return rcpp_result_gen;
END_RCPP
}
// fastRnorm
af::array fastRnorm(const int32_t n, const double mean, const double sd, bool useDouble);
RcppExport SEXP _RcppArrayFire_fastRnorm(SEXP nSEXP, SEXP meanSEXP, SEXP sdSEXP, SEXP useDoubleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int32_t >::type n(nSEXP);
    Rcpp::traits::input_parameter< const double >::type mean(meanSEXP);
    Rcpp::traits::input_parameter< const double >::type sd(sdSEXP);
    Rcpp::traits::input_parameter< bool >::type useDouble(useDoubleSEXP);
    rcpp_result_gen = Rcpp::wrap(fastRnorm(n, mean, sd, useDouble));
    return rcpp_result_gen;
END_RCPP
}
// arrayfire_device_info
Rcpp::List arrayfire_device_info();
RcppExport SEXP _RcppArrayFire_arrayfire_device_info() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(arrayfire_device_info());
    return rcpp_result_gen;
END_RCPP
}
// arrayfire_set_device
void arrayfire_set_device(const int index);
RcppExport SEXP _RcppArrayFire_arrayfire_set_device(SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type index(indexSEXP);
    arrayfire_set_device(index);
    return R_NilValue;
END_RCPP
}
// arrayfire_get_device
int arrayfire_get_device();
RcppExport SEXP _RcppArrayFire_arrayfire_get_device() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(arrayfire_get_device());
    return rcpp_result_gen;
END_RCPP
}
// arrayfire_count_device
int arrayfire_count_device();
RcppExport SEXP _RcppArrayFire_arrayfire_count_device() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(arrayfire_count_device());
    return rcpp_result_gen;
END_RCPP
}
// arrayfire_info
void arrayfire_info(const bool verbose);
RcppExport SEXP _RcppArrayFire_arrayfire_info(SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const bool >::type verbose(verboseSEXP);
    arrayfire_info(verbose);
    return R_NilValue;
END_RCPP
}
// arrayfire_set_seed
void arrayfire_set_seed(const double seed);
RcppExport SEXP _RcppArrayFire_arrayfire_set_seed(SEXP seedSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const double >::type seed(seedSEXP);
    arrayfire_set_seed(seed);
    return R_NilValue;
END_RCPP
}
// arrayfire_get_seed
double arrayfire_get_seed();
RcppExport SEXP _RcppArrayFire_arrayfire_get_seed() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(arrayfire_get_seed());
    return rcpp_result_gen;
END_RCPP
}
// arrayfire_get_active_backend
std::string arrayfire_get_active_backend();
RcppExport SEXP _RcppArrayFire_arrayfire_get_active_backend() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(arrayfire_get_active_backend());
    return rcpp_result_gen;
END_RCPP
}
// arrayfire_get_available_backends
Rcpp::CharacterVector arrayfire_get_available_backends();
RcppExport SEXP _RcppArrayFire_arrayfire_get_available_backends() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(arrayfire_get_available_backends());
    return rcpp_result_gen;
END_RCPP
}
// arrayfire_set_backend
void arrayfire_set_backend(std::string backend);
RcppExport SEXP _RcppArrayFire_arrayfire_set_backend(SEXP backendSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string >::type backend(backendSEXP);
    arrayfire_set_backend(backend);
    return R_NilValue;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_RcppArrayFire_fastLmPure", (DL_FUNC) &_RcppArrayFire_fastLmPure, 3},
    {"_RcppArrayFire_fastRunif", (DL_FUNC) &_RcppArrayFire_fastRunif, 4},
    {"_RcppArrayFire_fastRnorm", (DL_FUNC) &_RcppArrayFire_fastRnorm, 4},
    {"_RcppArrayFire_arrayfire_device_info", (DL_FUNC) &_RcppArrayFire_arrayfire_device_info, 0},
    {"_RcppArrayFire_arrayfire_set_device", (DL_FUNC) &_RcppArrayFire_arrayfire_set_device, 1},
    {"_RcppArrayFire_arrayfire_get_device", (DL_FUNC) &_RcppArrayFire_arrayfire_get_device, 0},
    {"_RcppArrayFire_arrayfire_count_device", (DL_FUNC) &_RcppArrayFire_arrayfire_count_device, 0},
    {"_RcppArrayFire_arrayfire_info", (DL_FUNC) &_RcppArrayFire_arrayfire_info, 1},
    {"_RcppArrayFire_arrayfire_set_seed", (DL_FUNC) &_RcppArrayFire_arrayfire_set_seed, 1},
    {"_RcppArrayFire_arrayfire_get_seed", (DL_FUNC) &_RcppArrayFire_arrayfire_get_seed, 0},
    {"_RcppArrayFire_arrayfire_get_active_backend", (DL_FUNC) &_RcppArrayFire_arrayfire_get_active_backend, 0},
    {"_RcppArrayFire_arrayfire_get_available_backends", (DL_FUNC) &_RcppArrayFire_arrayfire_get_available_backends, 0},
    {"_RcppArrayFire_arrayfire_set_backend", (DL_FUNC) &_RcppArrayFire_arrayfire_set_backend, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_RcppArrayFire(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}

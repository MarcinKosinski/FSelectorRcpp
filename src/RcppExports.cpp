// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// cutOff_k
std::vector< std::string > cutOff_k(std::vector< std::string >& x1, std::vector<double>& x2, double k);
RcppExport SEXP FSelectorRcpp_cutOff_k(SEXP x1SEXP, SEXP x2SEXP, SEXP kSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< std::vector< std::string >& >::type x1(x1SEXP);
    Rcpp::traits::input_parameter< std::vector<double>& >::type x2(x2SEXP);
    Rcpp::traits::input_parameter< double >::type k(kSEXP);
    __result = Rcpp::wrap(cutOff_k(x1, x2, k));
    return __result;
END_RCPP
}
// fs_cut_index
NumericVector fs_cut_index(const NumericVector& x, const IntegerVector& y);
RcppExport SEXP FSelectorRcpp_fs_cut_index(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    __result = Rcpp::wrap(fs_cut_index(x, y));
    return __result;
END_RCPP
}
// fs_mdl_stop
double fs_mdl_stop(const int& ci, const IntegerVector& y, const double& entropy);
RcppExport SEXP FSelectorRcpp_fs_mdl_stop(SEXP ciSEXP, SEXP ySEXP, SEXP entropySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const int& >::type ci(ciSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const double& >::type entropy(entropySEXP);
    __result = Rcpp::wrap(fs_mdl_stop(ci, y, entropy));
    return __result;
END_RCPP
}
// fs_part
NumericVector fs_part(const NumericVector& x, const IntegerVector& y);
RcppExport SEXP FSelectorRcpp_fs_part(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    __result = Rcpp::wrap(fs_part(x, y));
    return __result;
END_RCPP
}
// discretize_cpp
IntegerVector discretize_cpp(const NumericVector& x, const IntegerVector& y);
RcppExport SEXP FSelectorRcpp_discretize_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const IntegerVector& >::type y(ySEXP);
    __result = Rcpp::wrap(discretize_cpp(x, y));
    return __result;
END_RCPP
}
// fs_entropy1d
double fs_entropy1d(SEXP x);
RcppExport SEXP FSelectorRcpp_fs_entropy1d(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(fs_entropy1d(x));
    return __result;
END_RCPP
}
// fs_numeric_entropy
double fs_numeric_entropy(const NumericVector& x);
RcppExport SEXP FSelectorRcpp_fs_numeric_entropy(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< const NumericVector& >::type x(xSEXP);
    __result = Rcpp::wrap(fs_numeric_entropy(x));
    return __result;
END_RCPP
}
// information_gain_cpp
List information_gain_cpp(List xx, IntegerVector y, int threads);
RcppExport SEXP FSelectorRcpp_information_gain_cpp(SEXP xxSEXP, SEXP ySEXP, SEXP threadsSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< List >::type xx(xxSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type threads(threadsSEXP);
    __result = Rcpp::wrap(information_gain_cpp(xx, y, threads));
    return __result;
END_RCPP
}
// sparse_information_gain_cpp
List sparse_information_gain_cpp(arma::sp_mat x, IntegerVector y);
RcppExport SEXP FSelectorRcpp_sparse_information_gain_cpp(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< arma::sp_mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type y(ySEXP);
    __result = Rcpp::wrap(sparse_information_gain_cpp(x, y));
    return __result;
END_RCPP
}
// fs_count_levels
int fs_count_levels(SEXP x);
RcppExport SEXP FSelectorRcpp_fs_count_levels(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(fs_count_levels(x));
    return __result;
END_RCPP
}
// fs_order
IntegerVector fs_order(SEXP x);
RcppExport SEXP FSelectorRcpp_fs_order(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type x(xSEXP);
    __result = Rcpp::wrap(fs_order(x));
    return __result;
END_RCPP
}
// fs_table1d
IntegerVector fs_table1d(SEXP& x);
RcppExport SEXP FSelectorRcpp_fs_table1d(SEXP xSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP& >::type x(xSEXP);
    __result = Rcpp::wrap(fs_table1d(x));
    return __result;
END_RCPP
}
// fs_table_numeric2d
std::vector<int> fs_table_numeric2d(NumericVector& x, NumericVector& y);
RcppExport SEXP FSelectorRcpp_fs_table_numeric2d(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< NumericVector& >::type x(xSEXP);
    Rcpp::traits::input_parameter< NumericVector& >::type y(ySEXP);
    __result = Rcpp::wrap(fs_table_numeric2d(x, y));
    return __result;
END_RCPP
}

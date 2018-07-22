// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// pva
List pva(const NumericVector vy_in, const NumericMatrix mX_in, const NumericMatrix mGamma_in, const std::string prior, const std::string modelprior, const Nullable<NumericVector> modelpriorvec_in, const bool bUnique, const double lambda, const int cores);
RcppExport SEXP blma_pva(SEXP vy_inSEXP, SEXP mX_inSEXP, SEXP mGamma_inSEXP, SEXP priorSEXP, SEXP modelpriorSEXP, SEXP modelpriorvec_inSEXP, SEXP bUniqueSEXP, SEXP lambdaSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const NumericVector >::type vy_in(vy_inSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type mX_in(mX_inSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type mGamma_in(mGamma_inSEXP);
    Rcpp::traits::input_parameter< const std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const std::string >::type modelprior(modelpriorSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector> >::type modelpriorvec_in(modelpriorvec_inSEXP);
    Rcpp::traits::input_parameter< const bool >::type bUnique(bUniqueSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< const int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(pva(vy_in, mX_in, mGamma_in, prior, modelprior, modelpriorvec_in, bUnique, lambda, cores));
    return rcpp_result_gen;
END_RCPP
}
// blma
List blma(NumericVector vy, NumericMatrix mX, std::string prior, std::string modelprior, Nullable<NumericVector> modelpriorvec, const unsigned int cores);
RcppExport SEXP blma_blma(SEXP vySEXP, SEXP mXSEXP, SEXP priorSEXP, SEXP modelpriorSEXP, SEXP modelpriorvecSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vy(vySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelprior(modelpriorSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type modelpriorvec(modelpriorvecSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(blma(vy, mX, prior, modelprior, modelpriorvec, cores));
    return rcpp_result_gen;
END_RCPP
}
// blma_fixed
List blma_fixed(NumericVector vy, NumericMatrix mX, NumericMatrix mZ, std::string prior, std::string modelprior, Nullable<NumericVector> modelpriorvec, const unsigned int cores);
RcppExport SEXP blma_blma_fixed(SEXP vySEXP, SEXP mXSEXP, SEXP mZSEXP, SEXP priorSEXP, SEXP modelpriorSEXP, SEXP modelpriorvecSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vy(vySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mZ(mZSEXP);
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelprior(modelpriorSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type modelpriorvec(modelpriorvecSEXP);
    Rcpp::traits::input_parameter< const unsigned int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(blma_fixed(vy, mX, mZ, prior, modelprior, modelpriorvec, cores));
    return rcpp_result_gen;
END_RCPP
}
// graycode
IntegerMatrix graycode(unsigned int varying, unsigned int fixed);
RcppExport SEXP blma_graycode(SEXP varyingSEXP, SEXP fixedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type varying(varyingSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type fixed(fixedSEXP);
    rcpp_result_gen = Rcpp::wrap(graycode(varying, fixed));
    return rcpp_result_gen;
END_RCPP
}
// sampler_new_new
List sampler_new_new(const int iterations, const NumericVector vy_in, const NumericMatrix mX_in, const std::string prior, const std::string modelprior, const Nullable<NumericVector> modelpriorvec_in, const int cores);
RcppExport SEXP blma_sampler_new_new(SEXP iterationsSEXP, SEXP vy_inSEXP, SEXP mX_inSEXP, SEXP priorSEXP, SEXP modelpriorSEXP, SEXP modelpriorvec_inSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type vy_in(vy_inSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type mX_in(mX_inSEXP);
    Rcpp::traits::input_parameter< const std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const std::string >::type modelprior(modelpriorSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector> >::type modelpriorvec_in(modelpriorvec_inSEXP);
    Rcpp::traits::input_parameter< const int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(sampler_new_new(iterations, vy_in, mX_in, prior, modelprior, modelpriorvec_in, cores));
    return rcpp_result_gen;
END_RCPP
}
// sampler_new
List sampler_new(const int iterations, const NumericVector vy_in, const NumericMatrix mX_in, const std::string prior, const std::string modelprior, const Nullable<NumericVector> modelpriorvec_in, const int cores);
RcppExport SEXP blma_sampler_new(SEXP iterationsSEXP, SEXP vy_inSEXP, SEXP mX_inSEXP, SEXP priorSEXP, SEXP modelpriorSEXP, SEXP modelpriorvec_inSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type vy_in(vy_inSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type mX_in(mX_inSEXP);
    Rcpp::traits::input_parameter< const std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const std::string >::type modelprior(modelpriorSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector> >::type modelpriorvec_in(modelpriorvec_inSEXP);
    Rcpp::traits::input_parameter< const int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(sampler_new(iterations, vy_in, mX_in, prior, modelprior, modelpriorvec_in, cores));
    return rcpp_result_gen;
END_RCPP
}
// sampler
List sampler(const int iterations, const NumericVector vy_in, const NumericMatrix mX_in, const std::string prior, const std::string modelprior, const Nullable<NumericVector> modelpriorvec_in, const int cores);
RcppExport SEXP blma_sampler(SEXP iterationsSEXP, SEXP vy_inSEXP, SEXP mX_inSEXP, SEXP priorSEXP, SEXP modelpriorSEXP, SEXP modelpriorvec_inSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const int >::type iterations(iterationsSEXP);
    Rcpp::traits::input_parameter< const NumericVector >::type vy_in(vy_inSEXP);
    Rcpp::traits::input_parameter< const NumericMatrix >::type mX_in(mX_inSEXP);
    Rcpp::traits::input_parameter< const std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const std::string >::type modelprior(modelpriorSEXP);
    Rcpp::traits::input_parameter< const Nullable<NumericVector> >::type modelpriorvec_in(modelpriorvec_inSEXP);
    Rcpp::traits::input_parameter< const int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(sampler(iterations, vy_in, mX_in, prior, modelprior, modelpriorvec_in, cores));
    return rcpp_result_gen;
END_RCPP
}

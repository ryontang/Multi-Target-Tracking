#pragma once
#include <armadillo>
#include <opencv2\opencv.hpp>
#include "model.h"
#include <chrono>
#include <random>
#include <math.h>


class EKF2{
	model kfmodel;

	double sigv = 0.2;

public:
	void kf(int, double, int, arma::mat, arma::mat &, arma::mat, 
				arma::mat, arma::mat &, arma::mat &, arma::mat &,
				arma::mat &);
	void ipda();
};


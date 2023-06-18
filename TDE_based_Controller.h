#include <opencv2\opencv.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <math.h>
#include <queue>

using namespace cv;

#pragma once
class Dynamic{
public:
	// ATDC parameters
	double ddot_beta = 0.0;
	double s = 0.0, phi = 0.0;
	double xi = 0.0, d_xi = 0.0, xi0 = 0.0, xi_max = 0.0;
	double mu1 = 0.0, mu2 = 0.0, k_eta = 0.0, lambda_c = 0.0;
	double delta = 0.0, Delta = 0.0;
	double alpha1 = 0.0, alpha2 = 0.0; //r1 = 0.0, r2 = 0.0, lambda1 = 0.0, lambda2 = 0.0, 
	double w1 = 0.0, w2 = 0.0;
	double M = 0.0, k = 0.0, M0 = 0.0; //, k0 = 0.0
	double eta = 0.0, kappa = 0.0;
	double kappa1 = 0.0, kappa2 = 0.0;
	double p = 0.0, q = 0.0;
	double GL_sum_s = 0.0, GL_sum_phi; // Riemann-Liouville 导数的积分
	double tau = 0.0; // 控制输入
public:
	Dynamic();
	~Dynamic();
	// Time-delay control gain-adapting laws
	void ATDC_adaptive_law(double & tracking_error);
	// Calculation of control input
	double ATDC(double & tracking_error);
}

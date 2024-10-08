/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: BIP (Block-lterative Projection) method (No MPI)
Module: Problem-Data.h (Problem Data)
Prefix: PD
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/
#include "Problem-Types.h"		// Problem Parameters 
using namespace std;
//========================== Problem variables ====================================
static int PD_m;				// Number of inequalities
static int PD_meq;				// Number of constraints being equations
static int PD_n;				// Space dimension
static int PD_neq;				// Dimension of the subspace of intersection of equation-hyperplanes (PD_n = PD_neq + PD_meq)
static int PD_iterNo;			// Number of iterations
#ifdef PP_COS_MODE
static double	PD_cos;				// Cosine between previous and next projecting vectors
static double	PD_normPrevious_r;	// Norm of previous projecting vector
#endif
//========================== Problem structures ====================================
static PT_matrix_T PD_A;			// Matrix of constraint coefficients
static bool PD_isEquation[PP_MM];	// Constraint is equation
static PT_column_T PD_b;			// Column of the constant terms of the system Ax <= PD_b
static PT_vector_T PD_c;			// Objective Function Coefficients
static PT_vector_T PD_x;			// Current approximation
static PT_vector_T PD_hi;			// Higher bound
static PT_vector_T PD_lo;			// Lower bound
static PT_column_T PD_norm_a;		// Column of norms of matrix rows
#ifdef PP_COS_MODE
static PT_vector_T PD_previous_r;	// Previous projecting vector
#endif
//========================== Input/Output ====================================
static string PD_problemName;
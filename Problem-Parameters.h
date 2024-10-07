/*==============================================================================
Project: LiFe - New Linear Programming Solvers
Theme: BIP (Block-lterative Projection) method (MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/

/*----------------------------- Problems -------------------------------*/

//#define PP_PATH "Problems/"

/**
#include "_Problems05-1.h"
#define PP_PATH "../../Set-of-LP-Problems/Rnd-LP/"

/**
#include "_Problems10-1.h"
#define PP_PATH "../../Set-of-LP-Problems/Rnd-LP/"

/**
#include "_Problems-Klee-Minty-Cube.h"
#define PP_PATH "../../Set-of-LP-Problems/Klee-Minty-Cube/"

/**
#include "_Problems-NetLib-LP.h"
#define PP_PATH "../../Set-of-LP-Problems/NetLib-LP/"

/**/
#include "_Problems-Miscellaneous.h"
#define PP_PATH "../../Set-of-LP-Problems/Miscellaneous-LP/"

/*---------------------------------------------------------------------*/

#define PP_METHOD_NAME "BIP (no MPI)"

//-------------------------- Compilation Modes -----------------------
#define PP_DEBUG
#define PP_MATRIX_OUTPUT
//#define PP_COS_MODE
//#define PP_SAVE_ITER_IN_X0
#define PP_SAVE_RESULT

//=========================== Problem Parameters =========================
#ifdef PP_MPS_FORMAT
#define PP_MM							(PP_M+3*PP_N)		// Maximal number of constraints
#else
#define PP_MM							(PP_M+2*PP_N)		// Maximal number of constraints
#endif // PP_MPS_FORMAT
#define PP_MAX_ITER_COUNT		10000000000		// Maximal count of iterations
#define PP_DBL_MAX				1E+308			// Highest value

//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
#define PP_SETW 14
//------------------------- Matrix format ----------------
#define PP_INFINITY			1E+308		// Highest bound in *_hi.mtx
#define PP_MTX_PREFIX		"lp_"
#define PP_MTX_POSTFIX_A	".mtx"
#define PP_MTX_POSTFIX_B	"_b.mtx"
#define PP_MTX_POSTFIX_C	"_c.mtx"
#define PP_MTX_POSTFIX_HI	"_hi.mtx"
#define PP_MTX_POSTFIX_LO	"_lo.mtx"
#define PP_MTX_POSTFIX_X0	"_x0.mtx" // Starting point
#define PP_MTX_POSTFIX_Z0	"_z0.mtx" // Boundary point
//------------------------- MPS format ----------------
#define PP_MPS_PREFIX		"lp_"
#define PP_MPS_EXTENSION	".mps"
#define PP_MAX_NUMBER_OF_ROWS	(PP_M+2)
#define PP_MAX_NUMBER_OF_COLS	(PP_N*(PP_M+1)+1)
//-------------------------- Jobs  -----------------------
// Not used.
//------------- Locations -------------
#define PP_DEGENERATE_INEQUALITY	0
#define PP_ON_HYPERPLANE			1
#define PP_INSIDE_HALFSPACE			2
#define PP_OUTSIDE_HALFSPACE		3
#define PP_PARALLEL					4
#define PP_RECESSIVE				5
#define PP_NONDEGENERATE_PROJECTING	9
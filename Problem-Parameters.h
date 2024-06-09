/*==============================================================================
Project: LiFe
Theme: BIP (Block-lterative Projection) method (MPI)
Module: Problem-Parameters.h (Problem Parameters)
Prefix: PP
Author: Leonid B. Sokolinsky
This source code has been produced with using BSF-skeleton
==============================================================================*/

/*----------------------------- Problems -------------------------------*/

/**
#include "_Problems05-1.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/LP-Rnd-Problems/"

/**
#include "_Problems22-1.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/LP-Rnd-Problems/"

/**
#include "_Problems-Cone-LP.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/LP-Cone-Problems/"

/**/
#include "_Problems-NetLib-LP.h"
#define PP_PATH "D:/YandexDisk/_private/Programming/LP-NetLib-Problems/"

/**
#define PP_PATH "Problems/"
/*---------------------------------------------------------------------*/

//-------------------------- Compilation Modes -----------------------
//#define PP_DEBUG
#define PP_SAVE_RESULT
#define PP_COS_MODE
//#define PP_MATRIX_OUTPUT

//=========================== Problem Parameters =========================
#define PP_MM					(2*PP_M+2*PP_N)	// Maximal number of inequalities
#define PP_MAX_ITER_COUNT		10000000000		// Maximal count of iterations
#define PP_DBL_MAX				1E+308			// Highest value
#define PP_START_SHIFT_LENGTH	1
//-------------------------- Input/Outpoot Parameters ---------------------------
#define PP_OUTPUT_LIMIT	8	// Number of Elements to output
#define PP_SETW 14
//------------------------- Matrix format ----------------
#define PP_INFINITY				1E+308		// Highest bound in *_hi.mtx
#define PP_MTX_PREFIX			"lp_"
#define PP_MTX_POSTFIX_A		".mtx"
#define PP_MTX_POSTFIX_B		"_b.mtx"
#define PP_MTX_POSTFIX_LO		"_lo.mtx"
#define PP_MTX_POSTFIX_HI		"_hi.mtx"
#define PP_MTX_POSTFIX_C		"_c.mtx"
#define PP_MTX_POSTFIX_X0		"_x0.mtx" // Starting point
#define PP_MTX_POSTFIX_Z0		"_z0.mtx" // Boundary point

//------------- Vector Projection Onto Halfspace exit codes -------------
#define PP_EXITCODE_DEGENERATE_INEQUALITY		0
#define PP_EXITCODE_ON_HYPERPLANE				1
#define PP_EXITCODE_INSIDE_HALFSPACE			2
#define PP_EXITCODE_NONDEGENERATE_PROJECTING	9
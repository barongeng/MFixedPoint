//!
//! @file 				Fp32fCompoundArithmetic.cpp
//! @author 			Geoffrey Hunter <gbmhunter@gmail.com> (www.mbedded.ninja)
//! @edited 			n/a
//! @created			2013-05-30
//! @last-modified		2014-09-15
//! @brief 				Performs unit tests on the fast 32-bit fixed point compound arithmetic.
//! @details
//!		See README.rst in root dir for more info.

//===== SYSTEM LIBRARIES =====//
// none

//===== USER LIBRARIES =====//
#include "MUnitTest/api/MUnitTestApi.hpp"

//===== USER SOURCE =====//
#include "../api/MFixedPointApi.hpp"

using namespace Fp;

MTEST_GROUP(Fp32fCompoundArithmeticTests)
{
	MTEST(CompoundAdditionTest)
	{
		Fp32f<8> fp1 = Fp32f<8>(3.2);
		Fp32f<8> fp2 = Fp32f<8>(0.6);
		
		fp1 += fp2;

		CHECK_CLOSE(3.8, (float)fp1, 0.1);
	}

	MTEST(CompoundSubtractionTest)
	{
		Fp32f<8> fp1 = Fp32f<8>(3.2);
		Fp32f<8> fp2 = Fp32f<8>(0.6);
		
		fp1 -= fp2;

		CHECK_CLOSE(2.6, (float)fp1, 0.1);
	}

	MTEST(CompoundMultiplicationTest)
	{
		Fp32f<8> fp1 = Fp32f<8>(3.2);
		Fp32f<8> fp2 = Fp32f<8>(0.6);
		
		fp1 *= fp2;

		CHECK_CLOSE(1.92, (float)fp1, 0.1);
	}

	MTEST(CompoundDivisionTest)
	{
		Fp32f<8> fp1 = Fp32f<8>(3.2);
		Fp32f<8> fp2 = Fp32f<8>(0.6);
		
		fp1 /= fp2;

		CHECK_CLOSE(5.33, (float)fp1, 0.1);
	}
	
	MTEST(CompoundModuloTest)
	{
		Fp32f<8> fp1 = Fp32f<8>(20.2);
		Fp32f<8> fp2 = Fp32f<8>(1.5);
		
		fp1 %= fp2;
		//20.2 % 1.5 = 0.7
		
		CHECK_CLOSE(0.7, (float)fp1, 0.1);
	}
}

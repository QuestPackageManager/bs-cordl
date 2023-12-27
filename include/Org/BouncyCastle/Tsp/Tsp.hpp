#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Tsp\GenTimeAccuracy.hpp"
#include "Org\BouncyCastle\Tsp\TimeStampRequest.hpp"
#include "Org\BouncyCastle\Tsp\TimeStampRequestGenerator.hpp"
#include "Org\BouncyCastle\Tsp\TimeStampResponse.hpp"
#include "Org\BouncyCastle\Tsp\TimeStampResponseGenerator.hpp"
#include "Org\BouncyCastle\Tsp\TimeStampToken.hpp"
#include "Org\BouncyCastle\Tsp\TimeStampTokenGenerator.hpp"
#include "Org\BouncyCastle\Tsp\TimeStampTokenInfo.hpp"
#include "Org\BouncyCastle\Tsp\TspAlgorithms.hpp"
#include "Org\BouncyCastle\Tsp\TspException.hpp"
#include "Org\BouncyCastle\Tsp\TspUtil.hpp"
#include "Org\BouncyCastle\Tsp\TspValidationException.hpp"
#ifdef __cpp_modules
export module Tsp;
#endif

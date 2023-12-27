#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Crypto\Modes\Gcm\BasicGcmExponentiator.hpp"
#include "Org\BouncyCastle\Crypto\Modes\Gcm\BasicGcmMultiplier.hpp"
#include "Org\BouncyCastle\Crypto\Modes\Gcm\GcmUtilities.hpp"
#include "Org\BouncyCastle\Crypto\Modes\Gcm\IGcmExponentiator.hpp"
#include "Org\BouncyCastle\Crypto\Modes\Gcm\IGcmMultiplier.hpp"
#include "Org\BouncyCastle\Crypto\Modes\Gcm\Tables1kGcmExponentiator.hpp"
#include "Org\BouncyCastle\Crypto\Modes\Gcm\Tables64kGcmMultiplier.hpp"
#include "Org\BouncyCastle\Crypto\Modes\Gcm\Tables8kGcmMultiplier.hpp"
#ifdef __cpp_modules
export module Gcm;
#endif

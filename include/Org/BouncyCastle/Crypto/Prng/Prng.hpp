#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Crypto\Prng\BasicEntropySourceProvider.hpp"
#include "Org\BouncyCastle\Crypto\Prng\CryptoApiEntropySourceProvider.hpp"
#include "Org\BouncyCastle\Crypto\Prng\CryptoApiRandomGenerator.hpp"
#include "Org\BouncyCastle\Crypto\Prng\DigestRandomGenerator.hpp"
#include "Org\BouncyCastle\Crypto\Prng\EntropyUtilities.hpp"
#include "Org\BouncyCastle\Crypto\Prng\IDrbgProvider.hpp"
#include "Org\BouncyCastle\Crypto\Prng\IRandomGenerator.hpp"
#include "Org\BouncyCastle\Crypto\Prng\ReversedWindowGenerator.hpp"
#include "Org\BouncyCastle\Crypto\Prng\SP800SecureRandom.hpp"
#include "Org\BouncyCastle\Crypto\Prng\SP800SecureRandomBuilder.hpp"
#include "Org\BouncyCastle\Crypto\Prng\ThreadedSeedGenerator.hpp"
#include "Org\BouncyCastle\Crypto\Prng\VmpcRandomGenerator.hpp"
#include "Org\BouncyCastle\Crypto\Prng\X931Rng.hpp"
#include "Org\BouncyCastle\Crypto\Prng\X931SecureRandom.hpp"
#include "Org\BouncyCastle\Crypto\Prng\X931SecureRandomBuilder.hpp"
#ifdef __cpp_modules
export module Prng;
#endif

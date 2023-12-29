#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org/BouncyCastle/Crypto/Macs/CMac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/CbcBlockCipherMac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/CfbBlockCipherMac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/Dstu7564Mac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/Dstu7624Mac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/GMac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/Gost28147Mac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/HMac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/ISO9797Alg3Mac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/MacCFBBlockCipher.hpp"
#include "Org/BouncyCastle/Crypto/Macs/Poly1305.hpp"
#include "Org/BouncyCastle/Crypto/Macs/SipHash.hpp"
#include "Org/BouncyCastle/Crypto/Macs/SkeinMac.hpp"
#include "Org/BouncyCastle/Crypto/Macs/VmpcMac.hpp"
#ifdef __cpp_modules
export module Macs;
#endif

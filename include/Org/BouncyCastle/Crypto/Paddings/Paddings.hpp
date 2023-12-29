#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org/BouncyCastle/Crypto/Paddings/IBlockCipherPadding.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/ISO10126d2Padding.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/ISO7816d4Padding.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/PaddedBufferedBlockCipher.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/Pkcs7Padding.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/TbcPadding.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/X923Padding.hpp"
#include "Org/BouncyCastle/Crypto/Paddings/ZeroBytePadding.hpp"
#ifdef __cpp_modules
export module Paddings;
#endif

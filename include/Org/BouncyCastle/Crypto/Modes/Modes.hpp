#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Crypto\Modes\CbcBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\CcmBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\CfbBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\ChaCha20Poly1305.hpp"
#include "Org\BouncyCastle\Crypto\Modes\CtsBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\EaxBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\GOfbBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\GcmBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\IAeadBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\IAeadCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\KCcmBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\KCtrBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\OcbBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\OfbBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\OpenPgpCfbBlockCipher.hpp"
#include "Org\BouncyCastle\Crypto\Modes\SicBlockCipher.hpp"
#ifdef __cpp_modules
export module Modes;
#endif

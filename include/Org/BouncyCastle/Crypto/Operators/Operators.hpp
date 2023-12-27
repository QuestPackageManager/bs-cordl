#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Crypto\Operators\Asn1CipherBuilderWithKey.hpp"
#include "Org\BouncyCastle\Crypto\Operators\Asn1KeyWrapper.hpp"
#include "Org\BouncyCastle\Crypto\Operators\Asn1SignatureFactory.hpp"
#include "Org\BouncyCastle\Crypto\Operators\Asn1VerifierFactory.hpp"
#include "Org\BouncyCastle\Crypto\Operators\Asn1VerifierFactoryProvider.hpp"
#include "Org\BouncyCastle\Crypto\Operators\BufferedCipherWrapper.hpp"
#include "Org\BouncyCastle\Crypto\Operators\DefaultSignatureCalculator.hpp"
#include "Org\BouncyCastle\Crypto\Operators\DefaultSignatureResult.hpp"
#include "Org\BouncyCastle\Crypto\Operators\DefaultVerifierCalculator.hpp"
#include "Org\BouncyCastle\Crypto\Operators\DefaultVerifierResult.hpp"
#include "Org\BouncyCastle\Crypto\Operators\GenericKey.hpp"
#include "Org\BouncyCastle\Crypto\Operators\KeyWrapperUtil.hpp"
#include "Org\BouncyCastle\Crypto\Operators\RsaOaepWrapper.hpp"
#include "Org\BouncyCastle\Crypto\Operators\RsaOaepWrapperProvider.hpp"
#include "Org\BouncyCastle\Crypto\Operators\WrapperProvider.hpp"
#include "Org\BouncyCastle\Crypto\Operators\X509Utilities.hpp"
#ifdef __cpp_modules
export module Operators;
#endif

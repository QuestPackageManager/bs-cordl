#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Crypto\Signers\DsaDigestSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\DsaSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\ECDsaSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\ECGost3410Signer.hpp"
#include "Org\BouncyCastle\Crypto\Signers\ECNRSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Ed25519Signer.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Ed25519ctxSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Ed25519phSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Ed448Signer.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Ed448phSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\GenericSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Gost3410DigestSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Gost3410Signer.hpp"
#include "Org\BouncyCastle\Crypto\Signers\HMacDsaKCalculator.hpp"
#include "Org\BouncyCastle\Crypto\Signers\IDsaEncoding.hpp"
#include "Org\BouncyCastle\Crypto\Signers\IDsaKCalculator.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Iso9796d2PssSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\Iso9796d2Signer.hpp"
#include "Org\BouncyCastle\Crypto\Signers\IsoTrailers.hpp"
#include "Org\BouncyCastle\Crypto\Signers\PlainDsaEncoding.hpp"
#include "Org\BouncyCastle\Crypto\Signers\PssSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\RandomDsaKCalculator.hpp"
#include "Org\BouncyCastle\Crypto\Signers\RsaDigestSigner.hpp"
#include "Org\BouncyCastle\Crypto\Signers\SM2Signer.hpp"
#include "Org\BouncyCastle\Crypto\Signers\StandardDsaEncoding.hpp"
#include "Org\BouncyCastle\Crypto\Signers\X931Signer.hpp"
#ifdef __cpp_modules
export module Signers;
#endif

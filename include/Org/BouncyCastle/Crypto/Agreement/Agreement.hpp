#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org/BouncyCastle/Crypto/Agreement/DHAgreement.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/DHBasicAgreement.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/DHStandardGroups.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/ECDHBasicAgreement.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/ECDHCBasicAgreement.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/ECDHWithKdfBasicAgreement.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/ECMqvBasicAgreement.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/ECMqvWithKdfBasicAgreement.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/SM2KeyExchange.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/X25519Agreement.hpp"
#include "Org/BouncyCastle/Crypto/Agreement/X448Agreement.hpp"
#ifdef __cpp_modules
export module Agreement;
#endif

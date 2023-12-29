#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org/BouncyCastle/Asn1/Pkcs/AttributePkcs.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/AuthenticatedSafe.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/CertBag.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/CertificationRequest.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/CertificationRequestInfo.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/ContentInfo.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/DHParameter.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/EncryptedData.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/EncryptedPrivateKeyInfo.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/EncryptionScheme.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/IssuerAndSerialNumber.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/KeyDerivationFunc.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/MacData.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/PbeParameter.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/PbeS2Parameters.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/Pbkdf2Params.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/Pfx.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/Pkcs12PbeParams.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/PkcsObjectIdentifiers.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/PrivateKeyInfo.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/RC2CbcParameter.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/RsaPrivateKeyStructure.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/RsaesOaepParameters.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/RsassaPssParameters.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/SafeBag.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/SignedData.hpp"
#include "Org/BouncyCastle/Asn1/Pkcs/SignerInfo.hpp"
#ifdef __cpp_modules
export module Pkcs;
#endif

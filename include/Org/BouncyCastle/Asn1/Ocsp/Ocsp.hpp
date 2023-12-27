#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\Asn1\Ocsp\BasicOcspResponse.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\CertID.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\CertStatus.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\CrlID.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\OcspObjectIdentifiers.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\OcspRequest.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\OcspResponse.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\OcspResponseStatus.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\Request.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\ResponderID.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\ResponseBytes.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\ResponseData.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\RevokedInfo.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\ServiceLocator.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\Signature.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\SingleResponse.hpp"
#include "Org\BouncyCastle\Asn1\Ocsp\TbsRequest.hpp"
#ifdef __cpp_modules
export module Ocsp;
#endif

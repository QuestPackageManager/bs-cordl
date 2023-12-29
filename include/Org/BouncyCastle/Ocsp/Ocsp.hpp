#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org/BouncyCastle/Ocsp/BasicOcspResp.hpp"
#include "Org/BouncyCastle/Ocsp/BasicOcspRespGenerator.hpp"
#include "Org/BouncyCastle/Ocsp/CertificateID.hpp"
#include "Org/BouncyCastle/Ocsp/CertificateStatus.hpp"
#include "Org/BouncyCastle/Ocsp/OCSPRespGenerator.hpp"
#include "Org/BouncyCastle/Ocsp/OcscpRespStatus.hpp"
#include "Org/BouncyCastle/Ocsp/OcspException.hpp"
#include "Org/BouncyCastle/Ocsp/OcspReq.hpp"
#include "Org/BouncyCastle/Ocsp/OcspReqGenerator.hpp"
#include "Org/BouncyCastle/Ocsp/OcspResp.hpp"
#include "Org/BouncyCastle/Ocsp/OcspRespStatus.hpp"
#include "Org/BouncyCastle/Ocsp/OcspUtilities.hpp"
#include "Org/BouncyCastle/Ocsp/Req.hpp"
#include "Org/BouncyCastle/Ocsp/RespData.hpp"
#include "Org/BouncyCastle/Ocsp/RespID.hpp"
#include "Org/BouncyCastle/Ocsp/RevokedStatus.hpp"
#include "Org/BouncyCastle/Ocsp/SingleResp.hpp"
#include "Org/BouncyCastle/Ocsp/UnknownStatus.hpp"
#ifdef __cpp_modules
export module Ocsp;
#endif

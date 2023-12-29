#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org/BouncyCastle/Asn1/Crmf/AttributeTypeAndValue.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/CertId.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/CertReqMessages.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/CertReqMsg.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/CertRequest.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/CertTemplate.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/CertTemplateBuilder.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/Controls.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/CrmfObjectIdentifiers.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/EncKeyWithID.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/EncryptedKey.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/EncryptedValue.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/OptionalValidity.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/PKMacValue.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/PkiArchiveOptions.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/PkiPublicationInfo.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/PopoPrivKey.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/PopoSigningKey.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/PopoSigningKeyInput.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/ProofOfPossession.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/SinglePubInfo.hpp"
#include "Org/BouncyCastle/Asn1/Crmf/SubsequentMessage.hpp"
#ifdef __cpp_modules
export module Crmf;
#endif

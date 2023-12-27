#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Org\BouncyCastle\X509\AttributeCertificateHolder.hpp"
#include "Org\BouncyCastle\X509\AttributeCertificateIssuer.hpp"
#include "Org\BouncyCastle\X509\IX509AttributeCertificate.hpp"
#include "Org\BouncyCastle\X509\IX509Extension.hpp"
#include "Org\BouncyCastle\X509\PemParser.hpp"
#include "Org\BouncyCastle\X509\PrincipalUtilities.hpp"
#include "Org\BouncyCastle\X509\SubjectPublicKeyInfoFactory.hpp"
#include "Org\BouncyCastle\X509\X509AttrCertParser.hpp"
#include "Org\BouncyCastle\X509\X509Attribute.hpp"
#include "Org\BouncyCastle\X509\X509CertPairParser.hpp"
#include "Org\BouncyCastle\X509\X509Certificate.hpp"
#include "Org\BouncyCastle\X509\X509CertificatePair.hpp"
#include "Org\BouncyCastle\X509\X509CertificateParser.hpp"
#include "Org\BouncyCastle\X509\X509Crl.hpp"
#include "Org\BouncyCastle\X509\X509CrlEntry.hpp"
#include "Org\BouncyCastle\X509\X509CrlParser.hpp"
#include "Org\BouncyCastle\X509\X509ExtensionBase.hpp"
#include "Org\BouncyCastle\X509\X509KeyUsage.hpp"
#include "Org\BouncyCastle\X509\X509SignatureUtilities.hpp"
#include "Org\BouncyCastle\X509\X509Utilities.hpp"
#include "Org\BouncyCastle\X509\X509V1CertificateGenerator.hpp"
#include "Org\BouncyCastle\X509\X509V2AttributeCertificate.hpp"
#include "Org\BouncyCastle\X509\X509V2AttributeCertificateGenerator.hpp"
#include "Org\BouncyCastle\X509\X509V2CrlGenerator.hpp"
#include "Org\BouncyCastle\X509\X509V3CertificateGenerator.hpp"
#ifdef __cpp_modules
export module X509;
#endif

#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Mono/Security/X509/PKCS12.hpp"
#include "Mono/Security/X509/SafeBag.hpp"
#include "Mono/Security/X509/X501.hpp"
#include "Mono/Security/X509/X509Certificate.hpp"
#include "Mono/Security/X509/X509CertificateCollection.hpp"
#include "Mono/Security/X509/X509Chain.hpp"
#include "Mono/Security/X509/X509ChainStatusFlags.hpp"
#include "Mono/Security/X509/X509Crl.hpp"
#include "Mono/Security/X509/X509Extension.hpp"
#include "Mono/Security/X509/X509ExtensionCollection.hpp"
#include "Mono/Security/X509/X509Store.hpp"
#include "Mono/Security/X509/X509StoreManager.hpp"
#include "Mono/Security/X509/X509Stores.hpp"
#ifdef __cpp_modules
export module X509;
#endif

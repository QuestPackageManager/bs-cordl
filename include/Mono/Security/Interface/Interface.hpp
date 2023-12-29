#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Mono/Security/Interface/Alert.hpp"
#include "Mono/Security/Interface/AlertDescription.hpp"
#include "Mono/Security/Interface/AlertLevel.hpp"
#include "Mono/Security/Interface/CipherSuiteCode.hpp"
#include "Mono/Security/Interface/ICertificateValidator.hpp"
#include "Mono/Security/Interface/MonoLocalCertificateSelectionCallback.hpp"
#include "Mono/Security/Interface/MonoRemoteCertificateValidationCallback.hpp"
#include "Mono/Security/Interface/MonoSslPolicyErrors.hpp"
#include "Mono/Security/Interface/MonoTlsConnectionInfo.hpp"
#include "Mono/Security/Interface/MonoTlsProvider.hpp"
#include "Mono/Security/Interface/MonoTlsProviderFactory.hpp"
#include "Mono/Security/Interface/MonoTlsSettings.hpp"
#include "Mono/Security/Interface/TlsException.hpp"
#include "Mono/Security/Interface/TlsProtocols.hpp"
#include "Mono/Security/Interface/ValidationResult.hpp"
#ifdef __cpp_modules
export module Interface;
#endif

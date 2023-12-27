#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Mono\Net\Security\AsyncHandshakeRequest.hpp"
#include "Mono\Net\Security\AsyncOperationStatus.hpp"
#include "Mono\Net\Security\AsyncProtocolRequest.hpp"
#include "Mono\Net\Security\AsyncProtocolResult.hpp"
#include "Mono\Net\Security\AsyncReadOrWriteRequest.hpp"
#include "Mono\Net\Security\AsyncReadRequest.hpp"
#include "Mono\Net\Security\AsyncWriteRequest.hpp"
#include "Mono\Net\Security\BufferOffsetSize.hpp"
#include "Mono\Net\Security\BufferOffsetSize2.hpp"
#include "Mono\Net\Security\ChainValidationHelper.hpp"
#include "Mono\Net\Security\MobileAuthenticatedStream.hpp"
#include "Mono\Net\Security\MobileTlsContext.hpp"
#include "Mono\Net\Security\MobileTlsProvider.hpp"
#include "Mono\Net\Security\MonoSslAuthenticationOptions.hpp"
#include "Mono\Net\Security\MonoSslClientAuthenticationOptions.hpp"
#include "Mono\Net\Security\MonoSslServerAuthenticationOptions.hpp"
#include "Mono\Net\Security\MonoTlsProviderFactory.hpp"
#include "Mono\Net\Security\MonoTlsStream.hpp"
#include "Mono\Net\Security\NoReflectionHelper.hpp"
#include "Mono\Net\Security\SystemCertificateValidator.hpp"
#ifdef __cpp_modules
export module Security;
#endif

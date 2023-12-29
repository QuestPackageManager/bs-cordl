#ifdef __cpp_modules
module;
#endif

#pragma once
#include "Mono/CertificateImportFlags.hpp"
#include "Mono/DependencyInjector.hpp"
#include "Mono/ISystemCertificateProvider.hpp"
#include "Mono/ISystemDependencyProvider.hpp"
#include "Mono/MonoAssemblyName.hpp"
#include "Mono/Runtime.hpp"
#include "Mono/RuntimeClassHandle.hpp"
#include "Mono/RuntimeEventHandle.hpp"
#include "Mono/RuntimeGPtrArrayHandle.hpp"
#include "Mono/RuntimeGenericParamInfoHandle.hpp"
#include "Mono/RuntimeMarshal.hpp"
#include "Mono/RuntimePropertyHandle.hpp"
#include "Mono/RuntimeRemoteClassHandle.hpp"
#include "Mono/RuntimeStructs.hpp"
#include "Mono/SafeGPtrArrayHandle.hpp"
#include "Mono/SafeStringMarshal.hpp"
#include "Mono/SystemCertificateProvider.hpp"
#include "Mono/SystemDependencyProvider.hpp"
#include "Mono/ValueTuple.hpp"
#include "Mono/ValueTuple_1.hpp"
#include "Mono/ValueTuple_2.hpp"
#include "Mono/ValueTuple_3.hpp"
#include "Mono/ValueTuple_4.hpp"
#include "Mono/ValueTuple_5.hpp"
#include "Mono/X509Pal.hpp"
#include "Mono/X509PalImpl.hpp"
#include "Mono/X509PalImplMono.hpp"
#ifdef __cpp_modules
export module Mono;
#endif

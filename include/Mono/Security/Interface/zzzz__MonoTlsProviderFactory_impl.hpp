#pragma once
// IWYU pragma private; include "Mono/Security/Interface/MonoTlsProviderFactory.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProviderFactory_def.hpp"
#include "Mono/Security/Interface/zzzz__MonoTlsProvider_def.hpp"
//  Writing Method size for method: ::Mono::Security::Interface::MonoTlsProviderFactory.GetProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::Security::Interface::MonoTlsProvider* (*)()>(&::Mono::Security::Interface::MonoTlsProviderFactory::GetProvider)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5a9be70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProviderFactory*>(), { "GetProvider", {}, {} })));
    return ___internal_method;
  }
};
inline ::Mono::Security::Interface::MonoTlsProvider* Mono::Security::Interface::MonoTlsProviderFactory::GetProvider() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Mono::Security::Interface::MonoTlsProviderFactory*>(), { "GetProvider", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Mono::Security::Interface::MonoTlsProvider*>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::Mono::Security::Interface::MonoTlsProviderFactory::MonoTlsProviderFactory() {}

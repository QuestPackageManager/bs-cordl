#pragma once
// IWYU pragma private; include "Mono/ISystemDependencyProvider.hpp"
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
//  Writing Method size for method: ::Mono::ISystemDependencyProvider.get_CertificateProvider
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Mono::ISystemCertificateProvider* (::Mono::ISystemDependencyProvider::*)()>(&::Mono::ISystemDependencyProvider::get_CertificateProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Mono::ISystemDependencyProvider*>(), { ::i2c::class_of<::Mono::ISystemDependencyProvider*>(), 0 }));
    return ___internal_method;
  }
};
inline ::Mono::ISystemCertificateProvider* Mono::ISystemDependencyProvider::get_CertificateProvider() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Mono::ISystemDependencyProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemCertificateProvider*>(this, ___internal_method);
}

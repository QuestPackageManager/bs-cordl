#pragma once
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
//  Writing Method size for method: ::Mono::ISystemDependencyProvider.get_CertificateProvider
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Mono::ISystemCertificateProvider* (::Mono::ISystemDependencyProvider::*)()>(
    &::Mono::ISystemDependencyProvider::get_CertificateProvider)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0x0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemDependencyProvider*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemDependencyProvider*>::get(), 0));
    return ___internal_method;
  }
};
inline ::Mono::ISystemCertificateProvider* Mono::ISystemDependencyProvider::get_CertificateProvider() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemDependencyProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemCertificateProvider*, false>(this, ___internal_method);
}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

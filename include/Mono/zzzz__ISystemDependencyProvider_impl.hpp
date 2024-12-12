#pragma once
// IWYU pragma private; include "Mono/ISystemDependencyProvider.hpp"
#include "Mono/zzzz__ISystemDependencyProvider_def.hpp"
#include "Mono/zzzz__ISystemCertificateProvider_def.hpp"
inline ::Mono::ISystemCertificateProvider* Mono::ISystemDependencyProvider::get_CertificateProvider() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Mono::ISystemDependencyProvider*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<::Mono::ISystemCertificateProvider*, false>(this, ___internal_method);
}

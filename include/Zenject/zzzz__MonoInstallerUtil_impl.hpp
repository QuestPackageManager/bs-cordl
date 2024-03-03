#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MonoInstallerUtil_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
template <typename TInstaller> inline ::StringW Zenject::MonoInstallerUtil::GetDefaultResourcePath() {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstallerUtil*>::get(), "GetDefaultResourcePath",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
template <typename TInstaller> inline TInstaller Zenject::MonoInstallerUtil::CreateInstaller(::StringW resourcePath, ::Zenject::DiContainer* container) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Zenject::MonoInstallerUtil*>::get(), "CreateInstaller",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<TInstaller>::get() }));
  return ::cordl_internals::RunMethodRethrow<TInstaller, false>(nullptr, ___internal_method, resourcePath, container);
}
// Ctor Parameters []
constexpr ::Zenject::MonoInstallerUtil::MonoInstallerUtil() {}

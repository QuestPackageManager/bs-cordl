#pragma once
// IWYU pragma private; include "BGLib/AppFlow/FeatureAsyncInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "BGLib/AppFlow/zzzz__FeatureAsyncInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "Zenject/zzzz__ScriptableObjectInstaller_def.hpp"
//  Writing Method size for method: ::BGLib::AppFlow::FeatureAsyncInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::BGLib::AppFlow::FeatureAsyncInstaller::*)()>(
    &::BGLib::AppFlow::FeatureAsyncInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x225c678;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::FeatureAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::FeatureAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::Zenject::ScriptableObjectInstaller>>*, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*)>(
    &::BGLib::AppFlow::FeatureAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x225c6b8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::FeatureAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::FeatureAsyncInstaller::*)()>(&::BGLib::AppFlow::FeatureAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x225ca0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::AppFlow::FeatureAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::AppFlow::FeatureAsyncInstaller::*)()>(&::BGLib::AppFlow::FeatureAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x225ca10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline ::StringW BGLib::AppFlow::FeatureAsyncInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void BGLib::AppFlow::FeatureAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::Zenject::ScriptableObjectInstaller>>* scriptableObjectInstallers,
                                                                              ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, scriptableObjectInstallers, registry);
}
inline void BGLib::AppFlow::FeatureAsyncInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::BGLib::AppFlow::FeatureAsyncInstaller* BGLib::AppFlow::FeatureAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::AppFlow::FeatureAsyncInstaller*>());
}
inline void BGLib::AppFlow::FeatureAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::AppFlow::FeatureAsyncInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::AppFlow::FeatureAsyncInstaller::FeatureAsyncInstaller() {}

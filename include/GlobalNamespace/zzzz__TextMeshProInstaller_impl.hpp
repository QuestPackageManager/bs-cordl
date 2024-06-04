#pragma once
// IWYU pragma private; include "GlobalNamespace/TextMeshProInstaller.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "GlobalNamespace/zzzz__TextMeshProInstaller_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "TMPro/zzzz__TMP_FontAsset_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::TextMeshProInstaller.get_assetLabelRuntimeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::TextMeshProInstaller::*)()>(
    &::GlobalNamespace::TextMeshProInstaller::get_assetLabelRuntimeKey)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x261c734;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProInstaller::*)(
    ::System::Collections::Generic::IList_1<::UnityW<::TMPro::TMP_FontAsset>>*, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*)>(
    &::GlobalNamespace::TextMeshProInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x261c774;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProInstaller::*)()>(&::GlobalNamespace::TextMeshProInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x261c7cc;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::TextMeshProInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::TextMeshProInstaller::*)()>(&::GlobalNamespace::TextMeshProInstaller::_ctor)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x261c90c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*& GlobalNamespace::TextMeshProInstaller::__cordl_internal_get__fontAssets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontAssets;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>*> const&
GlobalNamespace::TextMeshProInstaller::__cordl_internal_get__fontAssets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fontAssets;
}
constexpr void GlobalNamespace::TextMeshProInstaller::__cordl_internal_set__fontAssets(::System::Collections::Generic::List_1<::UnityW<::TMPro::TMP_FontAsset>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____fontAssets)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::StringW GlobalNamespace::TextMeshProInstaller::get_assetLabelRuntimeKey() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::TextMeshProInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::UnityW<::TMPro::TMP_FontAsset>>* fontAssets,
                                                                              ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fontAssets, registry);
}
inline void GlobalNamespace::TextMeshProInstaller::InstallBindings() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::TextMeshProInstaller* GlobalNamespace::TextMeshProInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::TextMeshProInstaller*>());
}
inline void GlobalNamespace::TextMeshProInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::TextMeshProInstaller*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::TextMeshProInstaller::TextMeshProInstaller() {}

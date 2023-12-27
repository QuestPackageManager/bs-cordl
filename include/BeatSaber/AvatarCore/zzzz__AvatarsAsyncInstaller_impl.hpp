#pragma once
#include "BGLib/AppFlow/Initialization/zzzz__AddressablesAsyncInstaller_1_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarsAsyncInstaller_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "BGLib/AppFlow/Initialization/zzzz__AsyncInstaller_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_def.hpp"
#include "UnityEngine/AddressableAssets/zzzz__AssetLabelReference_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarsAsyncInstaller.get_assetLabel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AddressableAssets::AssetLabelReference* (::BeatSaber::AvatarCore::AvatarsAsyncInstaller::*)()>(
    &::BeatSaber::AvatarCore::AvatarsAsyncInstaller::get_assetLabel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe0bdc8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarsAsyncInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarsAsyncInstaller::*)()>(
    &::BeatSaber::AvatarCore::AvatarsAsyncInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0xe0bdd0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarsAsyncInstaller.LoadResourcesBeforeInstall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarsAsyncInstaller::*)(
    ::System::Collections::Generic::IList_1<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>*, ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*)>(
    &::BeatSaber::AvatarCore::AvatarsAsyncInstaller::LoadResourcesBeforeInstall)> {
  constexpr static std::size_t size = 0x3ec;
  constexpr static std::size_t addrs = 0xe0be8c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarsAsyncInstaller._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::AvatarCore::AvatarsAsyncInstaller::*)()>(&::BeatSaber::AvatarCore::AvatarsAsyncInstaller::_ctor)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0xe0c278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::AddressableAssets::AssetLabelReference*& BeatSaber::AvatarCore::AvatarsAsyncInstaller::__get__avatarAdapterLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarAdapterLabel;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AddressableAssets::AssetLabelReference*> const& BeatSaber::AvatarCore::AvatarsAsyncInstaller::__get__avatarAdapterLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____avatarAdapterLabel;
}
constexpr void BeatSaber::AvatarCore::AvatarsAsyncInstaller::__set__avatarAdapterLabel(::UnityEngine::AddressableAssets::AssetLabelReference* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarAdapterLabel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::AddressableAssets::AssetLabelReference* BeatSaber::AvatarCore::AvatarsAsyncInstaller::get_assetLabel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(),
                                                                             "get_assetLabel", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AddressableAssets::AssetLabelReference*, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarsAsyncInstaller::InstallBindings() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(),
                                                                             "InstallBindings", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarsAsyncInstaller::LoadResourcesBeforeInstall(::System::Collections::Generic::IList_1<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>* adaptersInstallers,
                                                                                     ::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry* registry) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(), "LoadResourcesBeforeInstall", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::BeatSaber::AvatarCore::AbstractAdapterInstallerSO*>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::AppFlow::Initialization::__AsyncInstaller__IInstallerRegistry*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, adaptersInstallers, registry);
}
inline ::BeatSaber::AvatarCore::AvatarsAsyncInstaller* BeatSaber::AvatarCore::AvatarsAsyncInstaller::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>());
}
inline void BeatSaber::AvatarCore::AvatarsAsyncInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::AvatarCore::AvatarsAsyncInstaller*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarsAsyncInstaller::AvatarsAsyncInstaller() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarAdapterInstallerSO_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSetSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__BeatAvatarEditorViewController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarColorViewController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartsModelSO_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarSystemSettings_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xe14484;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)(::Zenject::DiContainer*)>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0xe14494;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe146a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__avatarPartsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO*> const& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__avatarPartsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__avatarPartsModel(::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarPartsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::BeatAvatarSDK::SkinColorSetSO*& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__skinColorSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinColorSet;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarSDK::SkinColorSetSO*> const& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__skinColorSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinColorSet;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__skinColorSet(::BeatSaber::BeatAvatarSDK::SkinColorSetSO* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____skinColorSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings*> const& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__settings(::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__beatAvatarEditorViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAvatarEditorViewController;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController*> const&
BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__beatAvatarEditorViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAvatarEditorViewController;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__beatAvatarEditorViewController(::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatAvatarEditorViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__editAvatarColorView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarColorView;
}
constexpr ::cordl_internals::to_const_pointer<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController*> const&
BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__get__editAvatarColorView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarColorView;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__set__editAvatarColorView(::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____editAvatarColorView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), "InstallBindings",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings(::Zenject::DiContainer* container) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), "InstallBindings",
                                  std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Zenject::DiContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>());
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::BeatAvatarAdapterInstallerSO() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

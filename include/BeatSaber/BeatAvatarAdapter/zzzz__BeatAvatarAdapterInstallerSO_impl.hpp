#pragma once
#include "BeatSaber/AvatarCore/zzzz__AbstractAdapterInstallerSO_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarAdapterInstallerSO_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__BeatAvatarEditorViewController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/AvatarEditor/zzzz__EditAvatarColorViewController_def.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatarSystemSettings_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__AvatarPartsModelSO_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__SkinColorSetSO_def.hpp"
#include "Zenject/zzzz__DiContainer_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0xf57fc8;

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
  constexpr static std::size_t addrs = 0xf57fd8;

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
  constexpr static std::size_t addrs = 0xf581e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO>& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__avatarPartsModel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO> const& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__avatarPartsModel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPartsModel;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_set__avatarPartsModel(::UnityW<::BeatSaber::BeatAvatarSDK::AvatarPartsModelSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____avatarPartsModel)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSetSO>& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__skinColorSet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinColorSet;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSetSO> const& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__skinColorSet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____skinColorSet;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_set__skinColorSet(::UnityW<::BeatSaber::BeatAvatarSDK::SkinColorSetSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____skinColorSet)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings>& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__settings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> const& BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__settings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settings;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_set__settings(::UnityW<::BeatSaber::BeatAvatarAdapter::BeatAvatarSystemSettings> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____settings)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController>&
BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__beatAvatarEditorViewController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAvatarEditorViewController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> const&
BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__beatAvatarEditorViewController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatAvatarEditorViewController;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_set__beatAvatarEditorViewController(
    ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::BeatAvatarEditorViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatAvatarEditorViewController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController>&
BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__editAvatarColorView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarColorView;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> const&
BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_get__editAvatarColorView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____editAvatarColorView;
}
constexpr void
BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::__cordl_internal_set__editAvatarColorView(::UnityW<::BeatSaber::BeatAvatarAdapter::AvatarEditor::EditAvatarColorViewController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____editAvatarColorView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, container);
}
inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>());
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::BeatAvatarAdapterInstallerSO() {}

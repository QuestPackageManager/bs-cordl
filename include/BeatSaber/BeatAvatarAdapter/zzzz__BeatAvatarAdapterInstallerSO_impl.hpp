#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/BeatAvatarAdapterInstallerSO.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3273cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)(::Zenject::DiContainer*)>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x3273cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>(),
                                                                                          { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3273f54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>(), { ".ctor", {}, {} })));
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
  this->____avatarPartsModel = value;
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
  this->____skinColorSet = value;
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
  this->____settings = value;
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
  this->____beatAvatarEditorViewController = value;
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
  this->____editAvatarColorView = value;
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::InstallBindings(::Zenject::DiContainer* container) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, container);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO* BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatarAdapterInstallerSO::BeatAvatarAdapterInstallerSO() {}

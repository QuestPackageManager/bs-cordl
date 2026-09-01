#pragma once
// IWYU pragma private; include "GlobalNamespace\FakeMirrorObjectsInstaller.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Zenject/zzzz__MonoInstaller_impl.hpp"
#include "GlobalNamespace/zzzz__FakeMirrorObjectsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__FakeMirrorObjectsInstaller_def.hpp"
#include "GlobalNamespace/zzzz__MirrorRendererGraphicsSettingsPresets_def.hpp"
#include "GlobalNamespace/zzzz__MirroredBombNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredGameNoteController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredObstacleController_def.hpp"
#include "GlobalNamespace/zzzz__MirroredSliderController_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "Zenject/zzzz__BindingId_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FakeMirrorObjectsInstaller___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FakeMirrorObjectsInstaller___c::*)()>(&::GlobalNamespace::FakeMirrorObjectsInstaller___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fb9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeMirrorObjectsInstaller___c._InstallBindings_b__10_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::FakeMirrorObjectsInstaller___c::*)(::Zenject::BindingId)>(
    &::GlobalNamespace::FakeMirrorObjectsInstaller___c::_InstallBindings_b__10_0)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x59fb9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller___c*>(), { "<InstallBindings>b__10_0", {}, { ::i2c::type_of<::Zenject::BindingId>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FakeMirrorObjectsInstaller___c::setStaticF___9(::GlobalNamespace::FakeMirrorObjectsInstaller___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FakeMirrorObjectsInstaller___c*, "<>9", ::GlobalNamespace::FakeMirrorObjectsInstaller___c*>(
      std::forward<::GlobalNamespace::FakeMirrorObjectsInstaller___c*>(value));
}
inline ::GlobalNamespace::FakeMirrorObjectsInstaller___c* GlobalNamespace::FakeMirrorObjectsInstaller___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FakeMirrorObjectsInstaller___c*, "<>9", ::GlobalNamespace::FakeMirrorObjectsInstaller___c*>();
}
inline void GlobalNamespace::FakeMirrorObjectsInstaller___c::setStaticF___9__10_0(::System::Func_2<::Zenject::BindingId, bool>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::Zenject::BindingId, bool>*, "<>9__10_0", ::GlobalNamespace::FakeMirrorObjectsInstaller___c*>(
      std::forward<::System::Func_2<::Zenject::BindingId, bool>*>(value));
}
inline ::System::Func_2<::Zenject::BindingId, bool>* GlobalNamespace::FakeMirrorObjectsInstaller___c::getStaticF___9__10_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::Zenject::BindingId, bool>*, "<>9__10_0", ::GlobalNamespace::FakeMirrorObjectsInstaller___c*>();
}
inline void GlobalNamespace::FakeMirrorObjectsInstaller___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool GlobalNamespace::FakeMirrorObjectsInstaller___c::_InstallBindings_b__10_0(::Zenject::BindingId t) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller___c*>(), { "<InstallBindings>b__10_0", {}, { ::i2c::type_of<::Zenject::BindingId>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, t);
}
inline ::GlobalNamespace::FakeMirrorObjectsInstaller___c* GlobalNamespace::FakeMirrorObjectsInstaller___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FakeMirrorObjectsInstaller___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FakeMirrorObjectsInstaller___c::FakeMirrorObjectsInstaller___c() {}
//  Writing Method size for method: ::GlobalNamespace::FakeMirrorObjectsInstaller.get_mirroredGameNoteControllerPrefab
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::MirroredGameNoteController> (::GlobalNamespace::FakeMirrorObjectsInstaller::*)()>(
    &::GlobalNamespace::FakeMirrorObjectsInstaller::get_mirroredGameNoteControllerPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59fb42c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller*>(), { "get_mirroredGameNoteControllerPrefab", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeMirrorObjectsInstaller.InstallBindings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FakeMirrorObjectsInstaller::*)()>(&::GlobalNamespace::FakeMirrorObjectsInstaller::InstallBindings)> {
  constexpr static std::size_t size = 0x538;
  constexpr static std::size_t addrs = 0x59fb434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller*>(), { ::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FakeMirrorObjectsInstaller._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FakeMirrorObjectsInstaller::*)()>(&::GlobalNamespace::FakeMirrorObjectsInstaller::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fb96c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_set__mirroredGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredGameNoteControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredBurstSliderHeadGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderHeadGameNoteControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredBurstSliderHeadGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderHeadGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_set__mirroredBurstSliderHeadGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredBurstSliderHeadGameNoteControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController>& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredBurstSliderGameNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderGameNoteControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MirroredGameNoteController> const& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredBurstSliderGameNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBurstSliderGameNoteControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_set__mirroredBurstSliderGameNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredGameNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredBurstSliderGameNoteControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MirroredBombNoteController>& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredBombNoteControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBombNoteControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MirroredBombNoteController> const& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredBombNoteControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredBombNoteControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_set__mirroredBombNoteControllerPrefab(::UnityW<::GlobalNamespace::MirroredBombNoteController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredBombNoteControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MirroredObstacleController>& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredObstacleControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredObstacleControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MirroredObstacleController> const& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredObstacleControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredObstacleControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_set__mirroredObstacleControllerPrefab(::UnityW<::GlobalNamespace::MirroredObstacleController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredObstacleControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MirroredSliderController>& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredSliderControllerPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredSliderControllerPrefab;
}
constexpr ::UnityW<::GlobalNamespace::MirroredSliderController> const& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirroredSliderControllerPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirroredSliderControllerPrefab;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_set__mirroredSliderControllerPrefab(::UnityW<::GlobalNamespace::MirroredSliderController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirroredSliderControllerPrefab = value;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets>& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirrorRendererGraphicsSettingsPresets() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr ::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> const& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__mirrorRendererGraphicsSettingsPresets() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____mirrorRendererGraphicsSettingsPresets;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_set__mirrorRendererGraphicsSettingsPresets(::UnityW<::GlobalNamespace::MirrorRendererGraphicsSettingsPresets> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____mirrorRendererGraphicsSettingsPresets = value;
}
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::FakeMirrorObjectsInstaller::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
inline ::UnityW<::GlobalNamespace::MirroredGameNoteController> GlobalNamespace::FakeMirrorObjectsInstaller::get_mirroredGameNoteControllerPrefab() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller*>(), { "get_mirroredGameNoteControllerPrefab", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::MirroredGameNoteController>>(this, ___internal_method);
}
inline void GlobalNamespace::FakeMirrorObjectsInstaller::InstallBindings() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::FakeMirrorObjectsInstaller::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FakeMirrorObjectsInstaller*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::FakeMirrorObjectsInstaller* GlobalNamespace::FakeMirrorObjectsInstaller::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FakeMirrorObjectsInstaller*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FakeMirrorObjectsInstaller::FakeMirrorObjectsInstaller() {}

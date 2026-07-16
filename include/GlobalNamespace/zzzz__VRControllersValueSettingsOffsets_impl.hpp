#pragma once
// IWYU pragma private; include "GlobalNamespace/VRControllersValueSettingsOffsets.hpp"
#include "GlobalNamespace/zzzz__VRControllerTransformOffset_impl.hpp"
#include "GlobalNamespace/zzzz__VRControllersValueSettingsOffsets_def.hpp"
#include "BeatSaber/GameSettings/zzzz__ControllerProfilesModel_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets.get_alternativeHandling
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSettingsOffsets::get_alternativeHandling)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x37515e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets.get_leftPositionOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSettingsOffsets::get_leftPositionOffset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3751610;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets.get_leftRotationOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSettingsOffsets::get_leftRotationOffset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x375163c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets.get_rightPositionOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSettingsOffsets::get_rightPositionOffset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3751668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets.get_rightRotationOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(
    &::GlobalNamespace::VRControllersValueSettingsOffsets::get_rightRotationOffset)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3751694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VRControllersValueSettingsOffsets._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::VRControllersValueSettingsOffsets::*)()>(&::GlobalNamespace::VRControllersValueSettingsOffsets::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x37516c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::SettingsManager*& GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_get__settingsManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr ::GlobalNamespace::SettingsManager* const& GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_get__settingsManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____settingsManager;
}
constexpr void GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_set__settingsManager(::GlobalNamespace::SettingsManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____settingsManager = value;
}
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel*& GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_get__controllersProfile() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersProfile;
}
constexpr ::BeatSaber::GameSettings::ControllerProfilesModel* const& GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_get__controllersProfile() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____controllersProfile;
}
constexpr void GlobalNamespace::VRControllersValueSettingsOffsets::__cordl_internal_set__controllersProfile(::BeatSaber::GameSettings::ControllerProfilesModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____controllersProfile = value;
}
inline bool GlobalNamespace::VRControllersValueSettingsOffsets::get_alternativeHandling() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRControllersValueSettingsOffsets::get_leftPositionOffset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRControllersValueSettingsOffsets::get_leftRotationOffset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRControllersValueSettingsOffsets::get_rightPositionOffset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VRControllersValueSettingsOffsets::get_rightRotationOffset() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void GlobalNamespace::VRControllersValueSettingsOffsets::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::VRControllersValueSettingsOffsets*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::VRControllersValueSettingsOffsets* GlobalNamespace::VRControllersValueSettingsOffsets::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::VRControllersValueSettingsOffsets*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VRControllersValueSettingsOffsets::VRControllersValueSettingsOffsets() {}

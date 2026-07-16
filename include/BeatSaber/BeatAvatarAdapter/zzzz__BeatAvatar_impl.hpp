#pragma once
// IWYU pragma private; include "BeatSaber/BeatAvatarAdapter/BeatAvatar.hpp"
#include "BeatSaber/AvatarCore/zzzz__Avatar_impl.hpp"
#include "BeatSaber/BeatAvatarAdapter/zzzz__BeatAvatar_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarPoseData_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__OptionalAvatarData_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarPoseController_def.hpp"
#include "BeatSaber/BeatAvatarSDK/zzzz__BeatAvatarVisualController_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerAvatarsData_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatar.get_bodyCenterWorldPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::BeatSaber::BeatAvatarAdapter::BeatAvatar::*)()>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatar::get_bodyCenterWorldPosition)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x3273a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatar.SetLightColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatar::*)(::UnityEngine::Color)>(&::BeatSaber::BeatAvatarAdapter::BeatAvatar::SetLightColor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3273ab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatar.UpdateAvatarFromPose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatar::*)(::BeatSaber::AvatarCore::AvatarPoseData)>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatar::UpdateAvatarFromPose)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x3273acc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatar.UpdateAvatarFromVisualData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatar::*)(::GlobalNamespace::MultiplayerAvatarsData)>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatar::UpdateAvatarFromVisualData)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x3273b44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatar.UpdateAvatarFromOptionalData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatar::*)(::BeatSaber::AvatarCore::OptionalAvatarData, int64_t)>(
    &::BeatSaber::BeatAvatarAdapter::BeatAvatar::UpdateAvatarFromOptionalData)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3273cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::BeatAvatarAdapter::BeatAvatar._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::BeatAvatarAdapter::BeatAvatar::*)()>(&::BeatSaber::BeatAvatarAdapter::BeatAvatar::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3273cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController>& BeatSaber::BeatAvatarAdapter::BeatAvatar::__cordl_internal_get__avatarVisualController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarVisualController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> const& BeatSaber::BeatAvatarAdapter::BeatAvatar::__cordl_internal_get__avatarVisualController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarVisualController;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatar::__cordl_internal_set__avatarVisualController(::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarVisualController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarVisualController = value;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController>& BeatSaber::BeatAvatarAdapter::BeatAvatar::__cordl_internal_get__avatarPoseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseController;
}
constexpr ::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController> const& BeatSaber::BeatAvatarAdapter::BeatAvatar::__cordl_internal_get__avatarPoseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseController;
}
constexpr void BeatSaber::BeatAvatarAdapter::BeatAvatar::__cordl_internal_set__avatarPoseController(::UnityW<::BeatSaber::BeatAvatarSDK::BeatAvatarPoseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarPoseController = value;
}
inline ::UnityEngine::Vector3 BeatSaber::BeatAvatarAdapter::BeatAvatar::get_bodyCenterWorldPosition() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatar::SetLightColor(::UnityEngine::Color lightColor) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, lightColor);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatar::UpdateAvatarFromPose(::BeatSaber::AvatarCore::AvatarPoseData currentPose) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentPose);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatar::UpdateAvatarFromVisualData(::GlobalNamespace::MultiplayerAvatarsData visualData) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, visualData);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatar::UpdateAvatarFromOptionalData(::BeatSaber::AvatarCore::OptionalAvatarData data, int64_t playbackDelayMs) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, playbackDelayMs);
}
inline void BeatSaber::BeatAvatarAdapter::BeatAvatar::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::BeatAvatarAdapter::BeatAvatar* BeatSaber::BeatAvatarAdapter::BeatAvatar::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::BeatAvatarAdapter::BeatAvatar*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::BeatAvatarAdapter::BeatAvatar::BeatAvatar() {}

#pragma once
// IWYU pragma private; include "BeatSaber\AvatarCore\AvatarHeadOffset.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__AvatarHeadOffset_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__MultiplayerAvatarPoseController_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::Start)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x326b260;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarHeadOffset*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::OnDestroy)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x326b3ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarHeadOffset*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset.HandleMultiplayerAvatarPoseControllerDidUpdatePose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)(::UnityEngine::Vector3)>(
    &::BeatSaber::AvatarCore::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x326b57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarHeadOffset*>(),
                                                             { "HandleMultiplayerAvatarPoseControllerDidUpdatePose", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::AvatarHeadOffset._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::AvatarHeadOffset::*)()>(&::BeatSaber::AvatarCore::AvatarHeadOffset::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x326b5d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarHeadOffset*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Vector3& BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController>& BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_get__avatarPoseController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseController;
}
constexpr ::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController> const& BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_get__avatarPoseController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseController;
}
constexpr void BeatSaber::AvatarCore::AvatarHeadOffset::__cordl_internal_set__avatarPoseController(::UnityW<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarPoseController = value;
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarHeadOffset*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarHeadOffset*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::HandleMultiplayerAvatarPoseControllerDidUpdatePose(::UnityEngine::Vector3 headLocalPosition) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarHeadOffset*>(),
                                                                                         { "HandleMultiplayerAvatarPoseControllerDidUpdatePose", {}, { ::i2c::type_of<::UnityEngine::Vector3>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, headLocalPosition);
}
inline void BeatSaber::AvatarCore::AvatarHeadOffset::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::AvatarHeadOffset*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::AvatarHeadOffset* BeatSaber::AvatarCore::AvatarHeadOffset::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::AvatarHeadOffset*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::AvatarHeadOffset::AvatarHeadOffset() {}

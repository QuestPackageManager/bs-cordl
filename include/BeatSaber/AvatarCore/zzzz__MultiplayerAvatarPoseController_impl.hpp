#pragma once
// IWYU pragma private; include "BeatSaber/AvatarCore/MultiplayerAvatarPoseController.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "BeatSaber/AvatarCore/zzzz__MultiplayerAvatarPoseController_def.hpp"
#include "BeatSaber/AvatarCore/zzzz__IAvatarPoseRestriction_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberConnectedPlayer_def.hpp"
#include "GlobalNamespace/zzzz__INodePoseSyncStateManager_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController.get_leftHandTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::*)()>(
    &::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::get_leftHandTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326ed34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { "get_leftHandTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController.get_rightHandTransform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Transform> (::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::*)()>(
    &::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::get_rightHandTransform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326ed3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { "get_rightHandTransform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController.add_didUpdatePoseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::*)(::System::Action_1<::UnityEngine::Vector3>*)>(
    &::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::add_didUpdatePoseEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x326a7c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(),
                                                                                           { "add_didUpdatePoseEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController.remove_didUpdatePoseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::*)(::System::Action_1<::UnityEngine::Vector3>*)>(
    &::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::remove_didUpdatePoseEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x326a998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(),
                                                                                           { "remove_didUpdatePoseEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController.set_connectedPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::*)(::GlobalNamespace::IBeatSaberConnectedPlayer*)>(
    &::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::set_connectedPlayer)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x326ed44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(),
                                                                                           { "set_connectedPlayer", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::*)()>(&::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::Start)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x326ed4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::*)()>(&::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::Update)> {
  constexpr static std::size_t size = 0x4f0;
  constexpr static std::size_t addrs = 0x326ede4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::*)()>(&::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x326f2d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__leftSaberTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaberTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__leftSaberTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaberTransform;
}
constexpr void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_set__leftSaberTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftSaberTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__rightSaberTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaberTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__rightSaberTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaberTransform;
}
constexpr void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_set__rightSaberTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightSaberTransform = value;
}
constexpr ::UnityW<::UnityEngine::Transform>& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__headTransform() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr ::UnityW<::UnityEngine::Transform> const& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__headTransform() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headTransform;
}
constexpr void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_set__headTransform(::UnityW<::UnityEngine::Transform> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headTransform = value;
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager*& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__nodePoseSyncStateManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr ::GlobalNamespace::INodePoseSyncStateManager* const& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__nodePoseSyncStateManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nodePoseSyncStateManager;
}
constexpr void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_set__nodePoseSyncStateManager(::GlobalNamespace::INodePoseSyncStateManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nodePoseSyncStateManager = value;
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction*& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__avatarPoseRestriction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseRestriction;
}
constexpr ::BeatSaber::AvatarCore::IAvatarPoseRestriction* const& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__avatarPoseRestriction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____avatarPoseRestriction;
}
constexpr void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_set__avatarPoseRestriction(::BeatSaber::AvatarCore::IAvatarPoseRestriction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____avatarPoseRestriction = value;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer*& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__connectedPlayer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr ::GlobalNamespace::IBeatSaberConnectedPlayer* const& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get__connectedPlayer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____connectedPlayer;
}
constexpr void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_set__connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____connectedPlayer = value;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>*& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get_didUpdatePoseEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdatePoseEvent;
}
constexpr ::System::Action_1<::UnityEngine::Vector3>* const& BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_get_didUpdatePoseEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdatePoseEvent;
}
constexpr void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::__cordl_internal_set_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didUpdatePoseEvent = value;
}
inline ::UnityW<::UnityEngine::Transform> BeatSaber::AvatarCore::MultiplayerAvatarPoseController::get_leftHandTransform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { "get_leftHandTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Transform> BeatSaber::AvatarCore::MultiplayerAvatarPoseController::get_rightHandTransform() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { "get_rightHandTransform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Transform>>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::add_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(),
                                                                                         { "add_didUpdatePoseEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::remove_didUpdatePoseEvent(::System::Action_1<::UnityEngine::Vector3>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(),
                                                                                         { "remove_didUpdatePoseEvent", {}, { ::i2c::type_of<::System::Action_1<::UnityEngine::Vector3>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::set_connectedPlayer(::GlobalNamespace::IBeatSaberConnectedPlayer* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(),
                                                                                         { "set_connectedPlayer", {}, { ::i2c::type_of<::GlobalNamespace::IBeatSaberConnectedPlayer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void BeatSaber::AvatarCore::MultiplayerAvatarPoseController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController* BeatSaber::AvatarCore::MultiplayerAvatarPoseController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatSaber::AvatarCore::MultiplayerAvatarPoseController*>());
}
// Ctor Parameters []
constexpr ::BeatSaber::AvatarCore::MultiplayerAvatarPoseController::MultiplayerAvatarPoseController() {}

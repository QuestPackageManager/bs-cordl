#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerOffsetPositionByLocalPlayerPosition.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerOffsetPositionByLocalPlayerPosition_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayersManager_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Awake)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x59d8fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59d900c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.SetEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)(bool)>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59d3c94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { "SetEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition.UpdatePositionAndRotationIfNeeded
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x59d9010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { "UpdatePositionAndRotationIfNeeded", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::*)()>(
    &::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59d929c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__multiplayerPlayersManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__multiplayerPlayersManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplayerPlayersManager;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__multiplayerPlayersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplayerPlayersManager = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__positionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__positionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____positionOffset;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__positionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____positionOffset = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__rotationOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__rotationOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rotationOffset;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__rotationOffset(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rotationOffset = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__lastParentPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__lastParentPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentPosition;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__lastParentPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastParentPosition = value;
}
constexpr ::UnityEngine::Quaternion& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__lastParentRotation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentRotation;
}
constexpr ::UnityEngine::Quaternion const& GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_get__lastParentRotation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastParentRotation;
}
constexpr void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::__cordl_internal_set__lastParentRotation(::UnityEngine::Quaternion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastParentRotation = value;
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::SetEnabled(bool isEnabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { "SetEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, isEnabled);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::UpdatePositionAndRotationIfNeeded() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { "UpdatePositionAndRotationIfNeeded", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition* GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerOffsetPositionByLocalPlayerPosition::MultiplayerOffsetPositionByLocalPlayerPosition() {}

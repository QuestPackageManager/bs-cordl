#pragma once
// IWYU pragma private; include "GlobalNamespace\SaberActivityCounter.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__SaberActivityCounter_def.hpp"
#include "GlobalNamespace/zzzz__AveragingValueRecorder_def.hpp"
#include "GlobalNamespace/zzzz__IGamePause_def.hpp"
#include "GlobalNamespace/zzzz__MovementHistoryRecorder_def.hpp"
#include "GlobalNamespace/zzzz__SaberManager_def.hpp"
#include "GlobalNamespace/zzzz__Saber_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.add_totalDistanceDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberActivityCounter::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::SaberActivityCounter::add_totalDistanceDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59ef6ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "add_totalDistanceDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.remove_totalDistanceDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberActivityCounter::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::SaberActivityCounter::remove_totalDistanceDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59ef76c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(),
                                                                                           { "remove_totalDistanceDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.get_leftSaberMovementDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::get_leftSaberMovementDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ef82c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_leftSaberMovementDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.get_rightSaberMovementDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::get_rightSaberMovementDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ef834;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_rightSaberMovementDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.get_leftHandMovementDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::get_leftHandMovementDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ef83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_leftHandMovementDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.get_rightHandMovementDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::get_rightHandMovementDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59ef844;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_rightHandMovementDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.get_saberMovementAveragingValueRecorder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AveragingValueRecorder* (::GlobalNamespace::SaberActivityCounter::*)()>(
    &::GlobalNamespace::SaberActivityCounter::get_saberMovementAveragingValueRecorder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59ec9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_saberMovementAveragingValueRecorder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.get_handMovementAveragingValueRecorder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::AveragingValueRecorder* (::GlobalNamespace::SaberActivityCounter::*)()>(
    &::GlobalNamespace::SaberActivityCounter::get_handMovementAveragingValueRecorder)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x59ec9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_handMovementAveragingValueRecorder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::Awake)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59ef84c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::Start)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x59ef8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "Start", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::OnDestroy)> {
  constexpr static std::size_t size = 0x1dc;
  constexpr static std::size_t addrs = 0x59efa50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.HandleSaberPositionsWereUpdated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberActivityCounter::*)(::GlobalNamespace::Saber*, ::GlobalNamespace::Saber*)>(
    &::GlobalNamespace::SaberActivityCounter::HandleSaberPositionsWereUpdated)> {
  constexpr static std::size_t size = 0x4d0;
  constexpr static std::size_t addrs = 0x59efc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(),
                                                             { "HandleSaberPositionsWereUpdated", {}, { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::GlobalNamespace::Saber*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter.HandleDidPauseEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::HandleDidPauseEvent)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59f00fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "HandleDidPauseEvent", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SaberActivityCounter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SaberActivityCounter::*)()>(&::GlobalNamespace::SaberActivityCounter::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59f0104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__averageWindowDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageWindowDuration;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__averageWindowDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____averageWindowDuration;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__averageWindowDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____averageWindowDuration = value;
}
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__valuesPerSecond() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valuesPerSecond;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__valuesPerSecond() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____valuesPerSecond;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__valuesPerSecond(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____valuesPerSecond = value;
}
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__increaseSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____increaseSpeed;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__increaseSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____increaseSpeed;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__increaseSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____increaseSpeed = value;
}
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__decreaseSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decreaseSpeed;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__decreaseSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____decreaseSpeed;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__decreaseSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____decreaseSpeed = value;
}
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__movementSensitivityThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementSensitivityThreshold;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__movementSensitivityThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____movementSensitivityThreshold;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__movementSensitivityThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____movementSensitivityThreshold = value;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager>& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__saberManager() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr ::UnityW<::GlobalNamespace::SaberManager> const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__saberManager() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberManager;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__saberManager(::UnityW<::GlobalNamespace::SaberManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberManager = value;
}
constexpr ::GlobalNamespace::IGamePause*& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__gamePause() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr ::GlobalNamespace::IGamePause* const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__gamePause() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gamePause;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__gamePause(::GlobalNamespace::IGamePause* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gamePause = value;
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::SaberActivityCounter::__cordl_internal_get_totalDistanceDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalDistanceDidChangeEvent;
}
constexpr ::System::Action_1<float_t>* const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get_totalDistanceDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___totalDistanceDidChangeEvent;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___totalDistanceDidChangeEvent = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__prevLeftSaberTipPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevLeftSaberTipPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__prevLeftSaberTipPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevLeftSaberTipPos;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__prevLeftSaberTipPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevLeftSaberTipPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__prevRightSaberTipPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRightSaberTipPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__prevRightSaberTipPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRightSaberTipPos;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__prevRightSaberTipPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevRightSaberTipPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__prevLeftHandPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevLeftHandPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__prevLeftHandPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevLeftHandPos;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__prevLeftHandPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevLeftHandPos = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__prevRightHandPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRightHandPos;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__prevRightHandPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRightHandPos;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__prevRightHandPos(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevRightHandPos = value;
}
constexpr bool& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__hasPrevPos() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPrevPos;
}
constexpr bool const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__hasPrevPos() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasPrevPos;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__hasPrevPos(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasPrevPos = value;
}
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__leftSaberMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaberMovementDistance;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__leftSaberMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftSaberMovementDistance;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__leftSaberMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftSaberMovementDistance = value;
}
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__rightSaberMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaberMovementDistance;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__rightSaberMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightSaberMovementDistance;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__rightSaberMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightSaberMovementDistance = value;
}
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__leftHandMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandMovementDistance;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__leftHandMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftHandMovementDistance;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__leftHandMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftHandMovementDistance = value;
}
constexpr float_t& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__rightHandMovementDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandMovementDistance;
}
constexpr float_t const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__rightHandMovementDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightHandMovementDistance;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__rightHandMovementDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightHandMovementDistance = value;
}
constexpr ::GlobalNamespace::MovementHistoryRecorder*& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__saberMovementHistoryRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberMovementHistoryRecorder;
}
constexpr ::GlobalNamespace::MovementHistoryRecorder* const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__saberMovementHistoryRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberMovementHistoryRecorder;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__saberMovementHistoryRecorder(::GlobalNamespace::MovementHistoryRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberMovementHistoryRecorder = value;
}
constexpr ::GlobalNamespace::MovementHistoryRecorder*& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__handMovementHistoryRecorder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handMovementHistoryRecorder;
}
constexpr ::GlobalNamespace::MovementHistoryRecorder* const& GlobalNamespace::SaberActivityCounter::__cordl_internal_get__handMovementHistoryRecorder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handMovementHistoryRecorder;
}
constexpr void GlobalNamespace::SaberActivityCounter::__cordl_internal_set__handMovementHistoryRecorder(::GlobalNamespace::MovementHistoryRecorder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handMovementHistoryRecorder = value;
}
inline void GlobalNamespace::SaberActivityCounter::add_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "add_totalDistanceDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::SaberActivityCounter::remove_totalDistanceDidChangeEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "remove_totalDistanceDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::SaberActivityCounter::get_leftSaberMovementDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_leftSaberMovementDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberActivityCounter::get_rightSaberMovementDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_rightSaberMovementDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberActivityCounter::get_leftHandMovementDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_leftHandMovementDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::SaberActivityCounter::get_rightHandMovementDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_rightHandMovementDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline ::GlobalNamespace::AveragingValueRecorder* GlobalNamespace::SaberActivityCounter::get_saberMovementAveragingValueRecorder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_saberMovementAveragingValueRecorder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AveragingValueRecorder*>(this, ___internal_method);
}
inline ::GlobalNamespace::AveragingValueRecorder* GlobalNamespace::SaberActivityCounter::get_handMovementAveragingValueRecorder() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "get_handMovementAveragingValueRecorder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::AveragingValueRecorder*>(this, ___internal_method);
}
inline void GlobalNamespace::SaberActivityCounter::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberActivityCounter::Start() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "Start", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberActivityCounter::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberActivityCounter::HandleSaberPositionsWereUpdated(::GlobalNamespace::Saber* leftSaber, ::GlobalNamespace::Saber* rightSaber) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(),
                                                           { "HandleSaberPositionsWereUpdated", {}, { ::i2c::type_of<::GlobalNamespace::Saber*>(), ::i2c::type_of<::GlobalNamespace::Saber*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, leftSaber, rightSaber);
}
inline void GlobalNamespace::SaberActivityCounter::HandleDidPauseEvent() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { "HandleDidPauseEvent", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SaberActivityCounter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SaberActivityCounter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SaberActivityCounter* GlobalNamespace::SaberActivityCounter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SaberActivityCounter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SaberActivityCounter::SaberActivityCounter() {}

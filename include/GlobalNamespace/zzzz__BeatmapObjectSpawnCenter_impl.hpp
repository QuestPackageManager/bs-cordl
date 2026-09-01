#pragma once
// IWYU pragma private; include "GlobalNamespace\BeatmapObjectSpawnCenter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnCenter_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance.get_playerCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::get_playerCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c9cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>(), { "get_playerCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance.get_distance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::get_distance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c9cf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>(), { "get_distance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::*)()>(
    &::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58c9cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::__cordl_internal_get__playerCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::__cordl_internal_get__playerCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerCount;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::__cordl_internal_set__playerCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerCount = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::__cordl_internal_get__distance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distance;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::__cordl_internal_get__distance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distance;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::__cordl_internal_set__distance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distance = value;
}
inline int32_t GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::get_playerCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>(), { "get_playerCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::get_distance() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>(), { "get_distance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance* GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance::BeatmapObjectSpawnCenter_PlayerCountToDistance() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter.get_spawnCenterDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnCenter::*)()>(&::GlobalNamespace::BeatmapObjectSpawnCenter::get_spawnCenterDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c99ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { "get_spawnCenterDistance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter.get_spawnCenterDistanceWasFound
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::BeatmapObjectSpawnCenter::*)()>(&::GlobalNamespace::BeatmapObjectSpawnCenter::get_spawnCenterDistanceWasFound)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58c99b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { "get_spawnCenterDistanceWasFound", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter.add_spawnCenterDistanceWasFoundEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnCenter::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::BeatmapObjectSpawnCenter::add_spawnCenterDistanceWasFoundEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c99bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(),
                                                                                           { "add_spawnCenterDistanceWasFoundEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter.remove_spawnCenterDistanceWasFoundEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnCenter::*)(::System::Action_1<float_t>*)>(
    &::GlobalNamespace::BeatmapObjectSpawnCenter::remove_spawnCenterDistanceWasFoundEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58c9a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(),
                                                                                           { "remove_spawnCenterDistanceWasFoundEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter.CalculateSpawnCenterPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::BeatmapObjectSpawnCenter::*)(int32_t)>(&::GlobalNamespace::BeatmapObjectSpawnCenter::CalculateSpawnCenterPosition)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x58c9b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { "CalculateSpawnCenterPosition", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter.ReportAndSaveSpawnCenterDistance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnCenter::*)(float_t)>(
    &::GlobalNamespace::BeatmapObjectSpawnCenter::ReportAndSaveSpawnCenterDistance)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58c9cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { "ReportAndSaveSpawnCenterDistance", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapObjectSpawnCenter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::BeatmapObjectSpawnCenter::*)()>(&::GlobalNamespace::BeatmapObjectSpawnCenter::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58c9ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::ArrayW<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*>& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get__distances() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distances;
}
constexpr ::ArrayW<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*> const& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get__distances() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____distances;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_set__distances(::ArrayW<::GlobalNamespace::BeatmapObjectSpawnCenter_PlayerCountToDistance*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____distances = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get__defaultDistnace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultDistnace;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get__defaultDistnace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____defaultDistnace;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_set__defaultDistnace(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____defaultDistnace = value;
}
constexpr ::System::Action_1<float_t>*& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get_spawnCenterDistanceWasFoundEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnCenterDistanceWasFoundEvent;
}
constexpr ::System::Action_1<float_t>* const& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get_spawnCenterDistanceWasFoundEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___spawnCenterDistanceWasFoundEvent;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_set_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___spawnCenterDistanceWasFoundEvent = value;
}
constexpr bool& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get__spawnCenterDistanceWasFound() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceWasFound;
}
constexpr bool const& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get__spawnCenterDistanceWasFound() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistanceWasFound;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_set__spawnCenterDistanceWasFound(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCenterDistanceWasFound = value;
}
constexpr float_t& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get__spawnCenterDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistance;
}
constexpr float_t const& GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_get__spawnCenterDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnCenterDistance;
}
constexpr void GlobalNamespace::BeatmapObjectSpawnCenter::__cordl_internal_set__spawnCenterDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnCenterDistance = value;
}
inline float_t GlobalNamespace::BeatmapObjectSpawnCenter::get_spawnCenterDistance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { "get_spawnCenterDistance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::BeatmapObjectSpawnCenter::get_spawnCenterDistanceWasFound() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { "get_spawnCenterDistanceWasFound", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapObjectSpawnCenter::add_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(),
                                                                                         { "add_spawnCenterDistanceWasFoundEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::BeatmapObjectSpawnCenter::remove_spawnCenterDistanceWasFoundEvent(::System::Action_1<float_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(),
                                                                                         { "remove_spawnCenterDistanceWasFoundEvent", {}, { ::i2c::type_of<::System::Action_1<float_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::BeatmapObjectSpawnCenter::CalculateSpawnCenterPosition(int32_t numberOfPlayers) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { "CalculateSpawnCenterPosition", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, numberOfPlayers);
}
inline void GlobalNamespace::BeatmapObjectSpawnCenter::ReportAndSaveSpawnCenterDistance(float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { "ReportAndSaveSpawnCenterDistance", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void GlobalNamespace::BeatmapObjectSpawnCenter::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::BeatmapObjectSpawnCenter*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapObjectSpawnCenter* GlobalNamespace::BeatmapObjectSpawnCenter::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::BeatmapObjectSpawnCenter*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapObjectSpawnCenter::BeatmapObjectSpawnCenter() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace/HandsMovementMissionObjectiveChecker.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__HandsMovementMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__SaberActivityCounter_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HandsMovementMissionObjectiveChecker.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(&::GlobalNamespace::HandsMovementMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5918994;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandsMovementMissionObjectiveChecker.HandleTotalDistanceDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandsMovementMissionObjectiveChecker::*)(float_t)>(
    &::GlobalNamespace::HandsMovementMissionObjectiveChecker::HandleTotalDistanceDidChange)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5918aa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(), { "HandleTotalDistanceDidChange", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandsMovementMissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(&::GlobalNamespace::HandsMovementMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5918b08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::HandsMovementMissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HandsMovementMissionObjectiveChecker::*)()>(&::GlobalNamespace::HandsMovementMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5918c14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter>& GlobalNamespace::HandsMovementMissionObjectiveChecker::__cordl_internal_get__saberActivityCounter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberActivityCounter;
}
constexpr ::UnityW<::GlobalNamespace::SaberActivityCounter> const& GlobalNamespace::HandsMovementMissionObjectiveChecker::__cordl_internal_get__saberActivityCounter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saberActivityCounter;
}
constexpr void GlobalNamespace::HandsMovementMissionObjectiveChecker::__cordl_internal_set__saberActivityCounter(::UnityW<::GlobalNamespace::SaberActivityCounter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saberActivityCounter = value;
}
inline void GlobalNamespace::HandsMovementMissionObjectiveChecker::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandsMovementMissionObjectiveChecker::HandleTotalDistanceDidChange(float_t distance) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(), { "HandleTotalDistanceDidChange", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, distance);
}
inline void GlobalNamespace::HandsMovementMissionObjectiveChecker::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::HandsMovementMissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HandsMovementMissionObjectiveChecker* GlobalNamespace::HandsMovementMissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HandsMovementMissionObjectiveChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HandsMovementMissionObjectiveChecker::HandsMovementMissionObjectiveChecker() {}

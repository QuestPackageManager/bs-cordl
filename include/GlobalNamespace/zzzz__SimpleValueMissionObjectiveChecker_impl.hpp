#pragma once
// IWYU pragma private; include "GlobalNamespace/SimpleValueMissionObjectiveChecker.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SimpleValueMissionObjectiveChecker.CheckAndUpdateStatus
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleValueMissionObjectiveChecker::*)()>(
    &::GlobalNamespace::SimpleValueMissionObjectiveChecker::CheckAndUpdateStatus)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5917cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleValueMissionObjectiveChecker*>(), { "CheckAndUpdateStatus", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::SimpleValueMissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SimpleValueMissionObjectiveChecker::*)()>(&::GlobalNamespace::SimpleValueMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5917db4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleValueMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SimpleValueMissionObjectiveChecker::CheckAndUpdateStatus() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleValueMissionObjectiveChecker*>(), { "CheckAndUpdateStatus", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::SimpleValueMissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SimpleValueMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SimpleValueMissionObjectiveChecker* GlobalNamespace::SimpleValueMissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SimpleValueMissionObjectiveChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SimpleValueMissionObjectiveChecker::SimpleValueMissionObjectiveChecker() {}

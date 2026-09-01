#pragma once
// IWYU pragma private; include "GlobalNamespace\ScoreMissionObjectiveChecker.hpp"
#include "GlobalNamespace/zzzz__SimpleValueMissionObjectiveChecker_impl.hpp"
#include "GlobalNamespace/zzzz__ScoreMissionObjectiveChecker_def.hpp"
#include "GlobalNamespace/zzzz__IScoreController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ScoreMissionObjectiveChecker.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreMissionObjectiveChecker::*)()>(&::GlobalNamespace::ScoreMissionObjectiveChecker::OnDestroy)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x591b8f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMissionObjectiveChecker.HandleScoreDidChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreMissionObjectiveChecker::*)(int32_t, int32_t)>(
    &::GlobalNamespace::ScoreMissionObjectiveChecker::HandleScoreDidChange)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x591ba30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(),
                                                                                           { "HandleScoreDidChange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMissionObjectiveChecker.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreMissionObjectiveChecker::*)()>(&::GlobalNamespace::ScoreMissionObjectiveChecker::Init)> {
  constexpr static std::size_t size = 0x20c;
  constexpr static std::size_t addrs = 0x591ba78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(), { ::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ScoreMissionObjectiveChecker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ScoreMissionObjectiveChecker::*)()>(&::GlobalNamespace::ScoreMissionObjectiveChecker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x591bc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IScoreController*& GlobalNamespace::ScoreMissionObjectiveChecker::__cordl_internal_get__scoreController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr ::GlobalNamespace::IScoreController* const& GlobalNamespace::ScoreMissionObjectiveChecker::__cordl_internal_get__scoreController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreController;
}
constexpr void GlobalNamespace::ScoreMissionObjectiveChecker::__cordl_internal_set__scoreController(::GlobalNamespace::IScoreController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____scoreController = value;
}
inline void GlobalNamespace::ScoreMissionObjectiveChecker::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreMissionObjectiveChecker::HandleScoreDidChange(int32_t multipliedScore, int32_t modifiedScore) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(), { "HandleScoreDidChange", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multipliedScore, modifiedScore);
}
inline void GlobalNamespace::ScoreMissionObjectiveChecker::Init() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::ScoreMissionObjectiveChecker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ScoreMissionObjectiveChecker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::ScoreMissionObjectiveChecker* GlobalNamespace::ScoreMissionObjectiveChecker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ScoreMissionObjectiveChecker*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ScoreMissionObjectiveChecker::ScoreMissionObjectiveChecker() {}

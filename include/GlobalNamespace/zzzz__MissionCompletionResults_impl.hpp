#pragma once
// IWYU pragma private; include "GlobalNamespace/MissionCompletionResults.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveResult_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionObjectiveResult_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MissionCompletionResults.get_IsMissionComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MissionCompletionResults::*)()>(&::GlobalNamespace::MissionCompletionResults::get_IsMissionComplete)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x3751b14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionCompletionResults*>(), { "get_IsMissionComplete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MissionCompletionResults._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MissionCompletionResults::*)(
    ::GlobalNamespace::LevelCompletionResults*, ::ArrayW<::GlobalNamespace::MissionObjectiveResult*>)>(&::GlobalNamespace::MissionCompletionResults::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3751b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionCompletionResults*>(),
                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjectiveResult*>>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::LevelCompletionResults*& GlobalNamespace::MissionCompletionResults::__cordl_internal_get_levelCompletionResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr ::GlobalNamespace::LevelCompletionResults* const& GlobalNamespace::MissionCompletionResults::__cordl_internal_get_levelCompletionResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelCompletionResults;
}
constexpr void GlobalNamespace::MissionCompletionResults::__cordl_internal_set_levelCompletionResults(::GlobalNamespace::LevelCompletionResults* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___levelCompletionResults = value;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*>& GlobalNamespace::MissionCompletionResults::__cordl_internal_get_missionObjectiveResults() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectiveResults;
}
constexpr ::ArrayW<::GlobalNamespace::MissionObjectiveResult*> const& GlobalNamespace::MissionCompletionResults::__cordl_internal_get_missionObjectiveResults() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___missionObjectiveResults;
}
constexpr void GlobalNamespace::MissionCompletionResults::__cordl_internal_set_missionObjectiveResults(::ArrayW<::GlobalNamespace::MissionObjectiveResult*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___missionObjectiveResults = value;
}
inline bool GlobalNamespace::MissionCompletionResults::get_IsMissionComplete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionCompletionResults*>(), { "get_IsMissionComplete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MissionCompletionResults::_ctor(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                             ::ArrayW<::GlobalNamespace::MissionObjectiveResult*> missionObjectiveResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MissionCompletionResults*>(),
                                       { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MissionObjectiveResult*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults, missionObjectiveResults);
}
inline ::GlobalNamespace::MissionCompletionResults* GlobalNamespace::MissionCompletionResults::New_ctor(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                                        ::ArrayW<::GlobalNamespace::MissionObjectiveResult*> missionObjectiveResults) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MissionCompletionResults*>(levelCompletionResults, missionObjectiveResults));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MissionCompletionResults::MissionCompletionResults() {}

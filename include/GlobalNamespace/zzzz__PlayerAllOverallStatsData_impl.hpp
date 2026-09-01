#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerAllOverallStatsData.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerAllOverallStatsData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__IMissionNode_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__MissionCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAllOverallStatsData_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_goodCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_goodCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746ca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_goodCutsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_goodCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int32_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_goodCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746cb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_goodCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_badCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_badCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_badCutsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_badCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int32_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_badCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_badCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_missedCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_missedCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746cc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_missedCutsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_missedCutsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int32_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_missedCutsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_missedCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_totalScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_totalScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_totalScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_totalScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int64_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_totalScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746ce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_totalScore", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_playedLevelsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_playedLevelsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_playedLevelsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_playedLevelsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int32_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_playedLevelsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_playedLevelsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_clearedLevelsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_clearedLevelsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_clearedLevelsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_clearedLevelsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int32_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_clearedLevelsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_clearedLevelsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_failedLevelsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_failedLevelsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_failedLevelsCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_failedLevelsCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int32_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_failedLevelsCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_failedLevelsCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_fullComboCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_fullComboCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_fullComboCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_fullComboCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int32_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_fullComboCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_fullComboCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_timePlayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_timePlayed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_timePlayed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_timePlayed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(float_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_timePlayed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_timePlayed", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_handDistanceTravelled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_handDistanceTravelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_handDistanceTravelled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_handDistanceTravelled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int32_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_handDistanceTravelled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_handDistanceTravelled", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.get_totalCutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_totalCutScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_totalCutScore", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.set_totalCutScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(int64_t)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_totalCutScore)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_totalCutScore", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3746a18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(
    int32_t, int32_t, int32_t, int64_t, int32_t, int32_t, int32_t, int32_t, float_t, int32_t, int64_t)>(&::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3746d58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                            { ".ctor",
                              {},
                              { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.op_Addition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (*)(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*,
                                                                                                                                ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::op_Addition)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x374640c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                           { "op_Addition",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData.UpdateWithLevelCompletionResults
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::*)(::GlobalNamespace::LevelCompletionResults*)>(
    &::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::UpdateWithLevelCompletionResults)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x3746a90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                             { "UpdateWithLevelCompletionResults", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__goodCutsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__goodCutsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____goodCutsCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__goodCutsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____goodCutsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__badCutsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__badCutsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____badCutsCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__badCutsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____badCutsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__missedCutsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedCutsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__missedCutsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____missedCutsCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__missedCutsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____missedCutsCount_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__totalScore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalScore_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__totalScore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalScore_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__totalScore_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalScore_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__playedLevelsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playedLevelsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__playedLevelsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playedLevelsCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__playedLevelsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playedLevelsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__clearedLevelsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__clearedLevelsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearedLevelsCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__clearedLevelsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearedLevelsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__failedLevelsCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLevelsCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__failedLevelsCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____failedLevelsCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__failedLevelsCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____failedLevelsCount_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__fullComboCount_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboCount_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__fullComboCount_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullComboCount_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__fullComboCount_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullComboCount_k__BackingField = value;
}
constexpr float_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__timePlayed_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timePlayed_k__BackingField;
}
constexpr float_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__timePlayed_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timePlayed_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__timePlayed_k__BackingField(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timePlayed_k__BackingField = value;
}
constexpr int32_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__handDistanceTravelled_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handDistanceTravelled_k__BackingField;
}
constexpr int32_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__handDistanceTravelled_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handDistanceTravelled_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__handDistanceTravelled_k__BackingField(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____handDistanceTravelled_k__BackingField = value;
}
constexpr int64_t& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__totalCutScore_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalCutScore_k__BackingField;
}
constexpr int64_t const& GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_get__totalCutScore_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____totalCutScore_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::__cordl_internal_set__totalCutScore_k__BackingField(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____totalCutScore_k__BackingField = value;
}
inline int32_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_goodCutsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_goodCutsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_goodCutsCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_goodCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_badCutsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_badCutsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_badCutsCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_badCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_missedCutsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_missedCutsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_missedCutsCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_missedCutsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_totalScore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_totalScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_totalScore(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_totalScore", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_playedLevelsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_playedLevelsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_playedLevelsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_playedLevelsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_clearedLevelsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_clearedLevelsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_clearedLevelsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_clearedLevelsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_failedLevelsCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_failedLevelsCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_failedLevelsCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_failedLevelsCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_fullComboCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_fullComboCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_fullComboCount(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_fullComboCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_timePlayed() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_timePlayed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_timePlayed(float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_timePlayed", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_handDistanceTravelled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_handDistanceTravelled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_handDistanceTravelled(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_handDistanceTravelled", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int64_t GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::get_totalCutScore() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "get_totalCutScore", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::set_totalCutScore(int64_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { "set_totalCutScore", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore,
                                                                                     int32_t playedLevelsCount, int32_t clearedLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount,
                                                                                     float_t timePlayed, int32_t handDistanceTravelled, int64_t totalCutScore) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>(),
                                                                                             ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<float_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, goodCutsCount, badCutsCount, missedCutsCount, totalScore, playedLevelsCount, clearedLevelsCount, failedLevelsCount,
                                                   fullComboCount, timePlayed, handDistanceTravelled, totalCutScore);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*
GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::op_Addition(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* a,
                                                                               ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* b) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                         { "op_Addition",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(nullptr, ___internal_method, a, b);
}
inline void GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::UpdateWithLevelCompletionResults(::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                           { "UpdateWithLevelCompletionResults", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>());
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*
GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::New_ctor(int32_t goodCutsCount, int32_t badCutsCount, int32_t missedCutsCount, int64_t totalScore, int32_t playedLevelsCount,
                                                                            int32_t clearedLevelsCount, int32_t failedLevelsCount, int32_t fullComboCount, float_t timePlayed,
                                                                            int32_t handDistanceTravelled, int64_t totalCutScore) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(goodCutsCount, badCutsCount, missedCutsCount, totalScore,
                                                                                                                                playedLevelsCount, clearedLevelsCount, failedLevelsCount,
                                                                                                                                fullComboCount, timePlayed, handDistanceTravelled, totalCutScore));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData::PlayerAllOverallStatsData_PlayerOverallStatsData() {}
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.get_allOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerAllOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData::get_allOverallStatsData)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x37463e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_allOverallStatsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.get_campaignOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerAllOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData::get_campaignOverallStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x37464f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_campaignOverallStatsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.get_soloFreePlayOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerAllOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData::get_soloFreePlayOverallStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746500;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_soloFreePlayOverallStatsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.get_partyFreePlayOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerAllOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData::get_partyFreePlayOverallStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746508;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_partyFreePlayOverallStatsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.get_onlinePlayOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (::GlobalNamespace::PlayerAllOverallStatsData::*)()>(
    &::GlobalNamespace::PlayerAllOverallStatsData::get_onlinePlayOverallStatsData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3746510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_onlinePlayOverallStatsData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.add_didUpdateSoloFreePlayOverallStatsDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*)>(
        &::GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateSoloFreePlayOverallStatsDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3746518;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
            { "add_didUpdateSoloFreePlayOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.remove_didUpdateSoloFreePlayOverallStatsDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*)>(
        &::GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateSoloFreePlayOverallStatsDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x37465d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
            { "remove_didUpdateSoloFreePlayOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.add_didUpdatePartyFreePlayOverallStatsDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*)>(
        &::GlobalNamespace::PlayerAllOverallStatsData::add_didUpdatePartyFreePlayOverallStatsDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3746698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
            { "add_didUpdatePartyFreePlayOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.remove_didUpdatePartyFreePlayOverallStatsDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*)>(
        &::GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdatePartyFreePlayOverallStatsDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3746758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                                                             { "remove_didUpdatePartyFreePlayOverallStatsDataEvent",
                                                               {},
                                                               { ::i2c::type_of<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.add_didUpdateCampaignOverallStatsDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(
    ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*)>(&::GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateCampaignOverallStatsDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3746818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
            { "add_didUpdateCampaignOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.remove_didUpdateCampaignOverallStatsDataEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*)>(
        &::GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateCampaignOverallStatsDataEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x37468d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
            { "remove_didUpdateCampaignOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)()>(&::GlobalNamespace::PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x3746998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(
    ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*, ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*,
    ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*, ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*)>(
    &::GlobalNamespace::PlayerAllOverallStatsData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3746a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                                                                                           { ".ctor",
                                                                                             {},
                                                                                             { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                               ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.UpdateSoloFreePlayOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::PlayerAllOverallStatsData::UpdateSoloFreePlayOverallStatsData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3746a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                            { "UpdateSoloFreePlayOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.UpdatePartyFreePlayOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty)>(
    &::GlobalNamespace::PlayerAllOverallStatsData::UpdatePartyFreePlayOverallStatsData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3746ba8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                            { "UpdatePartyFreePlayOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.UpdateCampaignOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*)>(
    &::GlobalNamespace::PlayerAllOverallStatsData::UpdateCampaignOverallStatsData)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x3746c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                            { "UpdateCampaignOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::IMissionNode*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerAllOverallStatsData.UpdateOnlinePlayOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::PlayerAllOverallStatsData::*)(::GlobalNamespace::LevelCompletionResults*)>(
    &::GlobalNamespace::PlayerAllOverallStatsData::UpdateOnlinePlayOverallStatsData)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x3746c7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                                                             { "UpdateOnlinePlayOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*& GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get__campaignOverallStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignOverallStatsData_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* const&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get__campaignOverallStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____campaignOverallStatsData_k__BackingField;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_set__campaignOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____campaignOverallStatsData_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*& GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get__soloFreePlayOverallStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soloFreePlayOverallStatsData_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* const&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get__soloFreePlayOverallStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____soloFreePlayOverallStatsData_k__BackingField;
}
constexpr void
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_set__soloFreePlayOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____soloFreePlayOverallStatsData_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*& GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get__partyFreePlayOverallStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyFreePlayOverallStatsData_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* const&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get__partyFreePlayOverallStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____partyFreePlayOverallStatsData_k__BackingField;
}
constexpr void
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_set__partyFreePlayOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____partyFreePlayOverallStatsData_k__BackingField = value;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*& GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get__onlinePlayOverallStatsData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlinePlayOverallStatsData_k__BackingField;
}
constexpr ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* const&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get__onlinePlayOverallStatsData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onlinePlayOverallStatsData_k__BackingField;
}
constexpr void
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_set__onlinePlayOverallStatsData_k__BackingField(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onlinePlayOverallStatsData_k__BackingField = value;
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get_didUpdateSoloFreePlayOverallStatsDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateSoloFreePlayOverallStatsDataEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* const&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get_didUpdateSoloFreePlayOverallStatsDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateSoloFreePlayOverallStatsDataEvent;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_set_didUpdateSoloFreePlayOverallStatsDataEvent(
    ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didUpdateSoloFreePlayOverallStatsDataEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get_didUpdatePartyFreePlayOverallStatsDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdatePartyFreePlayOverallStatsDataEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* const&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get_didUpdatePartyFreePlayOverallStatsDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdatePartyFreePlayOverallStatsDataEvent;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_set_didUpdatePartyFreePlayOverallStatsDataEvent(
    ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didUpdatePartyFreePlayOverallStatsDataEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get_didUpdateCampaignOverallStatsDataEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateCampaignOverallStatsDataEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* const&
GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_get_didUpdateCampaignOverallStatsDataEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didUpdateCampaignOverallStatsDataEvent;
}
constexpr void GlobalNamespace::PlayerAllOverallStatsData::__cordl_internal_set_didUpdateCampaignOverallStatsDataEvent(
    ::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didUpdateCampaignOverallStatsDataEvent = value;
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerAllOverallStatsData::get_allOverallStatsData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_allOverallStatsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerAllOverallStatsData::get_campaignOverallStatsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_campaignOverallStatsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerAllOverallStatsData::get_soloFreePlayOverallStatsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_soloFreePlayOverallStatsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerAllOverallStatsData::get_partyFreePlayOverallStatsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_partyFreePlayOverallStatsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* GlobalNamespace::PlayerAllOverallStatsData::get_onlinePlayOverallStatsData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { "get_onlinePlayOverallStatsData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateSoloFreePlayOverallStatsDataEvent(
    ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
          { "add_didUpdateSoloFreePlayOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateSoloFreePlayOverallStatsDataEvent(
    ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
          { "remove_didUpdateSoloFreePlayOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::add_didUpdatePartyFreePlayOverallStatsDataEvent(
    ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
          { "add_didUpdatePartyFreePlayOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdatePartyFreePlayOverallStatsDataEvent(
    ::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
          { "remove_didUpdatePartyFreePlayOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::LevelCompletionResults*, ::GlobalNamespace::BeatmapDifficulty>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::PlayerAllOverallStatsData::add_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
          { "add_didUpdateCampaignOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void
GlobalNamespace::PlayerAllOverallStatsData::remove_didUpdateCampaignOverallStatsDataEvent(::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
          { "remove_didUpdateCampaignOverallStatsDataEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MissionCompletionResults*, ::GlobalNamespace::IMissionNode*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::_ctor(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* campaignOverallStatsData,
                                                              ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                              ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                              ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* onlinePlayOverallStatsData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                                                                                         { ".ctor",
                                                                                           {},
                                                                                           { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(),
                                                                                             ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData, onlinePlayOverallStatsData);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::UpdateSoloFreePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                           ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                          { "UpdateSoloFreePlayOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults, beatmapDifficulty);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::UpdatePartyFreePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                                                                                            ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                          { "UpdatePartyFreePlayOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults, beatmapDifficulty);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::UpdateCampaignOverallStatsData(::GlobalNamespace::MissionCompletionResults* missionCompletionResults,
                                                                                       ::GlobalNamespace::IMissionNode* missionNode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                          { "UpdateCampaignOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::MissionCompletionResults*>(), ::i2c::type_of<::GlobalNamespace::IMissionNode*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, missionCompletionResults, missionNode);
}
inline void GlobalNamespace::PlayerAllOverallStatsData::UpdateOnlinePlayOverallStatsData(::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerAllOverallStatsData*>(),
                                                           { "UpdateOnlinePlayOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData* GlobalNamespace::PlayerAllOverallStatsData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerAllOverallStatsData*>());
}
inline ::GlobalNamespace::PlayerAllOverallStatsData*
GlobalNamespace::PlayerAllOverallStatsData::New_ctor(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* campaignOverallStatsData,
                                                     ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* soloFreePlayOverallStatsData,
                                                     ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* partyFreePlayOverallStatsData,
                                                     ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* onlinePlayOverallStatsData) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::PlayerAllOverallStatsData*>(campaignOverallStatsData, soloFreePlayOverallStatsData, partyFreePlayOverallStatsData,
                                                                                                         onlinePlayOverallStatsData));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerAllOverallStatsData::PlayerAllOverallStatsData() {}

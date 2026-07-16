#pragma once
// IWYU pragma private; include "GlobalNamespace/PlayerDataModelHelper.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModelHelper_def.hpp"
#include "GlobalNamespace/zzzz__PlayerAllOverallStatsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataV1_0_1_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModelHelper.ToPlayerAllOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData* (*)(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*)>(
    &::GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3747940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                             { "ToPlayerAllOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModelHelper.ToPlayerAllOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData* (*)(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*)>(
    &::GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x3747fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                             { "ToPlayerAllOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModelHelper.ToPlayerOverallStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (*)(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*)>(
    &::GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStats)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x374960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                             { "ToPlayerOverallStats", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModelHelper.ToPlayerOverallStats
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* (*)(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*)>(
    &::GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStats)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x37496d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                             { "ToPlayerOverallStats", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModelHelper.ToPlayerAllOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* (*)(::GlobalNamespace::PlayerAllOverallStatsData*)>(
    &::GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3745824;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(), { "ToPlayerAllOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerDataModelHelper.ToPlayerOverallStatsData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* (*)(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*)>(
    &::GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStatsData)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x374981c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                             { "ToPlayerOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::PlayerAllOverallStatsData*
GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData(::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData* playerAllOverallStatsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                           { "ToPlayerAllOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData*>(nullptr, ___internal_method, playerAllOverallStatsData);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData*
GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData* playerAllOverallStatsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                           { "ToPlayerAllOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerAllOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData*>(nullptr, ___internal_method, playerAllOverallStatsData);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*
GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStats(::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData* playerAllOverallStatsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                           { "ToPlayerOverallStats", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(nullptr, ___internal_method, playerAllOverallStatsData);
}
inline ::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*
GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStats(::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData* playerAllOverallStatsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                           { "ToPlayerOverallStats", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSaveDataV1_0_1_PlayerOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>(nullptr, ___internal_method, playerAllOverallStatsData);
}
inline ::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*
GlobalNamespace::PlayerDataModelHelper::ToPlayerAllOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData* playerAllOverallStatsData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                                                         { "ToPlayerAllOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSaveData_PlayerAllOverallStatsData*>(nullptr, ___internal_method, playerAllOverallStatsData);
}
inline ::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*
GlobalNamespace::PlayerDataModelHelper::ToPlayerOverallStatsData(::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData* playerOverallStatsData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerDataModelHelper*>(),
                                                           { "ToPlayerOverallStatsData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerAllOverallStatsData_PlayerOverallStatsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSaveData_PlayerOverallStatsData*>(nullptr, ___internal_method, playerOverallStatsData);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerDataModelHelper::PlayerDataModelHelper() {}

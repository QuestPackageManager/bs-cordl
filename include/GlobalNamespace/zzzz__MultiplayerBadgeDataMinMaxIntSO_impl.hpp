#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerBadgeDataMinMaxIntSO.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeMinMax_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxIntSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO.CalculateBadgeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*,
                                                           ::by_ref<::GlobalNamespace::BeatmapKey>, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x372faac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(
    &::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(), { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO.CalculateMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, float_t)>(
    &::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateMax)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x372fac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(),
                         { "CalculateMax", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO.CalculateMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, float_t)>(
    &::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateMin)> {
  constexpr static std::size_t size = 0x568;
  constexpr static std::size_t addrs = 0x3730024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(),
                         { "CalculateMin", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x372eac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerBadgeMinMax& GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::__cordl_internal_get__minMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minMax;
}
constexpr ::GlobalNamespace::MultiplayerBadgeMinMax const& GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::__cordl_internal_get__minMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minMax;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::__cordl_internal_set__minMax(::GlobalNamespace::MultiplayerBadgeMinMax value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minMax = value;
}
constexpr float_t& GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::__cordl_internal_get__weightMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weightMultiplier;
}
constexpr float_t const& GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::__cordl_internal_get__weightMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weightMultiplier;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::__cordl_internal_set__weightMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____weightMultiplier = value;
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                     ::GlobalNamespace::PlayerDataModel* playerDataModel, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                     float_t randomMultiplier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*>(this, ___internal_method, resultsData, playerDataModel, beatmapKey, randomMultiplier);
}
inline int32_t GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateMax(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                               float_t randomMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(),
                       { "CalculateMax", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*>(this, ___internal_method, resultsData, randomMultiplier);
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::CalculateMin(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                               float_t randomMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(),
                       { "CalculateMin", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*>(this, ___internal_method, resultsData, randomMultiplier);
}
inline void GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO* GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataMinMaxIntSO::MultiplayerBadgeDataMinMaxIntSO() {}

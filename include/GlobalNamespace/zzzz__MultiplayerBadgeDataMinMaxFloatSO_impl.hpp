#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerBadgeDataMinMaxFloatSO.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataSO_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeMinMax_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeDataMinMaxFloatSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerBadgeAwardData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerPlayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerDataModel_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO.CalculateBadgeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, ::GlobalNamespace::PlayerDataModel*,
                                                             ::by_ref<::GlobalNamespace::BeatmapKey>, float_t)>(&::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::CalculateBadgeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3733670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::*)(::GlobalNamespace::MultiplayerPlayerResultsData*)>(
    &::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(),
                                                                                          { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO.CalculateMax
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, float_t)>(
    &::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::CalculateMax)> {
  constexpr static std::size_t size = 0x560;
  constexpr static std::size_t addrs = 0x3733684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(),
                         { "CalculateMax", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO.CalculateMin
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::MultiplayerBadgeAwardData* (
    ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::*)(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*, float_t)>(
    &::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::CalculateMin)> {
  constexpr static std::size_t size = 0x56c;
  constexpr static std::size_t addrs = 0x3733be4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(),
                         { "CalculateMin", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::*)()>(&::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3733660;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::MultiplayerBadgeMinMax& GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::__cordl_internal_get__minMax() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minMax;
}
constexpr ::GlobalNamespace::MultiplayerBadgeMinMax const& GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::__cordl_internal_get__minMax() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minMax;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::__cordl_internal_set__minMax(::GlobalNamespace::MultiplayerBadgeMinMax value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minMax = value;
}
constexpr float_t& GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::__cordl_internal_get__weightMultiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weightMultiplier;
}
constexpr float_t const& GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::__cordl_internal_get__weightMultiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____weightMultiplier;
}
constexpr void GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::__cordl_internal_set__weightMultiplier(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____weightMultiplier = value;
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::CalculateBadgeData(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                       ::GlobalNamespace::PlayerDataModel* playerDataModel, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey,
                                                                       float_t randomMultiplier) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*>(this, ___internal_method, resultsData, playerDataModel, beatmapKey, randomMultiplier);
}
inline float_t GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::GetValue(::GlobalNamespace::MultiplayerPlayerResultsData* result) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, result);
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::CalculateMax(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                 float_t randomMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(),
                       { "CalculateMax", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*>(this, ___internal_method, resultsData, randomMultiplier);
}
inline ::GlobalNamespace::MultiplayerBadgeAwardData*
GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::CalculateMin(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>* resultsData,
                                                                 float_t randomMultiplier) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(),
                       { "CalculateMin", {}, { ::i2c::type_of<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::MultiplayerPlayerResultsData*>*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::MultiplayerBadgeAwardData*>(this, ___internal_method, resultsData, randomMultiplier);
}
inline void GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO* GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerBadgeDataMinMaxFloatSO::MultiplayerBadgeDataMinMaxFloatSO() {}

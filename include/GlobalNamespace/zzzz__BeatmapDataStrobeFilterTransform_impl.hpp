#pragma once
// IWYU pragma private; include "GlobalNamespace/BeatmapDataStrobeFilterTransform.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataStrobeFilterTransform_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataStrobeFilterTransform_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData.StartPotentialStrobe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::*)(
    ::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::StartPotentialStrobe)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x26ae07c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData*>::get(), "StartPotentialStrobe",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData.AddStrobeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::*)(
    ::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::AddStrobeData)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x26adfc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData*>::get(), "AddStrobeData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::*)()>(
    &::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x26adf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr bool const& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isActive;
}
constexpr void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_set_isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isActive = value;
}
constexpr float_t& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_strobeStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeStartTime;
}
constexpr float_t const& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_strobeStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___strobeStartTime;
}
constexpr void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_set_strobeStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___strobeStartTime = value;
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_startColorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startColorType;
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_startColorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___startColorType;
}
constexpr void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_set_startColorType(::GlobalNamespace::EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___startColorType = value;
}
constexpr float_t& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_lastSwitchTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSwitchTime;
}
constexpr float_t const& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_lastSwitchTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastSwitchTime;
}
constexpr void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_set_lastSwitchTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastSwitchTime = value;
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_lastColorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastColorType;
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_lastColorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastColorType;
}
constexpr void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_set_lastColorType(::GlobalNamespace::EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastColorType = value;
}
constexpr bool& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_lastIsOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastIsOn;
}
constexpr bool const& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_lastIsOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastIsOn;
}
constexpr void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_set_lastIsOn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastIsOn = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventData*& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_originalBasicBeatmapEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalBasicBeatmapEventData;
}
constexpr ::GlobalNamespace::BasicBeatmapEventData* const& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get_originalBasicBeatmapEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalBasicBeatmapEventData;
}
constexpr void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_set_originalBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originalBasicBeatmapEventData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get__foundFirstColoredEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foundFirstColoredEventData;
}
constexpr bool const& GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_get__foundFirstColoredEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foundFirstColoredEventData;
}
constexpr void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::__cordl_internal_set__foundFirstColoredEventData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____foundFirstColoredEventData = value;
}
inline void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::StartPotentialStrobe(::GlobalNamespace::BasicBeatmapEventData* startBasicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData*>::get(), "StartPotentialStrobe",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startBasicBeatmapEventData);
}
inline void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::AddStrobeData(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData*>::get(), "AddStrobeData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline void GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData* GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataStrobeFilterTransform_StrobeStreakData::BeatmapDataStrobeFilterTransform_StrobeStreakData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::EnvironmentIntensityReductionOptions*)>(
        &::GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0xc44;
  constexpr static std::size_t addrs = 0x26ad2f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "CreateTransformedData", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.GetOnEventDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::EnvironmentColorType)>(
    &::GlobalNamespace::BeatmapDataStrobeFilterTransform::GetOnEventDataValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x26ae038;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "GetOnEventDataValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.GetFlashAndFadeToBlackEventDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::EnvironmentColorType)>(
    &::GlobalNamespace::BeatmapDataStrobeFilterTransform::GetFlashAndFadeToBlackEventDataValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x26ae05c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "GetFlashAndFadeToBlackEventDataValue",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData*
GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                         ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "CreateTransformedData", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(nullptr, ___internal_method, beatmapData, environmentIntensityReductionOptions);
}
inline int32_t GlobalNamespace::BeatmapDataStrobeFilterTransform::GetOnEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "GetOnEventDataValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lightColorType);
}
inline int32_t GlobalNamespace::BeatmapDataStrobeFilterTransform::GetFlashAndFadeToBlackEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "GetFlashAndFadeToBlackEventDataValue",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lightColorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataStrobeFilterTransform::BeatmapDataStrobeFilterTransform() {}

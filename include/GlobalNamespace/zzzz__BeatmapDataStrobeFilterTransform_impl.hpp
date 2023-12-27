#pragma once
#include "GlobalNamespace/zzzz__EnvironmentColorType_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataStrobeFilterTransform_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentColorType_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataStrobeFilterTransform_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentIntensityReductionOptions_def.hpp"
#include "GlobalNamespace/zzzz__BasicBeatmapEventData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData.StartPotentialStrobe
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::*)(
    ::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::StartPotentialStrobe)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x223b940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(), "StartPotentialStrobe", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData.AddStrobeData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::*)(
    ::GlobalNamespace::BasicBeatmapEventData*)>(&::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::AddStrobeData)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x223b868;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(), "AddStrobeData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::*)()>(
    &::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x223b860;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_isActive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isActive;
}
constexpr bool const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_isActive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___isActive;
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_isActive(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___isActive = value;
}
constexpr float_t& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_strobeStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strobeStartTime;
}
constexpr float_t const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_strobeStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___strobeStartTime;
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_strobeStartTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___strobeStartTime = value;
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_startColorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startColorType;
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_startColorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___startColorType;
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_startColorType(::GlobalNamespace::EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___startColorType = value;
}
constexpr float_t& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastSwitchTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastSwitchTime;
}
constexpr float_t const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastSwitchTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastSwitchTime;
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_lastSwitchTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lastSwitchTime = value;
}
constexpr ::GlobalNamespace::EnvironmentColorType& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastColorType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastColorType;
}
constexpr ::GlobalNamespace::EnvironmentColorType const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastColorType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastColorType;
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_lastColorType(::GlobalNamespace::EnvironmentColorType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lastColorType = value;
}
constexpr bool& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastIsOn() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastIsOn;
}
constexpr bool const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_lastIsOn() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___lastIsOn;
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_lastIsOn(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->___lastIsOn = value;
}
constexpr ::GlobalNamespace::BasicBeatmapEventData*& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_originalBasicBeatmapEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___originalBasicBeatmapEventData;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BasicBeatmapEventData*> const&
GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get_originalBasicBeatmapEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->___originalBasicBeatmapEventData;
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set_originalBasicBeatmapEventData(::GlobalNamespace::BasicBeatmapEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___originalBasicBeatmapEventData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get__foundFirstColoredEventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____foundFirstColoredEventData;
}
constexpr bool const& GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__get__foundFirstColoredEventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  return this->____foundFirstColoredEventData;
}
constexpr void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__set__foundFirstColoredEventData(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void*>(this));
  this->____foundFirstColoredEventData = value;
}
inline void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::StartPotentialStrobe(::GlobalNamespace::BasicBeatmapEventData* startBasicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(), "StartPotentialStrobe", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startBasicBeatmapEventData);
}
inline void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::AddStrobeData(::GlobalNamespace::BasicBeatmapEventData* basicBeatmapEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(), "AddStrobeData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BasicBeatmapEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, basicBeatmapEventData);
}
inline ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData* GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>());
}
inline void GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapDataStrobeFilterTransform__StrobeStreakData::__BeatmapDataStrobeFilterTransform__StrobeStreakData() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.CreateTransformedData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::IReadonlyBeatmapData* (*)(::GlobalNamespace::IReadonlyBeatmapData*, ::GlobalNamespace::EnvironmentIntensityReductionOptions*)>(
        &::GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData)> {
  constexpr static std::size_t size = 0xc38;
  constexpr static std::size_t addrs = 0x223ac28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "CreateTransformedData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.GetOnEventDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::EnvironmentColorType)>(
    &::GlobalNamespace::BeatmapDataStrobeFilterTransform::GetOnEventDataValue)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x223b8fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "GetOnEventDataValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapDataStrobeFilterTransform.GetFlashAndFadeToBlackEventDataValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::GlobalNamespace::EnvironmentColorType)>(
    &::GlobalNamespace::BeatmapDataStrobeFilterTransform::GetFlashAndFadeToBlackEventDataValue)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x223b920;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "GetFlashAndFadeToBlackEventDataValue", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::IReadonlyBeatmapData*
GlobalNamespace::BeatmapDataStrobeFilterTransform::CreateTransformedData(::GlobalNamespace::IReadonlyBeatmapData* beatmapData,
                                                                         ::GlobalNamespace::EnvironmentIntensityReductionOptions* environmentIntensityReductionOptions) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "CreateTransformedData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IReadonlyBeatmapData*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentIntensityReductionOptions*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IReadonlyBeatmapData*, false>(nullptr, ___internal_method, beatmapData, environmentIntensityReductionOptions);
}
inline int32_t GlobalNamespace::BeatmapDataStrobeFilterTransform::GetOnEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "GetOnEventDataValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lightColorType);
}
inline int32_t GlobalNamespace::BeatmapDataStrobeFilterTransform::GetFlashAndFadeToBlackEventDataValue(::GlobalNamespace::EnvironmentColorType lightColorType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapDataStrobeFilterTransform*>::get(), "GetFlashAndFadeToBlackEventDataValue", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EnvironmentColorType>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, lightColorType);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapDataStrobeFilterTransform::BeatmapDataStrobeFilterTransform() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

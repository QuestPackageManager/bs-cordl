#pragma once
// IWYU pragma private; include "BeatmapDataLoaderVersion4\BeatmapDataLoader.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapDataLoaderVersion4/zzzz__BeatmapDataLoader_def.hpp"
#include "BeatmapLevelSaveDataVersion4/zzzz__AudioSaveData_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__BeatmapSaveData_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__ChainBeatIndex_def.hpp"
#include "BeatmapSaveDataVersion4/zzzz__LightshowSaveData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataBasicInfo_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelDataVersion_def.hpp"
#include "GlobalNamespace/zzzz__BpmTimeProcessor_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentKeywords_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLightEventConverter_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentInfo_def.hpp"
#include "GlobalNamespace/zzzz__IEnvironmentLightGroups_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::*)()>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3760da0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0._GetBeatmapDataFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapData* (::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::*)()>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3764244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0*>(), { "<GetBeatmapDataFromSaveDataJsonAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_audioDataJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioDataJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_audioDataJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioDataJson;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_audioDataJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioDataJson = value;
}
constexpr ::StringW& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapJson = value;
}
constexpr ::StringW& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_lightshowJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightshowJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_lightshowJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightshowJson;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_lightshowJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightshowJson = value;
}
constexpr ::StringW& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_defaultLightshowJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_defaultLightshowJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___defaultLightshowJson;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_defaultLightshowJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___defaultLightshowJson = value;
}
constexpr ::GlobalNamespace::BeatmapDifficulty& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_beatmapDifficulty() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr ::GlobalNamespace::BeatmapDifficulty const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_beatmapDifficulty() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapDifficulty;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapDifficulty = value;
}
constexpr bool& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_loadingForDesignatedEnvironment() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr bool const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_loadingForDesignatedEnvironment() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___loadingForDesignatedEnvironment;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_loadingForDesignatedEnvironment(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___loadingForDesignatedEnvironment = value;
}
constexpr ::GlobalNamespace::IEnvironmentInfo*& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_targetEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetEnvironmentInfo;
}
constexpr ::GlobalNamespace::IEnvironmentInfo* const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_targetEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___targetEnvironmentInfo;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_targetEnvironmentInfo(::GlobalNamespace::IEnvironmentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___targetEnvironmentInfo = value;
}
constexpr ::GlobalNamespace::IEnvironmentInfo*& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_originalEnvironmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalEnvironmentInfo;
}
constexpr ::GlobalNamespace::IEnvironmentInfo* const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_originalEnvironmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___originalEnvironmentInfo;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_originalEnvironmentInfo(::GlobalNamespace::IEnvironmentInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___originalEnvironmentInfo = value;
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_beatmapLevelDataVersion() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr ::GlobalNamespace::BeatmapLevelDataVersion const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_beatmapLevelDataVersion() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapLevelDataVersion;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_beatmapLevelDataVersion(::GlobalNamespace::BeatmapLevelDataVersion value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapLevelDataVersion = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___gameplayModifiers;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___gameplayModifiers = value;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings*& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_playerSpecificSettings() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr ::GlobalNamespace::PlayerSpecificSettings* const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_playerSpecificSettings() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playerSpecificSettings;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_playerSpecificSettings(::GlobalNamespace::PlayerSpecificSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playerSpecificSettings = value;
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter*& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_lightEventConverter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightEventConverter;
}
constexpr ::GlobalNamespace::IBeatmapLightEventConverter* const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_get_lightEventConverter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lightEventConverter;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::__cordl_internal_set_lightEventConverter(::GlobalNamespace::IBeatmapLightEventConverter* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lightEventConverter = value;
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::_GetBeatmapDataFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0*>(), { "<GetBeatmapDataFromSaveDataJsonAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0* BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass0_0::BeatmapDataLoader___c__DisplayClass0_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::*)()>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3760ecc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0._GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::*)()>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x376428c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0*>(), { "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_beatmapJson() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr ::StringW const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_get_beatmapJson() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapJson;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::__cordl_internal_set_beatmapJson(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapJson = value;
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::_GetBeatmapDataBasicInfoFromSaveDataJsonAsync_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0*>(), { "<GetBeatmapDataBasicInfoFromSaveDataJsonAsync>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*>(this, ___internal_method);
}
inline ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0* BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass1_0::BeatmapDataLoader___c__DisplayClass1_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::*)()>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3762940;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0._GetBeatmapDataBasicInfoFromSaveDataJson_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::*)(::BeatmapSaveDataVersion4::ChainBeatIndex*)>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::_GetBeatmapDataBasicInfoFromSaveDataJson_b__0)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3764294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0*>(),
                                                             { "<GetBeatmapDataBasicInfoFromSaveDataJson>b__0", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::ChainBeatIndex*>() } })));
    return ___internal_method;
  }
};
constexpr ::BeatmapSaveDataVersion4::BeatmapSaveData*& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::__cordl_internal_get_beatmapSaveData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapSaveData;
}
constexpr ::BeatmapSaveDataVersion4::BeatmapSaveData* const& BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::__cordl_internal_get_beatmapSaveData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___beatmapSaveData;
}
constexpr void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::__cordl_internal_set_beatmapSaveData(::BeatmapSaveDataVersion4::BeatmapSaveData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___beatmapSaveData = value;
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline int32_t BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::_GetBeatmapDataBasicInfoFromSaveDataJson_b__0(::BeatmapSaveDataVersion4::ChainBeatIndex* chainBeatIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0*>(),
                                                           { "<GetBeatmapDataBasicInfoFromSaveDataJson>b__0", {}, { ::i2c::type_of<::BeatmapSaveDataVersion4::ChainBeatIndex*>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, chainBeatIndex);
}
inline ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0* BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BeatmapDataLoader___c__DisplayClass4_0::BeatmapDataLoader___c__DisplayClass4_0() {}
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<
    ::GlobalNamespace::BeatmapData*>* (*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                          ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*,
                                          ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x3760c08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                             { "GetBeatmapDataFromSaveDataJsonAsync",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJsonAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3760da4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(), { "GetBeatmapDataBasicInfoFromSaveDataJsonAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataFromSaveDataJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::StringW, ::StringW, ::StringW, ::StringW, ::GlobalNamespace::BeatmapDifficulty, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                                    ::GlobalNamespace::IEnvironmentInfo*, ::GlobalNamespace::BeatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers*,
                                                    ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
        &::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x3760ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                             { "GetBeatmapDataFromSaveDataJson",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.LoadLightshow
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BpmTimeProcessor*, ::GlobalNamespace::EnvironmentKeywords*,
                         ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::IBeatmapLightEventConverter*, bool, bool)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::LoadLightshow)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x37615dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                             { "LoadLightshow",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentKeywords*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataBasicInfoFromSaveDataJson
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapDataBasicInfo* (*)(::StringW)>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x37627a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(), { "GetBeatmapDataBasicInfoFromSaveDataJson", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.GetBeatmapDataFromSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::BeatmapData* (*)(::BeatmapLevelSaveDataVersion4::AudioSaveData*, ::BeatmapSaveDataVersion4::BeatmapSaveData*, ::BeatmapSaveDataVersion4::LightshowSaveData*,
                                                    ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BeatmapDifficulty, bool, ::GlobalNamespace::IEnvironmentInfo*,
                                                    ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::GameplayModifiers*,
                                                    ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
        &::BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveData)> {
  constexpr static std::size_t size = 0x544;
  constexpr static std::size_t addrs = 0x3761098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                             { "GetBeatmapDataFromSaveData",
                                                               {},
                                                               { ::i2c::type_of<::BeatmapLevelSaveDataVersion4::AudioSaveData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapSaveData*>(),
                                                                 ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EnvironmentKeywords*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.ConvertBeatmapObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion4::BeatmapSaveData*, ::BeatmapSaveDataVersion4::LightshowSaveData*,
                                                                ::GlobalNamespace::BpmTimeProcessor*)>(&::BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertBeatmapObjects)> {
  constexpr static std::size_t size = 0x8dc;
  constexpr static std::size_t addrs = 0x3762944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                             { "ConvertBeatmapObjects",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapSaveData*>(),
                                                                 ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.ConvertBasicEvents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BpmTimeProcessor*,
                                                                ::GlobalNamespace::EnvironmentKeywords*, ::GlobalNamespace::IBeatmapLightEventConverter*)>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertBasicEvents)> {
  constexpr static std::size_t size = 0x970;
  constexpr static std::size_t addrs = 0x3761640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                             { "ConvertBasicEvents",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentKeywords*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BeatmapDataLoaderVersion4::BeatmapDataLoader.ConvertEventBoxGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::BeatmapData*, ::BeatmapSaveDataVersion4::LightshowSaveData*, ::GlobalNamespace::BpmTimeProcessor*,
                                                                ::GlobalNamespace::IEnvironmentLightGroups*, ::GlobalNamespace::IBeatmapLightEventConverter*, bool, bool)>(
    &::BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertEventBoxGroups)> {
  constexpr static std::size_t size = 0x7f4;
  constexpr static std::size_t addrs = 0x3761fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                             { "ConvertEventBoxGroups",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveDataJsonAsync(
    ::StringW audioDataJson, ::StringW beatmapJson, ::StringW lightshowJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
    bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
    ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                           { "GetBeatmapDataFromSaveDataJsonAsync",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapData*>*>(
      nullptr, ___internal_method, audioDataJson, beatmapJson, lightshowJson, defaultLightshowJson, beatmapDifficulty, loadingForDesignatedEnvironment, targetEnvironmentInfo, originalEnvironmentInfo,
      beatmapLevelDataVersion, gameplayModifiers, playerSpecificSettings, lightEventConverter);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJsonAsync(::StringW beatmapJson) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(), { "GetBeatmapDataBasicInfoFromSaveDataJsonAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapDataBasicInfo*>*>(nullptr, ___internal_method, beatmapJson);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveDataJson(
    ::StringW audioDataJson, ::StringW beatmapJson, ::StringW lightshowJson, ::StringW defaultLightshowJson, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
    bool loadingForDesignatedEnvironment, ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::IEnvironmentInfo* originalEnvironmentInfo,
    ::GlobalNamespace::BeatmapLevelDataVersion beatmapLevelDataVersion, ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
    ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                           { "GetBeatmapDataFromSaveDataJson",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelDataVersion>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*>(nullptr, ___internal_method, audioDataJson, beatmapJson, lightshowJson, defaultLightshowJson, beatmapDifficulty,
                                                                              loadingForDesignatedEnvironment, targetEnvironmentInfo, originalEnvironmentInfo, beatmapLevelDataVersion,
                                                                              gameplayModifiers, playerSpecificSettings, lightEventConverter);
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader::LoadLightshow(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                        ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords,
                                                                        ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                                                        ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter, bool ignoreColorEvents, bool ignoreRotationLoopCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                           { "LoadLightshow",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentKeywords*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, beatmapData, lightshowSaveData, bpmTimeProcessor, environmentKeywords, environmentLightGroups, lightEventConverter,
                                                   ignoreColorEvents, ignoreRotationLoopCount);
}
inline ::GlobalNamespace::BeatmapDataBasicInfo* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataBasicInfoFromSaveDataJson(::StringW beatmapDataJson) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(), { "GetBeatmapDataBasicInfoFromSaveDataJson", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapDataBasicInfo*>(nullptr, ___internal_method, beatmapDataJson);
}
inline ::GlobalNamespace::BeatmapData* BeatmapDataLoaderVersion4::BeatmapDataLoader::GetBeatmapDataFromSaveData(
    ::BeatmapLevelSaveDataVersion4::AudioSaveData* audioSaveData, ::BeatmapSaveDataVersion4::BeatmapSaveData* beatmapSaveData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
    ::BeatmapSaveDataVersion4::LightshowSaveData* defaultLightshowSaveData, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, bool loadingForDesignatedEnvironment,
    ::GlobalNamespace::IEnvironmentInfo* targetEnvironmentInfo, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords, ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
    ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                           { "GetBeatmapDataFromSaveData",
                                                             {},
                                                             { ::i2c::type_of<::BeatmapLevelSaveDataVersion4::AudioSaveData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapSaveData*>(),
                                                               ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDifficulty>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentInfo*>(),
                                                               ::i2c::type_of<::GlobalNamespace::EnvironmentKeywords*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapData*>(nullptr, ___internal_method, audioSaveData, beatmapSaveData, lightshowSaveData, defaultLightshowSaveData,
                                                                              beatmapDifficulty, loadingForDesignatedEnvironment, targetEnvironmentInfo, environmentKeywords, environmentLightGroups,
                                                                              gameplayModifiers, playerSpecificSettings, lightEventConverter);
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertBeatmapObjects(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::BeatmapSaveData* beatmapSaveData,
                                                                                ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                                ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                           { "ConvertBeatmapObjects",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::BeatmapSaveData*>(),
                                                               ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(), ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, beatmapData, beatmapSaveData, lightshowSaveData, bpmTimeProcessor);
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertBasicEvents(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                             ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor, ::GlobalNamespace::EnvironmentKeywords* environmentKeywords,
                                                                             ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                           { "ConvertBasicEvents",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentKeywords*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, beatmapData, lightshowSaveData, bpmTimeProcessor, environmentKeywords, lightEventConverter);
}
inline void BeatmapDataLoaderVersion4::BeatmapDataLoader::ConvertEventBoxGroups(::GlobalNamespace::BeatmapData* beatmapData, ::BeatmapSaveDataVersion4::LightshowSaveData* lightshowSaveData,
                                                                                ::GlobalNamespace::BpmTimeProcessor* bpmTimeProcessor,
                                                                                ::GlobalNamespace::IEnvironmentLightGroups* environmentLightGroups,
                                                                                ::GlobalNamespace::IBeatmapLightEventConverter* lightEventConverter, bool ignoreColorEvents,
                                                                                bool ignoreRotationLoopCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::BeatmapDataLoaderVersion4::BeatmapDataLoader*>(),
                                                           { "ConvertEventBoxGroups",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapData*>(), ::i2c::type_of<::BeatmapSaveDataVersion4::LightshowSaveData*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BpmTimeProcessor*>(), ::i2c::type_of<::GlobalNamespace::IEnvironmentLightGroups*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IBeatmapLightEventConverter*>(), ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, beatmapData, lightshowSaveData, bpmTimeProcessor, environmentLightGroups, lightEventConverter, ignoreColorEvents,
                                                   ignoreRotationLoopCount);
}
// Ctor Parameters []
constexpr ::BeatmapDataLoaderVersion4::BeatmapDataLoader::BeatmapDataLoader() {}

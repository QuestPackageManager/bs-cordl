#pragma once
// IWYU pragma private; include "GlobalNamespace\PlayerSaveDataConvertor.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveDataConvertor_def.hpp"
#include "GlobalNamespace/zzzz__ArcVisibilityType_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentEffectsFilterPreset_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpDurationTypeSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataConvertor.GetRuntimeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::EnvironmentEffectsFilterPreset (*)(
    ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData)>(&::GlobalNamespace::PlayerSaveDataConvertor::GetRuntimeData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x374c060;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                                { "GetRuntimeData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataConvertor.GetSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData (*)(
    ::GlobalNamespace::EnvironmentEffectsFilterPreset)>(&::GlobalNamespace::PlayerSaveDataConvertor::GetSaveData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3749fb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                                                                           { "GetSaveData", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentEffectsFilterPreset>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataConvertor.GetRuntimeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::NoteJumpDurationTypeSettings (*)(
    ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData)>(&::GlobalNamespace::PlayerSaveDataConvertor::GetRuntimeData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x374c044;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                                { "GetRuntimeData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataConvertor.GetSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData (*)(
    ::GlobalNamespace::NoteJumpDurationTypeSettings)>(&::GlobalNamespace::PlayerSaveDataConvertor::GetSaveData)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3749f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                                                                           { "GetSaveData", {}, { ::i2c::type_of<::GlobalNamespace::NoteJumpDurationTypeSettings>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataConvertor.GetRuntimeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ArcVisibilityType (*)(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData)>(
    &::GlobalNamespace::PlayerSaveDataConvertor::GetRuntimeData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x374c050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                                             { "GetRuntimeData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PlayerSaveDataConvertor.GetSaveData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData (*)(::GlobalNamespace::ArcVisibilityType)>(
    &::GlobalNamespace::PlayerSaveDataConvertor::GetSaveData)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x3749fa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(), { "GetSaveData", {}, { ::i2c::type_of<::GlobalNamespace::ArcVisibilityType>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::EnvironmentEffectsFilterPreset
GlobalNamespace::PlayerSaveDataConvertor::GetRuntimeData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData saveData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                              { "GetRuntimeData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::EnvironmentEffectsFilterPreset>(nullptr, ___internal_method, saveData);
}
inline ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData
GlobalNamespace::PlayerSaveDataConvertor::GetSaveData(::GlobalNamespace::EnvironmentEffectsFilterPreset data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                                                                         { "GetSaveData", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentEffectsFilterPreset>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_EnvironmentEffectsFilterPresetSaveData>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::NoteJumpDurationTypeSettings
GlobalNamespace::PlayerSaveDataConvertor::GetRuntimeData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData saveData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                              { "GetRuntimeData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::NoteJumpDurationTypeSettings>(nullptr, ___internal_method, saveData);
}
inline ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData
GlobalNamespace::PlayerSaveDataConvertor::GetSaveData(::GlobalNamespace::NoteJumpDurationTypeSettings data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(), { "GetSaveData", {}, { ::i2c::type_of<::GlobalNamespace::NoteJumpDurationTypeSettings>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_NoteJumpDurationTypeSettingsSaveData>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::ArcVisibilityType GlobalNamespace::PlayerSaveDataConvertor::GetRuntimeData(::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData saveData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(),
                                                           { "GetRuntimeData", {}, { ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ArcVisibilityType>(nullptr, ___internal_method, saveData);
}
inline ::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData GlobalNamespace::PlayerSaveDataConvertor::GetSaveData(::GlobalNamespace::ArcVisibilityType data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PlayerSaveDataConvertor*>(), { "GetSaveData", {}, { ::i2c::type_of<::GlobalNamespace::ArcVisibilityType>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PlayerSpecificSettings_PlayerSaveData_ArcVisibilityTypeSaveData>(nullptr, ___internal_method, data);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PlayerSaveDataConvertor::PlayerSaveDataConvertor() {}

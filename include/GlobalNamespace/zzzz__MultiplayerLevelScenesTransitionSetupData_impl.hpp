#pragma once
// IWYU pragma private; include "GlobalNamespace\MultiplayerLevelScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupData_impl.hpp"
#include "GlobalNamespace/zzzz__MultiplayerLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__DisconnectedReason_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__MultiplayerResultsData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590e5f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
            { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590e9e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
            { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.add_didDisconnectEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::add_didDisconnectEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590e6b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
            { "add_didDisconnectEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.remove_didDisconnectEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::remove_didDisconnectEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590eaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
            { "remove_didDisconnectEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.get_gameMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_gameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5911fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_gameMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.set_gameMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(::StringW)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_gameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5911fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "set_gameMode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5911fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.set_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_beatmapKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5911fe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                           { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5911fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_beatmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.set_beatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5911ff0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                           { "set_beatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.get_usingOverrideColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_usingOverrideColorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5911ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_usingOverrideColorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.set_usingOverrideColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(bool)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_usingOverrideColorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "set_usingOverrideColorScheme", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.get_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_colorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.set_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(::GlobalNamespace::ColorScheme*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                           { "set_colorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.get_beatmapLevelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::IBeatmapLevelData* (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912018;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_beatmapLevelData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.set_beatmapLevelData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_beatmapLevelData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                           { "set_beatmapLevelData", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(
    ::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::IBeatmapLevelData*, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::GameplayModifiers*,
    ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::EnvironmentsListModel*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::AudioClipAsyncLoader*,
    ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::BeatmapDataLoader*, ::GlobalNamespace::GameplayAdditionalInformation*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5910bfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                { "Init",
                                                  {},
                                                  { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                    ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                                                    ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                    ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
                                                    ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                                                    ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(::GlobalNamespace::MultiplayerResultsData*)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5912290;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                           { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.FinishWithDisconnect
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)(::GlobalNamespace::DisconnectedReason)>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::FinishWithDisconnect)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59122b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                           { "FinishWithDisconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData.InitAndSetupScenes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::InitAndSetupScenes)> {
  constexpr static std::size_t size = 0x268;
  constexpr static std::size_t addrs = 0x5912028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "InitAndSetupScenes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59122e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*&
GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* const&
GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>*&
GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get_didDisconnectEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDisconnectEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>* const&
GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get_didDisconnectEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didDisconnectEvent;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set_didDisconnectEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didDisconnectEvent = value;
}
constexpr ::StringW& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__gameMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameMode_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__gameMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameMode_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set__gameMode_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameMode_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__beatmapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__beatmapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__beatmapLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__beatmapLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set__beatmapLevel_k__BackingField(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevel_k__BackingField = value;
}
constexpr bool& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__usingOverrideColorScheme_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideColorScheme_k__BackingField;
}
constexpr bool const& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__usingOverrideColorScheme_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideColorScheme_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set__usingOverrideColorScheme_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingOverrideColorScheme_k__BackingField = value;
}
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__colorScheme_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme_k__BackingField;
}
constexpr ::GlobalNamespace::ColorScheme* const& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__colorScheme_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set__colorScheme_k__BackingField(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorScheme_k__BackingField = value;
}
constexpr ::GlobalNamespace::IBeatmapLevelData*& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__beatmapLevelData_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelData_k__BackingField;
}
constexpr ::GlobalNamespace::IBeatmapLevelData* const& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__beatmapLevelData_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevelData_k__BackingField;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set__beatmapLevelData_k__BackingField(::GlobalNamespace::IBeatmapLevelData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevelData_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__environmentInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_get__environmentInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____environmentInfo;
}
constexpr void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::__cordl_internal_set__environmentInfo(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____environmentInfo = value;
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::add_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
          { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::remove_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
          { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::MultiplayerResultsData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::add_didDisconnectEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
          { "add_didDisconnectEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::remove_didDisconnectEvent(
    ::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
          { "remove_didDisconnectEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*, ::GlobalNamespace::DisconnectedReason>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_gameMode() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_gameMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_gameMode(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "set_gameMode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_beatmapKey() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                         { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_beatmapLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_beatmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                         { "set_beatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_usingOverrideColorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_usingOverrideColorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_usingOverrideColorScheme(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "set_usingOverrideColorScheme", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_colorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_colorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_colorScheme(::GlobalNamespace::ColorScheme* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                         { "set_colorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::IBeatmapLevelData* GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::get_beatmapLevelData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "get_beatmapLevelData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IBeatmapLevelData*>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::set_beatmapLevelData(::GlobalNamespace::IBeatmapLevelData* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                         { "set_beatmapLevelData", {}, { ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::Init(::StringW gameMode, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                             ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::ColorScheme* overrideColorScheme,
                                                                             ::GlobalNamespace::GameplayModifiers* gameplayModifiers, ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings,
                                                                             ::GlobalNamespace::EnvironmentsListModel* environmentsListModel, ::GlobalNamespace::PracticeSettings* practiceSettings,
                                                                             ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager,
                                                                             ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader,
                                                                             ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                          { "Init",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                              ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                              ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(),
                              ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(), ::i2c::type_of<::GlobalNamespace::SettingsManager*>(),
                              ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, beatmapKey, beatmapLevel, beatmapLevelData, overrideColorScheme, gameplayModifiers, playerSpecificSettings,
                                                   environmentsListModel, practiceSettings, audioClipAsyncLoader, settingsManager, beatmapDataLoader, gameplayAdditionalInformation);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::Finish(::GlobalNamespace::MultiplayerResultsData* resultsData) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                         { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::MultiplayerResultsData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, resultsData);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::FinishWithDisconnect(::GlobalNamespace::DisconnectedReason disconnectedReason) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(),
                                                                                         { "FinishWithDisconnect", {}, { ::i2c::type_of<::GlobalNamespace::DisconnectedReason>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disconnectedReason);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::InitAndSetupScenes() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { "InitAndSetupScenes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData* GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MultiplayerLevelScenesTransitionSetupData::MultiplayerLevelScenesTransitionSetupData() {}

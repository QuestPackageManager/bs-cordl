#pragma once
// IWYU pragma private; include "GlobalNamespace\StandardLevelScenesTransitionSetupData.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_impl.hpp"
#include "GlobalNamespace/zzzz__LevelScenesTransitionSetupData_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "GlobalNamespace/zzzz__AudioClipAsyncLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataLoader_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__ColorScheme_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentInfoSO_def.hpp"
#include "GlobalNamespace/zzzz__EnvironmentsListModel_def.hpp"
#include "GlobalNamespace/zzzz__GameplayAdditionalInformation_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelData_def.hpp"
#include "GlobalNamespace/zzzz__IReadonlyBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__LevelCompletionResults_def.hpp"
#include "GlobalNamespace/zzzz__OverrideEnvironmentSettings_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "GlobalNamespace/zzzz__PracticeSettings_def.hpp"
#include "GlobalNamespace/zzzz__SettingsManager_def.hpp"
#include "GlobalNamespace/zzzz__StandardLevelScenesTransitionSetupData_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "System/zzzz__ValueTuple_3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData___c::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData___c::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5912640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c._Init_b__43_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData___c::*)(
    ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*)>(&::GlobalNamespace::StandardLevelScenesTransitionSetupData___c::_Init_b__43_0)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5912644;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>(),
                                                             { "<Init>b__43_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData___c::setStaticF___9(::GlobalNamespace::StandardLevelScenesTransitionSetupData___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*, "<>9", ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>(
      std::forward<::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>(value));
}
inline ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c* GlobalNamespace::StandardLevelScenesTransitionSetupData___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*, "<>9", ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>();
}
inline void
GlobalNamespace::StandardLevelScenesTransitionSetupData___c::setStaticF___9__43_0(::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*, "<>9__43_0",
                                    ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>(
      std::forward<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*>(value));
}
inline ::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>* GlobalNamespace::StandardLevelScenesTransitionSetupData___c::getStaticF___9__43_0() {
  return ::cordl_internals::getStaticField<::System::Action_1<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>*, "<>9__43_0",
                                           ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>();
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData___c::_Init_b__43_0(::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>(),
                                                           { "<Init>b__43_0", {}, { ::i2c::type_of<::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, t);
}
inline ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c* GlobalNamespace::StandardLevelScenesTransitionSetupData___c::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelScenesTransitionSetupData___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData___c::StandardLevelScenesTransitionSetupData___c() {}
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.add_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::add_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590e530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
            { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.remove_didFinishEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::remove_didFinishEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x590e920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
            { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_gameMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_gameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_gameMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_gameMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::StringW)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_gameMode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "set_gameMode", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapKey (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_beatmapKey)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x59123c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_beatmapKey", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_beatmapKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::BeatmapKey)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_beatmapKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                           { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_beatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_beatmapLevel", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_beatmapLevel
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::BeatmapLevel*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_beatmapLevel)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                           { "set_beatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_practiceSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::PracticeSettings* (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_practiceSettings", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_practiceSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::PracticeSettings*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_practiceSettings)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                           { "set_practiceSettings", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_usingOverrideColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_usingOverrideColorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59123f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_usingOverrideColorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_usingOverrideColorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(bool)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_usingOverrideColorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "set_usingOverrideColorScheme", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::ColorScheme* (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_colorScheme", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_colorScheme
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::ColorScheme*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_colorScheme)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912410;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                           { "set_colorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_usingOverrideEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_usingOverrideEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912418;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_usingOverrideEnvironment", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_usingOverrideEnvironment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(bool)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_usingOverrideEnvironment)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "set_usingOverrideEnvironment", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_targetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_targetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_targetEnvironmentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_targetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_targetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912430;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                           { "set_targetEnvironmentInfo", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_originalEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_originalEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_originalEnvironmentInfo", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_originalEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::EnvironmentInfoSO*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_originalEnvironmentInfo)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912440;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                           { "set_originalEnvironmentInfo", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.get_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::GameplayModifiers* (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::get_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912448;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_gameplayModifiers", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.set_gameplayModifiers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::GameplayModifiers*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::set_gameplayModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5912450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                           { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(
    ::StringW, ::by_ref<::GlobalNamespace::BeatmapKey>, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::ColorScheme*, bool,
    ::GlobalNamespace::GameplayModifiers*, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::PracticeSettings*, ::GlobalNamespace::EnvironmentsListModel*,
    ::GlobalNamespace::AudioClipAsyncLoader*, ::GlobalNamespace::SettingsManager*, ::GlobalNamespace::GameplayAdditionalInformation*, ::GlobalNamespace::BeatmapDataLoader*,
    ::GlobalNamespace::BeatmapLevelsEntitlementModel*, ::GlobalNamespace::BeatmapLevelsModel*, ::GlobalNamespace::IBeatmapLevelData*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::Init)> {
  constexpr static std::size_t size = 0x5d4;
  constexpr static std::size_t addrs = 0x590fd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                             { "Init",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.Finish
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)(::GlobalNamespace::LevelCompletionResults*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::Finish)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x59124f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                           { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.GetEnvironmentInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_3<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool> (*)(
    ::GlobalNamespace::BeatmapKey, ::GlobalNamespace::BeatmapLevel*, ::GlobalNamespace::OverrideEnvironmentSettings*, ::GlobalNamespace::EnvironmentsListModel*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::GetEnvironmentInfo)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x590fb64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                             { "GetEnvironmentInfo",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.GetEnvironmentOverride
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::GlobalNamespace::EnvironmentInfoSO> (*)(::GlobalNamespace::EnvironmentInfoSO*, ::GlobalNamespace::OverrideEnvironmentSettings*)>(
    &::GlobalNamespace::StandardLevelScenesTransitionSetupData::GetEnvironmentOverride)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x591251c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                            { "GetEnvironmentOverride", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData.GetColorInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::ValueTuple_2<bool, ::GlobalNamespace::ColorScheme*> (*)(
    ::GlobalNamespace::ColorScheme*, bool, ::GlobalNamespace::ColorScheme*, ::GlobalNamespace::EnvironmentInfoSO*, bool)>(&::GlobalNamespace::StandardLevelScenesTransitionSetupData::GetColorInfo)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5912458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                             { "GetColorInfo",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::StandardLevelScenesTransitionSetupData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::StandardLevelScenesTransitionSetupData::*)()>(&::GlobalNamespace::StandardLevelScenesTransitionSetupData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x59125e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*&
GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* const&
GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get_didFinishEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___didFinishEvent;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___didFinishEvent = value;
}
constexpr ::StringW& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__gameMode_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameMode_k__BackingField;
}
constexpr ::StringW const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__gameMode_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameMode_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__gameMode_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameMode_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapKey& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__beatmapKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapKey const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__beatmapKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapKey_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__beatmapKey_k__BackingField(::GlobalNamespace::BeatmapKey value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapKey_k__BackingField = value;
}
constexpr ::GlobalNamespace::BeatmapLevel*& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__beatmapLevel_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_k__BackingField;
}
constexpr ::GlobalNamespace::BeatmapLevel* const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__beatmapLevel_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapLevel_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__beatmapLevel_k__BackingField(::GlobalNamespace::BeatmapLevel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapLevel_k__BackingField = value;
}
constexpr ::GlobalNamespace::PracticeSettings*& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__practiceSettings_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr ::GlobalNamespace::PracticeSettings* const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__practiceSettings_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____practiceSettings_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__practiceSettings_k__BackingField(::GlobalNamespace::PracticeSettings* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____practiceSettings_k__BackingField = value;
}
constexpr bool& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__usingOverrideColorScheme_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideColorScheme_k__BackingField;
}
constexpr bool const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__usingOverrideColorScheme_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideColorScheme_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__usingOverrideColorScheme_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingOverrideColorScheme_k__BackingField = value;
}
constexpr ::GlobalNamespace::ColorScheme*& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__colorScheme_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme_k__BackingField;
}
constexpr ::GlobalNamespace::ColorScheme* const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__colorScheme_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____colorScheme_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__colorScheme_k__BackingField(::GlobalNamespace::ColorScheme* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____colorScheme_k__BackingField = value;
}
constexpr bool& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__usingOverrideEnvironment_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideEnvironment_k__BackingField;
}
constexpr bool const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__usingOverrideEnvironment_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____usingOverrideEnvironment_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__usingOverrideEnvironment_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____usingOverrideEnvironment_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__targetEnvironmentInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetEnvironmentInfo_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__targetEnvironmentInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetEnvironmentInfo_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__targetEnvironmentInfo_k__BackingField(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetEnvironmentInfo_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO>& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__originalEnvironmentInfo_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalEnvironmentInfo_k__BackingField;
}
constexpr ::UnityW<::GlobalNamespace::EnvironmentInfoSO> const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__originalEnvironmentInfo_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____originalEnvironmentInfo_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__originalEnvironmentInfo_k__BackingField(::UnityW<::GlobalNamespace::EnvironmentInfoSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____originalEnvironmentInfo_k__BackingField = value;
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__gameplayModifiers_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_get__gameplayModifiers_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers_k__BackingField;
}
constexpr void GlobalNamespace::StandardLevelScenesTransitionSetupData::__cordl_internal_set__gameplayModifiers_k__BackingField(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____gameplayModifiers_k__BackingField = value;
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::add_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
          { "add_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::remove_didFinishEvent(
    ::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
          { "remove_didFinishEvent", {}, { ::i2c::type_of<::System::Action_2<::GlobalNamespace::StandardLevelScenesTransitionSetupData*, ::GlobalNamespace::LevelCompletionResults*>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW GlobalNamespace::StandardLevelScenesTransitionSetupData::get_gameMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_gameMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_gameMode(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "set_gameMode", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapKey GlobalNamespace::StandardLevelScenesTransitionSetupData::get_beatmapKey() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_beatmapKey", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapKey>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_beatmapKey(::GlobalNamespace::BeatmapKey value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "set_beatmapKey", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::StandardLevelScenesTransitionSetupData::get_beatmapLevel() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_beatmapLevel", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                         { "set_beatmapLevel", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::PracticeSettings* GlobalNamespace::StandardLevelScenesTransitionSetupData::get_practiceSettings() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_practiceSettings", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::PracticeSettings*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_practiceSettings(::GlobalNamespace::PracticeSettings* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                         { "set_practiceSettings", {}, { ::i2c::type_of<::GlobalNamespace::PracticeSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::StandardLevelScenesTransitionSetupData::get_usingOverrideColorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_usingOverrideColorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_usingOverrideColorScheme(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "set_usingOverrideColorScheme", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::ColorScheme* GlobalNamespace::StandardLevelScenesTransitionSetupData::get_colorScheme() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_colorScheme", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::ColorScheme*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_colorScheme(::GlobalNamespace::ColorScheme* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                         { "set_colorScheme", {}, { ::i2c::type_of<::GlobalNamespace::ColorScheme*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool GlobalNamespace::StandardLevelScenesTransitionSetupData::get_usingOverrideEnvironment() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_usingOverrideEnvironment", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_usingOverrideEnvironment(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "set_usingOverrideEnvironment", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::StandardLevelScenesTransitionSetupData::get_targetEnvironmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_targetEnvironmentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_targetEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                         { "set_targetEnvironmentInfo", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO> GlobalNamespace::StandardLevelScenesTransitionSetupData::get_originalEnvironmentInfo() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_originalEnvironmentInfo", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_originalEnvironmentInfo(::GlobalNamespace::EnvironmentInfoSO* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                         { "set_originalEnvironmentInfo", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::GlobalNamespace::GameplayModifiers* GlobalNamespace::StandardLevelScenesTransitionSetupData::get_gameplayModifiers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { "get_gameplayModifiers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::GameplayModifiers*>(this, ___internal_method);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::set_gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                         { "set_gameplayModifiers", {}, { ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::Init(
    ::StringW gameMode, ::by_ref<::GlobalNamespace::BeatmapKey> beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
    ::GlobalNamespace::ColorScheme* playerOverrideColorScheme, bool playerOverrideLightshowColors, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
    ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings, ::GlobalNamespace::PracticeSettings* practiceSettings, ::GlobalNamespace::EnvironmentsListModel* environmentsListModel,
    ::GlobalNamespace::AudioClipAsyncLoader* audioClipAsyncLoader, ::GlobalNamespace::SettingsManager* settingsManager, ::GlobalNamespace::GameplayAdditionalInformation* gameplayAdditionalInformation,
    ::GlobalNamespace::BeatmapDataLoader* beatmapDataLoader, ::GlobalNamespace::BeatmapLevelsEntitlementModel* beatmapLevelsEntitlementModel, ::GlobalNamespace::BeatmapLevelsModel* beatmapLevelsModel,
    ::GlobalNamespace::IBeatmapLevelData* beatmapLevelData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                           { "Init",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::GlobalNamespace::BeatmapKey>>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(), ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::GameplayModifiers*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(), ::i2c::type_of<::GlobalNamespace::PracticeSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>(), ::i2c::type_of<::GlobalNamespace::AudioClipAsyncLoader*>(),
                                                               ::i2c::type_of<::GlobalNamespace::SettingsManager*>(), ::i2c::type_of<::GlobalNamespace::GameplayAdditionalInformation*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapDataLoader*>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevelsEntitlementModel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::BeatmapLevelsModel*>(), ::i2c::type_of<::GlobalNamespace::IBeatmapLevelData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameMode, beatmapKey, beatmapLevel, overrideEnvironmentSettings, playerOverrideColorScheme, playerOverrideLightshowColors,
                                                   gameplayModifiers, playerSpecificSettings, practiceSettings, environmentsListModel, audioClipAsyncLoader, settingsManager,
                                                   gameplayAdditionalInformation, beatmapDataLoader, beatmapLevelsEntitlementModel, beatmapLevelsModel, beatmapLevelData);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::Finish(::GlobalNamespace::LevelCompletionResults* levelCompletionResults) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                                                         { "Finish", {}, { ::i2c::type_of<::GlobalNamespace::LevelCompletionResults*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, levelCompletionResults);
}
inline ::System::ValueTuple_3<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>
GlobalNamespace::StandardLevelScenesTransitionSetupData::GetEnvironmentInfo(::GlobalNamespace::BeatmapKey beatmapKey, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                            ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings,
                                                                            ::GlobalNamespace::EnvironmentsListModel* environmentsListModel) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                           { "GetEnvironmentInfo",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::BeatmapKey>(), ::i2c::type_of<::GlobalNamespace::BeatmapLevel*>(),
                                                               ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>(), ::i2c::type_of<::GlobalNamespace::EnvironmentsListModel*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_3<::UnityW<::GlobalNamespace::EnvironmentInfoSO>, ::UnityW<::GlobalNamespace::EnvironmentInfoSO>, bool>>(
      nullptr, ___internal_method, beatmapKey, beatmapLevel, overrideEnvironmentSettings, environmentsListModel);
}
inline ::UnityW<::GlobalNamespace::EnvironmentInfoSO>
GlobalNamespace::StandardLevelScenesTransitionSetupData::GetEnvironmentOverride(::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                                                                                ::GlobalNamespace::OverrideEnvironmentSettings* overrideEnvironmentSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                          { "GetEnvironmentOverride", {}, { ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<::GlobalNamespace::OverrideEnvironmentSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::EnvironmentInfoSO>>(nullptr, ___internal_method, targetEnvironmentInfo, overrideEnvironmentSettings);
}
inline ::System::ValueTuple_2<bool, ::GlobalNamespace::ColorScheme*> GlobalNamespace::StandardLevelScenesTransitionSetupData::GetColorInfo(::GlobalNamespace::ColorScheme* playerOverrideColorScheme,
                                                                                                                                           bool playerOverrideLightshowColors,
                                                                                                                                           ::GlobalNamespace::ColorScheme* beatmapOverrideColorScheme,
                                                                                                                                           ::GlobalNamespace::EnvironmentInfoSO* targetEnvironmentInfo,
                                                                                                                                           bool usingOverrideEnvironment) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(),
                                                           { "GetColorInfo",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::ColorScheme*>(), ::i2c::type_of<bool>(), ::i2c::type_of<::GlobalNamespace::ColorScheme*>(),
                                                               ::i2c::type_of<::GlobalNamespace::EnvironmentInfoSO*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::ValueTuple_2<bool, ::GlobalNamespace::ColorScheme*>>(nullptr, ___internal_method, playerOverrideColorScheme, playerOverrideLightshowColors,
                                                                                                            beatmapOverrideColorScheme, targetEnvironmentInfo, usingOverrideEnvironment);
}
inline void GlobalNamespace::StandardLevelScenesTransitionSetupData::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::StandardLevelScenesTransitionSetupData* GlobalNamespace::StandardLevelScenesTransitionSetupData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::StandardLevelScenesTransitionSetupData*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::StandardLevelScenesTransitionSetupData::StandardLevelScenesTransitionSetupData() {}

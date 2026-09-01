#pragma once
// IWYU pragma private; include "GlobalNamespace\PerformanceConfigurationLog.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationLog_def.hpp"
#include "BeatSaber/Automation/zzzz__RecPlayBehaviourState_def.hpp"
#include "BeatSaber/Settings/zzzz__Settings_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__PerformanceConfigurationStats_def.hpp"
#include "GlobalNamespace/zzzz__PlayerSpecificSettings_def.hpp"
#include "System/Text/zzzz__StringBuilder_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::by_ref<::BeatSaber::Settings::Settings>, ::GlobalNamespace::PlayerSpecificSettings*, ::GlobalNamespace::GameplayModifierMask,
                                                                     ::BeatSaber::Automation::RecPlayBehaviourState*, ::GlobalNamespace::PerformanceConfigurationStats*, ::StringW)>(
    &::GlobalNamespace::PerformanceConfigurationLog::Create)> {
  constexpr static std::size_t size = 0x260;
  constexpr static std::size_t addrs = 0x58f3190;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                                             { "Create",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::PerformanceConfigurationStats*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogSystemInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::PerformanceConfigurationLog::LogSystemInfo)> {
  constexpr static std::size_t size = 0x5b0;
  constexpr static std::size_t addrs = 0x58f33f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogSystemInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogApplicationInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::PerformanceConfigurationLog::LogApplicationInfo)> {
  constexpr static std::size_t size = 0x588;
  constexpr static std::size_t addrs = 0x58f39a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogApplicationInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogApplicationState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::PerformanceConfigurationLog::LogApplicationState)> {
  constexpr static std::size_t size = 0x2b0;
  constexpr static std::size_t addrs = 0x58f3f28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogApplicationState", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogGraphicsInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::PerformanceConfigurationLog::LogGraphicsInfo)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x58f41d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogGraphicsInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogXrInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::PerformanceConfigurationLog::LogXrInfo)> {
  constexpr static std::size_t size = 0x424;
  constexpr static std::size_t addrs = 0x58f4318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogXrInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogOvrInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::PerformanceConfigurationLog::LogOvrInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f473c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogOvrInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogOculusXrInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::PerformanceConfigurationLog::LogOculusXrInfo)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58f4740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogOculusXrInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogOpenXrInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*)>(&::GlobalNamespace::PerformanceConfigurationLog::LogOpenXrInfo)> {
  constexpr static std::size_t size = 0x138;
  constexpr static std::size_t addrs = 0x58f4744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogOpenXrInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::by_ref<::BeatSaber::Settings::Settings>, ::BeatSaber::Automation::RecPlayBehaviourState*)>(
    &::GlobalNamespace::PerformanceConfigurationLog::LogSettings)> {
  constexpr static std::size_t size = 0xa2c;
  constexpr static std::size_t addrs = 0x58f487c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                                             { "LogSettings",
                                                               {},
                                                               { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(),
                                                                 ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogPlayerSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::GlobalNamespace::PlayerSpecificSettings*)>(
    &::GlobalNamespace::PerformanceConfigurationLog::LogPlayerSettings)> {
  constexpr static std::size_t size = 0x48c;
  constexpr static std::size_t addrs = 0x58f52a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                                { "LogPlayerSettings", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogLevelSettings
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::GlobalNamespace::GameplayModifierMask)>(
    &::GlobalNamespace::PerformanceConfigurationLog::LogLevelSettings)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x58f5734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                                { "LogLevelSettings", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::PerformanceConfigurationLog.LogDynamicStates
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Text::StringBuilder*, ::GlobalNamespace::PerformanceConfigurationStats*)>(
    &::GlobalNamespace::PerformanceConfigurationLog::LogDynamicStates)> {
  constexpr static std::size_t size = 0x1d4;
  constexpr static std::size_t addrs = 0x58f57c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                         { "LogDynamicStates", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::GlobalNamespace::PerformanceConfigurationStats*>() } })));
    return ___internal_method;
  }
};
inline ::StringW GlobalNamespace::PerformanceConfigurationLog::Create(::by_ref<::BeatSaber::Settings::Settings> settings, ::GlobalNamespace::PlayerSpecificSettings* playerSettings,
                                                                      ::GlobalNamespace::GameplayModifierMask modifiers, ::BeatSaber::Automation::RecPlayBehaviourState* recPlayState,
                                                                      ::GlobalNamespace::PerformanceConfigurationStats* stats, ::StringW warning) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                                           { "Create",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>(),
                                                               ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>(), ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>(),
                                                               ::i2c::type_of<::GlobalNamespace::PerformanceConfigurationStats*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, settings, playerSettings, modifiers, recPlayState, stats, warning);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogSystemInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogSystemInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogApplicationInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogApplicationInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogApplicationState(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogApplicationState", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogGraphicsInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogGraphicsInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogXrInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogXrInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogOvrInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogOvrInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogOculusXrInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogOculusXrInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogOpenXrInfo(::System::Text::StringBuilder* sb) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(), { "LogOpenXrInfo", {}, { ::i2c::type_of<::System::Text::StringBuilder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogSettings(::System::Text::StringBuilder* sb, ::by_ref<::BeatSaber::Settings::Settings> settings,
                                                                      ::BeatSaber::Automation::RecPlayBehaviourState* recPlayState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                                           { "LogSettings",
                                                             {},
                                                             { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::by_ref<::BeatSaber::Settings::Settings>>(),
                                                               ::i2c::type_of<::BeatSaber::Automation::RecPlayBehaviourState*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, settings, recPlayState);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogPlayerSettings(::System::Text::StringBuilder* sb, ::GlobalNamespace::PlayerSpecificSettings* playerSettings) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                              { "LogPlayerSettings", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::GlobalNamespace::PlayerSpecificSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, playerSettings);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogLevelSettings(::System::Text::StringBuilder* sb, ::GlobalNamespace::GameplayModifierMask modifiers) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                              { "LogLevelSettings", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::GlobalNamespace::GameplayModifierMask>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, modifiers);
}
inline void GlobalNamespace::PerformanceConfigurationLog::LogDynamicStates(::System::Text::StringBuilder* sb, ::GlobalNamespace::PerformanceConfigurationStats* stats) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                                              { "LogDynamicStates", {}, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::GlobalNamespace::PerformanceConfigurationStats*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, stats);
}
template <typename T> inline void GlobalNamespace::PerformanceConfigurationLog::LogEntry(::System::Text::StringBuilder* sb, ::StringW category, ::StringW name, T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::PerformanceConfigurationLog*>(),
                       { "LogEntry", { ::i2c::class_of<T>() }, { ::i2c::type_of<::System::Text::StringBuilder*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sb, category, name, value);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::PerformanceConfigurationLog::PerformanceConfigurationLog() {}

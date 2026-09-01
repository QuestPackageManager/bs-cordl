#pragma once
// IWYU pragma private; include "UnityEngine\AudioSettings.hpp"
#include "System/zzzz__MulticastDelegate_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__AudioSettings_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
#include "UnityEngine/zzzz__AudioConfiguration_def.hpp"
#include "UnityEngine/zzzz__AudioSettings_def.hpp"
//  Writing Method size for method: ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x6a4c970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler.Invoke
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::*)(bool)>(
    &::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6a4c9dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(),
                                                                                          { ::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(), 13 }));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioSettings_AudioConfigurationChangeHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, object, method);
}
inline void UnityEngine::AudioSettings_AudioConfigurationChangeHandler::Invoke(bool deviceWasChanged) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, deviceWasChanged);
}
inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* UnityEngine::AudioSettings_AudioConfigurationChangeHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::AudioSettings_AudioConfigurationChangeHandler() {}
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.get_muteState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings_Mobile::get_muteState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a4c9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "get_muteState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.set_muteState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::AudioSettings_Mobile::set_muteState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a4ca3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "set_muteState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.get_stopAudioOutputOnMute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings_Mobile::get_stopAudioOutputOnMute)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a4ca90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "get_stopAudioOutputOnMute", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.InvokeOnMuteStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::AudioSettings_Mobile::InvokeOnMuteStateChanged)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x6a4cadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "InvokeOnMuteStateChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.InvokeIsStopAudioOutputOnMuteEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings_Mobile::InvokeIsStopAudioOutputOnMuteEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a4ccec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "InvokeIsStopAudioOutputOnMuteEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.StartAudioOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AudioSettings_Mobile::StartAudioOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4ccc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "StartAudioOutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.StopAudioOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AudioSettings_Mobile::StopAudioOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4cc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "StopAudioOutput", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioSettings_Mobile::setStaticF__muteState_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<muteState>k__BackingField", ::UnityEngine::AudioSettings_Mobile*>(std::forward<bool>(value));
}
inline bool UnityEngine::AudioSettings_Mobile::getStaticF__muteState_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<muteState>k__BackingField", ::UnityEngine::AudioSettings_Mobile*>();
}
inline void UnityEngine::AudioSettings_Mobile::setStaticF__stopAudioOutputOnMute(bool value) {
  ::cordl_internals::setStaticField<bool, "_stopAudioOutputOnMute", ::UnityEngine::AudioSettings_Mobile*>(std::forward<bool>(value));
}
inline bool UnityEngine::AudioSettings_Mobile::getStaticF__stopAudioOutputOnMute() {
  return ::cordl_internals::getStaticField<bool, "_stopAudioOutputOnMute", ::UnityEngine::AudioSettings_Mobile*>();
}
inline void UnityEngine::AudioSettings_Mobile::setStaticF_OnMuteStateChanged(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "OnMuteStateChanged", ::UnityEngine::AudioSettings_Mobile*>(std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::AudioSettings_Mobile::getStaticF_OnMuteStateChanged() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "OnMuteStateChanged", ::UnityEngine::AudioSettings_Mobile*>();
}
inline bool UnityEngine::AudioSettings_Mobile::get_muteState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "get_muteState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings_Mobile::set_muteState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "set_muteState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::AudioSettings_Mobile::get_stopAudioOutputOnMute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "get_stopAudioOutputOnMute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings_Mobile::InvokeOnMuteStateChanged(bool mute) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "InvokeOnMuteStateChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, mute);
}
inline bool UnityEngine::AudioSettings_Mobile::InvokeIsStopAudioOutputOnMuteEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "InvokeIsStopAudioOutputOnMuteEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings_Mobile::StartAudioOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "StartAudioOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings_Mobile::StopAudioOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings_Mobile*>(), { "StopAudioOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSettings_Mobile::AudioSettings_Mobile() {}
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetSampleRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AudioSettings::GetSampleRate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4c434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetSampleRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.get_dspTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)()>(&::UnityEngine::AudioSettings::get_dspTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4c45c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "get_dspTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.get_outputSampleRate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)()>(&::UnityEngine::AudioSettings::get_outputSampleRate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4c484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "get_outputSampleRate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetSpatializerPluginName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)()>(&::UnityEngine::AudioSettings::GetSpatializerPluginName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x6a4c4ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetSpatializerPluginName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetConfiguration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::AudioConfiguration (*)()>(&::UnityEngine::AudioSettings::GetConfiguration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x6a4c5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetConfiguration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.add_OnAudioConfigurationChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*)>(&::UnityEngine::AudioSettings::add_OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a4c648;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(),
                                                             { "add_OnAudioConfigurationChanged", {}, { ::i2c::type_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.remove_OnAudioConfigurationChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*)>(&::UnityEngine::AudioSettings::remove_OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6a4c714;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(),
                                                             { "remove_OnAudioConfigurationChanged", {}, { ::i2c::type_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioConfigurationChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::UnityEngine::AudioSettings::InvokeOnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x6a4c7e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "InvokeOnAudioConfigurationChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioSystemShuttingDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AudioSettings::InvokeOnAudioSystemShuttingDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a4c850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "InvokeOnAudioSystemShuttingDown", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioSystemStartedUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::AudioSettings::InvokeOnAudioSystemStartedUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a4c8b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "InvokeOnAudioSystemStartedUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.StartAudioOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings::StartAudioOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4c920;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "StartAudioOutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.StopAudioOutput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings::StopAudioOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a4c948;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "StopAudioOutput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetSpatializerPluginName_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::AudioSettings::GetSpatializerPluginName_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a4c570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(),
                                                             { "GetSpatializerPluginName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetConfiguration_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::AudioConfiguration>)>(&::UnityEngine::AudioSettings::GetConfiguration_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a4c60c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetConfiguration_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioSettings::setStaticF_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*, "OnAudioConfigurationChanged", ::UnityEngine::AudioSettings*>(
      std::forward<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(value));
}
inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* UnityEngine::AudioSettings::getStaticF_OnAudioConfigurationChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*, "OnAudioConfigurationChanged", ::UnityEngine::AudioSettings*>();
}
inline void UnityEngine::AudioSettings::setStaticF_OnAudioSystemShuttingDown(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "OnAudioSystemShuttingDown", ::UnityEngine::AudioSettings*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::AudioSettings::getStaticF_OnAudioSystemShuttingDown() {
  return ::cordl_internals::getStaticField<::System::Action*, "OnAudioSystemShuttingDown", ::UnityEngine::AudioSettings*>();
}
inline void UnityEngine::AudioSettings::setStaticF_OnAudioSystemStartedUp(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "OnAudioSystemStartedUp", ::UnityEngine::AudioSettings*>(std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::AudioSettings::getStaticF_OnAudioSystemStartedUp() {
  return ::cordl_internals::getStaticField<::System::Action*, "OnAudioSystemStartedUp", ::UnityEngine::AudioSettings*>();
}
inline int32_t UnityEngine::AudioSettings::GetSampleRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetSampleRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline double_t UnityEngine::AudioSettings::get_dspTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "get_dspTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AudioSettings::get_outputSampleRate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "get_outputSampleRate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AudioSettings::GetSpatializerPluginName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetSpatializerPluginName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method);
}
inline ::UnityEngine::AudioConfiguration UnityEngine::AudioSettings::GetConfiguration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetConfiguration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioConfiguration>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings::add_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(),
                                                           { "add_OnAudioConfigurationChanged", {}, { ::i2c::type_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::AudioSettings::remove_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(),
                                                           { "remove_OnAudioConfigurationChanged", {}, { ::i2c::type_of<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioConfigurationChanged(bool deviceWasChanged) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "InvokeOnAudioConfigurationChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, deviceWasChanged);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioSystemShuttingDown() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "InvokeOnAudioSystemShuttingDown", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioSystemStartedUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "InvokeOnAudioSystemStartedUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::StartAudioOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "StartAudioOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::StopAudioOutput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "StopAudioOutput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings::GetSpatializerPluginName_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetSpatializerPluginName_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::AudioSettings::GetConfiguration_Injected(::by_ref<::UnityEngine::AudioConfiguration> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::AudioSettings*>(), { "GetConfiguration_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::AudioConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSettings::AudioSettings() {}

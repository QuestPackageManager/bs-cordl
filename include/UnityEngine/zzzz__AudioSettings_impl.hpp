#pragma once
// IWYU pragma private; include "UnityEngine/AudioSettings.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::*)(::System::Object*, ::System::IntPtr)>(
    &::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::_ctor)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x687c0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler.Invoke
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::*)(bool)>(
    &::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::Invoke)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x687c130;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get(), 13));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioSettings_AudioConfigurationChangeHandler::_ctor(::System::Object* object, ::System::IntPtr method) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, object, method);
}
inline void UnityEngine::AudioSettings_AudioConfigurationChangeHandler::Invoke(bool deviceWasChanged) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, deviceWasChanged);
}
inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* UnityEngine::AudioSettings_AudioConfigurationChangeHandler::New_ctor(::System::Object* object, ::System::IntPtr method) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(object, method));
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler::AudioSettings_AudioConfigurationChangeHandler() {}
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.get_muteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings_Mobile::get_muteState)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x687c144;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "get_muteState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.set_muteState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::AudioSettings_Mobile::set_muteState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x687c190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "set_muteState",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.get_stopAudioOutputOnMute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings_Mobile::get_stopAudioOutputOnMute)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x687c1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(),
                                                                               "get_stopAudioOutputOnMute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.InvokeOnMuteStateChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::AudioSettings_Mobile::InvokeOnMuteStateChanged)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x687c230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "InvokeOnMuteStateChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.InvokeIsStopAudioOutputOnMuteEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings_Mobile::InvokeIsStopAudioOutputOnMuteEnabled)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x687c440;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "InvokeIsStopAudioOutputOnMuteEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.StartAudioOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AudioSettings_Mobile::StartAudioOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x687c418;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "StartAudioOutput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings_Mobile.StopAudioOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AudioSettings_Mobile::StopAudioOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x687c3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "StopAudioOutput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioSettings_Mobile::setStaticF__muteState_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<muteState>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::AudioSettings_Mobile::getStaticF__muteState_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<muteState>k__BackingField", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get>();
}
inline void UnityEngine::AudioSettings_Mobile::setStaticF__stopAudioOutputOnMute(bool value) {
  ::cordl_internals::setStaticField<bool, "_stopAudioOutputOnMute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get>(std::forward<bool>(value));
}
inline bool UnityEngine::AudioSettings_Mobile::getStaticF__stopAudioOutputOnMute() {
  return ::cordl_internals::getStaticField<bool, "_stopAudioOutputOnMute", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get>();
}
inline void UnityEngine::AudioSettings_Mobile::setStaticF_OnMuteStateChanged(::System::Action_1<bool>* value) {
  ::cordl_internals::setStaticField<::System::Action_1<bool>*, "OnMuteStateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get>(
      std::forward<::System::Action_1<bool>*>(value));
}
inline ::System::Action_1<bool>* UnityEngine::AudioSettings_Mobile::getStaticF_OnMuteStateChanged() {
  return ::cordl_internals::getStaticField<::System::Action_1<bool>*, "OnMuteStateChanged", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get>();
}
inline bool UnityEngine::AudioSettings_Mobile::get_muteState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "get_muteState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings_Mobile::set_muteState(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "set_muteState",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline bool UnityEngine::AudioSettings_Mobile::get_stopAudioOutputOnMute() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(),
                                                                             "get_stopAudioOutputOnMute", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings_Mobile::InvokeOnMuteStateChanged(bool mute) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "InvokeOnMuteStateChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, mute);
}
inline bool UnityEngine::AudioSettings_Mobile::InvokeIsStopAudioOutputOnMuteEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "InvokeIsStopAudioOutputOnMuteEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings_Mobile::StartAudioOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "StartAudioOutput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings_Mobile::StopAudioOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings_Mobile*>::get(), "StopAudioOutput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSettings_Mobile::AudioSettings_Mobile() {}
//  Writing Method size for method: ::UnityEngine::AudioSettings.SetConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::AudioConfiguration)>(&::UnityEngine::AudioSettings::SetConfiguration)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x687bac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "SetConfiguration", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetSampleRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::AudioSettings::GetSampleRate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x687bb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetSampleRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.get_dspTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (*)()>(&::UnityEngine::AudioSettings::get_dspTime)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x687bb60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "get_dspTime",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.get_outputSampleRate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)()>(&::UnityEngine::AudioSettings::get_outputSampleRate)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x687bb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "get_outputSampleRate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetSpatializerPluginName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)()>(&::UnityEngine::AudioSettings::GetSpatializerPluginName)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x687bbb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetSpatializerPluginName",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::AudioConfiguration (*)()>(&::UnityEngine::AudioSettings::GetConfiguration)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x687bcb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetConfiguration",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::AudioConfiguration)>(&::UnityEngine::AudioSettings::Reset)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x687bd4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.add_OnAudioConfigurationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*)>(
    &::UnityEngine::AudioSettings::add_OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x687bd9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "add_OnAudioConfigurationChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.remove_OnAudioConfigurationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*)>(
    &::UnityEngine::AudioSettings::remove_OnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x687be68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "remove_OnAudioConfigurationChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioConfigurationChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(bool)>(&::UnityEngine::AudioSettings::InvokeOnAudioConfigurationChanged)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x687bf34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "InvokeOnAudioConfigurationChanged",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioSystemShuttingDown
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AudioSettings::InvokeOnAudioSystemShuttingDown)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x687bfa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "InvokeOnAudioSystemShuttingDown",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.InvokeOnAudioSystemStartedUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::AudioSettings::InvokeOnAudioSystemStartedUp)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x687c00c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(),
                                                                               "InvokeOnAudioSystemStartedUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.StartAudioOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings::StartAudioOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x687c074;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "StartAudioOutput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.StopAudioOutput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::UnityEngine::AudioSettings::StopAudioOutput)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x687c09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "StopAudioOutput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.SetConfiguration_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::UnityEngine::AudioConfiguration>)>(&::UnityEngine::AudioSettings::SetConfiguration_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x687bafc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "SetConfiguration_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::AudioConfiguration>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetSpatializerPluginName_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::AudioSettings::GetSpatializerPluginName_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x687bc74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetSpatializerPluginName_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AudioSettings.GetConfiguration_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::AudioConfiguration>)>(&::UnityEngine::AudioSettings::GetConfiguration_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x687bd10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetConfiguration_Injected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::AudioConfiguration>>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::AudioSettings::setStaticF_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value) {
  ::cordl_internals::setStaticField<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*, "OnAudioConfigurationChanged",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get>(
      std::forward<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>(value));
}
inline ::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* UnityEngine::AudioSettings::getStaticF_OnAudioConfigurationChanged() {
  return ::cordl_internals::getStaticField<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*, "OnAudioConfigurationChanged",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get>();
}
inline void UnityEngine::AudioSettings::setStaticF_OnAudioSystemShuttingDown(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "OnAudioSystemShuttingDown", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::AudioSettings::getStaticF_OnAudioSystemShuttingDown() {
  return ::cordl_internals::getStaticField<::System::Action*, "OnAudioSystemShuttingDown", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get>();
}
inline void UnityEngine::AudioSettings::setStaticF_OnAudioSystemStartedUp(::System::Action* value) {
  ::cordl_internals::setStaticField<::System::Action*, "OnAudioSystemStartedUp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get>(
      std::forward<::System::Action*>(value));
}
inline ::System::Action* UnityEngine::AudioSettings::getStaticF_OnAudioSystemStartedUp() {
  return ::cordl_internals::getStaticField<::System::Action*, "OnAudioSystemStartedUp", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get>();
}
inline bool UnityEngine::AudioSettings::SetConfiguration(::UnityEngine::AudioConfiguration config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "SetConfiguration", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, config);
}
inline int32_t UnityEngine::AudioSettings::GetSampleRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetSampleRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline double_t UnityEngine::AudioSettings::get_dspTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "get_dspTime",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(nullptr, ___internal_method);
}
inline int32_t UnityEngine::AudioSettings::get_outputSampleRate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "get_outputSampleRate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method);
}
inline ::StringW UnityEngine::AudioSettings::GetSpatializerPluginName() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetSpatializerPluginName",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method);
}
inline ::UnityEngine::AudioConfiguration UnityEngine::AudioSettings::GetConfiguration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetConfiguration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::AudioConfiguration, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::Reset(::UnityEngine::AudioConfiguration config) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "Reset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, config);
}
inline void UnityEngine::AudioSettings::add_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "add_OnAudioConfigurationChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::AudioSettings::remove_OnAudioConfigurationChanged(::UnityEngine::AudioSettings_AudioConfigurationChangeHandler* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "remove_OnAudioConfigurationChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::AudioSettings_AudioConfigurationChangeHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioConfigurationChanged(bool deviceWasChanged) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "InvokeOnAudioConfigurationChanged",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, deviceWasChanged);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioSystemShuttingDown() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(),
                                                                             "InvokeOnAudioSystemShuttingDown", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::AudioSettings::InvokeOnAudioSystemStartedUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(),
                                                                             "InvokeOnAudioSystemStartedUp", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::StartAudioOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "StartAudioOutput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::StopAudioOutput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "StopAudioOutput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool UnityEngine::AudioSettings::SetConfiguration_Injected(::ByRef<::UnityEngine::AudioConfiguration> config) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "SetConfiguration_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::AudioConfiguration>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, config);
}
inline void UnityEngine::AudioSettings::GetSpatializerPluginName_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetSpatializerPluginName_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
inline void UnityEngine::AudioSettings::GetConfiguration_Injected(::ByRef<::UnityEngine::AudioConfiguration> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AudioSettings*>::get(), "GetConfiguration_Injected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::AudioConfiguration>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::AudioSettings::AudioSettings() {}

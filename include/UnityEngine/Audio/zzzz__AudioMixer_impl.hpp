#pragma once
// IWYU pragma private; include "UnityEngine\Audio\AudioMixer.hpp"
#include "UnityEngine/zzzz__Object_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerGroup_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerSnapshot_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioMixerUpdateMode_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixer::*)()>(&::UnityEngine::Audio::AudioMixer::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6a56d14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.get_outputAudioMixerGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixerGroup> (::UnityEngine::Audio::AudioMixer::*)()>(
    &::UnityEngine::Audio::AudioMixer::get_outputAudioMixerGroup)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6a56d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "get_outputAudioMixerGroup", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.set_outputAudioMixerGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixer::*)(::UnityEngine::Audio::AudioMixerGroup*)>(
    &::UnityEngine::Audio::AudioMixer::set_outputAudioMixerGroup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a56ef8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "set_outputAudioMixerGroup", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.FindSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> (::UnityEngine::Audio::AudioMixer::*)(::StringW)>(
    &::UnityEngine::Audio::AudioMixer::FindSnapshot)> {
  constexpr static std::size_t size = 0x298;
  constexpr static std::size_t addrs = 0x6a56ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "FindSnapshot", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.FindMatchingGroups
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>> (::UnityEngine::Audio::AudioMixer::*)(::StringW)>(
    &::UnityEngine::Audio::AudioMixer::FindMatchingGroups)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x6a572d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "FindMatchingGroups", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.TransitionToSnapshot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixer::*)(::UnityEngine::Audio::AudioMixerSnapshot*, float_t)>(
    &::UnityEngine::Audio::AudioMixer::TransitionToSnapshot)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x6a57490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                             { "TransitionToSnapshot", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.TransitionToSnapshotInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixer::*)(::UnityEngine::Audio::AudioMixerSnapshot*, float_t)>(
    &::UnityEngine::Audio::AudioMixer::TransitionToSnapshotInternal)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a577dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                             { "TransitionToSnapshotInternal", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.TransitionToSnapshots
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixer::*)(::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*>, ::ArrayW<float_t>, float_t)>(
    &::UnityEngine::Audio::AudioMixer::TransitionToSnapshots)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6a57900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                         { "TransitionToSnapshots", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.get_updateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioMixerUpdateMode (::UnityEngine::Audio::AudioMixer::*)()>(&::UnityEngine::Audio::AudioMixer::get_updateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a57a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "get_updateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.set_updateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioMixer::*)(::UnityEngine::Audio::AudioMixerUpdateMode)>(&::UnityEngine::Audio::AudioMixer::set_updateMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a57b3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "set_updateMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.SetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioMixer::*)(::StringW, float_t)>(&::UnityEngine::Audio::AudioMixer::SetFloat)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6a57c10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.ClearFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioMixer::*)(::StringW)>(&::UnityEngine::Audio::AudioMixer::ClearFloat)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x6a57dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "ClearFloat", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.GetFloat
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioMixer::*)(::StringW, ::by_ref<float_t>)>(&::UnityEngine::Audio::AudioMixer::GetFloat)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6a57fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "GetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.GetAbsoluteAudibilityFromGroup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::AudioMixer::*)(::UnityEngine::Audio::AudioMixerGroup*)>(
    &::UnityEngine::Audio::AudioMixer::GetAbsoluteAudibilityFromGroup)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6a5817c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                                                           { "GetAbsoluteAudibilityFromGroup", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerGroup*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.get_outputAudioMixerGroup_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioMixer::get_outputAudioMixerGroup_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a56ebc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "get_outputAudioMixerGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.set_outputAudioMixerGroup_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Audio::AudioMixer::set_outputAudioMixerGroup_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a56fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                             { "set_outputAudioMixerGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.FindSnapshot_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Audio::AudioMixer::FindSnapshot_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a57294;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                { "FindSnapshot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.FindMatchingGroups_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>> (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(
    &::UnityEngine::Audio::AudioMixer::FindMatchingGroups_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a5744c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                         { "FindMatchingGroups_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.TransitionToSnapshotInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, float_t)>(&::UnityEngine::Audio::AudioMixer::TransitionToSnapshotInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a578ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                         { "TransitionToSnapshotInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.TransitionToSnapshots_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*>, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t)>(
    &::UnityEngine::Audio::AudioMixer::TransitionToSnapshots_Injected)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a57a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "TransitionToSnapshots_Injected",
                                                                                    {},
                                                                                    { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*>>(),
                                                                                      ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.get_updateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioMixerUpdateMode (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioMixer::get_updateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a57b00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "get_updateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.set_updateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioMixerUpdateMode)>(&::UnityEngine::Audio::AudioMixer::set_updateMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a57bcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                             { "set_updateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioMixerUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.SetFloat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, float_t)>(
    &::UnityEngine::Audio::AudioMixer::SetFloat_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a57d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                            { "SetFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.ClearFloat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>)>(&::UnityEngine::Audio::AudioMixer::ClearFloat_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a57f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                { "ClearFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.GetFloat_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<float_t>)>(
    &::UnityEngine::Audio::AudioMixer::GetFloat_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a58128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
            { "GetFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioMixer.GetAbsoluteAudibilityFromGroup_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Audio::AudioMixer::GetAbsoluteAudibilityFromGroup_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a5823c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                             { "GetAbsoluteAudibilityFromGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioMixer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Audio::AudioMixerGroup> UnityEngine::Audio::AudioMixer::get_outputAudioMixerGroup() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "get_outputAudioMixerGroup", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioMixer::set_outputAudioMixerGroup(::UnityEngine::Audio::AudioMixerGroup* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "set_outputAudioMixerGroup", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::UnityEngine::Audio::AudioMixerSnapshot> UnityEngine::Audio::AudioMixer::FindSnapshot(::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "FindSnapshot", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Audio::AudioMixerSnapshot>>(this, ___internal_method, name);
}
inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>> UnityEngine::Audio::AudioMixer::FindMatchingGroups(::StringW subPath) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "FindMatchingGroups", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>>(this, ___internal_method, subPath);
}
inline void UnityEngine::Audio::AudioMixer::TransitionToSnapshot(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, float_t timeToReach) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                           { "TransitionToSnapshot", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot, timeToReach);
}
inline void UnityEngine::Audio::AudioMixer::TransitionToSnapshotInternal(::UnityEngine::Audio::AudioMixerSnapshot* snapshot, float_t timeToReach) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                           { "TransitionToSnapshotInternal", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerSnapshot*>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshot, timeToReach);
}
inline void UnityEngine::Audio::AudioMixer::TransitionToSnapshots(::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*> snapshots, ::ArrayW<float_t> weights, float_t timeToReach) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                          { "TransitionToSnapshots", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*>>(), ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, snapshots, weights, timeToReach);
}
inline ::UnityEngine::Audio::AudioMixerUpdateMode UnityEngine::Audio::AudioMixer::get_updateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "get_updateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioMixerUpdateMode>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioMixer::set_updateMode(::UnityEngine::Audio::AudioMixerUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "set_updateMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioMixer::SetFloat(::StringW name, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "SetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, value);
}
inline bool UnityEngine::Audio::AudioMixer::ClearFloat(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "ClearFloat", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name);
}
inline bool UnityEngine::Audio::AudioMixer::GetFloat(::StringW name, ::by_ref<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "GetFloat", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, name, value);
}
inline float_t UnityEngine::Audio::AudioMixer::GetAbsoluteAudibilityFromGroup(::UnityEngine::Audio::AudioMixerGroup* group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "GetAbsoluteAudibilityFromGroup", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioMixerGroup*>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, group);
}
inline ::System::IntPtr UnityEngine::Audio::AudioMixer::get_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "get_outputAudioMixerGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioMixer::set_outputAudioMixerGroup_Injected(::System::IntPtr _unity_self, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                           { "set_outputAudioMixerGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::System::IntPtr UnityEngine::Audio::AudioMixer::FindSnapshot_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                              { "FindSnapshot_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, name);
}
inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>> UnityEngine::Audio::AudioMixer::FindMatchingGroups_Injected(::System::IntPtr _unity_self,
                                                                                                                             ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> subPath) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                              { "FindMatchingGroups_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Audio::AudioMixerGroup>>>(nullptr, ___internal_method, _unity_self, subPath);
}
inline void UnityEngine::Audio::AudioMixer::TransitionToSnapshotInternal_Injected(::System::IntPtr _unity_self, ::System::IntPtr snapshot, float_t timeToReach) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                              { "TransitionToSnapshotInternal_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, snapshot, timeToReach);
}
inline void UnityEngine::Audio::AudioMixer::TransitionToSnapshots_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*> snapshots,
                                                                           ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> weights, float_t timeToReach) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                                                         { "TransitionToSnapshots_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Audio::AudioMixerSnapshot*>>(),
                                                                                             ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, snapshots, weights, timeToReach);
}
inline ::UnityEngine::Audio::AudioMixerUpdateMode UnityEngine::Audio::AudioMixer::get_updateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(), { "get_updateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioMixerUpdateMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioMixer::set_updateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioMixerUpdateMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                           { "set_updateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioMixerUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioMixer::SetFloat_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                          { "SetFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, name, value);
}
inline bool UnityEngine::Audio::AudioMixer::ClearFloat_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                              { "ClearFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, name);
}
inline bool UnityEngine::Audio::AudioMixer::GetFloat_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> name, ::by_ref<float_t> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
          { "GetFloat_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<float_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, name, value);
}
inline float_t UnityEngine::Audio::AudioMixer::GetAbsoluteAudibilityFromGroup_Injected(::System::IntPtr _unity_self, ::System::IntPtr group) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioMixer*>(),
                                                           { "GetAbsoluteAudibilityFromGroup_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self, group);
}
inline ::UnityEngine::Audio::AudioMixer* UnityEngine::Audio::AudioMixer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Audio::AudioMixer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioMixer::AudioMixer() {}

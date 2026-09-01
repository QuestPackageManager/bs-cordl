#pragma once
// IWYU pragma private; include "Oculus\Haptics\Haptics.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Oculus/Haptics/zzzz__Haptics_def.hpp"
#include "Oculus/Haptics/zzzz__Controller_def.hpp"
#include "Oculus/Haptics/zzzz__Ffi_def.hpp"
#include "System/Threading/zzzz__SynchronizationContext_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Oculus::Haptics::Haptics.get_IsPCMHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Haptics::Haptics::get_IsPCMHaptics)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5db15ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "get_IsPCMHaptics", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.set_IsPCMHaptics
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(bool)>(&::Oculus::Haptics::Haptics::set_IsPCMHaptics)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5db15f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "set_IsPCMHaptics", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.get_Instance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Oculus::Haptics::Haptics* (*)()>(&::Oculus::Haptics::Haptics::get_Instance)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5db033c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "get_Instance", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.IsSupportedPlatform
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Haptics::Haptics::IsSupportedPlatform)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db164c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "IsSupportedPlatform", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.IsPcmHapticsExtensionEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Haptics::Haptics::IsPcmHapticsExtensionEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5db18b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "IsPcmHapticsExtensionEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.PlayCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::Oculus::Haptics::Ffi_Controller, float_t, float_t)>(&::Oculus::Haptics::Haptics::PlayCallback)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db15a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::Oculus::Haptics::Haptics*>(),
                         { "PlayCallback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Oculus::Haptics::Ffi_Controller>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)()>(&::Oculus::Haptics::Haptics::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5db1654;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.EnsureInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Haptics::Haptics::EnsureInitialized)> {
  constexpr static std::size_t size = 0x258;
  constexpr static std::size_t addrs = 0x5db1658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "EnsureInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.IsInitialized
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::Oculus::Haptics::Haptics::IsInitialized)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5db18b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "IsInitialized", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.LoadClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Haptics::Haptics::*)(::StringW)>(&::Oculus::Haptics::Haptics::LoadClip)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5db1274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "LoadClip", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.ReleaseClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::ReleaseClip)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db13f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "ReleaseClip", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.CreateHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Oculus::Haptics::Haptics::*)()>(&::Oculus::Haptics::Haptics::CreateHapticPlayer)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5db0230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "CreateHapticPlayer", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.SetHapticPlayerClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t, int32_t)>(&::Oculus::Haptics::Haptics::SetHapticPlayerClip)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5db132c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SetHapticPlayerClip", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.PlayHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t, ::Oculus::Haptics::Controller)>(&::Oculus::Haptics::Haptics::PlayHapticPlayer)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x5db0400;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "PlayHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.PauseHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::PauseHapticPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5db051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "PauseHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.ResumeHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::ResumeHapticPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5db0628;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "ResumeHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.StopHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::StopHapticPlayer)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5db0734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "StopHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.SeekPlaybackPositionHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t, float_t)>(&::Oculus::Haptics::Haptics::SeekPlaybackPositionHapticPlayer)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x5db0840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SeekPlaybackPositionHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.GetClipDuration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::GetClipDuration)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5db0b64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "GetClipDuration", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.LoopHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t, bool)>(&::Oculus::Haptics::Haptics::LoopHapticPlayer)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5db0ab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "LoopHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.IsHapticPlayerLooping
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::IsHapticPlayerLooping)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5db09f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "IsHapticPlayerLooping", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.SetAmplitudeHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t, float_t)>(&::Oculus::Haptics::Haptics::SetAmplitudeHapticPlayer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5db0cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SetAmplitudeHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.GetAmplitudeHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::GetAmplitudeHapticPlayer)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5db0c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "GetAmplitudeHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.SetFrequencyShiftHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t, float_t)>(&::Oculus::Haptics::Haptics::SetFrequencyShiftHapticPlayer)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5db0eec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SetFrequencyShiftHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.GetFrequencyShiftHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::GetFrequencyShiftHapticPlayer)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5db0e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "GetFrequencyShiftHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.MapPriority
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (*)(uint32_t, int32_t, int32_t, int32_t, int32_t)>(&::Oculus::Haptics::Haptics::MapPriority)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x5db25a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(),
                            { "MapPriority", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.SetPriorityHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(int32_t, uint32_t)>(&::Oculus::Haptics::Haptics::SetPriorityHapticPlayer)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5db111c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SetPriorityHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.GetPriorityHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint32_t (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::GetPriorityHapticPlayer)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5db1048;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "GetPriorityHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.ReleaseHapticPlayer
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Oculus::Haptics::Haptics::*)(int32_t)>(&::Oculus::Haptics::Haptics::ReleaseHapticPlayer)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5db153c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "ReleaseHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)()>(&::Oculus::Haptics::Haptics::Dispose)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5db29f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)(bool)>(&::Oculus::Haptics::Haptics::Dispose)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5db2a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { ::i2c::class_of<::Oculus::Haptics::Haptics*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Oculus::Haptics::Haptics.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Oculus::Haptics::Haptics::*)()>(&::Oculus::Haptics::Haptics::Finalize)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5db2b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { ::i2c::class_of<::Oculus::Haptics::Haptics*>(), 1 }));
    return ___internal_method;
  }
};
inline void Oculus::Haptics::Haptics::setStaticF_instance(::Oculus::Haptics::Haptics* value) {
  ::cordl_internals::setStaticField<::Oculus::Haptics::Haptics*, "instance", ::Oculus::Haptics::Haptics*>(std::forward<::Oculus::Haptics::Haptics*>(value));
}
inline ::Oculus::Haptics::Haptics* Oculus::Haptics::Haptics::getStaticF_instance() {
  return ::cordl_internals::getStaticField<::Oculus::Haptics::Haptics*, "instance", ::Oculus::Haptics::Haptics*>();
}
inline void Oculus::Haptics::Haptics::setStaticF_syncContext(::System::Threading::SynchronizationContext* value) {
  ::cordl_internals::setStaticField<::System::Threading::SynchronizationContext*, "syncContext", ::Oculus::Haptics::Haptics*>(std::forward<::System::Threading::SynchronizationContext*>(value));
}
inline ::System::Threading::SynchronizationContext* Oculus::Haptics::Haptics::getStaticF_syncContext() {
  return ::cordl_internals::getStaticField<::System::Threading::SynchronizationContext*, "syncContext", ::Oculus::Haptics::Haptics*>();
}
inline void Oculus::Haptics::Haptics::setStaticF__IsPCMHaptics_k__BackingField(bool value) {
  ::cordl_internals::setStaticField<bool, "<IsPCMHaptics>k__BackingField", ::Oculus::Haptics::Haptics*>(std::forward<bool>(value));
}
inline bool Oculus::Haptics::Haptics::getStaticF__IsPCMHaptics_k__BackingField() {
  return ::cordl_internals::getStaticField<bool, "<IsPCMHaptics>k__BackingField", ::Oculus::Haptics::Haptics*>();
}
inline bool Oculus::Haptics::Haptics::get_IsPCMHaptics() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "get_IsPCMHaptics", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Oculus::Haptics::Haptics::set_IsPCMHaptics(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "set_IsPCMHaptics", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, value);
}
inline ::Oculus::Haptics::Haptics* Oculus::Haptics::Haptics::get_Instance() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "get_Instance", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Oculus::Haptics::Haptics*>(nullptr, ___internal_method);
}
inline bool Oculus::Haptics::Haptics::IsSupportedPlatform() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "IsSupportedPlatform", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Oculus::Haptics::Haptics::IsPcmHapticsExtensionEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "IsPcmHapticsExtensionEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline void Oculus::Haptics::Haptics::PlayCallback(::System::IntPtr context, ::Oculus::Haptics::Ffi_Controller controller, float_t duration, float_t amplitude) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(),
                          { "PlayCallback", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::Oculus::Haptics::Ffi_Controller>(), ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, context, controller, duration, amplitude);
}
inline void Oculus::Haptics::Haptics::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool Oculus::Haptics::Haptics::EnsureInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "EnsureInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool Oculus::Haptics::Haptics::IsInitialized() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "IsInitialized", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline int32_t Oculus::Haptics::Haptics::LoadClip(::StringW clipJson) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "LoadClip", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, clipJson);
}
inline bool Oculus::Haptics::Haptics::ReleaseClip(int32_t clipId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "ReleaseClip", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, clipId);
}
inline int32_t Oculus::Haptics::Haptics::CreateHapticPlayer() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "CreateHapticPlayer", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Oculus::Haptics::Haptics::SetHapticPlayerClip(int32_t playerId, int32_t clipId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SetHapticPlayerClip", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, clipId);
}
inline void Oculus::Haptics::Haptics::PlayHapticPlayer(int32_t playerId, ::Oculus::Haptics::Controller controller) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "PlayHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Oculus::Haptics::Controller>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, controller);
}
inline void Oculus::Haptics::Haptics::PauseHapticPlayer(int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "PauseHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Oculus::Haptics::Haptics::ResumeHapticPlayer(int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "ResumeHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Oculus::Haptics::Haptics::StopHapticPlayer(int32_t playerId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "StopHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId);
}
inline void Oculus::Haptics::Haptics::SeekPlaybackPositionHapticPlayer(int32_t playerId, float_t time) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SeekPlaybackPositionHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, time);
}
inline float_t Oculus::Haptics::Haptics::GetClipDuration(int32_t clipId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "GetClipDuration", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, clipId);
}
inline void Oculus::Haptics::Haptics::LoopHapticPlayer(int32_t playerId, bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "LoopHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, enabled);
}
inline bool Oculus::Haptics::Haptics::IsHapticPlayerLooping(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "IsHapticPlayerLooping", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId);
}
inline void Oculus::Haptics::Haptics::SetAmplitudeHapticPlayer(int32_t playerId, float_t amplitude) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SetAmplitudeHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, amplitude);
}
inline float_t Oculus::Haptics::Haptics::GetAmplitudeHapticPlayer(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "GetAmplitudeHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, playerId);
}
inline void Oculus::Haptics::Haptics::SetFrequencyShiftHapticPlayer(int32_t playerId, float_t amount) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SetFrequencyShiftHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, amount);
}
inline float_t Oculus::Haptics::Haptics::GetFrequencyShiftHapticPlayer(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "GetFrequencyShiftHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method, playerId);
}
inline uint32_t Oculus::Haptics::Haptics::MapPriority(uint32_t input, int32_t inMin, int32_t inMax, int32_t outMin, int32_t outMax) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(),
                          { "MapPriority", {}, { ::i2c::type_of<uint32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(nullptr, ___internal_method, input, inMin, inMax, outMin, outMax);
}
inline void Oculus::Haptics::Haptics::SetPriorityHapticPlayer(int32_t playerId, uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "SetPriorityHapticPlayer", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, playerId, value);
}
inline uint32_t Oculus::Haptics::Haptics::GetPriorityHapticPlayer(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "GetPriorityHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint32_t>(this, ___internal_method, playerId);
}
inline bool Oculus::Haptics::Haptics::ReleaseHapticPlayer(int32_t playerId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "ReleaseHapticPlayer", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, playerId);
}
inline void Oculus::Haptics::Haptics::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Oculus::Haptics::Haptics*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Oculus::Haptics::Haptics::Dispose(bool disposing) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Haptics::Haptics*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, disposing);
}
inline void Oculus::Haptics::Haptics::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Oculus::Haptics::Haptics*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Oculus::Haptics::Haptics* Oculus::Haptics::Haptics::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Oculus::Haptics::Haptics*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Oculus::Haptics::Haptics::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Oculus::Haptics::Haptics::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Oculus::Haptics::Haptics::Haptics() {}

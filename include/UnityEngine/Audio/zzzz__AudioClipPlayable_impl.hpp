#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioClipPlayable.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioClipPlayable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__IPlayable_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableHandle_def.hpp"
#include "UnityEngine/Playables/zzzz__Playable_def.hpp"
#include "UnityEngine/zzzz__AudioClip_def.hpp"
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioClipPlayable (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, bool)>(
    &::UnityEngine::Audio::AudioClipPlayable::Create)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x6a500e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.CreateHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (*)(::UnityEngine::Playables::PlayableGraph, ::UnityEngine::AudioClip*, bool)>(
    &::UnityEngine::Audio::AudioClipPlayable::CreateHandle)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6a501ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                         { "CreateHandle", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(::UnityEngine::Playables::PlayableHandle)>(&::UnityEngine::Audio::AudioClipPlayable::_ctor)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x6a5029c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableHandle (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetHandle)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6a50458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.op_Implicit___UnityEngine__Playables__Playable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::Playable (*)(::UnityEngine::Audio::AudioClipPlayable)>(
    &::UnityEngine::Audio::AudioClipPlayable::op_Implicit___UnityEngine__Playables__Playable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a50464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.op_Explicit___UnityEngine__Audio__AudioClipPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioClipPlayable (*)(::UnityEngine::Playables::Playable)>(
    &::UnityEngine::Audio::AudioClipPlayable::op_Explicit___UnityEngine__Audio__AudioClipPlayable)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6a50468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioClipPlayable::*)(::UnityEngine::Audio::AudioClipPlayable)>(&::UnityEngine::Audio::AudioClipPlayable::Equals)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6a504e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a50564;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetClip", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetClip
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(::UnityEngine::AudioClip*)>(&::UnityEngine::Audio::AudioClipPlayable::SetClip)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6a50688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetClip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetLooped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetLooped)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a5071c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetLooped", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetLooped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(bool)>(&::UnityEngine::Audio::AudioClipPlayable::SetLooped)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a50794;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetLooped", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetVolume)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a5081c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetVolume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetVolume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetVolume)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a50894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetVolume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetClipPositionSec
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetClipPositionSec)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a509b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetClipPositionSec", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetStereoPan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetStereoPan)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50a28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetStereoPan", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetStereoPan
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetStereoPan)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a50aa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetStereoPan", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetSpatialBlend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetSpatialBlend)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50bbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetSpatialBlend", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetSpatialBlend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetSpatialBlend)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6a50c34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetSpatialBlend", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.IsPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::IsPlaying)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "IsPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.IsChannelPlaying
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::IsChannelPlaying)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50d8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "IsChannelPlaying", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetStartDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetStartDelay)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50e04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetStartDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetStartDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(double_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetStartDelay)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a50e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetStartDelay", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetPauseDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Audio::AudioClipPlayable::*)()>(&::UnityEngine::Audio::AudioClipPlayable::GetPauseDelay)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50f14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetPauseDelay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetPauseDelay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(double_t)>(&::UnityEngine::Audio::AudioClipPlayable::GetPauseDelay)> {
  constexpr static std::size_t size = 0x18c;
  constexpr static std::size_t addrs = 0x6a50f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetPauseDelay", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(double_t, double_t)>(&::UnityEngine::Audio::AudioClipPlayable::Seek)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6a51164;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "Seek", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.Seek
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioClipPlayable::*)(double_t, double_t, double_t)>(&::UnityEngine::Audio::AudioClipPlayable::Seek)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6a5116c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "Seek", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetClipInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::AudioClip> (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
    &::UnityEngine::Audio::AudioClipPlayable::GetClipInternal)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x6a50568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "GetClipInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetClipInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::UnityEngine::AudioClip*)>(
    &::UnityEngine::Audio::AudioClipPlayable::SetClipInternal)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6a5068c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                { "SetClipInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetLoopedInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetLoopedInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50758;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "GetLoopedInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetLoopedInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, bool)>(&::UnityEngine::Audio::AudioClipPlayable::SetLoopedInternal)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a507d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "SetLoopedInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetVolumeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetVolumeInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "GetVolumeInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetVolumeInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetVolumeInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a50964;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "SetVolumeInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetClipPositionSecInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetClipPositionSecInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a509ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "GetClipPositionSecInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetStereoPanInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetStereoPanInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50a64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "GetStereoPanInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetStereoPanInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetStereoPanInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a50b70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "SetStereoPanInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetSpatialBlendInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetSpatialBlendInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetSpatialBlendInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetSpatialBlendInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, float_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetSpatialBlendInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a50d04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "SetSpatialBlendInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetIsChannelPlayingInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetIsChannelPlayingInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50dc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "GetIsChannelPlayingInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetStartDelayInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetStartDelayInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "GetStartDelayInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetStartDelayInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, double_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetStartDelayInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a50ec8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "SetStartDelayInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetPauseDelayInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetPauseDelayInternal)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a50f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "GetPauseDelayInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetPauseDelayInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, double_t)>(&::UnityEngine::Audio::AudioClipPlayable::SetPauseDelayInternal)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6a51118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "SetPauseDelayInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.InternalCreateAudioClipPlayable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::UnityEngine::AudioClip*, bool,
                                                                ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6a503b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                             { "InternalCreateAudioClipPlayable",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::UnityEngine::AudioClip*>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.ValidateType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::ValidateType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a514c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "ValidateType", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.GetClipInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>)>(&::UnityEngine::Audio::AudioClipPlayable::GetClipInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a513e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetClipInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.SetClipInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Playables::PlayableHandle>, ::System::IntPtr)>(
    &::UnityEngine::Audio::AudioClipPlayable::SetClipInternal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a51420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                { "SetClipInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioClipPlayable.InternalCreateAudioClipPlayable_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Playables::PlayableGraph>, ::System::IntPtr, bool, ::by_ref<::UnityEngine::Playables::PlayableHandle>)>(
    &::UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable_Injected)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a51464;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                           { "InternalCreateAudioClipPlayable_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                               ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
    return ___internal_method;
  }
};
inline ::UnityEngine::Audio::AudioClipPlayable UnityEngine::Audio::AudioClipPlayable::Create(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, bool looping) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                              { "Create", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioClipPlayable>(nullptr, ___internal_method, graph, clip, looping);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioClipPlayable::CreateHandle(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::AudioClip* clip, bool looping) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                       { "CreateHandle", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableGraph>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(nullptr, ___internal_method, graph, clip, looping);
}
inline void UnityEngine::Audio::AudioClipPlayable::_ctor(::UnityEngine::Playables::PlayableHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { ".ctor", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle);
}
inline ::UnityEngine::Playables::PlayableHandle UnityEngine::Audio::AudioClipPlayable::GetHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableHandle>(*this, ___internal_method);
}
inline ::UnityEngine::Playables::Playable UnityEngine::Audio::AudioClipPlayable::op_Implicit___UnityEngine__Playables__Playable(::UnityEngine::Audio::AudioClipPlayable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "op_Implicit", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::Playable>(nullptr, ___internal_method, playable);
}
inline ::UnityEngine::Audio::AudioClipPlayable UnityEngine::Audio::AudioClipPlayable::op_Explicit___UnityEngine__Audio__AudioClipPlayable(::UnityEngine::Playables::Playable playable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "op_Explicit", {}, { ::i2c::type_of<::UnityEngine::Playables::Playable>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioClipPlayable>(nullptr, ___internal_method, playable);
}
inline bool UnityEngine::Audio::AudioClipPlayable::Equals(::UnityEngine::Audio::AudioClipPlayable other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "Equals", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioClipPlayable>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::Audio::AudioClipPlayable::GetClip() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetClip", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(*this, ___internal_method);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetClip(::UnityEngine::AudioClip* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetClip", {}, { ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioClipPlayable::GetLooped() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetLooped", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetLooped(bool value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetLooped", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Audio::AudioClipPlayable::GetVolume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetVolume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetVolume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetVolume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Audio::AudioClipPlayable::GetClipPositionSec() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetClipPositionSec", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline float_t UnityEngine::Audio::AudioClipPlayable::GetStereoPan() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetStereoPan", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetStereoPan(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetStereoPan", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline float_t UnityEngine::Audio::AudioClipPlayable::GetSpatialBlend() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetSpatialBlend", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(*this, ___internal_method);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetSpatialBlend(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetSpatialBlend", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioClipPlayable::IsPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "IsPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::Audio::AudioClipPlayable::IsChannelPlaying() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "IsChannelPlaying", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline double_t UnityEngine::Audio::AudioClipPlayable::GetStartDelay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetStartDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetStartDelay(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "SetStartDelay", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline double_t UnityEngine::Audio::AudioClipPlayable::GetPauseDelay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetPauseDelay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(*this, ___internal_method);
}
inline void UnityEngine::Audio::AudioClipPlayable::GetPauseDelay(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetPauseDelay", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::Audio::AudioClipPlayable::Seek(double_t startTime, double_t startDelay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "Seek", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startTime, startDelay);
}
inline void UnityEngine::Audio::AudioClipPlayable::Seek(double_t startTime, double_t startDelay, double_t duration) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "Seek", {}, { ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, startTime, startDelay, duration);
}
inline ::UnityW<::UnityEngine::AudioClip> UnityEngine::Audio::AudioClipPlayable::GetClipInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "GetClipInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::AudioClip>>(nullptr, ___internal_method, hdl);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetClipInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, ::UnityEngine::AudioClip* clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                              { "SetClipInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::UnityEngine::AudioClip*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, clip);
}
inline bool UnityEngine::Audio::AudioClipPlayable::GetLoopedInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "GetLoopedInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hdl);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetLoopedInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, bool looped) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                           { "SetLoopedInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, looped);
}
inline float_t UnityEngine::Audio::AudioClipPlayable::GetVolumeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "GetVolumeInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, hdl);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetVolumeInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, float_t volume) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                           { "SetVolumeInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, volume);
}
inline float_t UnityEngine::Audio::AudioClipPlayable::GetClipPositionSecInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetClipPositionSecInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, hdl);
}
inline float_t UnityEngine::Audio::AudioClipPlayable::GetStereoPanInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "GetStereoPanInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, hdl);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetStereoPanInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, float_t stereoPan) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                           { "SetStereoPanInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, stereoPan);
}
inline float_t UnityEngine::Audio::AudioClipPlayable::GetSpatialBlendInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "GetSpatialBlendInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, hdl);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetSpatialBlendInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, float_t spatialBlend) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                           { "SetSpatialBlendInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, spatialBlend);
}
inline bool UnityEngine::Audio::AudioClipPlayable::GetIsChannelPlayingInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                           { "GetIsChannelPlayingInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hdl);
}
inline double_t UnityEngine::Audio::AudioClipPlayable::GetStartDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "GetStartDelayInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, hdl);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetStartDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, double_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                           { "SetStartDelayInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, delay);
}
inline double_t UnityEngine::Audio::AudioClipPlayable::GetPauseDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "GetPauseDelayInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, hdl);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetPauseDelayInternal(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, double_t delay) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                           { "SetPauseDelayInternal", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, delay);
}
inline bool UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::UnityEngine::AudioClip* clip, bool looping,
                                                                                   ::by_ref<::UnityEngine::Playables::PlayableHandle> handle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                           { "InternalCreateAudioClipPlayable",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::UnityEngine::AudioClip*>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, clip, looping, handle);
}
inline bool UnityEngine::Audio::AudioClipPlayable::ValidateType(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "ValidateType", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, hdl);
}
inline ::System::IntPtr UnityEngine::Audio::AudioClipPlayable::GetClipInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(), { "GetClipInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, hdl);
}
inline void UnityEngine::Audio::AudioClipPlayable::SetClipInternal_Injected(::by_ref<::UnityEngine::Playables::PlayableHandle> hdl, ::System::IntPtr clip) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                              { "SetClipInternal_Injected", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, hdl, clip);
}
inline bool UnityEngine::Audio::AudioClipPlayable::InternalCreateAudioClipPlayable_Injected(::by_ref<::UnityEngine::Playables::PlayableGraph> graph, ::System::IntPtr clip, bool looping,
                                                                                            ::by_ref<::UnityEngine::Playables::PlayableHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioClipPlayable>(),
                                                                                         { "InternalCreateAudioClipPlayable_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>(), ::i2c::type_of<::System::IntPtr>(),
                                                                                             ::i2c::type_of<bool>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, graph, clip, looping, handle);
}
/// @brief Convert operator to "::UnityEngine::Playables::IPlayable"
constexpr UnityEngine::Audio::AudioClipPlayable::operator ::UnityEngine::Playables::IPlayable*() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::UnityEngine::Playables::IPlayable"
constexpr ::UnityEngine::Playables::IPlayable* UnityEngine::Audio::AudioClipPlayable::i___UnityEngine__Playables__IPlayable() {
  return static_cast<::UnityEngine::Playables::IPlayable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr UnityEngine::Audio::AudioClipPlayable::operator ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>"
constexpr ::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>* UnityEngine::Audio::AudioClipPlayable::i___System__IEquatable_1___UnityEngine__Audio__AudioClipPlayable_() {
  return static_cast<::System::IEquatable_1<::UnityEngine::Audio::AudioClipPlayable>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Handle", ty: "::UnityEngine::Playables::PlayableHandle", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioClipPlayable::AudioClipPlayable(::UnityEngine::Playables::PlayableHandle m_Handle) noexcept {
  this->m_Handle = m_Handle;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioClipPlayable::AudioClipPlayable() {}

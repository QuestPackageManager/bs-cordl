#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainer.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioContainerElement_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerAutomaticTriggerMode_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerLoopMode_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerPlaybackMode_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerTriggerMode_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainer_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType::AudioRandomContainer_ChangeEventType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType::AudioRandomContainer_ChangeEventType() {}
constexpr ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType UnityEngine::Audio::AudioRandomContainer_ChangeEventType::Volume{ static_cast<int32_t>(0x0) };
constexpr ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType UnityEngine::Audio::AudioRandomContainer_ChangeEventType::Pitch{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType UnityEngine::Audio::AudioRandomContainer_ChangeEventType::List{ static_cast<int32_t>(0x2) };
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6888ef4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_volume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6888f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_volume",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(float_t)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_volume)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x688902c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volume", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volumeRandomizationRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6889108;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_volumeRandomizationRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volumeRandomizationRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68891e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volumeRandomizationRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volumeRandomizationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x68892bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_volumeRandomizationEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volumeRandomizationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6889378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volumeRandomizationEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_pitch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x688944c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_pitch",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitch
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(float_t)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_pitch)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6889508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitch", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitchRandomizationRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x68895e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_pitchRandomizationRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitchRandomizationRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x68896c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitchRandomizationRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitchRandomizationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6889798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_pitchRandomizationEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitchRandomizationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6889854;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitchRandomizationEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_elements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*> (::UnityEngine::Audio::AudioRandomContainer::*)()>(
        &::UnityEngine::Audio::AudioRandomContainer::get_elements)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6889928;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_elements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_elements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(
    ::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*>)>(&::UnityEngine::Audio::AudioRandomContainer::set_elements)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x68899e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_elements", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_triggerMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioRandomContainerTriggerMode (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_triggerMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6889ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_triggerMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_triggerMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainerTriggerMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_triggerMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6889b74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_triggerMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerTriggerMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_playbackMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioRandomContainerPlaybackMode (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_playbackMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6889c48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_playbackMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_playbackMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainerPlaybackMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_playbackMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6889d04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_playbackMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_avoidRepeatingLast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_avoidRepeatingLast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6889dd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_avoidRepeatingLast", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_avoidRepeatingLast
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(int32_t)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_avoidRepeatingLast)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6889e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_avoidRepeatingLast",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6889f68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_automaticTriggerMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x688a024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x688a0f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_automaticTriggerTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(float_t)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x688a1b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTimeRandomizationRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x688a290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                 "get_automaticTriggerTimeRandomizationRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTimeRandomizationRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x688a36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTimeRandomizationRange",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTimeRandomizationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x688a444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                 "get_automaticTriggerTimeRandomizationEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTimeRandomizationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x688a500;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTimeRandomizationEnabled",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioRandomContainerLoopMode (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x688a5d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_loopMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainerLoopMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x688a690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopMode", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerLoopMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x688a764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                               "get_loopCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(int32_t)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x688a820;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCount",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCountRandomizationRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x688a8f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCountRandomizationRange",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCountRandomizationRange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x688a9d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCountRandomizationRange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCountRandomizationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x688aaa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCountRandomizationEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCountRandomizationEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x688ab64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCountRandomizationEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.NotifyObservers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType)>(
    &::UnityEngine::Audio::AudioRandomContainer::NotifyObservers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x688ac38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "NotifyObservers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.Internal_Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::Audio::AudioRandomContainer*)>(
    &::UnityEngine::Audio::AudioRandomContainer::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6888f34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "Internal_Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainer*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volume_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_volume_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6888ff0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_volume_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volume_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_volume_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x68890bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volume_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volumeRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68891a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_volumeRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volumeRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6889278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volumeRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volumeRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x688933c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_volumeRandomizationEnabled_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volumeRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6889408;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volumeRandomizationEnabled_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitch_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_pitch_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68894cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_pitch_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitch_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_pitch_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6889598;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitch_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitchRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688967c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_pitchRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitchRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6889754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitchRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitchRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6889818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_pitchRandomizationEnabled_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitchRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x68898e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitchRandomizationEnabled_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_elements_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*> (*)(::System::IntPtr)>(
        &::UnityEngine::Audio::AudioRandomContainer::get_elements_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x68899a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_elements_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_elements_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*>)>(
        &::UnityEngine::Audio::AudioRandomContainer::set_elements_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6889a74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_elements_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_triggerMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioRandomContainerTriggerMode (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_triggerMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6889b38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_triggerMode_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_triggerMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainerTriggerMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_triggerMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6889c04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_triggerMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerTriggerMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_playbackMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioRandomContainerPlaybackMode (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_playbackMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6889cc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_playbackMode_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_playbackMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainerPlaybackMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_playbackMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6889d94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_playbackMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_avoidRepeatingLast_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_avoidRepeatingLast_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6889e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_avoidRepeatingLast_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_avoidRepeatingLast_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_avoidRepeatingLast_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6889f24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_avoidRepeatingLast_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6889fe8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_automaticTriggerMode_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688a0b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTime_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x688a178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_automaticTriggerTime_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTime_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, float_t)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x688a244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTime_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTimeRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688a328;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                 "get_automaticTriggerTimeRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTimeRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688a400;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                 "set_automaticTriggerTimeRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTimeRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x688a4c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_automaticTriggerTimeRandomizationEnabled_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTimeRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688a590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTimeRandomizationEnabled_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Audio::AudioRandomContainerLoopMode (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x688a654;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopMode_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopMode_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainerLoopMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688a720;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopMode_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerLoopMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_loopCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x688a7e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCount_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCount_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_loopCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688a8b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCount_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCountRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688a98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCountRandomizationRange_Injected",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCountRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::ByRef<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688aa64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCountRandomizationRange_Injected",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCountRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x688ab28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCountRandomizationEnabled_Injected",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCountRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x688abf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCountRandomizationEnabled_Injected",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.NotifyObservers_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType)>(
    &::UnityEngine::Audio::AudioRandomContainer::NotifyObservers_Injected)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x688acc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "NotifyObservers_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType>::get() })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioRandomContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_volume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_volume",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volume",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_volumeRandomizationRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationRange(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volumeRandomizationRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_volumeRandomizationEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volumeRandomizationEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_pitch() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_pitch",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitch(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitch",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_pitchRandomizationRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationRange(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitchRandomizationRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_pitchRandomizationEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitchRandomizationEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*> UnityEngine::Audio::AudioRandomContainer::get_elements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_elements",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*>, false>(
      this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_elements(::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_elements", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode UnityEngine::Audio::AudioRandomContainer::get_triggerMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_triggerMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerTriggerMode, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_triggerMode(::UnityEngine::Audio::AudioRandomContainerTriggerMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_triggerMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerTriggerMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode UnityEngine::Audio::AudioRandomContainer::get_playbackMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_playbackMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerPlaybackMode, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_playbackMode(::UnityEngine::Audio::AudioRandomContainerPlaybackMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_playbackMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Audio::AudioRandomContainer::get_avoidRepeatingLast() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_avoidRepeatingLast", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_avoidRepeatingLast(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_avoidRepeatingLast",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_automaticTriggerMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerMode(::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_automaticTriggerTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTime",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationRange() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_automaticTriggerTimeRandomizationRange",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationRange(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTimeRandomizationRange",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                               "get_automaticTriggerTimeRandomizationEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTimeRandomizationEnabled",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerLoopMode UnityEngine::Audio::AudioRandomContainer::get_loopMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerLoopMode, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopMode(::UnityEngine::Audio::AudioRandomContainerLoopMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerLoopMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Audio::AudioRandomContainer::get_loopCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_loopCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationRange() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                                                             "get_loopCountRandomizationRange", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationRange(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCountRandomizationRange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCountRandomizationEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCountRandomizationEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::NotifyObservers(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "NotifyObservers", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, eventType);
}
inline void UnityEngine::Audio::AudioRandomContainer::Internal_Create(::UnityEngine::Audio::AudioRandomContainer* self) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "Internal_Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainer*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, self);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_volume_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_volume_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volume_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volume_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_volumeRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volumeRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_volumeRandomizationEnabled_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_volumeRandomizationEnabled_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_pitch_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_pitch_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitch_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitch_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_pitchRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitchRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_pitchRandomizationEnabled_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_pitchRandomizationEnabled_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*>
UnityEngine::Audio::AudioRandomContainer::get_elements_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_elements_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>, ::Array<::UnityW<::UnityEngine::Audio::AudioContainerElement>>*>, false>(
      nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_elements_Injected(::System::IntPtr _unity_self,
                                                                            ::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_elements_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::Audio::AudioContainerElement*, ::Array<::UnityEngine::Audio::AudioContainerElement*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode UnityEngine::Audio::AudioRandomContainer::get_triggerMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_triggerMode_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerTriggerMode, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_triggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerTriggerMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_triggerMode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerTriggerMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode UnityEngine::Audio::AudioRandomContainer::get_playbackMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_playbackMode_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerPlaybackMode, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_playbackMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerPlaybackMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_playbackMode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Audio::AudioRandomContainer::get_avoidRepeatingLast_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_avoidRepeatingLast_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_avoidRepeatingLast_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_avoidRepeatingLast_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_automaticTriggerMode_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerMode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_automaticTriggerTime_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTime_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTime_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                               "get_automaticTriggerTimeRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(),
                                               "set_automaticTriggerTimeRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_automaticTriggerTimeRandomizationEnabled_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_automaticTriggerTimeRandomizationEnabled_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerLoopMode UnityEngine::Audio::AudioRandomContainer::get_loopMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopMode_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerLoopMode, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerLoopMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopMode_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainerLoopMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Audio::AudioRandomContainer::get_loopCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCount_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCount_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCount_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCountRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::ByRef<::UnityEngine::Vector2> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCountRandomizationRange_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Vector2>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "get_loopCountRandomizationEnabled_Injected",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "set_loopCountRandomizationEnabled_Injected",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::NotifyObservers_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Audio::AudioRandomContainer*>::get(), "NotifyObservers_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, _unity_self, eventType);
}
inline ::UnityEngine::Audio::AudioRandomContainer* UnityEngine::Audio::AudioRandomContainer::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Audio::AudioRandomContainer*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioRandomContainer::AudioRandomContainer() {}

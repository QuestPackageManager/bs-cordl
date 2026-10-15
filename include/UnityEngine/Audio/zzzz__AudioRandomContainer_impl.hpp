#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainer.hpp"
#include "UnityEngine/Audio/zzzz__AudioResource_impl.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainer_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioContainerElement_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioFormat_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerAutomaticTriggerMode_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerLoopMode_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerPlaybackMode_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainerTriggerMode_def.hpp"
#include "UnityEngine/Audio/zzzz__AudioRandomContainer_def.hpp"
#include "UnityEngine/Audio/zzzz__ControlContext_def.hpp"
#include "UnityEngine/Audio/zzzz__GeneratorInstance_def.hpp"
#include "UnityEngine/Audio/zzzz__IAudioGenerator_def.hpp"
#include "UnityEngine/Audio/zzzz__ProcessorInstance_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}"), comment: None }]
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x6ee52bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_volume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee5338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(float_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_volume)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee53f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_volume", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volumeRandomizationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ee54d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volumeRandomizationRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volumeRandomizationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ee55ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_volumeRandomizationRange", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volumeRandomizationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee5684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volumeRandomizationEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volumeRandomizationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(bool)>(&::UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee5740;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_volumeRandomizationEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_pitch)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee5814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(float_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_pitch)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee58d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_pitch", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitchRandomizationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ee59ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitchRandomizationRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitchRandomizationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ee5a88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_pitchRandomizationRange", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitchRandomizationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee5b60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitchRandomizationEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitchRandomizationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(bool)>(&::UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee5c1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_pitchRandomizationEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_elements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_elements)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee5cf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_elements", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_elements
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::ArrayW<::UnityEngine::Audio::AudioContainerElement*>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_elements)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee5dac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "set_elements", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Audio::AudioContainerElement*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_triggerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioRandomContainerTriggerMode (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_triggerMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee5e80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_triggerMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_triggerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainerTriggerMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_triggerMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee5f3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "set_triggerMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerTriggerMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_playbackMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioRandomContainerPlaybackMode (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_playbackMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee6010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_playbackMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_playbackMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainerPlaybackMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_playbackMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee60cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "set_playbackMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_avoidRepeatingLast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_avoidRepeatingLast)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee61a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_avoidRepeatingLast", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_avoidRepeatingLast
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(int32_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_avoidRepeatingLast)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee625c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_avoidRepeatingLast", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee6330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee63ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "set_automaticTriggerMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee64c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(float_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee657c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_automaticTriggerTime", {}, { ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTimeRandomizationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ee6658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerTimeRandomizationRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTimeRandomizationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ee6734;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "set_automaticTriggerTimeRandomizationRange", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTimeRandomizationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee680c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerTimeRandomizationEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTimeRandomizationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(bool)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee68c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_automaticTriggerTimeRandomizationEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioRandomContainerLoopMode (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee699c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainerLoopMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee6a58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "set_loopMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerLoopMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_loopCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee6b2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(int32_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_loopCount)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee6be8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_loopCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCountRandomizationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationRange)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6ee6cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCountRandomizationRange", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCountRandomizationRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationRange)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6ee6d98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_loopCountRandomizationRange", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCountRandomizationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(&::UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationEnabled)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6ee6e70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCountRandomizationEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCountRandomizationEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(bool)>(&::UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationEnabled)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee6f2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_loopCountRandomizationEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.NotifyObservers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Audio::AudioRandomContainer::*)(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType)>(
    &::UnityEngine::Audio::AudioRandomContainer::NotifyObservers)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6ee7000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "NotifyObservers", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.Internal_Create
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::UnityEngine::Audio::AudioRandomContainer*)>(&::UnityEngine::Audio::AudioRandomContainer::Internal_Create)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee52fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainer*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ee70d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isFinite", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ee710c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isRealtime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> (::UnityEngine::Audio::AudioRandomContainer::*)()>(
    &::UnityEngine::Audio::AudioRandomContainer::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ee7144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "UnityEngine.Audio.GeneratorInstance.ICapabilities.get_length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.UnityEngine_Audio_IAudioGenerator_CreateInstance
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::GeneratorInstance (::UnityEngine::Audio::AudioRandomContainer::*)(
    ::UnityEngine::Audio::ControlContext, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat>, ::UnityEngine::Audio::ProcessorInstance_CreationParameters)>(
    &::UnityEngine::Audio::AudioRandomContainer::UnityEngine_Audio_IAudioGenerator_CreateInstance)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6ee717c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "UnityEngine.Audio.IAudioGenerator.CreateInstance",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Audio::ControlContext>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Audio::AudioFormat>>(),
                                                                 ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_volume_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee53b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_volume_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ee5484;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "set_volume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volumeRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee5568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "get_volumeRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volumeRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2 const>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee5640;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "set_volumeRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_volumeRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee5704;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volumeRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_volumeRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee57d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "set_volumeRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_pitch_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee5894;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitch_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitch_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_pitch_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ee5960;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "set_pitch_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitchRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee5a44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "get_pitchRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitchRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2 const>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee5b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "set_pitchRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_pitchRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee5be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitchRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_pitchRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee5cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "set_pitchRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_elements_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_elements_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee5d70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_elements_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_elements_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::ArrayW<::UnityEngine::Audio::AudioContainerElement*>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_elements_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee5e3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "set_elements_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Audio::AudioContainerElement*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_triggerMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioRandomContainerTriggerMode (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_triggerMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee5f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_triggerMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_triggerMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainerTriggerMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_triggerMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee5fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "set_triggerMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerTriggerMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_playbackMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioRandomContainerPlaybackMode (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_playbackMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee6090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_playbackMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_playbackMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainerPlaybackMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_playbackMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee615c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                         { "set_playbackMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_avoidRepeatingLast_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_avoidRepeatingLast_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee6220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_avoidRepeatingLast_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_avoidRepeatingLast_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_avoidRepeatingLast_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee62ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "set_avoidRepeatingLast_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode (*)(::System::IntPtr)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee63b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee647c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                            { "set_automaticTriggerMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee6540;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, float_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6ee660c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "set_automaticTriggerTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTimeRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee66f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                         { "get_automaticTriggerTimeRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTimeRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2 const>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee67c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                            { "set_automaticTriggerTimeRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_automaticTriggerTimeRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee688c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "get_automaticTriggerTimeRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_automaticTriggerTimeRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee6958;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "set_automaticTriggerTimeRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Audio::AudioRandomContainerLoopMode (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_loopMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee6a1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainerLoopMode)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee6ae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "set_loopMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerLoopMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_loopCount_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee6bac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCount_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, int32_t)>(&::UnityEngine::Audio::AudioRandomContainer::set_loopCount_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee6c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "set_loopCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCountRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2>)>(
    &::UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee6d54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "get_loopCountRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCountRandomizationRange_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Vector2 const>)>(
    &::UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationRange_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee6e2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                { "set_loopCountRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2 const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.get_loopCountRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6ee6ef0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                           { "get_loopCountRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.set_loopCountRandomizationEnabled_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationEnabled_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee6fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                             { "set_loopCountRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Audio::AudioRandomContainer.NotifyObservers_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType)>(
    &::UnityEngine::Audio::AudioRandomContainer::NotifyObservers_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6ee7090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                         { "NotifyObservers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType>() } })));
    return ___internal_method;
  }
};
inline void UnityEngine::Audio::AudioRandomContainer::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_volume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volume(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_volume", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volumeRandomizationRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationRange(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_volumeRandomizationRange", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volumeRandomizationEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_volumeRandomizationEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_pitch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitch(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_pitch", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationRange() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitchRandomizationRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationRange(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_pitchRandomizationRange", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitchRandomizationEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_pitchRandomizationEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> UnityEngine::Audio::AudioRandomContainer::get_elements() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_elements", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>>>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_elements(::ArrayW<::UnityEngine::Audio::AudioContainerElement*> value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "set_elements", {}, { ::i2c::type_of<::ArrayW<::UnityEngine::Audio::AudioContainerElement*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode UnityEngine::Audio::AudioRandomContainer::get_triggerMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_triggerMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerTriggerMode>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_triggerMode(::UnityEngine::Audio::AudioRandomContainerTriggerMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "set_triggerMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerTriggerMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode UnityEngine::Audio::AudioRandomContainer::get_playbackMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_playbackMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_playbackMode(::UnityEngine::Audio::AudioRandomContainerPlaybackMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "set_playbackMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Audio::AudioRandomContainer::get_avoidRepeatingLast() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_avoidRepeatingLast", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_avoidRepeatingLast(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_avoidRepeatingLast", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerMode(::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                           { "set_automaticTriggerMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTime(float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_automaticTriggerTime", {}, { ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationRange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerTimeRandomizationRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationRange(::UnityEngine::Vector2 value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "set_automaticTriggerTimeRandomizationRange", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerTimeRandomizationEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationEnabled(bool value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_automaticTriggerTimeRandomizationEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerLoopMode UnityEngine::Audio::AudioRandomContainer::get_loopMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerLoopMode>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopMode(::UnityEngine::Audio::AudioRandomContainerLoopMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "set_loopMode", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerLoopMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t UnityEngine::Audio::AudioRandomContainer::get_loopCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_loopCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationRange() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCountRandomizationRange", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationRange(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_loopCountRandomizationRange", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCountRandomizationEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "set_loopCountRandomizationEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::NotifyObservers(::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "NotifyObservers", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, eventType);
}
inline void UnityEngine::Audio::AudioRandomContainer::Internal_Create(/* [Writable] */ ::UnityEngine::Audio::AudioRandomContainer* self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "Internal_Create", {}, { ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainer*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, self);
}
inline bool UnityEngine::Audio::AudioRandomContainer::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isFinite() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isFinite", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::Audio::AudioRandomContainer::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_isRealtime() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "UnityEngine.Audio.GeneratorInstance.ICapabilities.get_isRealtime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Nullable_1<::Unity::IntegerTime::DiscreteTime> UnityEngine::Audio::AudioRandomContainer::UnityEngine_Audio_GeneratorInstance_ICapabilities_get_length() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "UnityEngine.Audio.GeneratorInstance.ICapabilities.get_length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::Unity::IntegerTime::DiscreteTime>>(this, ___internal_method);
}
inline ::UnityEngine::Audio::GeneratorInstance UnityEngine::Audio::AudioRandomContainer::UnityEngine_Audio_IAudioGenerator_CreateInstance(
    ::UnityEngine::Audio::ControlContext context, ::System::Nullable_1<::UnityEngine::Audio::AudioFormat> nestedFormat, ::UnityEngine::Audio::ProcessorInstance_CreationParameters creationParameters) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                           { "UnityEngine.Audio.IAudioGenerator.CreateInstance",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Audio::ControlContext>(), ::i2c::type_of<::System::Nullable_1<::UnityEngine::Audio::AudioFormat>>(),
                                                               ::i2c::type_of<::UnityEngine::Audio::ProcessorInstance_CreationParameters>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::GeneratorInstance>(this, ___internal_method, context, nestedFormat, creationParameters);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_volume_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volume_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "set_volume_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "get_volumeRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "set_volumeRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_volumeRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_volumeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                           { "set_volumeRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_pitch_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitch_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitch_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "set_pitch_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "get_pitchRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "set_pitchRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_pitchRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_pitchRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                           { "set_pitchRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>> UnityEngine::Audio::AudioRandomContainer::get_elements_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_elements_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityW<::UnityEngine::Audio::AudioContainerElement>>>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_elements_Injected(::System::IntPtr _unity_self, ::ArrayW<::UnityEngine::Audio::AudioContainerElement*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "set_elements_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::ArrayW<::UnityEngine::Audio::AudioContainerElement*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerTriggerMode UnityEngine::Audio::AudioRandomContainer::get_triggerMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_triggerMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerTriggerMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_triggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerTriggerMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "set_triggerMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerTriggerMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerPlaybackMode UnityEngine::Audio::AudioRandomContainer::get_playbackMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_playbackMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_playbackMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerPlaybackMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "set_playbackMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerPlaybackMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Audio::AudioRandomContainer::get_avoidRepeatingLast_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_avoidRepeatingLast_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_avoidRepeatingLast_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                           { "set_avoidRepeatingLast_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                          { "set_automaticTriggerMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerAutomaticTriggerMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline float_t UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_automaticTriggerTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<float_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTime_Injected(::System::IntPtr _unity_self, float_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                           { "set_automaticTriggerTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                       { "get_automaticTriggerTimeRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                          { "set_automaticTriggerTimeRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "get_automaticTriggerTimeRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_automaticTriggerTimeRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                           { "set_automaticTriggerTimeRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Audio::AudioRandomContainerLoopMode UnityEngine::Audio::AudioRandomContainer::get_loopMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Audio::AudioRandomContainerLoopMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainerLoopMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "set_loopMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainerLoopMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline int32_t UnityEngine::Audio::AudioRandomContainer::get_loopCount_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCount_Injected(::System::IntPtr _unity_self, int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                                                         { "set_loopCount_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "get_loopCountRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationRange_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Vector2 const> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                              { "set_loopCountRandomizationRange_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Vector2 const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline bool UnityEngine::Audio::AudioRandomContainer::get_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(), { "get_loopCountRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Audio::AudioRandomContainer::set_loopCountRandomizationEnabled_Injected(::System::IntPtr _unity_self, bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                                           { "set_loopCountRandomizationEnabled_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline void UnityEngine::Audio::AudioRandomContainer::NotifyObservers_Injected(::System::IntPtr _unity_self, ::UnityEngine::Audio::AudioRandomContainer_ChangeEventType eventType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Audio::AudioRandomContainer*>(),
                                       { "NotifyObservers_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Audio::AudioRandomContainer_ChangeEventType>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, eventType);
}
inline ::UnityEngine::Audio::AudioRandomContainer* UnityEngine::Audio::AudioRandomContainer::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Audio::AudioRandomContainer*>());
}
/// @brief Convert operator to "::UnityEngine::Audio::IAudioGenerator"
constexpr UnityEngine::Audio::AudioRandomContainer::operator ::UnityEngine::Audio::IAudioGenerator*() noexcept {
  return static_cast<::UnityEngine::Audio::IAudioGenerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::IAudioGenerator"
constexpr ::UnityEngine::Audio::IAudioGenerator* UnityEngine::Audio::AudioRandomContainer::i___UnityEngine__Audio__IAudioGenerator() noexcept {
  return static_cast<::UnityEngine::Audio::IAudioGenerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr UnityEngine::Audio::AudioRandomContainer::operator ::UnityEngine::Audio::GeneratorInstance_ICapabilities*() noexcept {
  return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::Audio::GeneratorInstance_ICapabilities"
constexpr ::UnityEngine::Audio::GeneratorInstance_ICapabilities* UnityEngine::Audio::AudioRandomContainer::i___UnityEngine__Audio__GeneratorInstance_ICapabilities() noexcept {
  return static_cast<::UnityEngine::Audio::GeneratorInstance_ICapabilities*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Audio::AudioRandomContainer::AudioRandomContainer() {}

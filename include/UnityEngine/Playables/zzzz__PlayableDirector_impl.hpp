#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorUpdateMode_def.hpp"
#include "UnityEngine/Playables/zzzz__DirectorWrapMode_def.hpp"
#include "UnityEngine/Playables/zzzz__FrameRate_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayState_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableAsset_def.hpp"
#include "UnityEngine/Playables/zzzz__PlayableGraph_def.hpp"
#include "UnityEngine/zzzz__IExposedPropertyTable_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__PropertyName_def.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_state
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_state)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fce8a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_state", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_extrapolationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::DirectorWrapMode)>(
    &::UnityEngine::Playables::PlayableDirector::set_extrapolationMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fce92c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                           { "set_extrapolationMode", {}, { ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_extrapolationMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorWrapMode (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_extrapolationMode)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fce9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_extrapolationMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_playableAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Playables::PlayableAsset> (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_playableAsset)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x6fcea44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_playableAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_playableAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::PlayableAsset*)>(
    &::UnityEngine::Playables::PlayableDirector::set_playableAsset)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fcec18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "set_playableAsset", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_playableGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_playableGraph)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fcecdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_playableGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_playOnAwake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fced78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_playOnAwake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_playOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(bool)>(&::UnityEngine::Playables::PlayableDirector::set_playOnAwake)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fcedfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.DeferredEvaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::DeferredEvaluate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fcee90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "DeferredEvaluate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::FrameRate)>(&::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6fcef14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Play", {}, { ::i2c::type_of<::UnityEngine::Playables::FrameRate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::PlayableAsset*)>(
    &::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6fcefb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Play", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::DirectorWrapMode)>(
    &::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x6fcf080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                { "Play", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetGenericBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::SetGenericBinding)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fcf1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "SetGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_timeUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::DirectorUpdateMode)>(
    &::UnityEngine::Playables::PlayableDirector::set_timeUpdateMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fcf2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                           { "set_timeUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Playables::DirectorUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_timeUpdateMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorUpdateMode (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_timeUpdateMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcf394;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_timeUpdateMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(double_t)>(&::UnityEngine::Playables::PlayableDirector::set_time)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fcf450;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_time
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_time)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcf52c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_time", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_initialTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(double_t)>(&::UnityEngine::Playables::PlayableDirector::set_initialTime)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fcf5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "set_initialTime", {}, { ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_initialTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_initialTime)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcf6c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_initialTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_duration
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_duration)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcf780;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_duration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Evaluate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Evaluate)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcf83c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Evaluate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.PlayOnFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::FrameRate)>(
    &::UnityEngine::Playables::PlayableDirector::PlayOnFrame)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fcef1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "PlayOnFrame", {}, { ::i2c::type_of<::UnityEngine::Playables::FrameRate>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcf15c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Play", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Stop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Stop)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcf978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Stop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Pause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Pause)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcfa34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Pause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Resume
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Resume)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcfaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Resume", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.RebuildGraph
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::RebuildGraph)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcfbac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "RebuildGraph", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ClearReferenceValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::PropertyName)>(
    &::UnityEngine::Playables::PlayableDirector::ClearReferenceValue)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6fcfc68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ClearReferenceValue", {}, { ::i2c::type_of<::UnityEngine::PropertyName>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetReferenceValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::PropertyName, ::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::SetReferenceValue)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6fcfd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "SetReferenceValue", {}, { ::i2c::type_of<::UnityEngine::PropertyName>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetReferenceValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::PropertyName, ::by_ref<bool>)>(
    &::UnityEngine::Playables::PlayableDirector::GetReferenceValue)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x6fcfe60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "GetReferenceValue", {}, { ::i2c::type_of<::UnityEngine::PropertyName>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGenericBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::GetGenericBinding)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x6fd0014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ClearGenericBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::ClearGenericBinding)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd01e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ClearGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.RebindPlayableGraphOutputs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::RebindPlayableGraphOutputs)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fd02e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "RebindPlayableGraphOutputs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ProcessPendingGraphChanges
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::ProcessPendingGraphChanges)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fd03a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ProcessPendingGraphChanges", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.HasGenericBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*)>(&::UnityEngine::Playables::PlayableDirector::HasGenericBinding)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd045c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "HasGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::GetPlayState)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fce8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetPlayState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetWrapMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::DirectorWrapMode)>(
    &::UnityEngine::Playables::PlayableDirector::SetWrapMode)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fce930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SetWrapMode", {}, { ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetWrapMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorWrapMode (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::GetWrapMode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fce9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetWrapMode", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.EvaluateNextFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::EvaluateNextFrame)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fcee94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "EvaluateNextFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGraphHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::GetGraphHandle)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6fcece0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetGraphHandle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(bool)>(&::UnityEngine::Playables::PlayableDirector::SetPlayOnAwake)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6fcee00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SetPlayOnAwake", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayOnAwake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::GetPlayOnAwake)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6fced7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetPlayOnAwake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Internal_SetGenericBinding
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::Internal_SetGenericBinding)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x6fcf1e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "Internal_SetGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayableAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::Playables::PlayableDirector::SetPlayableAsset)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fcec1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SetPlayableAsset", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Internal_GetPlayableAsset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset)> {
  constexpr static std::size_t size = 0x150;
  constexpr static std::size_t addrs = 0x6fceac8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Internal_GetPlayableAsset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.add_played
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(
    &::UnityEngine::Playables::PlayableDirector::add_played)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd07f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "add_played", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.remove_played
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(
    &::UnityEngine::Playables::PlayableDirector::remove_played)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd08b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "remove_played", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.add_paused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(
    &::UnityEngine::Playables::PlayableDirector::add_paused)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd0970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "add_paused", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.remove_paused
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(
    &::UnityEngine::Playables::PlayableDirector::remove_paused)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd0a30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "remove_paused", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.add_stopped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(
    &::UnityEngine::Playables::PlayableDirector::add_stopped)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd0af0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "add_stopped", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.remove_stopped
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(
    &::UnityEngine::Playables::PlayableDirector::remove_stopped)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x6fd0bb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "remove_stopped", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ResetFrameTiming
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::Playables::PlayableDirector::ResetFrameTiming)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6fd0c70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ResetFrameTiming", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorPlay
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6fd0c98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SendOnPlayableDirectorPlay", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorPause
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6fd0cb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SendOnPlayableDirectorPause", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorStop
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6fd0cd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SendOnPlayableDirectorStop", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6fd0cf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_timeUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Playables::DirectorUpdateMode)>(
    &::UnityEngine::Playables::PlayableDirector::set_timeUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fcf350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                { "set_timeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Playables::DirectorUpdateMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_timeUpdateMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorUpdateMode (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::get_timeUpdateMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcf414;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_timeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_time_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Playables::PlayableDirector::set_time_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fcf4e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                           { "set_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_time_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::get_time_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcf5ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_initialTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, double_t)>(&::UnityEngine::Playables::PlayableDirector::set_initialTime_Injected)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x6fcf678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                           { "set_initialTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_initialTime_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::get_initialTime_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcf744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_initialTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_duration_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<double_t (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::get_duration_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcf800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_duration_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Evaluate_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Evaluate_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcf8bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Evaluate_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.PlayOnFrame_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Playables::FrameRate const>)>(
    &::UnityEngine::Playables::PlayableDirector::PlayOnFrame_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fcf8f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                { "PlayOnFrame_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::FrameRate const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Play_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcf93c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Stop_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Stop_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcf9f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Pause_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Pause_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcfab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Pause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Resume_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Resume_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcfb70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Resume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.RebuildGraph_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::RebuildGraph_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fcfc2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "RebuildGraph_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ClearReferenceValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::PropertyName const>)>(
    &::UnityEngine::Playables::PlayableDirector::ClearReferenceValue_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fcfcfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                { "ClearReferenceValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName const>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetReferenceValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::PropertyName const>, ::System::IntPtr)>(
    &::UnityEngine::Playables::PlayableDirector::SetReferenceValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6fcfe0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
            { "SetReferenceValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName const>>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetReferenceValue_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::by_ref<::UnityEngine::PropertyName const>, ::by_ref<bool>)>(
    &::UnityEngine::Playables::PlayableDirector::GetReferenceValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6fcffc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
            { "GetReferenceValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName const>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGenericBinding_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::GetGenericBinding_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd019c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "GetGenericBinding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ClearGenericBinding_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::ClearGenericBinding_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd02a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "ClearGenericBinding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.RebindPlayableGraphOutputs_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::RebindPlayableGraphOutputs_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd0364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "RebindPlayableGraphOutputs_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ProcessPendingGraphChanges_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::ProcessPendingGraphChanges_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd0420;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ProcessPendingGraphChanges_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.HasGenericBinding_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::HasGenericBinding_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd051c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "HasGenericBinding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayState_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::PlayState (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::GetPlayState_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd0560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetPlayState_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetWrapMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Playables::PlayableDirector::SetWrapMode_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd059c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "SetWrapMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetWrapMode_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Playables::DirectorWrapMode (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::GetWrapMode_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd05e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetWrapMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.EvaluateNextFrame_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::EvaluateNextFrame_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd061c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "EvaluateNextFrame_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGraphHandle_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::by_ref<::UnityEngine::Playables::PlayableGraph>)>(
    &::UnityEngine::Playables::PlayableDirector::GetGraphHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd0658;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                { "GetGraphHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayOnAwake_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, bool)>(&::UnityEngine::Playables::PlayableDirector::SetPlayOnAwake_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd069c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                           { "SetPlayOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayOnAwake_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::GetPlayOnAwake_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd06e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetPlayOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Internal_SetGenericBinding_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr, ::System::IntPtr)>(
    &::UnityEngine::Playables::PlayableDirector::Internal_SetGenericBinding_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6fd071c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                            { "Internal_SetGenericBinding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayableAsset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::IntPtr, ::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::SetPlayableAsset_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6fd0770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                             { "SetPlayableAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Internal_GetPlayableAsset_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::IntPtr (*)(::System::IntPtr)>(&::UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6fd07b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Internal_GetPlayableAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_played() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___played;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_played() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___played;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___played = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_paused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paused;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_paused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paused;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___paused = value;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_stopped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopped;
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* const& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_stopped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopped;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___stopped = value;
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::get_state() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_state", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                         { "set_extrapolationMode", {}, { ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableDirector::get_extrapolationMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_extrapolationMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> UnityEngine::Playables::PlayableDirector::get_playableAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_playableAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableAsset>>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_playableAsset(::UnityEngine::Playables::PlayableAsset* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "set_playableAsset", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableDirector::get_playableGraph() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_playableGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableDirector::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_playOnAwake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_playOnAwake(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "set_playOnAwake", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::DeferredEvaluate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "DeferredEvaluate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Play(::UnityEngine::Playables::FrameRate frameRate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Play", {}, { ::i2c::type_of<::UnityEngine::Playables::FrameRate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::Play(::UnityEngine::Playables::PlayableAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Play", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline void UnityEngine::Playables::PlayableDirector::Play(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::DirectorWrapMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                              { "Play", {}, { ::i2c::type_of<::UnityEngine::Playables::PlayableAsset*>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset, mode);
}
inline void UnityEngine::Playables::PlayableDirector::SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "SetGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::Playables::PlayableDirector::set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                         { "set_timeUpdateMode", {}, { ::i2c::type_of<::UnityEngine::Playables::DirectorUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::DirectorUpdateMode UnityEngine::Playables::PlayableDirector::get_timeUpdateMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_timeUpdateMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorUpdateMode>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_time(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "set_time", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_time() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_time", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_initialTime(double_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "set_initialTime", {}, { ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_initialTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_initialTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_duration() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_duration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<double_t>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Evaluate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Evaluate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::PlayOnFrame(::UnityEngine::Playables::FrameRate frameRate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "PlayOnFrame", {}, { ::i2c::type_of<::UnityEngine::Playables::FrameRate>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::Play() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Play", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Stop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Stop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Pause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Pause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Resume() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Resume", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::RebuildGraph() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "RebuildGraph", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::ClearReferenceValue(::UnityEngine::PropertyName id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ClearReferenceValue", {}, { ::i2c::type_of<::UnityEngine::PropertyName>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id);
}
inline void UnityEngine::Playables::PlayableDirector::SetReferenceValue(::UnityEngine::PropertyName id, ::UnityEngine::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "SetReferenceValue", {}, { ::i2c::type_of<::UnityEngine::PropertyName>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, id, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableDirector::GetReferenceValue(::UnityEngine::PropertyName id, ::by_ref<bool> idValid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "GetReferenceValue", {}, { ::i2c::type_of<::UnityEngine::PropertyName>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, id, idValid);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableDirector::GetGenericBinding(::UnityEngine::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>>(this, ___internal_method, key);
}
inline void UnityEngine::Playables::PlayableDirector::ClearGenericBinding(::UnityEngine::Object* key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ClearGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key);
}
inline void UnityEngine::Playables::PlayableDirector::RebindPlayableGraphOutputs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "RebindPlayableGraphOutputs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::ProcessPendingGraphChanges() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ProcessPendingGraphChanges", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableDirector::HasGenericBinding(::UnityEngine::Object* key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "HasGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, key);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::GetPlayState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetPlayState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SetWrapMode(::UnityEngine::Playables::DirectorWrapMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SetWrapMode", {}, { ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mode);
}
inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableDirector::GetWrapMode() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetWrapMode", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::EvaluateNextFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "EvaluateNextFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableDirector::GetGraphHandle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetGraphHandle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayOnAwake(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SetPlayOnAwake", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, on);
}
inline bool UnityEngine::Playables::PlayableDirector::GetPlayOnAwake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetPlayOnAwake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Internal_SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "Internal_SetGenericBinding", {}, { ::i2c::type_of<::UnityEngine::Object*>(), ::i2c::type_of<::UnityEngine::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, key, value);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayableAsset(::UnityEngine::ScriptableObject* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SetPlayableAsset", {}, { ::i2c::type_of<::UnityEngine::ScriptableObject*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, asset);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Internal_GetPlayableAsset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::add_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "add_played", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::remove_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "remove_played", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::add_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "add_paused", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::remove_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "remove_paused", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::add_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "add_stopped", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::remove_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "remove_stopped", {}, { ::i2c::type_of<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::ResetFrameTiming() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ResetFrameTiming", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SendOnPlayableDirectorPlay", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SendOnPlayableDirectorPause", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "SendOnPlayableDirectorStop", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_timeUpdateMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Playables::DirectorUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                              { "set_timeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Playables::DirectorUpdateMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline ::UnityEngine::Playables::DirectorUpdateMode UnityEngine::Playables::PlayableDirector::get_timeUpdateMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_timeUpdateMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorUpdateMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::set_time_Injected(::System::IntPtr _unity_self, double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                         { "set_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_time_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_time_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::set_initialTime_Injected(::System::IntPtr _unity_self, double_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                         { "set_initialTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_initialTime_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_initialTime_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_duration_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "get_duration_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<double_t>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::Evaluate_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Evaluate_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::PlayOnFrame_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Playables::FrameRate const> frameRate) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                              { "PlayOnFrame_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::FrameRate const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::Play_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Play_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::Stop_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Stop_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::Pause_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Pause_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::Resume_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Resume_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::RebuildGraph_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "RebuildGraph_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::ClearReferenceValue_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::PropertyName const> id) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                              { "ClearReferenceValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName const>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, id);
}
inline void UnityEngine::Playables::PlayableDirector::SetReferenceValue_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::PropertyName const> id, ::System::IntPtr value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
          { "SetReferenceValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName const>>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, id, value);
}
inline ::System::IntPtr UnityEngine::Playables::PlayableDirector::GetReferenceValue_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::PropertyName const> id, ::by_ref<bool> idValid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                       { "GetReferenceValue_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::PropertyName const>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, id, idValid);
}
inline ::System::IntPtr UnityEngine::Playables::PlayableDirector::GetGenericBinding_Injected(::System::IntPtr _unity_self, ::System::IntPtr key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "GetGenericBinding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self, key);
}
inline void UnityEngine::Playables::PlayableDirector::ClearGenericBinding_Injected(::System::IntPtr _unity_self, ::System::IntPtr key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "ClearGenericBinding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, key);
}
inline void UnityEngine::Playables::PlayableDirector::RebindPlayableGraphOutputs_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "RebindPlayableGraphOutputs_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::ProcessPendingGraphChanges_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "ProcessPendingGraphChanges_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline bool UnityEngine::Playables::PlayableDirector::HasGenericBinding_Injected(::System::IntPtr _unity_self, ::System::IntPtr key) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "HasGenericBinding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self, key);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::GetPlayState_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetPlayState_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::SetWrapMode_Injected(::System::IntPtr _unity_self, ::UnityEngine::Playables::DirectorWrapMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "SetWrapMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::UnityEngine::Playables::DirectorWrapMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, mode);
}
inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableDirector::GetWrapMode_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetWrapMode_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::EvaluateNextFrame_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "EvaluateNextFrame_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::GetGraphHandle_Injected(::System::IntPtr _unity_self, ::by_ref<::UnityEngine::Playables::PlayableGraph> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                              { "GetGraphHandle_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::by_ref<::UnityEngine::Playables::PlayableGraph>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, ret);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayOnAwake_Injected(::System::IntPtr _unity_self, bool on) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                                                         { "SetPlayOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, on);
}
inline bool UnityEngine::Playables::PlayableDirector::GetPlayOnAwake_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "GetPlayOnAwake_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, _unity_self);
}
inline void UnityEngine::Playables::PlayableDirector::Internal_SetGenericBinding_Injected(::System::IntPtr _unity_self, ::System::IntPtr key, ::System::IntPtr value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                       { "Internal_SetGenericBinding_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, key, value);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayableAsset_Injected(::System::IntPtr _unity_self, ::System::IntPtr asset) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(),
                                                           { "SetPlayableAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, _unity_self, asset);
}
inline ::System::IntPtr UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset_Injected(::System::IntPtr _unity_self) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Playables::PlayableDirector*>(), { "Internal_GetPlayableAsset_Injected", {}, { ::i2c::type_of<::System::IntPtr>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::IntPtr>(nullptr, ___internal_method, _unity_self);
}
inline ::UnityEngine::Playables::PlayableDirector* UnityEngine::Playables::PlayableDirector::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Playables::PlayableDirector*>());
}
/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr UnityEngine::Playables::PlayableDirector::operator ::UnityEngine::IExposedPropertyTable*() noexcept {
  return static_cast<::UnityEngine::IExposedPropertyTable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* UnityEngine::Playables::PlayableDirector::i___UnityEngine__IExposedPropertyTable() noexcept {
  return static_cast<::UnityEngine::IExposedPropertyTable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableDirector::PlayableDirector() {}

#pragma once
// IWYU pragma private; include "UnityEngine/Playables/PlayableDirector.hpp"
#include "UnityEngine/zzzz__Behaviour_impl.hpp"
#include "UnityEngine/Playables/zzzz__PlayableDirector_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_state)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465390;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "get_state",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_extrapolationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::DirectorWrapMode)>(
    &::UnityEngine::Playables::PlayableDirector::set_extrapolationMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3465408;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_extrapolationMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_extrapolationMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::DirectorWrapMode (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_extrapolationMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "get_extrapolationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_playableAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Playables::PlayableAsset> (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_playableAsset)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x3465508;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "get_playableAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_playableAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::PlayableAsset*)>(
    &::UnityEngine::Playables::PlayableDirector::set_playableAsset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x34655e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_playableAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_playableGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_playableGraph)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x346566c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "get_playableGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_playOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_playOnAwake)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x34656c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "get_playOnAwake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_playOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(bool)>(
    &::UnityEngine::Playables::PlayableDirector::set_playOnAwake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x346573c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_playOnAwake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.DeferredEvaluate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::DeferredEvaluate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x34657c4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "DeferredEvaluate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::FrameRate)>(
    &::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x346583c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Play", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameRate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::PlayableAsset*)>(
    &::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0xf0;
  constexpr static std::size_t addrs = 0x34658cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Play", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(
    ::UnityEngine::Playables::PlayableAsset*, ::UnityEngine::Playables::DirectorWrapMode)>(&::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x34659bc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Play", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetGenericBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::SetGenericBinding)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3465b34;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetGenericBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_timeUpdateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::DirectorUpdateMode)>(
    &::UnityEngine::Playables::PlayableDirector::set_timeUpdateMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3465bdc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_timeUpdateMode", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorUpdateMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_timeUpdateMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::DirectorUpdateMode (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_timeUpdateMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465c20;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "get_timeUpdateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(double_t)>(
    &::UnityEngine::Playables::PlayableDirector::set_time)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3465c5c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_time", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_time
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::get_time)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465ca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "get_time",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.set_initialTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(double_t)>(
    &::UnityEngine::Playables::PlayableDirector::set_initialTime)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x3465ce4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_initialTime",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_initialTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_initialTime)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465d30;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "get_initialTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.get_duration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<double_t (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::get_duration)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465d6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "get_duration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Evaluate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Evaluate)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465da8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Evaluate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.PlayOnFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::FrameRate)>(
    &::UnityEngine::Playables::PlayableDirector::PlayOnFrame)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3465884;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "PlayOnFrame", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameRate>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Play)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465af8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Play",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Stop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Stop)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465e28;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Stop",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Pause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Pause)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465e64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Pause",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Resume
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::Resume)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465ea0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Resume",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.RebuildGraph
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::RebuildGraph)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465edc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "RebuildGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ClearReferenceValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::PropertyName)>(
    &::UnityEngine::Playables::PlayableDirector::ClearReferenceValue)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3465f18;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "ClearReferenceValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PropertyName>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetReferenceValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::PropertyName, ::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::SetReferenceValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3465fa4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetReferenceValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PropertyName>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetReferenceValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableDirector::*)(
    ::UnityEngine::PropertyName, ByRef<bool>)>(&::UnityEngine::Playables::PlayableDirector::GetReferenceValue)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x3466050;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetReferenceValue", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PropertyName>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGenericBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::GetGenericBinding)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x34660fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetGenericBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ClearGenericBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::ClearGenericBinding)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3466140;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "ClearGenericBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.RebindPlayableGraphOutputs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::RebindPlayableGraphOutputs)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3466184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "RebindPlayableGraphOutputs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ProcessPendingGraphChanges
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::ProcessPendingGraphChanges)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x34661c0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "ProcessPendingGraphChanges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.HasGenericBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::HasGenericBinding)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x34661fc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "HasGenericBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayState (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::GetPlayState)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x34653cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "GetPlayState", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetWrapMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Playables::DirectorWrapMode)>(
    &::UnityEngine::Playables::PlayableDirector::SetWrapMode)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x346544c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetWrapMode", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetWrapMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::DirectorWrapMode (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::GetWrapMode)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x34654cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "GetWrapMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.EvaluateNextFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::EvaluateNextFrame)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465800;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "EvaluateNextFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGraphHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Playables::PlayableGraph (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::GetGraphHandle)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3465670;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "GetGraphHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(bool)>(
    &::UnityEngine::Playables::PlayableDirector::SetPlayOnAwake)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3465780;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetPlayOnAwake",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetPlayOnAwake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::GetPlayOnAwake)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x3465700;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "GetPlayOnAwake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Internal_SetGenericBinding
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::Object*, ::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::Internal_SetGenericBinding)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3465b88;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Internal_SetGenericBinding", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetPlayableAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(::UnityEngine::ScriptableObject*)>(
    &::UnityEngine::Playables::PlayableDirector::SetPlayableAsset)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3465628;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetPlayableAsset", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.Internal_GetPlayableAsset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::ScriptableObject> (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x34655a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "Internal_GetPlayableAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.add_played
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(
    ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(&::UnityEngine::Playables::PlayableDirector::add_played)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3466284;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "add_played", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.remove_played
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(
    ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(&::UnityEngine::Playables::PlayableDirector::remove_played)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3466334;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "remove_played", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.add_paused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(
    ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(&::UnityEngine::Playables::PlayableDirector::add_paused)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x34663e4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "add_paused", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.remove_paused
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(
    ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(&::UnityEngine::Playables::PlayableDirector::remove_paused)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3466494;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "remove_paused", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.add_stopped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(
    ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(&::UnityEngine::Playables::PlayableDirector::add_stopped)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x3466544;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "add_stopped", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.remove_stopped
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(
    ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*)>(&::UnityEngine::Playables::PlayableDirector::remove_stopped)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x34665f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "remove_stopped", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ResetFrameTiming
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::UnityEngine::Playables::PlayableDirector::ResetFrameTiming)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x34666a4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "ResetFrameTiming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorPlay
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x34666cc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "SendOnPlayableDirectorPlay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorPause
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x34666ec;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "SendOnPlayableDirectorPause", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SendOnPlayableDirectorStop
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(
    &::UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x346670c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                               "SendOnPlayableDirectorStop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)()>(&::UnityEngine::Playables::PlayableDirector::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x346672c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.PlayOnFrame_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(ByRef<::UnityEngine::Playables::FrameRate>)>(
    &::UnityEngine::Playables::PlayableDirector::PlayOnFrame_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3465de4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "PlayOnFrame_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::FrameRate>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.ClearReferenceValue_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(ByRef<::UnityEngine::PropertyName>)>(
    &::UnityEngine::Playables::PlayableDirector::ClearReferenceValue_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3465f60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "ClearReferenceValue_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::PropertyName>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.SetReferenceValue_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(ByRef<::UnityEngine::PropertyName>, ::UnityEngine::Object*)>(
    &::UnityEngine::Playables::PlayableDirector::SetReferenceValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x3465ffc;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetReferenceValue_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::PropertyName>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetReferenceValue_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::Object> (::UnityEngine::Playables::PlayableDirector::*)(
    ByRef<::UnityEngine::PropertyName>, ByRef<bool>)>(&::UnityEngine::Playables::PlayableDirector::GetReferenceValue_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x34660a8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetReferenceValue_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::PropertyName>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Playables::PlayableDirector.GetGraphHandle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Playables::PlayableDirector::*)(ByRef<::UnityEngine::Playables::PlayableGraph>)>(
    &::UnityEngine::Playables::PlayableDirector::GetGraphHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x3466240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetGraphHandle_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::PlayableGraph>>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::IExposedPropertyTable"
constexpr UnityEngine::Playables::PlayableDirector::operator ::UnityEngine::IExposedPropertyTable*() noexcept {
  return static_cast<::UnityEngine::IExposedPropertyTable*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::IExposedPropertyTable"
constexpr ::UnityEngine::IExposedPropertyTable* UnityEngine::Playables::PlayableDirector::i___UnityEngine__IExposedPropertyTable() noexcept {
  return static_cast<::UnityEngine::IExposedPropertyTable*>(static_cast<void*>(this));
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_played() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___played;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const&
UnityEngine::Playables::PlayableDirector::__cordl_internal_get_played() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___played;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___played)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_paused() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paused;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const&
UnityEngine::Playables::PlayableDirector::__cordl_internal_get_paused() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___paused;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___paused)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*& UnityEngine::Playables::PlayableDirector::__cordl_internal_get_stopped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopped;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*> const&
UnityEngine::Playables::PlayableDirector::__cordl_internal_get_stopped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stopped;
}
constexpr void UnityEngine::Playables::PlayableDirector::__cordl_internal_set_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stopped)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::get_state() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "get_state",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_extrapolationMode(::UnityEngine::Playables::DirectorWrapMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_extrapolationMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableDirector::get_extrapolationMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "get_extrapolationMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode, false>(this, ___internal_method);
}
inline ::UnityW<::UnityEngine::Playables::PlayableAsset> UnityEngine::Playables::PlayableDirector::get_playableAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "get_playableAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Playables::PlayableAsset>, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_playableAsset(::UnityEngine::Playables::PlayableAsset* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_playableAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableDirector::get_playableGraph() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "get_playableGraph", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph, false>(this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableDirector::get_playOnAwake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "get_playOnAwake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_playOnAwake(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_playOnAwake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::DeferredEvaluate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "DeferredEvaluate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Play(::UnityEngine::Playables::FrameRate frameRate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Play", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameRate>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::Play(::UnityEngine::Playables::PlayableAsset* asset) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Play", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline void UnityEngine::Playables::PlayableDirector::Play(::UnityEngine::Playables::PlayableAsset* asset, ::UnityEngine::Playables::DirectorWrapMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Play", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::PlayableAsset*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset, mode);
}
inline void UnityEngine::Playables::PlayableDirector::SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetGenericBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void UnityEngine::Playables::PlayableDirector::set_timeUpdateMode(::UnityEngine::Playables::DirectorUpdateMode value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_timeUpdateMode", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorUpdateMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Playables::DirectorUpdateMode UnityEngine::Playables::PlayableDirector::get_timeUpdateMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "get_timeUpdateMode", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorUpdateMode, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_time(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_time", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_time() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "get_time",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::set_initialTime(double_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "set_initialTime",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_initialTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "get_initialTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline double_t UnityEngine::Playables::PlayableDirector::get_duration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "get_duration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<double_t, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Evaluate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Evaluate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::PlayOnFrame(::UnityEngine::Playables::FrameRate frameRate) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "PlayOnFrame", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::FrameRate>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::Play() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Play",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Stop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Stop",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Pause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Pause",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Resume() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Resume",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::RebuildGraph() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "RebuildGraph",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::ClearReferenceValue(::UnityEngine::PropertyName id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "ClearReferenceValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PropertyName>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void UnityEngine::Playables::PlayableDirector::SetReferenceValue(::UnityEngine::PropertyName id, ::UnityEngine::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetReferenceValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PropertyName>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableDirector::GetReferenceValue(::UnityEngine::PropertyName id, ByRef<bool> idValid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetReferenceValue", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::PropertyName>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method, id, idValid);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableDirector::GetGenericBinding(::UnityEngine::Object* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetGenericBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method, key);
}
inline void UnityEngine::Playables::PlayableDirector::ClearGenericBinding(::UnityEngine::Object* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "ClearGenericBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key);
}
inline void UnityEngine::Playables::PlayableDirector::RebindPlayableGraphOutputs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "RebindPlayableGraphOutputs", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::ProcessPendingGraphChanges() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "ProcessPendingGraphChanges", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool UnityEngine::Playables::PlayableDirector::HasGenericBinding(::UnityEngine::Object* key) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "HasGenericBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, key);
}
inline ::UnityEngine::Playables::PlayState UnityEngine::Playables::PlayableDirector::GetPlayState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetPlayState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayState, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SetWrapMode(::UnityEngine::Playables::DirectorWrapMode mode) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetWrapMode", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Playables::DirectorWrapMode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, mode);
}
inline ::UnityEngine::Playables::DirectorWrapMode UnityEngine::Playables::PlayableDirector::GetWrapMode() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetWrapMode",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::DirectorWrapMode, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::EvaluateNextFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "EvaluateNextFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableGraph UnityEngine::Playables::PlayableDirector::GetGraphHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "GetGraphHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Playables::PlayableGraph, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayOnAwake(bool on) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetPlayOnAwake",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, on);
}
inline bool UnityEngine::Playables::PlayableDirector::GetPlayOnAwake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "GetPlayOnAwake", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::Internal_SetGenericBinding(::UnityEngine::Object* key, ::UnityEngine::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "Internal_SetGenericBinding", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, key, value);
}
inline void UnityEngine::Playables::PlayableDirector::SetPlayableAsset(::UnityEngine::ScriptableObject* asset) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetPlayableAsset", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ScriptableObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, asset);
}
inline ::UnityW<::UnityEngine::ScriptableObject> UnityEngine::Playables::PlayableDirector::Internal_GetPlayableAsset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "Internal_GetPlayableAsset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::ScriptableObject>, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::add_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "add_played", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::remove_played(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "remove_played", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::add_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "add_paused", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::remove_paused(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "remove_paused", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::add_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "add_stopped", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::remove_stopped(::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "remove_stopped", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityW<::UnityEngine::Playables::PlayableDirector>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::Playables::PlayableDirector::ResetFrameTiming() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "ResetFrameTiming", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPlay() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "SendOnPlayableDirectorPlay", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorPause() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "SendOnPlayableDirectorPause", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::SendOnPlayableDirectorStop() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(),
                                                                             "SendOnPlayableDirectorStop", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Playables::PlayableDirector* UnityEngine::Playables::PlayableDirector::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Playables::PlayableDirector*>());
}
inline void UnityEngine::Playables::PlayableDirector::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::Playables::PlayableDirector::PlayOnFrame_Injected(ByRef<::UnityEngine::Playables::FrameRate> frameRate) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "PlayOnFrame_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::FrameRate>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, frameRate);
}
inline void UnityEngine::Playables::PlayableDirector::ClearReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "ClearReferenceValue_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::PropertyName>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id);
}
inline void UnityEngine::Playables::PlayableDirector::SetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id, ::UnityEngine::Object* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "SetReferenceValue_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::PropertyName>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, id, value);
}
inline ::UnityW<::UnityEngine::Object> UnityEngine::Playables::PlayableDirector::GetReferenceValue_Injected(ByRef<::UnityEngine::PropertyName> id, ByRef<bool> idValid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetReferenceValue_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::PropertyName>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::Object>, false>(this, ___internal_method, id, idValid);
}
inline void UnityEngine::Playables::PlayableDirector::GetGraphHandle_Injected(ByRef<::UnityEngine::Playables::PlayableGraph> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Playables::PlayableDirector*>::get(), "GetGraphHandle_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::Playables::PlayableGraph>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ret);
}
// Ctor Parameters []
constexpr ::UnityEngine::Playables::PlayableDirector::PlayableDirector() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace/VariableMovementDataProvider.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_impl.hpp"
#include "GlobalNamespace/zzzz__EaseType_impl.hpp"
#include "GlobalNamespace/zzzz__IVariableMovementDataProvider_impl.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapDataCallbackWrapper_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnMovementData_def.hpp"
#include "GlobalNamespace/zzzz__EaseType_def.hpp"
#include "GlobalNamespace/zzzz__NoteJumpSpeedEventData_def.hpp"
#include "GlobalNamespace/zzzz__NoteLineLayer_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__VariableMovementDataProvider_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider_InterpolationData.SetValues
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProvider_InterpolationData::*)(
    float_t, float_t, float_t, float_t, ::GlobalNamespace::EaseType)>(&::GlobalNamespace::VariableMovementDataProvider_InterpolationData::SetValues)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ae752c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider_InterpolationData>::get(), "SetValues", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider_InterpolationData.GetValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider_InterpolationData::*)(float_t)>(
    &::GlobalNamespace::VariableMovementDataProvider_InterpolationData::GetValue)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x3ae779c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider_InterpolationData>::get(), "GetValue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::VariableMovementDataProvider_InterpolationData::SetValues(float_t fromValue, float_t toValue, float_t fromTime, float_t toTime, ::GlobalNamespace::EaseType easeType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider_InterpolationData>::get(), "SetValues", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::EaseType>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, fromValue, toValue, fromTime, toTime, easeType);
}
inline float_t GlobalNamespace::VariableMovementDataProvider_InterpolationData::GetValue(float_t time) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider_InterpolationData>::get(), "GetValue",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, time);
}
// Ctor Parameters [CppParam { name: "_fromValue", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_toValue", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "_fromTime", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_duration", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_easeType", ty:
// "::GlobalNamespace::EaseType", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::VariableMovementDataProvider_InterpolationData::VariableMovementDataProvider_InterpolationData(float_t _fromValue, float_t _toValue, float_t _fromTime, float_t _duration,
                                                                                                                            ::GlobalNamespace::EaseType _easeType) noexcept {
  this->_fromValue = _fromValue;
  this->_toValue = _toValue;
  this->_fromTime = _fromTime;
  this->_duration = _duration;
  this->_easeType = _easeType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VariableMovementDataProvider_InterpolationData::VariableMovementDataProvider_InterpolationData() {}
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_wasUpdatedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_wasUpdatedThisFrame)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae714c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_wasUpdatedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.set_wasUpdatedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProvider::*)(bool)>(
    &::GlobalNamespace::VariableMovementDataProvider::set_wasUpdatedThisFrame)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3ae7154;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "set_wasUpdatedThisFrame",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_jumpDistance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_jumpDistance)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7160;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_jumpDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_jumpDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_jumpDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7168;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_jumpDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_halfJumpDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_halfJumpDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7170;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_halfJumpDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_moveDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_moveDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_moveDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_spawnAheadTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_spawnAheadTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_spawnAheadTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_waitingDuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_waitingDuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_waitingDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_noteJumpSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_noteJumpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7190;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_noteJumpSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_targetNoteJumpSpeed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_targetNoteJumpSpeed)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x3ae7198;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_targetNoteJumpSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_moveStartPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_moveStartPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3ae71a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_moveStartPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_moveEndPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_moveEndPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3ae71d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_moveEndPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.get_jumpEndPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::get_jumpEndPosition)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x3ae7208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "get_jumpEndPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProvider::*)(
    ::GlobalNamespace::PlayerTransforms*, ::GlobalNamespace::BeatmapCallbacksController*)>(&::GlobalNamespace::VariableMovementDataProvider::_ctor)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x3ae723c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerTransforms*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProvider::*)()>(
    &::GlobalNamespace::VariableMovementDataProvider::Dispose)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x3ae735c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProvider::*)(
    float_t, float_t, float_t, float_t, float_t, ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType, float_t, ::UnityEngine::Vector3, ::UnityEngine::Vector3)>(
    &::GlobalNamespace::VariableMovementDataProvider::Init)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x3ae7404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.CalculateCurrentNoteJumpGravity
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)(float_t)>(
    &::GlobalNamespace::VariableMovementDataProvider::CalculateCurrentNoteJumpGravity)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x3ae52e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "CalculateCurrentNoteJumpGravity",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)(float_t, float_t)>(
    &::GlobalNamespace::VariableMovementDataProvider::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x3ae76c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.ManualUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProvider::*)(float_t)>(
    &::GlobalNamespace::VariableMovementDataProvider::ManualUpdate)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3ae7540;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "ManualUpdate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.NoteJumpGravityForLineLayerWithoutJumpOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::VariableMovementDataProvider::*)(float_t, ::GlobalNamespace::NoteLineLayer)>(
    &::GlobalNamespace::VariableMovementDataProvider::NoteJumpGravityForLineLayerWithoutJumpOffset)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x3ae7754;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                 "NoteJumpGravityForLineLayerWithoutJumpOffset", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::VariableMovementDataProvider.HandleNoteJumpMovementSpeedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::VariableMovementDataProvider::*)(::GlobalNamespace::NoteJumpSpeedEventData*)>(
    &::GlobalNamespace::VariableMovementDataProvider::HandleNoteJumpMovementSpeedEvent)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3ae7828;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "HandleNoteJumpMovementSpeedEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpSpeedEventData*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__wasUpdatedThisFrame_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasUpdatedThisFrame_k__BackingField;
}
constexpr bool const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__wasUpdatedThisFrame_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____wasUpdatedThisFrame_k__BackingField;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__wasUpdatedThisFrame_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____wasUpdatedThisFrame_k__BackingField = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper*& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__njsDataCallbackWrapper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____njsDataCallbackWrapper;
}
constexpr ::GlobalNamespace::BeatmapDataCallbackWrapper* const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__njsDataCallbackWrapper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____njsDataCallbackWrapper;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__njsDataCallbackWrapper(::GlobalNamespace::BeatmapDataCallbackWrapper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____njsDataCallbackWrapper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__targetNoteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetNoteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__targetNoteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____targetNoteJumpMovementSpeed;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__targetNoteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____targetNoteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__noteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__noteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpMovementSpeed;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__noteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__prevNoteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__prevNoteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevNoteJumpMovementSpeed;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__prevNoteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevNoteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__jumpDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDistance;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__jumpDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDistance;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__jumpDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpDistance = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__halfJumpDistance() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDistance;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__halfJumpDistance() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDistance;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__halfJumpDistance(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____halfJumpDistance = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__jumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDuration;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__jumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpDuration;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__jumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpDuration = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__halfJumpDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDuration;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__halfJumpDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDuration;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__halfJumpDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____halfJumpDuration = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__waitingDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitingDuration;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__waitingDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____waitingDuration;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__waitingDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____waitingDuration = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__moveStartPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveStartPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__moveStartPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveStartPosition;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__moveStartPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveStartPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__moveEndPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveEndPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__moveEndPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____moveEndPosition;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__moveEndPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____moveEndPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__jumpEndPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__jumpEndPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____jumpEndPosition;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__jumpEndPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____jumpEndPosition = value;
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__noteJumpValueType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpValueType;
}
constexpr ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__noteJumpValueType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____noteJumpValueType;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__noteJumpValueType(::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____noteJumpValueType = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__halfJumpDurationInBeats() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDurationInBeats;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__halfJumpDurationInBeats() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____halfJumpDurationInBeats;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__halfJumpDurationInBeats(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____halfJumpDurationInBeats = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__initOneBeatDuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initOneBeatDuration;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__initOneBeatDuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initOneBeatDuration;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__initOneBeatDuration(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initOneBeatDuration = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__initNoteJumpMovementSpeed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initNoteJumpMovementSpeed;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__initNoteJumpMovementSpeed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____initNoteJumpMovementSpeed;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__initNoteJumpMovementSpeed(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____initNoteJumpMovementSpeed = value;
}
constexpr float_t& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__spawnAheadTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnAheadTime;
}
constexpr float_t const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__spawnAheadTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____spawnAheadTime;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__spawnAheadTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____spawnAheadTime = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__centerPosition() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerPosition;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__centerPosition() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____centerPosition;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__centerPosition(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____centerPosition = value;
}
constexpr ::UnityEngine::Vector3& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__forwardVector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forwardVector;
}
constexpr ::UnityEngine::Vector3 const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__forwardVector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____forwardVector;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__forwardVector(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____forwardVector = value;
}
constexpr ::GlobalNamespace::VariableMovementDataProvider_InterpolationData& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__relativeNoteJumpSpeedInterpolation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeNoteJumpSpeedInterpolation;
}
constexpr ::GlobalNamespace::VariableMovementDataProvider_InterpolationData const& GlobalNamespace::VariableMovementDataProvider::__cordl_internal_get__relativeNoteJumpSpeedInterpolation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____relativeNoteJumpSpeedInterpolation;
}
constexpr void GlobalNamespace::VariableMovementDataProvider::__cordl_internal_set__relativeNoteJumpSpeedInterpolation(::GlobalNamespace::VariableMovementDataProvider_InterpolationData value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____relativeNoteJumpSpeedInterpolation = value;
}
inline bool GlobalNamespace::VariableMovementDataProvider::get_wasUpdatedThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_wasUpdatedThisFrame", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::VariableMovementDataProvider::set_wasUpdatedThisFrame(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "set_wasUpdatedThisFrame",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::get_jumpDistance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_jumpDistance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::get_jumpDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_jumpDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::get_halfJumpDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_halfJumpDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::get_moveDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_moveDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::get_spawnAheadTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_spawnAheadTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::get_waitingDuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_waitingDuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::get_noteJumpSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_noteJumpSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::get_targetNoteJumpSpeed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_targetNoteJumpSpeed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VariableMovementDataProvider::get_moveStartPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_moveStartPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VariableMovementDataProvider::get_moveEndPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_moveEndPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::VariableMovementDataProvider::get_jumpEndPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                                                             "get_jumpEndPosition", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline void GlobalNamespace::VariableMovementDataProvider::_ctor(::GlobalNamespace::PlayerTransforms* playerTransforms, ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PlayerTransforms*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapCallbacksController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, playerTransforms, beatmapCallbacksController);
}
inline void GlobalNamespace::VariableMovementDataProvider::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::VariableMovementDataProvider::Init(float_t startHalfJumpDurationInBeats, float_t maxHalfJumpDistance, float_t noteJumpMovementSpeed, float_t minRelativeNoteJumpSpeed,
                                                                float_t bpm, ::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType noteJumpValueType, float_t noteJumpValue,
                                                                ::UnityEngine::Vector3 centerPosition, ::UnityEngine::Vector3 forwardVector) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 9>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectSpawnMovementData_NoteJumpValueType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, startHalfJumpDurationInBeats, maxHalfJumpDistance, noteJumpMovementSpeed, minRelativeNoteJumpSpeed, bpm,
                                                          noteJumpValueType, noteJumpValue, centerPosition, forwardVector);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::CalculateCurrentNoteJumpGravity(float_t gravityBase) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "CalculateCurrentNoteJumpGravity",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, gravityBase);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset(float_t highestJumpPosY, float_t distanceFromPlayer) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "JumpPosYForLineLayerAtDistanceFromPlayerWithoutJumpOffset",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, highestJumpPosY, distanceFromPlayer);
}
inline void GlobalNamespace::VariableMovementDataProvider::ManualUpdate(float_t songTime) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "ManualUpdate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, songTime);
}
inline float_t GlobalNamespace::VariableMovementDataProvider::NoteJumpGravityForLineLayerWithoutJumpOffset(float_t highestJumpPosY, ::GlobalNamespace::NoteLineLayer beforeJumpLineLayer) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(),
                                               "NoteJumpGravityForLineLayerWithoutJumpOffset", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteLineLayer>::get() })));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, highestJumpPosY, beforeJumpLineLayer);
}
inline void GlobalNamespace::VariableMovementDataProvider::HandleNoteJumpMovementSpeedEvent(::GlobalNamespace::NoteJumpSpeedEventData* currentEventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::VariableMovementDataProvider*>::get(), "HandleNoteJumpMovementSpeedEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteJumpSpeedEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentEventData);
}
inline ::GlobalNamespace::VariableMovementDataProvider* GlobalNamespace::VariableMovementDataProvider::New_ctor(::GlobalNamespace::PlayerTransforms* playerTransforms,
                                                                                                                ::GlobalNamespace::BeatmapCallbacksController* beatmapCallbacksController) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::VariableMovementDataProvider*>(playerTransforms, beatmapCallbacksController));
}
/// @brief Convert operator to "::GlobalNamespace::IVariableMovementDataProvider"
constexpr GlobalNamespace::VariableMovementDataProvider::operator ::GlobalNamespace::IVariableMovementDataProvider*() noexcept {
  return static_cast<::GlobalNamespace::IVariableMovementDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IVariableMovementDataProvider"
constexpr ::GlobalNamespace::IVariableMovementDataProvider* GlobalNamespace::VariableMovementDataProvider::i___GlobalNamespace__IVariableMovementDataProvider() noexcept {
  return static_cast<::GlobalNamespace::IVariableMovementDataProvider*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::VariableMovementDataProvider::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::VariableMovementDataProvider::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::VariableMovementDataProvider::VariableMovementDataProvider() {}

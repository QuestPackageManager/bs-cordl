#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerGamePoseGeneratorAI.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGeneratorAI_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
#include "GlobalNamespace/zzzz__IMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__MockBeatmapData_def.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_def.hpp"
#include "GlobalNamespace/zzzz__MockObstacleData_def.hpp"
#include "GlobalNamespace/zzzz__NoteCutDirection_def.hpp"
#include "GlobalNamespace/zzzz__NoteSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__ObstacleSpawnInfoNetSerializable_def.hpp"
#include "GlobalNamespace/zzzz__SliderSpawnInfoNetSerializable_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.get_songTime
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::get_songTime)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x3c386e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(),
                                                                               "get_songTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::GlobalNamespace::IMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*, ::GlobalNamespace::IMockPlayerScoreCalculator*, bool)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::_ctor)> {
  constexpr static std::size_t size = 0x274;
  constexpr static std::size_t addrs = 0x3c387b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayRpcManager*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMockPlayerScoreCalculator*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::Dispose)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x3c38a24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    int64_t, ::GlobalNamespace::MockBeatmapData*, ::GlobalNamespace::GameplayModifiers*, ::System::Action*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::Init)> {
  constexpr static std::size_t size = 0x404;
  constexpr static std::size_t addrs = 0x3c38c88;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.Tick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::Tick)> {
  constexpr static std::size_t size = 0x988;
  constexpr static std::size_t addrs = 0x3c3908c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.GetCutDirection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::NoteCutDirection)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetCutDirection)> {
  constexpr static std::size_t size = 0x2a4;
  constexpr static std::size_t addrs = 0x3c3b36c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "GetCutDirection", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.GetNotePosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(int32_t, ::GlobalNamespace::MockNoteData*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetNotePosition)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x3c3b610;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "GetNotePosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.Blerp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (*)(
    ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::Blerp)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x3c3b678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "Blerp", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.ProcessNotes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>, ::UnityEngine::Vector3, ::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<int32_t>,
    ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>, ::ByRef<int32_t>, int32_t, float_t, ::ByRef<bool>)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessNotes)> {
  constexpr static std::size_t size = 0xfd0;
  constexpr static std::size_t addrs = 0x3c39a14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "ProcessNotes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 10>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.ProcessObstacles
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>, ::ByRef<int32_t>, int32_t, ::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose, float_t)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessObstacles)> {
  constexpr static std::size_t size = 0x354;
  constexpr static std::size_t addrs = 0x3c3a9e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "ProcessObstacles", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 7>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.UpdateScore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::ByRef<int32_t>, ::ByRef<int32_t>, ::ByRef<int32_t>, int32_t, int32_t, ::UnityEngine::Pose, ::UnityEngine::Pose, float_t, float_t, ::GlobalNamespace::MockNoteData*,
    ::GlobalNamespace::MockNoteData*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::UpdateScore)> {
  constexpr static std::size_t size = 0x634;
  constexpr static std::size_t addrs = 0x3c3ad38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "UpdateScore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 11>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.SimulateFail
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::SimulateFail)> {
  constexpr static std::size_t size = 0x1bc;
  constexpr static std::size_t addrs = 0x3c3b960;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3c3bb1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "HandleNoteWasSpawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.HandleObstacleWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3c3bcf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "HandleObstacleWasSpawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.HandleSliderWasSpawned
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleSliderWasSpawned)> {
  constexpr static std::size_t size = 0x1d8;
  constexpr static std::size_t addrs = 0x3c3becc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "HandleSliderWasSpawned", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IMockPlayerScoreCalculator*& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__scoreCalculator() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreCalculator;
}
constexpr ::GlobalNamespace::IMockPlayerScoreCalculator* const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__scoreCalculator() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____scoreCalculator;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__scoreCalculator(::GlobalNamespace::IMockPlayerScoreCalculator* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____scoreCalculator)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastKnowScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastKnowScore;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastKnowScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastKnowScore;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__lastKnowScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastKnowScore = value;
}
constexpr int64_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__songStartTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartTime;
}
constexpr int64_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__songStartTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____songStartTime;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__songStartTime(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____songStartTime = value;
}
constexpr float_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__timeScale() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeScale;
}
constexpr float_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__timeScale() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____timeScale;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__timeScale(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____timeScale = value;
}
constexpr ::System::Action*& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__onSongFinished() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSongFinished;
}
constexpr ::System::Action* const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__onSongFinished() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSongFinished;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__onSongFinished(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSongFinished)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::GameplayModifiers*& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__gameplayModifiers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr ::GlobalNamespace::GameplayModifiers* const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__gameplayModifiers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____gameplayModifiers;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____gameplayModifiers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr float_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastEventTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEventTime;
}
constexpr float_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastEventTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastEventTime;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__lastEventTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastEventTime = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastHeadPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastHeadPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastHeadPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastHeadPose;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__lastHeadPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastHeadPose = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastLeftHandPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastLeftHandPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastLeftHandPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastLeftHandPose;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__lastLeftHandPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastLeftHandPose = value;
}
constexpr ::UnityEngine::Pose& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastRightHandPose() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRightHandPose;
}
constexpr ::UnityEngine::Pose const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastRightHandPose() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastRightHandPose;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__lastRightHandPose(::UnityEngine::Pose value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastRightHandPose = value;
}
constexpr float_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastSongTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSongTime;
}
constexpr float_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lastSongTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lastSongTime;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__lastSongTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lastSongTime = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lineCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineCount;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__lineCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____lineCount;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__lineCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____lineCount = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__leftNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftNotes;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__leftNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftNotes;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__leftNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____leftNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__rightNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightNotes;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__rightNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightNotes;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__rightNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____rightNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__bombNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__bombNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__bombNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____bombNotes)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> const&
GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__obstacles(::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____obstacles)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__leftNoteIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftNoteIndex;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__leftNoteIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftNoteIndex;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__leftNoteIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftNoteIndex = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__rightNoteIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightNoteIndex;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__rightNoteIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightNoteIndex;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__rightNoteIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightNoteIndex = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__bombNoteIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNoteIndex;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__bombNoteIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNoteIndex;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__bombNoteIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombNoteIndex = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__obstacleIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleIndex;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__obstacleIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacleIndex;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__obstacleIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacleIndex = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__prevLeftScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevLeftScore;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__prevLeftScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevLeftScore;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__prevLeftScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevLeftScore = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__prevRightScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRightScore;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__prevRightScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____prevRightScore;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__prevRightScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____prevRightScore = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__nextLeftHitScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLeftHitScore;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__nextLeftHitScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextLeftHitScore;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__nextLeftHitScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextLeftHitScore = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__nextRightHitScore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextRightHitScore;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__nextRightHitScore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____nextRightHitScore;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__nextRightHitScore(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____nextRightHitScore = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__score() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____score;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__score() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____score;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__score(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____score = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__combo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__combo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____combo;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__combo(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____combo = value;
}
constexpr int32_t& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__multiplier() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplier;
}
constexpr int32_t const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__multiplier() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____multiplier;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__multiplier(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____multiplier = value;
}
constexpr bool& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__fullCombo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo;
}
constexpr bool const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__fullCombo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____fullCombo;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__fullCombo(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____fullCombo = value;
}
constexpr bool& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__hasFinishedLevel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasFinishedLevel;
}
constexpr bool const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__hasFinishedLevel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasFinishedLevel;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__hasFinishedLevel(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasFinishedLevel = value;
}
constexpr bool& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__isInited() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInited;
}
constexpr bool const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__isInited() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____isInited;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__isInited(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____isInited = value;
}
inline float_t GlobalNamespace::MockPlayerGamePoseGeneratorAI::get_songTime() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(),
                                                                             "get_songTime", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager, ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                                  ::GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator, bool leftHanded) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMultiplayerSessionManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IGameplayRpcManager*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IMockPlayerScoreCalculator*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, multiplayerSessionManager, gameplayRpcManager, scoreCalculator, leftHanded);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::Dispose() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                 ::System::Action* onSongFinished) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, introStartTime, beatmapData, gameplayModifiers, onSongFinished);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::Tick() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetCutDirection(::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "GetCutDirection", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteCutDirection>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, cutDirection);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetNotePosition(int32_t lineCount, ::GlobalNamespace::MockNoteData* noteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "GetNotePosition", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, lineCount, noteData);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MockPlayerGamePoseGeneratorAI::Blerp(::UnityEngine::Vector3 prevStart, ::UnityEngine::Vector3 prevEnd, ::UnityEngine::Vector3 currStart,
                                                                                    ::UnityEngine::Vector3 currEnd, float_t t) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "Blerp", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(nullptr, ___internal_method, prevStart, prevEnd, currStart, currEnd, t);
}
inline ::UnityEngine::Pose GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessNotes(::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> notes,
                                                                                        ::UnityEngine::Vector3 handDirection, ::ByRef<int32_t> noteIndex, ::ByRef<int32_t> prevHitScore,
                                                                                        ::ByRef<int32_t> nextHitScore,
                                                                                        ::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*> bombs,
                                                                                        ::ByRef<int32_t> bombIndex, int32_t lineCount, float_t songTime, ::ByRef<bool> wasHitOrMiss) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "ProcessNotes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 10>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MockNoteData*, ::Array<::GlobalNamespace::MockNoteData*>*>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, notes, handDirection, noteIndex, prevHitScore, nextHitScore, bombs, bombIndex, lineCount, songTime,
                                                                         wasHitOrMiss);
}
inline ::UnityEngine::Pose GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessObstacles(::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*> obstacles,
                                                                                            ::ByRef<int32_t> obstacleIndex, int32_t lineCount, ::UnityEngine::Pose prevHeadPose,
                                                                                            ::UnityEngine::Pose leftHandPose, ::UnityEngine::Pose rightHandPose, float_t songTime) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "ProcessObstacles", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 7>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::GlobalNamespace::MockObstacleData*, ::Array<::GlobalNamespace::MockObstacleData*>*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(this, ___internal_method, obstacles, obstacleIndex, lineCount, prevHeadPose, leftHandPose, rightHandPose, songTime);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::UpdateScore(::ByRef<int32_t> currentScore, ::ByRef<int32_t> currentCombo, ::ByRef<int32_t> currentMultiplier, int32_t hitScore,
                                                                        int32_t lineCount, ::UnityEngine::Pose lastPose, ::UnityEngine::Pose currentPose, float_t lastSongTime, float_t songTime,
                                                                        ::GlobalNamespace::MockNoteData* noteData, ::GlobalNamespace::MockNoteData* nextNoteData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "UpdateScore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 11>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::MockNoteData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentScore, currentCombo, currentMultiplier, hitScore, lineCount, lastPose, currentPose, lastSongTime, songTime,
                                                          noteData, nextNoteData);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::SimulateFail() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleNoteWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                 ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "HandleNoteWasSpawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::NoteSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, noteSpawnInfoNetSerializable);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleObstacleWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                     ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "HandleObstacleWasSpawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, obstacleSpawnInfoNetSerializable);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleSliderWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                   ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>::get(), "HandleSliderWasSpawned", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::SliderSpawnInfoNetSerializable*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId, syncTime, songTime, sliderSpawnInfoNetSerializable);
}
inline ::GlobalNamespace::MockPlayerGamePoseGeneratorAI* GlobalNamespace::MockPlayerGamePoseGeneratorAI::New_ctor(::GlobalNamespace::IMultiplayerSessionManager* multiplayerSessionManager,
                                                                                                                  ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                                                                                  ::GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator, bool leftHanded) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(multiplayerSessionManager, gameplayRpcManager, scoreCalculator, leftHanded));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerGamePoseGeneratorAI::MockPlayerGamePoseGeneratorAI() {}

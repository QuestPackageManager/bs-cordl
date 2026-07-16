#pragma once
// IWYU pragma private; include "GlobalNamespace/MockPlayerGamePoseGeneratorAI.hpp"
#include "GlobalNamespace/zzzz__MockNoteData_impl.hpp"
#include "GlobalNamespace/zzzz__MockObstacleData_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGenerator_impl.hpp"
#include "UnityEngine/zzzz__Pose_impl.hpp"
#include "GlobalNamespace/zzzz__MockPlayerGamePoseGeneratorAI_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifiers_def.hpp"
#include "GlobalNamespace/zzzz__IBeatSaberMultiplayerSessionManager_def.hpp"
#include "GlobalNamespace/zzzz__IGameplayRpcManager_def.hpp"
#include "GlobalNamespace/zzzz__IMockPlayerScoreCalculator_def.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<float_t (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::get_songTime)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5a81028;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { "get_songTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.get_suppressLevelFinishedRpc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::get_suppressLevelFinishedRpc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a810f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { "get_suppressLevelFinishedRpc", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.set_suppressLevelFinishedRpc
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(bool)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::set_suppressLevelFinishedRpc)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a810fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { "set_suppressLevelFinishedRpc", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::GlobalNamespace::IBeatSaberMultiplayerSessionManager*, ::GlobalNamespace::IGameplayRpcManager*, ::GlobalNamespace::IMockPlayerScoreCalculator*, bool)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::_ctor)> {
  constexpr static std::size_t size = 0x288;
  constexpr static std::size_t addrs = 0x5a81104;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::IMockPlayerScoreCalculator*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::Dispose)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x5a8138c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(int64_t, ::GlobalNamespace::MockBeatmapData*, ::GlobalNamespace::GameplayModifiers*,
                                                                                                                  ::System::Action*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::Init)> {
  constexpr static std::size_t size = 0x32c;
  constexpr static std::size_t addrs = 0x5a81604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.Tick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::Tick)> {
  constexpr static std::size_t size = 0x800;
  constexpr static std::size_t addrs = 0x5a81930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.GetCutDirection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::GlobalNamespace::NoteCutDirection)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetCutDirection)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5a83b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { "GetCutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.GetNotePosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(int32_t, ::GlobalNamespace::MockNoteData*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetNotePosition)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5a83e28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                             { "GetNotePosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MockNoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.Blerp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, float_t)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::Blerp)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5a83e84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                             { "Blerp",
                                                               {},
                                                               { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                                 ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.ProcessNotes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::ArrayW<::GlobalNamespace::MockNoteData*>, ::UnityEngine::Vector3, ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, ::ArrayW<::GlobalNamespace::MockNoteData*>, ::by_ref<int32_t>, int32_t,
    float_t, ::by_ref<bool>)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessNotes)> {
  constexpr static std::size_t size = 0x1080;
  constexpr static std::size_t addrs = 0x5a82130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                { "ProcessNotes",
                                                  {},
                                                  { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>(),
                                                    ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.ProcessObstacles
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::ArrayW<::GlobalNamespace::MockObstacleData*>, ::by_ref<int32_t>, int32_t, ::UnityEngine::Pose, ::UnityEngine::Pose, ::UnityEngine::Pose, float_t)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessObstacles)> {
  constexpr static std::size_t size = 0x2c4;
  constexpr static std::size_t addrs = 0x5a831b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                         { "ProcessObstacles",
                                           {},
                                           { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockObstacleData*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                             ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.UpdateScore
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(
    ::by_ref<int32_t>, ::by_ref<int32_t>, ::by_ref<int32_t>, int32_t, int32_t, ::UnityEngine::Pose, ::UnityEngine::Pose, float_t, float_t, ::GlobalNamespace::MockNoteData*,
    ::GlobalNamespace::MockNoteData*)>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::UpdateScore)> {
  constexpr static std::size_t size = 0x6bc;
  constexpr static std::size_t addrs = 0x5a83474;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                { "UpdateScore",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                    ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(),
                                                    ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::MockNoteData*>(), ::i2c::type_of<::GlobalNamespace::MockNoteData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.SimulateFail
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)()>(&::GlobalNamespace::MockPlayerGamePoseGeneratorAI::SimulateFail)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x5a840f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.HandleNoteWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(::StringW, int64_t, float_t, ::GlobalNamespace::NoteSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleNoteWasSpawned)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5a842a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                            { "HandleNoteWasSpawned",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.HandleObstacleWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(::StringW, int64_t, float_t, ::GlobalNamespace::ObstacleSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleObstacleWasSpawned)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5a8448c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                            { "HandleObstacleWasSpawned",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::MockPlayerGamePoseGeneratorAI.HandleSliderWasSpawned
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::MockPlayerGamePoseGeneratorAI::*)(::StringW, int64_t, float_t, ::GlobalNamespace::SliderSpawnInfoNetSerializable*)>(
    &::GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleSliderWasSpawned)> {
  constexpr static std::size_t size = 0x1e4;
  constexpr static std::size_t addrs = 0x5a84670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                            { "HandleSliderWasSpawned",
                              {},
                              { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
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
  this->____scoreCalculator = value;
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
  this->____onSongFinished = value;
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
  this->____gameplayModifiers = value;
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
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*>& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__leftNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftNotes;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*> const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__leftNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____leftNotes;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__leftNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____leftNotes = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*>& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__rightNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightNotes;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*> const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__rightNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____rightNotes;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__rightNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____rightNotes = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*>& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__bombNotes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes;
}
constexpr ::ArrayW<::GlobalNamespace::MockNoteData*> const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__bombNotes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____bombNotes;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__bombNotes(::ArrayW<::GlobalNamespace::MockNoteData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____bombNotes = value;
}
constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*>& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__obstacles() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr ::ArrayW<::GlobalNamespace::MockObstacleData*> const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__obstacles() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____obstacles;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__obstacles(::ArrayW<::GlobalNamespace::MockObstacleData*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____obstacles = value;
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
constexpr bool& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__suppressLevelFinishedRpc_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suppressLevelFinishedRpc_k__BackingField;
}
constexpr bool const& GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_get__suppressLevelFinishedRpc_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____suppressLevelFinishedRpc_k__BackingField;
}
constexpr void GlobalNamespace::MockPlayerGamePoseGeneratorAI::__cordl_internal_set__suppressLevelFinishedRpc_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____suppressLevelFinishedRpc_k__BackingField = value;
}
inline float_t GlobalNamespace::MockPlayerGamePoseGeneratorAI::get_songTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { "get_songTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<float_t>(this, ___internal_method);
}
inline bool GlobalNamespace::MockPlayerGamePoseGeneratorAI::get_suppressLevelFinishedRpc() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { "get_suppressLevelFinishedRpc", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::set_suppressLevelFinishedRpc(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { "set_suppressLevelFinishedRpc", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                  ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager, ::GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator,
                                                                  bool leftHanded) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IBeatSaberMultiplayerSessionManager*>(), ::i2c::type_of<::GlobalNamespace::IGameplayRpcManager*>(),
                                                               ::i2c::type_of<::GlobalNamespace::IMockPlayerScoreCalculator*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, multiplayerSessionManager, gameplayRpcManager, scoreCalculator, leftHanded);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::Dispose() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::Init(int64_t introStartTime, ::GlobalNamespace::MockBeatmapData* beatmapData, ::GlobalNamespace::GameplayModifiers* gameplayModifiers,
                                                                 ::System::Action* onSongFinished) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, introStartTime, beatmapData, gameplayModifiers, onSongFinished);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::Tick() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetCutDirection(::GlobalNamespace::NoteCutDirection cutDirection) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), { "GetCutDirection", {}, { ::i2c::type_of<::GlobalNamespace::NoteCutDirection>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, cutDirection);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MockPlayerGamePoseGeneratorAI::GetNotePosition(int32_t lineCount, ::GlobalNamespace::MockNoteData* noteData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                           { "GetNotePosition", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::GlobalNamespace::MockNoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, lineCount, noteData);
}
inline ::UnityEngine::Vector3 GlobalNamespace::MockPlayerGamePoseGeneratorAI::Blerp(::UnityEngine::Vector3 prevStart, ::UnityEngine::Vector3 prevEnd, ::UnityEngine::Vector3 currStart,
                                                                                    ::UnityEngine::Vector3 currEnd, float_t t) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                           { "Blerp",
                                                             {},
                                                             { ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::UnityEngine::Vector3>(),
                                                               ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(nullptr, ___internal_method, prevStart, prevEnd, currStart, currEnd, t);
}
inline ::UnityEngine::Pose GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessNotes(::ArrayW<::GlobalNamespace::MockNoteData*> notes, ::UnityEngine::Vector3 handDirection,
                                                                                        ::by_ref<int32_t> noteIndex, ::by_ref<int32_t> prevHitScore, ::by_ref<int32_t> nextHitScore,
                                                                                        ::ArrayW<::GlobalNamespace::MockNoteData*> bombs, ::by_ref<int32_t> bombIndex, int32_t lineCount,
                                                                                        float_t songTime, ::by_ref<bool> wasHitOrMiss) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                              { "ProcessNotes",
                                                {},
                                                { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>(), ::i2c::type_of<::UnityEngine::Vector3>(), ::i2c::type_of<::by_ref<int32_t>>(),
                                                  ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::ArrayW<::GlobalNamespace::MockNoteData*>>(),
                                                  ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, notes, handDirection, noteIndex, prevHitScore, nextHitScore, bombs, bombIndex, lineCount, songTime,
                                                                  wasHitOrMiss);
}
inline ::UnityEngine::Pose GlobalNamespace::MockPlayerGamePoseGeneratorAI::ProcessObstacles(::ArrayW<::GlobalNamespace::MockObstacleData*> obstacles, ::by_ref<int32_t> obstacleIndex,
                                                                                            int32_t lineCount, ::UnityEngine::Pose prevHeadPose, ::UnityEngine::Pose leftHandPose,
                                                                                            ::UnityEngine::Pose rightHandPose, float_t songTime) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                              { "ProcessObstacles",
                                                {},
                                                { ::i2c::type_of<::ArrayW<::GlobalNamespace::MockObstacleData*>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                  ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(this, ___internal_method, obstacles, obstacleIndex, lineCount, prevHeadPose, leftHandPose, rightHandPose, songTime);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::UpdateScore(::by_ref<int32_t> currentScore, ::by_ref<int32_t> currentCombo, ::by_ref<int32_t> currentMultiplier, int32_t hitScore,
                                                                        int32_t lineCount, ::UnityEngine::Pose lastPose, ::UnityEngine::Pose currentPose, float_t lastSongTime, float_t songTime,
                                                                        ::GlobalNamespace::MockNoteData* noteData, ::GlobalNamespace::MockNoteData* nextNoteData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                                                           { "UpdateScore",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<int32_t>(),
                                                               ::i2c::type_of<int32_t>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<::UnityEngine::Pose>(), ::i2c::type_of<float_t>(),
                                                               ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::MockNoteData*>(), ::i2c::type_of<::GlobalNamespace::MockNoteData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentScore, currentCombo, currentMultiplier, hitScore, lineCount, lastPose, currentPose, lastSongTime, songTime,
                                                   noteData, nextNoteData);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::SimulateFail() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleNoteWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                 ::GlobalNamespace::NoteSpawnInfoNetSerializable* noteSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
          { "HandleNoteWasSpawned", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::NoteSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, noteSpawnInfoNetSerializable);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleObstacleWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                     ::GlobalNamespace::ObstacleSpawnInfoNetSerializable* obstacleSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                          { "HandleObstacleWasSpawned",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::ObstacleSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, obstacleSpawnInfoNetSerializable);
}
inline void GlobalNamespace::MockPlayerGamePoseGeneratorAI::HandleSliderWasSpawned(::StringW userId, int64_t syncTime, float_t songTime,
                                                                                   ::GlobalNamespace::SliderSpawnInfoNetSerializable* sliderSpawnInfoNetSerializable) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(),
                          { "HandleSliderWasSpawned",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<float_t>(), ::i2c::type_of<::GlobalNamespace::SliderSpawnInfoNetSerializable*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, userId, syncTime, songTime, sliderSpawnInfoNetSerializable);
}
inline ::GlobalNamespace::MockPlayerGamePoseGeneratorAI* GlobalNamespace::MockPlayerGamePoseGeneratorAI::New_ctor(::GlobalNamespace::IBeatSaberMultiplayerSessionManager* multiplayerSessionManager,
                                                                                                                  ::GlobalNamespace::IGameplayRpcManager* gameplayRpcManager,
                                                                                                                  ::GlobalNamespace::IMockPlayerScoreCalculator* scoreCalculator, bool leftHanded) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::MockPlayerGamePoseGeneratorAI*>(multiplayerSessionManager, gameplayRpcManager, scoreCalculator, leftHanded));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::MockPlayerGamePoseGeneratorAI::MockPlayerGamePoseGeneratorAI() {}

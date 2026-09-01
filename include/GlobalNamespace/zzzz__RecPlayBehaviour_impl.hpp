#pragma once
// IWYU pragma private; include "GlobalNamespace\RecPlayBehaviour.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseNoise_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RecPlayBehaviour_def.hpp"
#include "BeatSaber/Automation/zzzz__RecPlayBehaviourState_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseCapturer_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseSampler_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVRControllersManager_def.hpp"
#include "GlobalNamespace/zzzz__VRCenterAdjust_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)(::GlobalNamespace::GameplayCoreSceneSetupData*, ::GlobalNamespace::BeatmapObjectSpawnController*)>(
    &::GlobalNamespace::RecPlayBehaviour::Init)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58faf78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(),
                                         { "Init", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapObjectSpawnController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Play
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::Play)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x58fb510;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "Play", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Record
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::Record)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x58fb878;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "Record", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.SaveRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::SaveRecording)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x58fb9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "SaveRecording", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Configure
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::Configure)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x58fbb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "Configure", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.CleanUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::CleanUp)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x58fbc9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "CleanUp", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58fbda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.LateUpdate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::LateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58fbdd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "LateUpdate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.OnDisable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58fbde0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "OnDisable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x58fbde4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "OnDestroy", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.CreateRecordingPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::RecPlayBehaviour::CreateRecordingPath)> {
  constexpr static std::size_t size = 0x1b4;
  constexpr static std::size_t addrs = 0x58fb090;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "CreateRecordingPath", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.CreateAutoLevelRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::RecPlay::PlayerPoseFrames (*)(::GlobalNamespace::GameplayCoreSceneSetupData*, ::GlobalNamespace::BeatmapObjectSpawnController*)>(
    &::GlobalNamespace::RecPlayBehaviour::CreateAutoLevelRecording)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x58fb3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(),
            { "CreateAutoLevelRecording", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapObjectSpawnController*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.LoadLevelRecording
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::BeatSaber::RecPlay::PlayerPoseFrames (*)(::StringW)>(&::GlobalNamespace::RecPlayBehaviour::LoadLevelRecording)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x58fb244;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "LoadLevelRecording", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.SavePlayerPoseFrames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::StringW, ::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames>)>(&::GlobalNamespace::RecPlayBehaviour::SavePlayerPoseFrames)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x58fba34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(),
                                                             { "SavePlayerPoseFrames", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x58fbdfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour._Play_g__ExtractLocalPose_13_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::RecPlayBehaviour::_Play_g__ExtractLocalPose_13_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58fb814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "<Play>g__ExtractLocalPose|13_0", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour._Record_g__ExtractGlobalPose_14_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*)>(&::GlobalNamespace::RecPlayBehaviour::_Record_g__ExtractGlobalPose_14_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x58fb944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "<Record>g__ExtractGlobalPose|14_0", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::BeatmapCallbacksController*& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__beatmapCallbacksController() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr ::GlobalNamespace::BeatmapCallbacksController* const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__beatmapCallbacksController() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____beatmapCallbacksController;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__beatmapCallbacksController(::GlobalNamespace::BeatmapCallbacksController* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____beatmapCallbacksController = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms>& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__playerTransforms() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr ::UnityW<::GlobalNamespace::PlayerTransforms> const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__playerTransforms() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerTransforms;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__playerTransforms(::UnityW<::GlobalNamespace::PlayerTransforms> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerTransforms = value;
}
constexpr ::UnityW<::GlobalNamespace::PlayerVRControllersManager>& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__playerControllers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerControllers;
}
constexpr ::UnityW<::GlobalNamespace::PlayerVRControllersManager> const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__playerControllers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playerControllers;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__playerControllers(::UnityW<::GlobalNamespace::PlayerVRControllersManager> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playerControllers = value;
}
constexpr ::UnityW<::GlobalNamespace::VRCenterAdjust>& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__vrCenterAdjust() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrCenterAdjust;
}
constexpr ::UnityW<::GlobalNamespace::VRCenterAdjust> const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__vrCenterAdjust() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____vrCenterAdjust;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__vrCenterAdjust(::UnityW<::GlobalNamespace::VRCenterAdjust> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____vrCenterAdjust = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__hmdCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__hmdCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hmdCamera;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__hmdCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hmdCamera = value;
}
constexpr ::BeatSaber::Automation::RecPlayBehaviourState*& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::BeatSaber::Automation::RecPlayBehaviourState* const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__state(::BeatSaber::Automation::RecPlayBehaviourState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____state = value;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseCapturer*& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__capturer() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capturer;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseCapturer* const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__capturer() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capturer;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__capturer(::BeatSaber::RecPlay::PlayerPoseCapturer* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capturer = value;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseSampler*& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__sampler() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampler;
}
constexpr ::BeatSaber::RecPlay::PlayerPoseSampler* const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__sampler() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sampler;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__sampler(::BeatSaber::RecPlay::PlayerPoseSampler* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____sampler = value;
}
constexpr ::BeatSaber::RecPlay::PoseNoise& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__headNoise() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNoise;
}
constexpr ::BeatSaber::RecPlay::PoseNoise const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__headNoise() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____headNoise;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__headNoise(::BeatSaber::RecPlay::PoseNoise value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____headNoise = value;
}
constexpr ::StringW& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__recodingFilePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recodingFilePath;
}
constexpr ::StringW const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__recodingFilePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recodingFilePath;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__recodingFilePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recodingFilePath = value;
}
constexpr bool& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__recording() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recording;
}
constexpr bool const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__recording() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____recording;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__recording(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____recording = value;
}
constexpr bool& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__playback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playback;
}
constexpr bool const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__playback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____playback;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__playback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____playback = value;
}
inline void GlobalNamespace::RecPlayBehaviour::Init(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup, ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(),
                                       { "Init", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapObjectSpawnController*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, sceneSetup, beatmapSpawnerController);
}
inline void GlobalNamespace::RecPlayBehaviour::Play() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "Play", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::Record() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "Record", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::SaveRecording() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "SaveRecording", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::Configure() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "Configure", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::CleanUp() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "CleanUp", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "LateUpdate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "OnDisable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "OnDestroy", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RecPlayBehaviour::CreateRecordingPath(::GlobalNamespace::BeatmapKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "CreateRecordingPath", {}, { ::i2c::type_of<::GlobalNamespace::BeatmapKey>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, key);
}
inline ::BeatSaber::RecPlay::PlayerPoseFrames GlobalNamespace::RecPlayBehaviour::CreateAutoLevelRecording(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup,
                                                                                                          ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(),
                       { "CreateAutoLevelRecording", {}, { ::i2c::type_of<::GlobalNamespace::GameplayCoreSceneSetupData*>(), ::i2c::type_of<::GlobalNamespace::BeatmapObjectSpawnController*>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PlayerPoseFrames>(nullptr, ___internal_method, sceneSetup, beatmapSpawnerController);
}
inline ::BeatSaber::RecPlay::PlayerPoseFrames GlobalNamespace::RecPlayBehaviour::LoadLevelRecording(::StringW path) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "LoadLevelRecording", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PlayerPoseFrames>(nullptr, ___internal_method, path);
}
inline void GlobalNamespace::RecPlayBehaviour::SavePlayerPoseFrames(::StringW path, ::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames> frames) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(),
                                                           { "SavePlayerPoseFrames", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::BeatSaber::RecPlay::PlayerPoseFrames>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, path, frames);
}
inline void GlobalNamespace::RecPlayBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Pose GlobalNamespace::RecPlayBehaviour::_Play_g__ExtractLocalPose_13_0(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "<Play>g__ExtractLocalPose|13_0", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Pose GlobalNamespace::RecPlayBehaviour::_Record_g__ExtractGlobalPose_14_0(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::RecPlayBehaviour*>(), { "<Record>g__ExtractGlobalPose|14_0", {}, { ::i2c::type_of<::UnityEngine::Transform*>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose>(nullptr, ___internal_method, transform);
}
inline ::GlobalNamespace::RecPlayBehaviour* GlobalNamespace::RecPlayBehaviour::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::RecPlayBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecPlayBehaviour::RecPlayBehaviour() {}

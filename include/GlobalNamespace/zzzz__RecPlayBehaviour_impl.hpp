#pragma once
// IWYU pragma private; include "GlobalNamespace/RecPlayBehaviour.hpp"
#include "BeatSaber/RecPlay/zzzz__PoseNoise_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__RecPlayBehaviour_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseCapturer_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseFrames_def.hpp"
#include "BeatSaber/RecPlay/zzzz__PlayerPoseSampler_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapCallbacksController_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapObjectSpawnController_def.hpp"
#include "GlobalNamespace/zzzz__GameplayCoreSceneSetupData_def.hpp"
#include "GlobalNamespace/zzzz__PlayerTransforms_def.hpp"
#include "GlobalNamespace/zzzz__PlayerVRControllersManager_def.hpp"
#include "GlobalNamespace/zzzz__RecPlayBehaviour_def.hpp"
#include "GlobalNamespace/zzzz__VRCenterAdjust_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour_State._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour_State::*)()>(&::GlobalNamespace::RecPlayBehaviour_State::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5709c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour_State*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::RecPlayBehaviour_State::__cordl_internal_get_recording() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recording;
}
constexpr bool const& GlobalNamespace::RecPlayBehaviour_State::__cordl_internal_get_recording() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___recording;
}
constexpr void GlobalNamespace::RecPlayBehaviour_State::__cordl_internal_set_recording(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___recording = value;
}
constexpr bool& GlobalNamespace::RecPlayBehaviour_State::__cordl_internal_get_playback() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playback;
}
constexpr bool const& GlobalNamespace::RecPlayBehaviour_State::__cordl_internal_get_playback() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___playback;
}
constexpr void GlobalNamespace::RecPlayBehaviour_State::__cordl_internal_set_playback(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___playback = value;
}
inline void GlobalNamespace::RecPlayBehaviour_State::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour_State*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::RecPlayBehaviour_State* GlobalNamespace::RecPlayBehaviour_State::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecPlayBehaviour_State*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecPlayBehaviour_State::RecPlayBehaviour_State() {}
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)(
    ::GlobalNamespace::GameplayCoreSceneSetupData*, ::GlobalNamespace::BeatmapObjectSpawnController*)>(&::GlobalNamespace::RecPlayBehaviour::Init)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5708d30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectSpawnController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Play
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::Play)> {
  constexpr static std::size_t size = 0x304;
  constexpr static std::size_t addrs = 0x570929c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Play",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Record
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::Record)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5709604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Record",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.SaveRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::SaveRecording)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5709734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "SaveRecording",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Configure
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::Configure)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x5709890;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Configure",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.CleanUp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::CleanUp)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x5709a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "CleanUp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::Update)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5709b34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.LateUpdate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::LateUpdate)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5709b5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "LateUpdate",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.OnDisable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::OnDisable)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5709b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "OnDisable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::OnDestroy)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5709b70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "OnDestroy",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.CreateRecordingPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::BeatmapKey)>(&::GlobalNamespace::RecPlayBehaviour::CreateRecordingPath)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x5708e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "CreateRecordingPath", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.CreateAutoLevelRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::RecPlay::PlayerPoseFrames (*)(
    ::GlobalNamespace::GameplayCoreSceneSetupData*, ::GlobalNamespace::BeatmapObjectSpawnController*)>(&::GlobalNamespace::RecPlayBehaviour::CreateAutoLevelRecording)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x570913c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "CreateAutoLevelRecording", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectSpawnController*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.LoadLevelRecording
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::BeatSaber::RecPlay::PlayerPoseFrames (*)(::StringW)>(&::GlobalNamespace::RecPlayBehaviour::LoadLevelRecording)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x5708fd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "LoadLevelRecording", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour.SavePlayerPoseFrames
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::StringW, ::ByRef<::BeatSaber::RecPlay::PlayerPoseFrames>)>(
    &::GlobalNamespace::RecPlayBehaviour::SavePlayerPoseFrames)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x57097c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "SavePlayerPoseFrames", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::RecPlay::PlayerPoseFrames>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::RecPlayBehaviour::*)()>(&::GlobalNamespace::RecPlayBehaviour::_ctor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5709b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour._Play_g__ExtractLocalPose_14_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*)>(
    &::GlobalNamespace::RecPlayBehaviour::_Play_g__ExtractLocalPose_14_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x57095a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "<Play>g__ExtractLocalPose|14_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::RecPlayBehaviour._Record_g__ExtractGlobalPose_15_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Pose (*)(::UnityEngine::Transform*)>(
    &::GlobalNamespace::RecPlayBehaviour::_Record_g__ExtractGlobalPose_15_0)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x57096d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "<Record>g__ExtractGlobalPose|15_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____beatmapCallbacksController)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerTransforms)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____playerControllers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____vrCenterAdjust)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____hmdCamera)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::RecPlayBehaviour_State*& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr ::GlobalNamespace::RecPlayBehaviour_State* const& GlobalNamespace::RecPlayBehaviour::__cordl_internal_get__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____state;
}
constexpr void GlobalNamespace::RecPlayBehaviour::__cordl_internal_set__state(::GlobalNamespace::RecPlayBehaviour_State* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____state)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____capturer)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sampler)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____recodingFilePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Init", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectSpawnController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, sceneSetup, beatmapSpawnerController);
}
inline void GlobalNamespace::RecPlayBehaviour::Play() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Play",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::Record() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Record",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::SaveRecording() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "SaveRecording",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::Configure() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Configure",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::CleanUp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "CleanUp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::LateUpdate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "LateUpdate",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::OnDisable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "OnDisable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::RecPlayBehaviour::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "OnDestroy",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::RecPlayBehaviour::CreateRecordingPath(::GlobalNamespace::BeatmapKey key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "CreateRecordingPath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, key);
}
inline ::BeatSaber::RecPlay::PlayerPoseFrames GlobalNamespace::RecPlayBehaviour::CreateAutoLevelRecording(::GlobalNamespace::GameplayCoreSceneSetupData* sceneSetup,
                                                                                                          ::GlobalNamespace::BeatmapObjectSpawnController* beatmapSpawnerController) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "CreateAutoLevelRecording", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::GameplayCoreSceneSetupData*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapObjectSpawnController*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PlayerPoseFrames, false>(nullptr, ___internal_method, sceneSetup, beatmapSpawnerController);
}
inline ::BeatSaber::RecPlay::PlayerPoseFrames GlobalNamespace::RecPlayBehaviour::LoadLevelRecording(::StringW path) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "LoadLevelRecording", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::BeatSaber::RecPlay::PlayerPoseFrames, false>(nullptr, ___internal_method, path);
}
inline void GlobalNamespace::RecPlayBehaviour::SavePlayerPoseFrames(::StringW path, ::ByRef<::BeatSaber::RecPlay::PlayerPoseFrames> frames) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "SavePlayerPoseFrames", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::BeatSaber::RecPlay::PlayerPoseFrames>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, path, frames);
}
inline void GlobalNamespace::RecPlayBehaviour::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Pose GlobalNamespace::RecPlayBehaviour::_Play_g__ExtractLocalPose_14_0(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "<Play>g__ExtractLocalPose|14_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, transform);
}
inline ::UnityEngine::Pose GlobalNamespace::RecPlayBehaviour::_Record_g__ExtractGlobalPose_15_0(::UnityEngine::Transform* transform) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::RecPlayBehaviour*>::get(), "<Record>g__ExtractGlobalPose|15_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Pose, false>(nullptr, ___internal_method, transform);
}
inline ::GlobalNamespace::RecPlayBehaviour* GlobalNamespace::RecPlayBehaviour::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::RecPlayBehaviour*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::RecPlayBehaviour::RecPlayBehaviour() {}

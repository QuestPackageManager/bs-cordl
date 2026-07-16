#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRExternalComposition.hpp"
#include "GlobalNamespace/zzzz__OVRComposition_impl.hpp"
#include "UnityEngine/zzzz__RenderTexture_impl.hpp"
#include "GlobalNamespace/zzzz__OVRExternalComposition_def.hpp"
#include "GlobalNamespace/zzzz__OVRMRAudioFilter_def.hpp"
#include "GlobalNamespace/zzzz__OVRManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRMixedRealityCaptureConfiguration_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/zzzz__AudioListener_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.CompositionMethod
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRManager_CompositionMethod (::GlobalNamespace::OVRExternalComposition::*)()>(
    &::GlobalNamespace::OVRExternalComposition::CompositionMethod)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5df22d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { ::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&::GlobalNamespace::OVRExternalComposition::_ctor)> {
  constexpr static std::size_t size = 0x618;
  constexpr static std::size_t addrs = 0x5df22e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(),
            { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.RefreshCameraObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*)>(&::GlobalNamespace::OVRExternalComposition::RefreshCameraObjects)> {
  constexpr static std::size_t size = 0xb90;
  constexpr static std::size_t addrs = 0x5df28f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "RefreshCameraObjects",
                                                                                                          {},
                                                                                                          { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                                                            ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.RefreshAudioFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)(::UnityEngine::Camera*)>(&::GlobalNamespace::OVRExternalComposition::RefreshAudioFilter)> {
  constexpr static std::size_t size = 0x5fc;
  constexpr static std::size_t addrs = 0x5df3488;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "RefreshAudioFilter", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.CastMrcFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRExternalComposition::*)(int32_t)>(&::GlobalNamespace::OVRExternalComposition::CastMrcFrame)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x5df3be0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "CastMrcFrame", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.SetCameraTargetTexture
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)(int32_t)>(&::GlobalNamespace::OVRExternalComposition::SetCameraTargetTexture)> {
  constexpr static std::size_t size = 0x1cc;
  constexpr static std::size_t addrs = 0x5df4014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "SetCameraTargetTexture", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Camera*, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration*, ::GlobalNamespace::OVRManager_TrackingOrigin)>(
    &::GlobalNamespace::OVRExternalComposition::Update)> {
  constexpr static std::size_t size = 0xcf0;
  constexpr static std::size_t addrs = 0x5df41e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { ::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.CleanupAudioFilter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)()>(&::GlobalNamespace::OVRExternalComposition::CleanupAudioFilter)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x5df3a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "CleanupAudioFilter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.Cleanup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)()>(&::GlobalNamespace::OVRExternalComposition::Cleanup)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x5df4ed0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { ::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.CacheAudioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)(::ArrayW<float_t>, int32_t)>(&::GlobalNamespace::OVRExternalComposition::CacheAudioData)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5df50f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "CacheAudioData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.GetAndResetAudioData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)(::by_ref<::ArrayW<float_t>>, ::by_ref<int32_t>, ::by_ref<int32_t>)>(
    &::GlobalNamespace::OVRExternalComposition::GetAndResetAudioData)> {
  constexpr static std::size_t size = 0x1fc;
  constexpr static std::size_t addrs = 0x5df3e18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(),
                                         { "GetAndResetAudioData", {}, { ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRExternalComposition.DisplayRefreshRateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRExternalComposition::*)(float_t, float_t)>(&::GlobalNamespace::OVRExternalComposition::DisplayRefreshRateChanged)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5df5254;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(),
                                                                                           { "DisplayRefreshRateChanged", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_previousMainCameraObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousMainCameraObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_previousMainCameraObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___previousMainCameraObject;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_previousMainCameraObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___previousMainCameraObject = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_foregroundCameraGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___foregroundCameraGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_foregroundCameraGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___foregroundCameraGameObject;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_foregroundCameraGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___foregroundCameraGameObject = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_foregroundCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___foregroundCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_foregroundCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___foregroundCamera;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_foregroundCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___foregroundCamera = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_backgroundCameraGameObject() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundCameraGameObject;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_backgroundCameraGameObject() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundCameraGameObject;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_backgroundCameraGameObject(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundCameraGameObject = value;
}
constexpr ::UnityW<::UnityEngine::Camera>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_backgroundCamera() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundCamera;
}
constexpr ::UnityW<::UnityEngine::Camera> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_backgroundCamera() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___backgroundCamera;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_backgroundCamera(::UnityW<::UnityEngine::Camera> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___backgroundCamera = value;
}
constexpr bool& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_skipFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipFrame;
}
constexpr bool const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_skipFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___skipFrame;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_skipFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___skipFrame = value;
}
constexpr float_t& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_fpsThreshold() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fpsThreshold;
}
constexpr float_t const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_fpsThreshold() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fpsThreshold;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_fpsThreshold(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fpsThreshold = value;
}
constexpr bool& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_isFrameSkipped() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFrameSkipped;
}
constexpr bool const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_isFrameSkipped() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFrameSkipped;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_isFrameSkipped(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFrameSkipped = value;
}
constexpr bool& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_renderCombinedFrame() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderCombinedFrame;
}
constexpr bool const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_renderCombinedFrame() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___renderCombinedFrame;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_renderCombinedFrame(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___renderCombinedFrame = value;
}
constexpr ::UnityW<::UnityEngine::AudioListener>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_audioListener() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioListener;
}
constexpr ::UnityW<::UnityEngine::AudioListener> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_audioListener() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioListener;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_audioListener(::UnityW<::UnityEngine::AudioListener> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioListener = value;
}
constexpr ::UnityW<::GlobalNamespace::OVRMRAudioFilter>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_audioFilter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioFilter;
}
constexpr ::UnityW<::GlobalNamespace::OVRMRAudioFilter> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_audioFilter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioFilter;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_audioFilter(::UnityW<::GlobalNamespace::OVRMRAudioFilter> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioFilter = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_mrcRenderTextureArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mrcRenderTextureArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_mrcRenderTextureArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mrcRenderTextureArray;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_mrcRenderTextureArray(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mrcRenderTextureArray = value;
}
constexpr int32_t& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_frameIndex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameIndex;
}
constexpr int32_t const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_frameIndex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___frameIndex;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_frameIndex(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___frameIndex = value;
}
constexpr int32_t& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_lastMrcEncodeFrameSyncId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastMrcEncodeFrameSyncId;
}
constexpr int32_t const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_lastMrcEncodeFrameSyncId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lastMrcEncodeFrameSyncId;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_lastMrcEncodeFrameSyncId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lastMrcEncodeFrameSyncId = value;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_mrcForegroundRenderTextureArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mrcForegroundRenderTextureArray;
}
constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_mrcForegroundRenderTextureArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mrcForegroundRenderTextureArray;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_mrcForegroundRenderTextureArray(::ArrayW<::UnityW<::UnityEngine::RenderTexture>> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mrcForegroundRenderTextureArray = value;
}
constexpr ::ArrayW<double_t>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_cameraPoseTimeArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraPoseTimeArray;
}
constexpr ::ArrayW<double_t> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_cameraPoseTimeArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cameraPoseTimeArray;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_cameraPoseTimeArray(::ArrayW<double_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cameraPoseTimeArray = value;
}
constexpr ::ArrayW<float_t>& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_cachedAudioDataArray() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedAudioDataArray;
}
constexpr ::ArrayW<float_t> const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_cachedAudioDataArray() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedAudioDataArray;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_cachedAudioDataArray(::ArrayW<float_t> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedAudioDataArray = value;
}
constexpr ::System::Object*& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_audioDataLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioDataLock;
}
constexpr ::System::Object* const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_audioDataLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___audioDataLock;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_audioDataLock(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___audioDataLock = value;
}
constexpr ::System::Collections::Generic::List_1<float_t>*& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_cachedAudioData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedAudioData;
}
constexpr ::System::Collections::Generic::List_1<float_t>* const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_cachedAudioData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedAudioData;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_cachedAudioData(::System::Collections::Generic::List_1<float_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedAudioData = value;
}
constexpr int32_t& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_cachedChannels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedChannels;
}
constexpr int32_t const& GlobalNamespace::OVRExternalComposition::__cordl_internal_get_cachedChannels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cachedChannels;
}
constexpr void GlobalNamespace::OVRExternalComposition::__cordl_internal_set_cachedChannels(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cachedChannels = value;
}
inline ::GlobalNamespace::OVRManager_CompositionMethod GlobalNamespace::OVRExternalComposition::CompositionMethod() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRManager_CompositionMethod>(this, ___internal_method);
}
inline void GlobalNamespace::OVRExternalComposition::_ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera,
                                                           ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(),
          { ".ctor", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Camera*>(), ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentObject, mainCamera, configuration);
}
inline void GlobalNamespace::OVRExternalComposition::RefreshCameraObjects(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera,
                                                                          ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "RefreshCameraObjects",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::Camera*>(),
                                                                                                                 ::i2c::type_of<::GlobalNamespace::OVRMixedRealityCaptureConfiguration*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, parentObject, mainCamera, configuration);
}
inline void GlobalNamespace::OVRExternalComposition::RefreshAudioFilter(::UnityEngine::Camera* mainCamera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "RefreshAudioFilter", {}, { ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, mainCamera);
}
inline int32_t GlobalNamespace::OVRExternalComposition::CastMrcFrame(int32_t castTextureIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "CastMrcFrame", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method, castTextureIndex);
}
inline void GlobalNamespace::OVRExternalComposition::SetCameraTargetTexture(int32_t drawTextureIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "SetCameraTargetTexture", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, drawTextureIndex);
}
inline void GlobalNamespace::OVRExternalComposition::Update(::UnityEngine::GameObject* gameObject, ::UnityEngine::Camera* mainCamera,
                                                            ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration, ::GlobalNamespace::OVRManager_TrackingOrigin trackingOrigin) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, gameObject, mainCamera, configuration, trackingOrigin);
}
inline void GlobalNamespace::OVRExternalComposition::CleanupAudioFilter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "CleanupAudioFilter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRExternalComposition::Cleanup() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRExternalComposition::CacheAudioData(::ArrayW<float_t> data, int32_t channels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "CacheAudioData", {}, { ::i2c::type_of<::ArrayW<float_t>>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data, channels);
}
inline void GlobalNamespace::OVRExternalComposition::GetAndResetAudioData(::by_ref<::ArrayW<float_t>> audioData, ::by_ref<int32_t> audioFrames, ::by_ref<int32_t> channels) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(),
                                       { "GetAndResetAudioData", {}, { ::i2c::type_of<::by_ref<::ArrayW<float_t>>>(), ::i2c::type_of<::by_ref<int32_t>>(), ::i2c::type_of<::by_ref<int32_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, audioData, audioFrames, channels);
}
inline void GlobalNamespace::OVRExternalComposition::DisplayRefreshRateChanged(float_t fromRefreshRate, float_t toRefreshRate) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRExternalComposition*>(), { "DisplayRefreshRateChanged", {}, { ::i2c::type_of<float_t>(), ::i2c::type_of<float_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, fromRefreshRate, toRefreshRate);
}
inline ::GlobalNamespace::OVRExternalComposition* GlobalNamespace::OVRExternalComposition::New_ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera,
                                                                                                    ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRExternalComposition*>(parentObject, mainCamera, configuration));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRExternalComposition::OVRExternalComposition() {}

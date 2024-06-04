#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRExternalComposition.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRComposition_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRExternalComposition)
namespace GlobalNamespace {
class OVRMRAudioFilter;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace GlobalNamespace {
struct __OVRManager__CompositionMethod;
}
namespace GlobalNamespace {
struct __OVRManager__TrackingOrigin;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
class Object;
}
namespace UnityEngine {
class AudioListener;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class GameObject;
}
namespace UnityEngine {
class RenderTexture;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRExternalComposition;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::OVRExternalComposition);
// Type: ::OVRExternalComposition
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 196, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::OVRExternalComposition*
class CORDL_TYPE OVRExternalComposition : public ::GlobalNamespace::OVRComposition {
public:
  // Declarations
  /// @brief Field audioDataLock, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get_audioDataLock, put = __cordl_internal_set_audioDataLock))::System::Object* audioDataLock;

  /// @brief Field audioFilter, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_audioFilter, put = __cordl_internal_set_audioFilter))::UnityW<::GlobalNamespace::OVRMRAudioFilter> audioFilter;

  /// @brief Field audioListener, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_audioListener, put = __cordl_internal_set_audioListener))::UnityW<::UnityEngine::AudioListener> audioListener;

  /// @brief Field backgroundCamera, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundCamera, put = __cordl_internal_set_backgroundCamera))::UnityW<::UnityEngine::Camera> backgroundCamera;

  /// @brief Field backgroundCameraGameObject, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_backgroundCameraGameObject, put = __cordl_internal_set_backgroundCameraGameObject))::UnityW<::UnityEngine::GameObject> backgroundCameraGameObject;

  /// @brief Field cachedAudioData, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedAudioData, put = __cordl_internal_set_cachedAudioData))::System::Collections::Generic::List_1<float_t>* cachedAudioData;

  /// @brief Field cachedAudioDataArray, offset 0xa8, size 0x8
  __declspec(property(get = __cordl_internal_get_cachedAudioDataArray, put = __cordl_internal_set_cachedAudioDataArray))::ArrayW<float_t, ::Array<float_t>*> cachedAudioDataArray;

  /// @brief Field cachedChannels, offset 0xc0, size 0x4
  __declspec(property(get = __cordl_internal_get_cachedChannels, put = __cordl_internal_set_cachedChannels)) int32_t cachedChannels;

  /// @brief Field cameraPoseTimeArray, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_cameraPoseTimeArray, put = __cordl_internal_set_cameraPoseTimeArray))::ArrayW<double_t, ::Array<double_t>*> cameraPoseTimeArray;

  /// @brief Field foregroundCamera, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_foregroundCamera, put = __cordl_internal_set_foregroundCamera))::UnityW<::UnityEngine::Camera> foregroundCamera;

  /// @brief Field foregroundCameraGameObject, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_foregroundCameraGameObject, put = __cordl_internal_set_foregroundCameraGameObject))::UnityW<::UnityEngine::GameObject> foregroundCameraGameObject;

  /// @brief Field fpsThreshold, offset 0x6c, size 0x4
  __declspec(property(get = __cordl_internal_get_fpsThreshold, put = __cordl_internal_set_fpsThreshold)) float_t fpsThreshold;

  /// @brief Field frameIndex, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get_frameIndex, put = __cordl_internal_set_frameIndex)) int32_t frameIndex;

  /// @brief Field isFrameSkipped, offset 0x70, size 0x1
  __declspec(property(get = __cordl_internal_get_isFrameSkipped, put = __cordl_internal_set_isFrameSkipped)) bool isFrameSkipped;

  /// @brief Field lastMrcEncodeFrameSyncId, offset 0x94, size 0x4
  __declspec(property(get = __cordl_internal_get_lastMrcEncodeFrameSyncId, put = __cordl_internal_set_lastMrcEncodeFrameSyncId)) int32_t lastMrcEncodeFrameSyncId;

  /// @brief Field mrcForegroundRenderTextureArray, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get_mrcForegroundRenderTextureArray,
      put = __cordl_internal_set_mrcForegroundRenderTextureArray))::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> mrcForegroundRenderTextureArray;

  /// @brief Field mrcRenderTextureArray, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_mrcRenderTextureArray,
                      put = __cordl_internal_set_mrcRenderTextureArray))::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> mrcRenderTextureArray;

  /// @brief Field previousMainCameraObject, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_previousMainCameraObject, put = __cordl_internal_set_previousMainCameraObject))::UnityW<::UnityEngine::GameObject> previousMainCameraObject;

  /// @brief Field renderCombinedFrame, offset 0x71, size 0x1
  __declspec(property(get = __cordl_internal_get_renderCombinedFrame, put = __cordl_internal_set_renderCombinedFrame)) bool renderCombinedFrame;

  /// @brief Field skipFrame, offset 0x68, size 0x1
  __declspec(property(get = __cordl_internal_get_skipFrame, put = __cordl_internal_set_skipFrame)) bool skipFrame;

  /// @brief Method CacheAudioData, addr 0x2b08570, size 0x138, virtual false, abstract: false, final false
  inline void CacheAudioData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels);

  /// @brief Method CastMrcFrame, addr 0x2b07020, size 0x200, virtual false, abstract: false, final false
  inline int32_t CastMrcFrame(int32_t castTextureIndex);

  /// @brief Method Cleanup, addr 0x2b0839c, size 0x1d4, virtual true, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CleanupAudioFilter, addr 0x2b06eec, size 0x134, virtual false, abstract: false, final false
  inline void CleanupAudioFilter();

  /// @brief Method CompositionMethod, addr 0x2b05760, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__OVRManager__CompositionMethod CompositionMethod();

  /// @brief Method DisplayRefreshRateChanged, addr 0x2b086a8, size 0x14, virtual false, abstract: false, final false
  inline void DisplayRefreshRateChanged(float_t fromRefreshRate, float_t toRefreshRate);

  /// @brief Method GetAndResetAudioData, addr 0x2b07220, size 0x1dc, virtual false, abstract: false, final false
  inline void GetAndResetAudioData(ByRef<::ArrayW<float_t, ::Array<float_t>*>> audioData, ByRef<int32_t> audioFrames, ByRef<int32_t> channels);

  static inline ::GlobalNamespace::OVRExternalComposition* New_ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera,
                                                                    ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method RefreshAudioFilter, addr 0x2b0693c, size 0x5b0, virtual false, abstract: false, final false
  inline void RefreshAudioFilter(::UnityEngine::Camera* mainCamera);

  /// @brief Method RefreshCameraObjects, addr 0x2b05d48, size 0xbf4, virtual false, abstract: false, final false
  inline void RefreshCameraObjects(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method SetCameraTargetTexture, addr 0x2b073fc, size 0x1e0, virtual false, abstract: false, final false
  inline void SetCameraTargetTexture(int32_t drawTextureIndex);

  /// @brief Method Update, addr 0x2b075dc, size 0xcac, virtual true, abstract: false, final false
  inline void Update(::UnityEngine::GameObject* gameObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration,
                     ::GlobalNamespace::__OVRManager__TrackingOrigin trackingOrigin);

  constexpr ::System::Object*& __cordl_internal_get_audioDataLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __cordl_internal_get_audioDataLock() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMRAudioFilter> const& __cordl_internal_get_audioFilter() const;

  constexpr ::UnityW<::GlobalNamespace::OVRMRAudioFilter>& __cordl_internal_get_audioFilter();

  constexpr ::UnityW<::UnityEngine::AudioListener> const& __cordl_internal_get_audioListener() const;

  constexpr ::UnityW<::UnityEngine::AudioListener>& __cordl_internal_get_audioListener();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_backgroundCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_backgroundCamera();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_backgroundCameraGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_backgroundCameraGameObject();

  constexpr ::System::Collections::Generic::List_1<float_t>*& __cordl_internal_get_cachedAudioData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __cordl_internal_get_cachedAudioData() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __cordl_internal_get_cachedAudioDataArray() const;

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __cordl_internal_get_cachedAudioDataArray();

  constexpr int32_t const& __cordl_internal_get_cachedChannels() const;

  constexpr int32_t& __cordl_internal_get_cachedChannels();

  constexpr ::ArrayW<double_t, ::Array<double_t>*> const& __cordl_internal_get_cameraPoseTimeArray() const;

  constexpr ::ArrayW<double_t, ::Array<double_t>*>& __cordl_internal_get_cameraPoseTimeArray();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_foregroundCamera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_foregroundCamera();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_foregroundCameraGameObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_foregroundCameraGameObject();

  constexpr float_t const& __cordl_internal_get_fpsThreshold() const;

  constexpr float_t& __cordl_internal_get_fpsThreshold();

  constexpr int32_t const& __cordl_internal_get_frameIndex() const;

  constexpr int32_t& __cordl_internal_get_frameIndex();

  constexpr bool const& __cordl_internal_get_isFrameSkipped() const;

  constexpr bool& __cordl_internal_get_isFrameSkipped();

  constexpr int32_t const& __cordl_internal_get_lastMrcEncodeFrameSyncId() const;

  constexpr int32_t& __cordl_internal_get_lastMrcEncodeFrameSyncId();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get_mrcForegroundRenderTextureArray() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get_mrcForegroundRenderTextureArray();

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> const& __cordl_internal_get_mrcRenderTextureArray() const;

  constexpr ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*>& __cordl_internal_get_mrcRenderTextureArray();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get_previousMainCameraObject() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get_previousMainCameraObject();

  constexpr bool const& __cordl_internal_get_renderCombinedFrame() const;

  constexpr bool& __cordl_internal_get_renderCombinedFrame();

  constexpr bool const& __cordl_internal_get_skipFrame() const;

  constexpr bool& __cordl_internal_get_skipFrame();

  constexpr void __cordl_internal_set_audioDataLock(::System::Object* value);

  constexpr void __cordl_internal_set_audioFilter(::UnityW<::GlobalNamespace::OVRMRAudioFilter> value);

  constexpr void __cordl_internal_set_audioListener(::UnityW<::UnityEngine::AudioListener> value);

  constexpr void __cordl_internal_set_backgroundCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_backgroundCameraGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_cachedAudioData(::System::Collections::Generic::List_1<float_t>* value);

  constexpr void __cordl_internal_set_cachedAudioDataArray(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr void __cordl_internal_set_cachedChannels(int32_t value);

  constexpr void __cordl_internal_set_cameraPoseTimeArray(::ArrayW<double_t, ::Array<double_t>*> value);

  constexpr void __cordl_internal_set_foregroundCamera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_foregroundCameraGameObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_fpsThreshold(float_t value);

  constexpr void __cordl_internal_set_frameIndex(int32_t value);

  constexpr void __cordl_internal_set_isFrameSkipped(bool value);

  constexpr void __cordl_internal_set_lastMrcEncodeFrameSyncId(int32_t value);

  constexpr void __cordl_internal_set_mrcForegroundRenderTextureArray(::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> value);

  constexpr void __cordl_internal_set_mrcRenderTextureArray(::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> value);

  constexpr void __cordl_internal_set_previousMainCameraObject(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set_renderCombinedFrame(bool value);

  constexpr void __cordl_internal_set_skipFrame(bool value);

  /// @brief Method .ctor, addr 0x2b05768, size 0x590, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRExternalComposition();

public:
  // Ctor Parameters [CppParam { name: "", ty: "OVRExternalComposition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRExternalComposition(OVRExternalComposition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRExternalComposition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRExternalComposition(OVRExternalComposition const&) = delete;

  /// @brief Field previousMainCameraObject, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___previousMainCameraObject;

  /// @brief Field foregroundCameraGameObject, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___foregroundCameraGameObject;

  /// @brief Field foregroundCamera, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___foregroundCamera;

  /// @brief Field backgroundCameraGameObject, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ___backgroundCameraGameObject;

  /// @brief Field backgroundCamera, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___backgroundCamera;

  /// @brief Field skipFrame, offset: 0x68, size: 0x1, def value: None
  bool ___skipFrame;

  /// @brief Field fpsThreshold, offset: 0x6c, size: 0x4, def value: None
  float_t ___fpsThreshold;

  /// @brief Field isFrameSkipped, offset: 0x70, size: 0x1, def value: None
  bool ___isFrameSkipped;

  /// @brief Field renderCombinedFrame, offset: 0x71, size: 0x1, def value: None
  bool ___renderCombinedFrame;

  /// @brief Field audioListener, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AudioListener> ___audioListener;

  /// @brief Field audioFilter, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::OVRMRAudioFilter> ___audioFilter;

  /// @brief Field mrcRenderTextureArray, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> ___mrcRenderTextureArray;

  /// @brief Field frameIndex, offset: 0x90, size: 0x4, def value: None
  int32_t ___frameIndex;

  /// @brief Field lastMrcEncodeFrameSyncId, offset: 0x94, size: 0x4, def value: None
  int32_t ___lastMrcEncodeFrameSyncId;

  /// @brief Field mrcForegroundRenderTextureArray, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityW<::UnityEngine::RenderTexture>, ::Array<::UnityW<::UnityEngine::RenderTexture>>*> ___mrcForegroundRenderTextureArray;

  /// @brief Field cameraPoseTimeArray, offset: 0xa0, size: 0x8, def value: None
  ::ArrayW<double_t, ::Array<double_t>*> ___cameraPoseTimeArray;

  /// @brief Field cachedAudioDataArray, offset: 0xa8, size: 0x8, def value: None
  ::ArrayW<float_t, ::Array<float_t>*> ___cachedAudioDataArray;

  /// @brief Field audioDataLock, offset: 0xb0, size: 0x8, def value: None
  ::System::Object* ___audioDataLock;

  /// @brief Field cachedAudioData, offset: 0xb8, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<float_t>* ___cachedAudioData;

  /// @brief Field cachedChannels, offset: 0xc0, size: 0x4, def value: None
  int32_t ___cachedChannels;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRExternalComposition, 0xc8>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___previousMainCameraObject) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___foregroundCameraGameObject) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___foregroundCamera) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___backgroundCameraGameObject) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___backgroundCamera) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___skipFrame) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___fpsThreshold) == 0x6c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___isFrameSkipped) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___renderCombinedFrame) == 0x71, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___audioListener) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___audioFilter) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___mrcRenderTextureArray) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___frameIndex) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___lastMrcEncodeFrameSyncId) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___mrcForegroundRenderTextureArray) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___cameraPoseTimeArray) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___cachedAudioDataArray) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___audioDataLock) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___cachedAudioData) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::OVRExternalComposition, ___cachedChannels) == 0xc0, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::OVRExternalComposition);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRExternalComposition*, "", "OVRExternalComposition");

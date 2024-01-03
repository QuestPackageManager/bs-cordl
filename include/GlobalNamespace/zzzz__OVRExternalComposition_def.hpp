#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__OVRComposition_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRExternalComposition)
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class OVRMixedRealityCaptureConfiguration;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class RenderTexture;
}
namespace GlobalNamespace {
struct __OVRManager__TrackingOrigin;
}
namespace UnityEngine {
class AudioListener;
}
namespace GlobalNamespace {
class OVRMRAudioFilter;
}
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace GlobalNamespace {
struct __OVRManager__CompositionMethod;
}
namespace System {
class Object;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7504))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7507))
// CS Name: ::OVRExternalComposition*
class CORDL_TYPE OVRExternalComposition : public ::GlobalNamespace::OVRComposition {
public:
  // Declarations
  /// @brief Field previousMainCameraObject, offset 0x40, size 0x8
  __declspec(property(get = __get_previousMainCameraObject, put = __set_previousMainCameraObject))::UnityEngine::GameObject* previousMainCameraObject;

  /// @brief Field foregroundCameraGameObject, offset 0x48, size 0x8
  __declspec(property(get = __get_foregroundCameraGameObject, put = __set_foregroundCameraGameObject))::UnityEngine::GameObject* foregroundCameraGameObject;

  /// @brief Field foregroundCamera, offset 0x50, size 0x8
  __declspec(property(get = __get_foregroundCamera, put = __set_foregroundCamera))::UnityEngine::Camera* foregroundCamera;

  /// @brief Field backgroundCameraGameObject, offset 0x58, size 0x8
  __declspec(property(get = __get_backgroundCameraGameObject, put = __set_backgroundCameraGameObject))::UnityEngine::GameObject* backgroundCameraGameObject;

  /// @brief Field backgroundCamera, offset 0x60, size 0x8
  __declspec(property(get = __get_backgroundCamera, put = __set_backgroundCamera))::UnityEngine::Camera* backgroundCamera;

  /// @brief Field skipFrame, offset 0x68, size 0x1
  __declspec(property(get = __get_skipFrame, put = __set_skipFrame)) bool skipFrame;

  /// @brief Field fpsThreshold, offset 0x6c, size 0x4
  __declspec(property(get = __get_fpsThreshold, put = __set_fpsThreshold)) float_t fpsThreshold;

  /// @brief Field isFrameSkipped, offset 0x70, size 0x1
  __declspec(property(get = __get_isFrameSkipped, put = __set_isFrameSkipped)) bool isFrameSkipped;

  /// @brief Field renderCombinedFrame, offset 0x71, size 0x1
  __declspec(property(get = __get_renderCombinedFrame, put = __set_renderCombinedFrame)) bool renderCombinedFrame;

  /// @brief Field audioListener, offset 0x78, size 0x8
  __declspec(property(get = __get_audioListener, put = __set_audioListener))::UnityEngine::AudioListener* audioListener;

  /// @brief Field audioFilter, offset 0x80, size 0x8
  __declspec(property(get = __get_audioFilter, put = __set_audioFilter))::GlobalNamespace::OVRMRAudioFilter* audioFilter;

  /// @brief Field mrcRenderTextureArray, offset 0x88, size 0x8
  __declspec(property(get = __get_mrcRenderTextureArray, put = __set_mrcRenderTextureArray))::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> mrcRenderTextureArray;

  /// @brief Field frameIndex, offset 0x90, size 0x4
  __declspec(property(get = __get_frameIndex, put = __set_frameIndex)) int32_t frameIndex;

  /// @brief Field lastMrcEncodeFrameSyncId, offset 0x94, size 0x4
  __declspec(property(get = __get_lastMrcEncodeFrameSyncId, put = __set_lastMrcEncodeFrameSyncId)) int32_t lastMrcEncodeFrameSyncId;

  /// @brief Field mrcForegroundRenderTextureArray, offset 0x98, size 0x8
  __declspec(property(get = __get_mrcForegroundRenderTextureArray,
                      put = __set_mrcForegroundRenderTextureArray))::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> mrcForegroundRenderTextureArray;

  /// @brief Field cameraPoseTimeArray, offset 0xa0, size 0x8
  __declspec(property(get = __get_cameraPoseTimeArray, put = __set_cameraPoseTimeArray))::ArrayW<double_t, ::Array<double_t>*> cameraPoseTimeArray;

  /// @brief Field cachedAudioDataArray, offset 0xa8, size 0x8
  __declspec(property(get = __get_cachedAudioDataArray, put = __set_cachedAudioDataArray))::ArrayW<float_t, ::Array<float_t>*> cachedAudioDataArray;

  /// @brief Field audioDataLock, offset 0xb0, size 0x8
  __declspec(property(get = __get_audioDataLock, put = __set_audioDataLock))::System::Object* audioDataLock;

  /// @brief Field cachedAudioData, offset 0xb8, size 0x8
  __declspec(property(get = __get_cachedAudioData, put = __set_cachedAudioData))::System::Collections::Generic::List_1<float_t>* cachedAudioData;

  /// @brief Field cachedChannels, offset 0xc0, size 0x4
  __declspec(property(get = __get_cachedChannels, put = __set_cachedChannels)) int32_t cachedChannels;

  constexpr ::UnityEngine::GameObject*& __get_previousMainCameraObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_previousMainCameraObject() const;

  constexpr void __set_previousMainCameraObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::GameObject*& __get_foregroundCameraGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_foregroundCameraGameObject() const;

  constexpr void __set_foregroundCameraGameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::Camera*& __get_foregroundCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get_foregroundCamera() const;

  constexpr void __set_foregroundCamera(::UnityEngine::Camera* value);

  constexpr ::UnityEngine::GameObject*& __get_backgroundCameraGameObject();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get_backgroundCameraGameObject() const;

  constexpr void __set_backgroundCameraGameObject(::UnityEngine::GameObject* value);

  constexpr ::UnityEngine::Camera*& __get_backgroundCamera();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::Camera*> const& __get_backgroundCamera() const;

  constexpr void __set_backgroundCamera(::UnityEngine::Camera* value);

  constexpr bool& __get_skipFrame();

  constexpr bool const& __get_skipFrame() const;

  constexpr void __set_skipFrame(bool value);

  constexpr float_t& __get_fpsThreshold();

  constexpr float_t const& __get_fpsThreshold() const;

  constexpr void __set_fpsThreshold(float_t value);

  constexpr bool& __get_isFrameSkipped();

  constexpr bool const& __get_isFrameSkipped() const;

  constexpr void __set_isFrameSkipped(bool value);

  constexpr bool& __get_renderCombinedFrame();

  constexpr bool const& __get_renderCombinedFrame() const;

  constexpr void __set_renderCombinedFrame(bool value);

  constexpr ::UnityEngine::AudioListener*& __get_audioListener();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioListener*> const& __get_audioListener() const;

  constexpr void __set_audioListener(::UnityEngine::AudioListener* value);

  constexpr ::GlobalNamespace::OVRMRAudioFilter*& __get_audioFilter();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::OVRMRAudioFilter*> const& __get_audioFilter() const;

  constexpr void __set_audioFilter(::GlobalNamespace::OVRMRAudioFilter* value);

  constexpr ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*>& __get_mrcRenderTextureArray();

  constexpr ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> const& __get_mrcRenderTextureArray() const;

  constexpr void __set_mrcRenderTextureArray(::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> value);

  constexpr int32_t& __get_frameIndex();

  constexpr int32_t const& __get_frameIndex() const;

  constexpr void __set_frameIndex(int32_t value);

  constexpr int32_t& __get_lastMrcEncodeFrameSyncId();

  constexpr int32_t const& __get_lastMrcEncodeFrameSyncId() const;

  constexpr void __set_lastMrcEncodeFrameSyncId(int32_t value);

  constexpr ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*>& __get_mrcForegroundRenderTextureArray();

  constexpr ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> const& __get_mrcForegroundRenderTextureArray() const;

  constexpr void __set_mrcForegroundRenderTextureArray(::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> value);

  constexpr ::ArrayW<double_t, ::Array<double_t>*>& __get_cameraPoseTimeArray();

  constexpr ::ArrayW<double_t, ::Array<double_t>*> const& __get_cameraPoseTimeArray() const;

  constexpr void __set_cameraPoseTimeArray(::ArrayW<double_t, ::Array<double_t>*> value);

  constexpr ::ArrayW<float_t, ::Array<float_t>*>& __get_cachedAudioDataArray();

  constexpr ::ArrayW<float_t, ::Array<float_t>*> const& __get_cachedAudioDataArray() const;

  constexpr void __set_cachedAudioDataArray(::ArrayW<float_t, ::Array<float_t>*> value);

  constexpr ::System::Object*& __get_audioDataLock();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_audioDataLock() const;

  constexpr void __set_audioDataLock(::System::Object* value);

  constexpr ::System::Collections::Generic::List_1<float_t>*& __get_cachedAudioData();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<float_t>*> const& __get_cachedAudioData() const;

  constexpr void __set_cachedAudioData(::System::Collections::Generic::List_1<float_t>* value);

  constexpr int32_t& __get_cachedChannels();

  constexpr int32_t const& __get_cachedChannels() const;

  constexpr void __set_cachedChannels(int32_t value);

  /// @brief Method CompositionMethod, addr 0x270df20, size 0x8, virtual true, abstract: false, final false
  inline ::GlobalNamespace::__OVRManager__CompositionMethod CompositionMethod();

  static inline ::GlobalNamespace::OVRExternalComposition* New_ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera,
                                                                    ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method .ctor, addr 0x270df28, size 0x590, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method RefreshCameraObjects, addr 0x270e508, size 0xbf4, virtual false, abstract: false, final false
  inline void RefreshCameraObjects(::UnityEngine::GameObject* parentObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration);

  /// @brief Method RefreshAudioFilter, addr 0x270f0fc, size 0x5b0, virtual false, abstract: false, final false
  inline void RefreshAudioFilter(::UnityEngine::Camera* mainCamera);

  /// @brief Method CastMrcFrame, addr 0x270f7e0, size 0x200, virtual false, abstract: false, final false
  inline int32_t CastMrcFrame(int32_t castTextureIndex);

  /// @brief Method SetCameraTargetTexture, addr 0x270fbbc, size 0x1e0, virtual false, abstract: false, final false
  inline void SetCameraTargetTexture(int32_t drawTextureIndex);

  /// @brief Method Update, addr 0x270fd9c, size 0xcac, virtual true, abstract: false, final false
  inline void Update(::UnityEngine::GameObject* gameObject, ::UnityEngine::Camera* mainCamera, ::GlobalNamespace::OVRMixedRealityCaptureConfiguration* configuration,
                     ::GlobalNamespace::__OVRManager__TrackingOrigin trackingOrigin);

  /// @brief Method CleanupAudioFilter, addr 0x270f6ac, size 0x134, virtual false, abstract: false, final false
  inline void CleanupAudioFilter();

  /// @brief Method Cleanup, addr 0x2710b5c, size 0x1d4, virtual true, abstract: false, final false
  inline void Cleanup();

  /// @brief Method CacheAudioData, addr 0x2710d30, size 0x138, virtual false, abstract: false, final false
  inline void CacheAudioData(::ArrayW<float_t, ::Array<float_t>*> data, int32_t channels);

  /// @brief Method GetAndResetAudioData, addr 0x270f9e0, size 0x1dc, virtual false, abstract: false, final false
  inline void GetAndResetAudioData(ByRef<::ArrayW<float_t, ::Array<float_t>*>> audioData, ByRef<int32_t> audioFrames, ByRef<int32_t> channels);

  /// @brief Method DisplayRefreshRateChanged, addr 0x2710e68, size 0x14, virtual false, abstract: false, final false
  inline void DisplayRefreshRateChanged(float_t fromRefreshRate, float_t toRefreshRate);

  // Ctor Parameters [CppParam { name: "", ty: "OVRExternalComposition", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  OVRExternalComposition(OVRExternalComposition&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "OVRExternalComposition", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  OVRExternalComposition(OVRExternalComposition const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRExternalComposition();

public:
  /// @brief Field previousMainCameraObject, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___previousMainCameraObject;

  /// @brief Field foregroundCameraGameObject, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___foregroundCameraGameObject;

  /// @brief Field foregroundCamera, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::Camera* ___foregroundCamera;

  /// @brief Field backgroundCameraGameObject, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::GameObject* ___backgroundCameraGameObject;

  /// @brief Field backgroundCamera, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::Camera* ___backgroundCamera;

  /// @brief Field skipFrame, offset: 0x68, size: 0x1, def value: None
  bool ___skipFrame;

  /// @brief Field fpsThreshold, offset: 0x6c, size: 0x4, def value: None
  float_t ___fpsThreshold;

  /// @brief Field isFrameSkipped, offset: 0x70, size: 0x1, def value: None
  bool ___isFrameSkipped;

  /// @brief Field renderCombinedFrame, offset: 0x71, size: 0x1, def value: None
  bool ___renderCombinedFrame;

  /// @brief Field audioListener, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::AudioListener* ___audioListener;

  /// @brief Field audioFilter, offset: 0x80, size: 0x8, def value: None
  ::GlobalNamespace::OVRMRAudioFilter* ___audioFilter;

  /// @brief Field mrcRenderTextureArray, offset: 0x88, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> ___mrcRenderTextureArray;

  /// @brief Field frameIndex, offset: 0x90, size: 0x4, def value: None
  int32_t ___frameIndex;

  /// @brief Field lastMrcEncodeFrameSyncId, offset: 0x94, size: 0x4, def value: None
  int32_t ___lastMrcEncodeFrameSyncId;

  /// @brief Field mrcForegroundRenderTextureArray, offset: 0x98, size: 0x8, def value: None
  ::ArrayW<::UnityEngine::RenderTexture*, ::Array<::UnityEngine::RenderTexture*>*> ___mrcForegroundRenderTextureArray;

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

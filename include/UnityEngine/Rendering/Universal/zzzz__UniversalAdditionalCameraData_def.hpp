#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/UniversalAdditionalCameraData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingMode_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__AntialiasingQuality_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraOverrideOption_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__CameraRenderType_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__TemporalAA_def.hpp"
#include "UnityEngine/Rendering/Universal/zzzz__VolumeFrameworkUpdateMode_def.hpp"
#include "UnityEngine/zzzz__LayerMask_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Vector4_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(UniversalAdditionalCameraData)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace System {
template <typename T> class Predicate_1;
}
namespace UnityEngine::Rendering::Universal {
struct AntialiasingMode;
}
namespace UnityEngine::Rendering::Universal {
struct AntialiasingQuality;
}
namespace UnityEngine::Rendering::Universal {
struct CameraOverrideOption;
}
namespace UnityEngine::Rendering::Universal {
struct CameraRenderType;
}
namespace UnityEngine::Rendering::Universal {
class MotionVectorsPersistentData;
}
namespace UnityEngine::Rendering::Universal {
class ScriptableRenderer;
}
namespace UnityEngine::Rendering::Universal {
struct TemporalAA_Settings;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData___c;
}
namespace UnityEngine::Rendering::Universal {
class UniversalCameraHistory;
}
namespace UnityEngine::Rendering::Universal {
struct VolumeFrameworkUpdateMode;
}
namespace UnityEngine::Rendering {
class IAdditionalData;
}
namespace UnityEngine::Rendering {
class ICameraHistoryReadAccess;
}
namespace UnityEngine::Rendering {
class VolumeStack;
}
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
class ISerializationCallbackReceiver;
}
namespace UnityEngine {
struct LayerMask;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector4;
}
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData;
}
namespace UnityEngine::Rendering::Universal {
class UniversalAdditionalCameraData___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData);
MARK_REF_PTR_T(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c);
// Dependencies System.Object
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalAdditionalCameraData/<>c
class CORDL_TYPE UniversalAdditionalCameraData___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c* __9;

  /// @brief Field <>9__53_0, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9__53_0, put = setStaticF___9__53_0)) ::System::Predicate_1<::UnityW<::UnityEngine::Camera>>* __9__53_0;

  static inline ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c* New_ctor();

  /// @brief Method <UpdateCameraStack>b__53_0, addr 0x66a9580, size 0x60, virtual false, abstract: false, final false
  inline bool _UpdateCameraStack_b__53_0(::UnityEngine::Camera* cam);

  /// @brief Method .ctor, addr 0x66a957c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c* getStaticF___9();

  static inline ::System::Predicate_1<::UnityW<::UnityEngine::Camera>>* getStaticF___9__53_0();

  static inline void setStaticF___9(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c* value);

  static inline void setStaticF___9__53_0(::System::Predicate_1<::UnityW<::UnityEngine::Camera>>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalAdditionalCameraData___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalAdditionalCameraData___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalAdditionalCameraData___c(UniversalAdditionalCameraData___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalAdditionalCameraData___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalAdditionalCameraData___c(UniversalAdditionalCameraData___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12961 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
// Dependencies UnityEngine.LayerMask, UnityEngine.MonoBehaviour, UnityEngine.Rendering.Universal.AntialiasingMode, UnityEngine.Rendering.Universal.AntialiasingQuality,
// UnityEngine.Rendering.Universal.CameraOverrideOption, UnityEngine.Rendering.Universal.CameraRenderType, UnityEngine.Rendering.Universal.TemporalAA::Settings,
// UnityEngine.Rendering.Universal.VolumeFrameworkUpdateMode, UnityEngine.Vector4
namespace UnityEngine::Rendering::Universal {
// Is value type: false
// CS Name: UnityEngine.Rendering.Universal.UniversalAdditionalCameraData
class CORDL_TYPE UniversalAdditionalCameraData : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using __c = ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c;

  __declspec(property(get = get_allowHDROutput, put = set_allowHDROutput)) bool allowHDROutput;

  __declspec(property(get = get_allowXRRendering, put = set_allowXRRendering)) bool allowXRRendering;

  __declspec(property(get = get_antialiasing, put = set_antialiasing)) ::UnityEngine::Rendering::Universal::AntialiasingMode antialiasing;

  __declspec(property(get = get_antialiasingQuality, put = set_antialiasingQuality)) ::UnityEngine::Rendering::Universal::AntialiasingQuality antialiasingQuality;

  __declspec(property(get = get_camera)) ::UnityW<::UnityEngine::Camera> camera;

  __declspec(property(get = get_cameraStack)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* cameraStack;

  __declspec(property(get = get_clearDepth)) bool clearDepth;

  __declspec(property(get = get_dithering, put = set_dithering)) bool dithering;

  __declspec(property(get = get_history)) ::UnityEngine::Rendering::ICameraHistoryReadAccess* history;

  __declspec(property(get = get_historyManager)) ::UnityEngine::Rendering::Universal::UniversalCameraHistory* historyManager;

  /// @brief Field m_AllowHDROutput, offset 0x5c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowHDROutput, put = __cordl_internal_set_m_AllowHDROutput)) bool m_AllowHDROutput;

  /// @brief Field m_AllowXRRendering, offset 0x5b, size 0x1
  __declspec(property(get = __cordl_internal_get_m_AllowXRRendering, put = __cordl_internal_set_m_AllowXRRendering)) bool m_AllowXRRendering;

  /// @brief Field m_Antialiasing, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Antialiasing, put = __cordl_internal_set_m_Antialiasing)) ::UnityEngine::Rendering::Universal::AntialiasingMode m_Antialiasing;

  /// @brief Field m_AntialiasingQuality, offset 0x54, size 0x4
  __declspec(property(get = __cordl_internal_get_m_AntialiasingQuality,
                      put = __cordl_internal_set_m_AntialiasingQuality)) ::UnityEngine::Rendering::Universal::AntialiasingQuality m_AntialiasingQuality;

  /// @brief Field m_Camera, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Camera, put = __cordl_internal_set_m_Camera)) ::UnityW<::UnityEngine::Camera> m_Camera;

  /// @brief Field m_CameraType, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CameraType, put = __cordl_internal_set_m_CameraType)) ::UnityEngine::Rendering::Universal::CameraRenderType m_CameraType;

  /// @brief Field m_Cameras, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Cameras, put = __cordl_internal_set_m_Cameras)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* m_Cameras;

  /// @brief Field m_ClearDepth, offset 0x5a, size 0x1
  __declspec(property(get = __cordl_internal_get_m_ClearDepth, put = __cordl_internal_set_m_ClearDepth)) bool m_ClearDepth;

  /// @brief Field m_Dithering, offset 0x59, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Dithering, put = __cordl_internal_set_m_Dithering)) bool m_Dithering;

  /// @brief Field m_History, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_History, put = __cordl_internal_set_m_History)) ::UnityEngine::Rendering::Universal::UniversalCameraHistory* m_History;

  /// @brief Field m_MotionVectorsPersistentData, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MotionVectorsPersistentData,
                      put = __cordl_internal_set_m_MotionVectorsPersistentData)) ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* m_MotionVectorsPersistentData;

  /// @brief Field m_RenderPostProcessing, offset 0x4c, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RenderPostProcessing, put = __cordl_internal_set_m_RenderPostProcessing)) bool m_RenderPostProcessing;

  /// @brief Field m_RenderShadows, offset 0x20, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RenderShadows, put = __cordl_internal_set_m_RenderShadows)) bool m_RenderShadows;

  /// @brief Field m_RendererIndex, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RendererIndex, put = __cordl_internal_set_m_RendererIndex)) int32_t m_RendererIndex;

  /// @brief Field m_RequiresColorTexture, offset 0x89, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequiresColorTexture, put = __cordl_internal_set_m_RequiresColorTexture)) bool m_RequiresColorTexture;

  /// @brief Field m_RequiresDepthTexture, offset 0x88, size 0x1
  __declspec(property(get = __cordl_internal_get_m_RequiresDepthTexture, put = __cordl_internal_set_m_RequiresDepthTexture)) bool m_RequiresDepthTexture;

  /// @brief Field m_RequiresDepthTextureOption, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RequiresDepthTextureOption,
                      put = __cordl_internal_set_m_RequiresDepthTextureOption)) ::UnityEngine::Rendering::Universal::CameraOverrideOption m_RequiresDepthTextureOption;

  /// @brief Field m_RequiresOpaqueTextureOption, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get_m_RequiresOpaqueTextureOption,
                      put = __cordl_internal_set_m_RequiresOpaqueTextureOption)) ::UnityEngine::Rendering::Universal::CameraOverrideOption m_RequiresOpaqueTextureOption;

  /// @brief Field m_ScreenCoordScaleBias, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ScreenCoordScaleBias, put = __cordl_internal_set_m_ScreenCoordScaleBias)) ::UnityEngine::Vector4 m_ScreenCoordScaleBias;

  /// @brief Field m_ScreenSizeOverride, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get_m_ScreenSizeOverride, put = __cordl_internal_set_m_ScreenSizeOverride)) ::UnityEngine::Vector4 m_ScreenSizeOverride;

  /// @brief Field m_StopNaN, offset 0x58, size 0x1
  __declspec(property(get = __cordl_internal_get_m_StopNaN, put = __cordl_internal_set_m_StopNaN)) bool m_StopNaN;

  /// @brief Field m_TaaSettings, offset 0xa0, size 0x20
  __declspec(property(get = __cordl_internal_get_m_TaaSettings, put = __cordl_internal_set_m_TaaSettings)) ::UnityEngine::Rendering::Universal::TemporalAA_Settings m_TaaSettings;

  /// @brief Field m_UseScreenCoordOverride, offset 0x5d, size 0x1
  __declspec(property(get = __cordl_internal_get_m_UseScreenCoordOverride, put = __cordl_internal_set_m_UseScreenCoordOverride)) bool m_UseScreenCoordOverride;

  /// @brief Field m_Version, offset 0x8c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Version, put = __cordl_internal_set_m_Version)) float_t m_Version;

  /// @brief Field m_VolumeFrameworkUpdateModeOption, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VolumeFrameworkUpdateModeOption,
                      put = __cordl_internal_set_m_VolumeFrameworkUpdateModeOption)) ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode m_VolumeFrameworkUpdateModeOption;

  /// @brief Field m_VolumeLayerMask, offset 0x3c, size 0x4
  __declspec(property(get = __cordl_internal_get_m_VolumeLayerMask, put = __cordl_internal_set_m_VolumeLayerMask)) ::UnityEngine::LayerMask m_VolumeLayerMask;

  /// @brief Field m_VolumeStack, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumeStack, put = __cordl_internal_set_m_VolumeStack)) ::UnityEngine::Rendering::VolumeStack* m_VolumeStack;

  /// @brief Field m_VolumeTrigger, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_m_VolumeTrigger, put = __cordl_internal_set_m_VolumeTrigger)) ::UnityW<::UnityEngine::Transform> m_VolumeTrigger;

  __declspec(property(get = get_motionVectorsPersistentData)) ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* motionVectorsPersistentData;

  __declspec(property(get = get_renderPostProcessing, put = set_renderPostProcessing)) bool renderPostProcessing;

  __declspec(property(get = get_renderShadows, put = set_renderShadows)) bool renderShadows;

  __declspec(property(get = get_renderType, put = set_renderType)) ::UnityEngine::Rendering::Universal::CameraRenderType renderType;

  __declspec(property(get = get_requiresColorOption, put = set_requiresColorOption)) ::UnityEngine::Rendering::Universal::CameraOverrideOption requiresColorOption;

  __declspec(property(get = get_requiresColorTexture, put = set_requiresColorTexture)) bool requiresColorTexture;

  __declspec(property(get = get_requiresDepthOption, put = set_requiresDepthOption)) ::UnityEngine::Rendering::Universal::CameraOverrideOption requiresDepthOption;

  __declspec(property(get = get_requiresDepthTexture, put = set_requiresDepthTexture)) bool requiresDepthTexture;

  __declspec(property(get = get_requiresVolumeFrameworkUpdate)) bool requiresVolumeFrameworkUpdate;

  __declspec(property(get = get_resetHistory, put = set_resetHistory)) bool resetHistory;

  /// @brief Field s_CachedVolumeStacks, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_CachedVolumeStacks,
                      put = setStaticF_s_CachedVolumeStacks)) ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* s_CachedVolumeStacks;

  /// @brief Field s_DefaultAdditionalCameraData, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_DefaultAdditionalCameraData, put = setStaticF_s_DefaultAdditionalCameraData)) ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData>
      s_DefaultAdditionalCameraData;

  __declspec(property(get = get_screenCoordScaleBias, put = set_screenCoordScaleBias)) ::UnityEngine::Vector4 screenCoordScaleBias;

  __declspec(property(get = get_screenSizeOverride, put = set_screenSizeOverride)) ::UnityEngine::Vector4 screenSizeOverride;

  __declspec(property(get = get_scriptableRenderer)) ::UnityEngine::Rendering::Universal::ScriptableRenderer* scriptableRenderer;

  __declspec(property(get = get_stopNaN, put = set_stopNaN)) bool stopNaN;

  __declspec(property(get = get_taaSettings)) ::UnityEngine::Rendering::Universal::TemporalAA_Settings taaSettings;

  __declspec(property(get = get_useScreenCoordOverride, put = set_useScreenCoordOverride)) bool useScreenCoordOverride;

  __declspec(property(get = get_version)) float_t version;

  __declspec(property(get = get_volumeFrameworkUpdateMode, put = set_volumeFrameworkUpdateMode)) ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode volumeFrameworkUpdateMode;

  __declspec(property(get = get_volumeLayerMask, put = set_volumeLayerMask)) ::UnityEngine::LayerMask volumeLayerMask;

  __declspec(property(get = get_volumeStack, put = set_volumeStack)) ::UnityEngine::Rendering::VolumeStack* volumeStack;

  __declspec(property(get = get_volumeTrigger, put = set_volumeTrigger)) ::UnityW<::UnityEngine::Transform> volumeTrigger;

  /// @brief Convert operator to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr operator ::UnityEngine::ISerializationCallbackReceiver*() noexcept;

  /// @brief Convert operator to "::UnityEngine::Rendering::IAdditionalData"
  constexpr operator ::UnityEngine::Rendering::IAdditionalData*() noexcept;

  /// @brief Method GetOrCreateVolumeStack, addr 0x66a8000, size 0x148, virtual false, abstract: false, final false
  inline void GetOrCreateVolumeStack();

  /// @brief Method GetRawRenderer, addr 0x66a9408, size 0x120, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* GetRawRenderer();

  static inline ::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData* New_ctor();

  /// @brief Method OnAfterDeserialize, addr 0x66a91bc, size 0x28, virtual true, abstract: false, final true
  inline void OnAfterDeserialize();

  /// @brief Method OnBeforeSerialize, addr 0x66a91b8, size 0x4, virtual true, abstract: false, final true
  inline void OnBeforeSerialize();

  /// @brief Method OnDestroy, addr 0x66a93a4, size 0x64, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDrawGizmos, addr 0x66a927c, size 0x128, virtual false, abstract: false, final false
  inline void OnDrawGizmos();

  /// @brief Method OnValidate, addr 0x66a91e4, size 0x98, virtual false, abstract: false, final false
  inline void OnValidate();

  /// @brief Method SetRenderer, addr 0x66a9034, size 0x8, virtual false, abstract: false, final false
  inline void SetRenderer(int32_t index);

  /// @brief Method Start, addr 0x66a891c, size 0x34, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method UpdateCameraStack, addr 0x66a8c24, size 0x2c8, virtual false, abstract: false, final false
  inline void UpdateCameraStack();

  constexpr bool const& __cordl_internal_get_m_AllowHDROutput() const;

  constexpr bool& __cordl_internal_get_m_AllowHDROutput();

  constexpr bool const& __cordl_internal_get_m_AllowXRRendering() const;

  constexpr bool& __cordl_internal_get_m_AllowXRRendering();

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode const& __cordl_internal_get_m_Antialiasing() const;

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingMode& __cordl_internal_get_m_Antialiasing();

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality const& __cordl_internal_get_m_AntialiasingQuality() const;

  constexpr ::UnityEngine::Rendering::Universal::AntialiasingQuality& __cordl_internal_get_m_AntialiasingQuality();

  constexpr ::UnityW<::UnityEngine::Camera> const& __cordl_internal_get_m_Camera() const;

  constexpr ::UnityW<::UnityEngine::Camera>& __cordl_internal_get_m_Camera();

  constexpr ::UnityEngine::Rendering::Universal::CameraRenderType const& __cordl_internal_get_m_CameraType() const;

  constexpr ::UnityEngine::Rendering::Universal::CameraRenderType& __cordl_internal_get_m_CameraType();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* const& __cordl_internal_get_m_Cameras() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>*& __cordl_internal_get_m_Cameras();

  constexpr bool const& __cordl_internal_get_m_ClearDepth() const;

  constexpr bool& __cordl_internal_get_m_ClearDepth();

  constexpr bool const& __cordl_internal_get_m_Dithering() const;

  constexpr bool& __cordl_internal_get_m_Dithering();

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory* const& __cordl_internal_get_m_History() const;

  constexpr ::UnityEngine::Rendering::Universal::UniversalCameraHistory*& __cordl_internal_get_m_History();

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* const& __cordl_internal_get_m_MotionVectorsPersistentData() const;

  constexpr ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData*& __cordl_internal_get_m_MotionVectorsPersistentData();

  constexpr bool const& __cordl_internal_get_m_RenderPostProcessing() const;

  constexpr bool& __cordl_internal_get_m_RenderPostProcessing();

  constexpr bool const& __cordl_internal_get_m_RenderShadows() const;

  constexpr bool& __cordl_internal_get_m_RenderShadows();

  constexpr int32_t const& __cordl_internal_get_m_RendererIndex() const;

  constexpr int32_t& __cordl_internal_get_m_RendererIndex();

  constexpr bool const& __cordl_internal_get_m_RequiresColorTexture() const;

  constexpr bool& __cordl_internal_get_m_RequiresColorTexture();

  constexpr bool const& __cordl_internal_get_m_RequiresDepthTexture() const;

  constexpr bool& __cordl_internal_get_m_RequiresDepthTexture();

  constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption const& __cordl_internal_get_m_RequiresDepthTextureOption() const;

  constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption& __cordl_internal_get_m_RequiresDepthTextureOption();

  constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption const& __cordl_internal_get_m_RequiresOpaqueTextureOption() const;

  constexpr ::UnityEngine::Rendering::Universal::CameraOverrideOption& __cordl_internal_get_m_RequiresOpaqueTextureOption();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_ScreenCoordScaleBias() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_ScreenCoordScaleBias();

  constexpr ::UnityEngine::Vector4 const& __cordl_internal_get_m_ScreenSizeOverride() const;

  constexpr ::UnityEngine::Vector4& __cordl_internal_get_m_ScreenSizeOverride();

  constexpr bool const& __cordl_internal_get_m_StopNaN() const;

  constexpr bool& __cordl_internal_get_m_StopNaN();

  constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings const& __cordl_internal_get_m_TaaSettings() const;

  constexpr ::UnityEngine::Rendering::Universal::TemporalAA_Settings& __cordl_internal_get_m_TaaSettings();

  constexpr bool const& __cordl_internal_get_m_UseScreenCoordOverride() const;

  constexpr bool& __cordl_internal_get_m_UseScreenCoordOverride();

  constexpr float_t const& __cordl_internal_get_m_Version() const;

  constexpr float_t& __cordl_internal_get_m_Version();

  constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode const& __cordl_internal_get_m_VolumeFrameworkUpdateModeOption() const;

  constexpr ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode& __cordl_internal_get_m_VolumeFrameworkUpdateModeOption();

  constexpr ::UnityEngine::LayerMask const& __cordl_internal_get_m_VolumeLayerMask() const;

  constexpr ::UnityEngine::LayerMask& __cordl_internal_get_m_VolumeLayerMask();

  constexpr ::UnityEngine::Rendering::VolumeStack* const& __cordl_internal_get_m_VolumeStack() const;

  constexpr ::UnityEngine::Rendering::VolumeStack*& __cordl_internal_get_m_VolumeStack();

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_m_VolumeTrigger() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_m_VolumeTrigger();

  constexpr void __cordl_internal_set_m_AllowHDROutput(bool value);

  constexpr void __cordl_internal_set_m_AllowXRRendering(bool value);

  constexpr void __cordl_internal_set_m_Antialiasing(::UnityEngine::Rendering::Universal::AntialiasingMode value);

  constexpr void __cordl_internal_set_m_AntialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value);

  constexpr void __cordl_internal_set_m_Camera(::UnityW<::UnityEngine::Camera> value);

  constexpr void __cordl_internal_set_m_CameraType(::UnityEngine::Rendering::Universal::CameraRenderType value);

  constexpr void __cordl_internal_set_m_Cameras(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* value);

  constexpr void __cordl_internal_set_m_ClearDepth(bool value);

  constexpr void __cordl_internal_set_m_Dithering(bool value);

  constexpr void __cordl_internal_set_m_History(::UnityEngine::Rendering::Universal::UniversalCameraHistory* value);

  constexpr void __cordl_internal_set_m_MotionVectorsPersistentData(::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* value);

  constexpr void __cordl_internal_set_m_RenderPostProcessing(bool value);

  constexpr void __cordl_internal_set_m_RenderShadows(bool value);

  constexpr void __cordl_internal_set_m_RendererIndex(int32_t value);

  constexpr void __cordl_internal_set_m_RequiresColorTexture(bool value);

  constexpr void __cordl_internal_set_m_RequiresDepthTexture(bool value);

  constexpr void __cordl_internal_set_m_RequiresDepthTextureOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value);

  constexpr void __cordl_internal_set_m_RequiresOpaqueTextureOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value);

  constexpr void __cordl_internal_set_m_ScreenCoordScaleBias(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_ScreenSizeOverride(::UnityEngine::Vector4 value);

  constexpr void __cordl_internal_set_m_StopNaN(bool value);

  constexpr void __cordl_internal_set_m_TaaSettings(::UnityEngine::Rendering::Universal::TemporalAA_Settings value);

  constexpr void __cordl_internal_set_m_UseScreenCoordOverride(bool value);

  constexpr void __cordl_internal_set_m_Version(float_t value);

  constexpr void __cordl_internal_set_m_VolumeFrameworkUpdateModeOption(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value);

  constexpr void __cordl_internal_set_m_VolumeLayerMask(::UnityEngine::LayerMask value);

  constexpr void __cordl_internal_set_m_VolumeStack(::UnityEngine::Rendering::VolumeStack* value);

  constexpr void __cordl_internal_set_m_VolumeTrigger(::UnityW<::UnityEngine::Transform> value);

  /// @brief Method .ctor, addr 0x66a8744, size 0x130, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* getStaticF_s_CachedVolumeStacks();

  static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> getStaticF_s_DefaultAdditionalCameraData();

  /// @brief Method get_allowHDROutput, addr 0x66a91a8, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowHDROutput();

  /// @brief Method get_allowXRRendering, addr 0x66a9158, size 0x8, virtual false, abstract: false, final false
  inline bool get_allowXRRendering();

  /// @brief Method get_antialiasing, addr 0x66a9084, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::AntialiasingMode get_antialiasing();

  /// @brief Method get_antialiasingQuality, addr 0x66a9094, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::AntialiasingQuality get_antialiasingQuality();

  /// @brief Method get_camera, addr 0x66a8874, size 0xa8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Camera> get_camera();

  /// @brief Method get_cameraStack, addr 0x669fb3c, size 0x1b8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* get_cameraStack();

  /// @brief Method get_clearDepth, addr 0x66a8eec, size 0x8, virtual false, abstract: false, final false
  inline bool get_clearDepth();

  /// @brief Method get_defaultAdditionalCameraData, addr 0x66a8694, size 0xb0, virtual false, abstract: false, final false
  static inline ::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> get_defaultAdditionalCameraData();

  /// @brief Method get_dithering, addr 0x66a9148, size 0x8, virtual false, abstract: false, final false
  inline bool get_dithering();

  /// @brief Method get_history, addr 0x66a90ac, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::ICameraHistoryReadAccess* get_history();

  /// @brief Method get_historyManager, addr 0x66a90b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::UniversalCameraHistory* get_historyManager();

  /// @brief Method get_motionVectorsPersistentData, addr 0x66a90bc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* get_motionVectorsPersistentData();

  /// @brief Method get_renderPostProcessing, addr 0x66a9074, size 0x8, virtual false, abstract: false, final false
  inline bool get_renderPostProcessing();

  /// @brief Method get_renderShadows, addr 0x66a8950, size 0x8, virtual false, abstract: false, final false
  inline bool get_renderShadows();

  /// @brief Method get_renderType, addr 0x66a8980, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::CameraRenderType get_renderType();

  /// @brief Method get_requiresColorOption, addr 0x66a8970, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::CameraOverrideOption get_requiresColorOption();

  /// @brief Method get_requiresColorTexture, addr 0x66a8f94, size 0x88, virtual false, abstract: false, final false
  inline bool get_requiresColorTexture();

  /// @brief Method get_requiresDepthOption, addr 0x66a8960, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::CameraOverrideOption get_requiresDepthOption();

  /// @brief Method get_requiresDepthTexture, addr 0x66a8ef4, size 0x88, virtual false, abstract: false, final false
  inline bool get_requiresDepthTexture();

  /// @brief Method get_requiresVolumeFrameworkUpdate, addr 0x66a7e08, size 0x88, virtual false, abstract: false, final false
  inline bool get_requiresVolumeFrameworkUpdate();

  /// @brief Method get_resetHistory, addr 0x66a90c4, size 0x10, virtual false, abstract: false, final false
  inline bool get_resetHistory();

  /// @brief Method get_screenCoordScaleBias, addr 0x66a9190, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_screenCoordScaleBias();

  /// @brief Method get_screenSizeOverride, addr 0x66a9178, size 0xc, virtual false, abstract: false, final false
  inline ::UnityEngine::Vector4 get_screenSizeOverride();

  /// @brief Method get_scriptableRenderer, addr 0x66a8990, size 0x294, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::ScriptableRenderer* get_scriptableRenderer();

  /// @brief Method get_stopNaN, addr 0x66a9138, size 0x8, virtual false, abstract: false, final false
  inline bool get_stopNaN();

  /// @brief Method get_taaSettings, addr 0x66a90a4, size 0x8, virtual false, abstract: false, final false
  inline ::ByRef<::UnityEngine::Rendering::Universal::TemporalAA_Settings> get_taaSettings();

  /// @brief Method get_useScreenCoordOverride, addr 0x66a9168, size 0x8, virtual false, abstract: false, final false
  inline bool get_useScreenCoordOverride();

  /// @brief Method get_version, addr 0x66a868c, size 0x8, virtual false, abstract: false, final false
  inline float_t get_version();

  /// @brief Method get_volumeFrameworkUpdateMode, addr 0x66a905c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode get_volumeFrameworkUpdateMode();

  /// @brief Method get_volumeLayerMask, addr 0x66a903c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::LayerMask get_volumeLayerMask();

  /// @brief Method get_volumeStack, addr 0x66a906c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::Rendering::VolumeStack* get_volumeStack();

  /// @brief Method get_volumeTrigger, addr 0x66a904c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Transform> get_volumeTrigger();

  /// @brief Convert to "::UnityEngine::ISerializationCallbackReceiver"
  constexpr ::UnityEngine::ISerializationCallbackReceiver* i___UnityEngine__ISerializationCallbackReceiver() noexcept;

  /// @brief Convert to "::UnityEngine::Rendering::IAdditionalData"
  constexpr ::UnityEngine::Rendering::IAdditionalData* i___UnityEngine__Rendering__IAdditionalData() noexcept;

  static inline void setStaticF_s_CachedVolumeStacks(::System::Collections::Generic::List_1<::UnityEngine::Rendering::VolumeStack*>* value);

  static inline void setStaticF_s_DefaultAdditionalCameraData(::UnityW<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData> value);

  /// @brief Method set_allowHDROutput, addr 0x66a91b0, size 0x8, virtual false, abstract: false, final false
  inline void set_allowHDROutput(bool value);

  /// @brief Method set_allowXRRendering, addr 0x66a9160, size 0x8, virtual false, abstract: false, final false
  inline void set_allowXRRendering(bool value);

  /// @brief Method set_antialiasing, addr 0x66a908c, size 0x8, virtual false, abstract: false, final false
  inline void set_antialiasing(::UnityEngine::Rendering::Universal::AntialiasingMode value);

  /// @brief Method set_antialiasingQuality, addr 0x66a909c, size 0x8, virtual false, abstract: false, final false
  inline void set_antialiasingQuality(::UnityEngine::Rendering::Universal::AntialiasingQuality value);

  /// @brief Method set_dithering, addr 0x66a9150, size 0x8, virtual false, abstract: false, final false
  inline void set_dithering(bool value);

  /// @brief Method set_renderPostProcessing, addr 0x66a907c, size 0x8, virtual false, abstract: false, final false
  inline void set_renderPostProcessing(bool value);

  /// @brief Method set_renderShadows, addr 0x66a8958, size 0x8, virtual false, abstract: false, final false
  inline void set_renderShadows(bool value);

  /// @brief Method set_renderType, addr 0x66a8988, size 0x8, virtual false, abstract: false, final false
  inline void set_renderType(::UnityEngine::Rendering::Universal::CameraRenderType value);

  /// @brief Method set_requiresColorOption, addr 0x66a8978, size 0x8, virtual false, abstract: false, final false
  inline void set_requiresColorOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value);

  /// @brief Method set_requiresColorTexture, addr 0x66a901c, size 0x18, virtual false, abstract: false, final false
  inline void set_requiresColorTexture(bool value);

  /// @brief Method set_requiresDepthOption, addr 0x66a8968, size 0x8, virtual false, abstract: false, final false
  inline void set_requiresDepthOption(::UnityEngine::Rendering::Universal::CameraOverrideOption value);

  /// @brief Method set_requiresDepthTexture, addr 0x66a8f7c, size 0x18, virtual false, abstract: false, final false
  inline void set_requiresDepthTexture(bool value);

  /// @brief Method set_resetHistory, addr 0x66a90d4, size 0x64, virtual false, abstract: false, final false
  inline void set_resetHistory(bool value);

  /// @brief Method set_screenCoordScaleBias, addr 0x66a919c, size 0xc, virtual false, abstract: false, final false
  inline void set_screenCoordScaleBias(::UnityEngine::Vector4 value);

  /// @brief Method set_screenSizeOverride, addr 0x66a9184, size 0xc, virtual false, abstract: false, final false
  inline void set_screenSizeOverride(::UnityEngine::Vector4 value);

  /// @brief Method set_stopNaN, addr 0x66a9140, size 0x8, virtual false, abstract: false, final false
  inline void set_stopNaN(bool value);

  /// @brief Method set_useScreenCoordOverride, addr 0x66a9170, size 0x8, virtual false, abstract: false, final false
  inline void set_useScreenCoordOverride(bool value);

  /// @brief Method set_volumeFrameworkUpdateMode, addr 0x66a9064, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeFrameworkUpdateMode(::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode value);

  /// @brief Method set_volumeLayerMask, addr 0x66a9044, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeLayerMask(::UnityEngine::LayerMask value);

  /// @brief Method set_volumeStack, addr 0x66a83c4, size 0x144, virtual false, abstract: false, final false
  inline void set_volumeStack(::UnityEngine::Rendering::VolumeStack* value);

  /// @brief Method set_volumeTrigger, addr 0x66a9054, size 0x8, virtual false, abstract: false, final false
  inline void set_volumeTrigger(::UnityEngine::Transform* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr UniversalAdditionalCameraData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "UniversalAdditionalCameraData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  UniversalAdditionalCameraData(UniversalAdditionalCameraData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "UniversalAdditionalCameraData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  UniversalAdditionalCameraData(UniversalAdditionalCameraData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12962 };

  /// @brief Field k_BaseCameraGizmoPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_BaseCameraGizmoPath{ u"Packages/com.unity.render-pipelines.universal/Editor/Gizmos/Camera_Base.png" };

  /// @brief Field k_GizmoPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_GizmoPath{ u"Packages/com.unity.render-pipelines.universal/Editor/Gizmos/" };

  /// @brief Field k_OverlayCameraGizmoPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_OverlayCameraGizmoPath{ u"Packages/com.unity.render-pipelines.universal/Editor/Gizmos/Camera_Base.png" };

  /// @brief Field k_PostProcessingGizmoPath offset 0xffffffff size 0x8
  static constexpr ::ConstString k_PostProcessingGizmoPath{ u"Packages/com.unity.render-pipelines.universal/Editor/Gizmos/Camera_PostProcessing.png" };

  /// @brief Field m_RenderShadows, offset: 0x20, size: 0x1, def value: None
  bool ___m_RenderShadows;

  /// @brief Field m_RequiresDepthTextureOption, offset: 0x24, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CameraOverrideOption ___m_RequiresDepthTextureOption;

  /// @brief Field m_RequiresOpaqueTextureOption, offset: 0x28, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CameraOverrideOption ___m_RequiresOpaqueTextureOption;

  /// @brief Field m_CameraType, offset: 0x2c, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::CameraRenderType ___m_CameraType;

  /// @brief Field m_Cameras, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Camera>>* ___m_Cameras;

  /// @brief Field m_RendererIndex, offset: 0x38, size: 0x4, def value: None
  int32_t ___m_RendererIndex;

  /// @brief Field m_VolumeLayerMask, offset: 0x3c, size: 0x4, def value: None
  ::UnityEngine::LayerMask ___m_VolumeLayerMask;

  /// @brief Field m_VolumeTrigger, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___m_VolumeTrigger;

  /// @brief Field m_VolumeFrameworkUpdateModeOption, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::VolumeFrameworkUpdateMode ___m_VolumeFrameworkUpdateModeOption;

  /// @brief Field m_RenderPostProcessing, offset: 0x4c, size: 0x1, def value: None
  bool ___m_RenderPostProcessing;

  /// @brief Field m_Antialiasing, offset: 0x50, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::AntialiasingMode ___m_Antialiasing;

  /// @brief Field m_AntialiasingQuality, offset: 0x54, size: 0x4, def value: None
  ::UnityEngine::Rendering::Universal::AntialiasingQuality ___m_AntialiasingQuality;

  /// @brief Field m_StopNaN, offset: 0x58, size: 0x1, def value: None
  bool ___m_StopNaN;

  /// @brief Field m_Dithering, offset: 0x59, size: 0x1, def value: None
  bool ___m_Dithering;

  /// @brief Field m_ClearDepth, offset: 0x5a, size: 0x1, def value: None
  bool ___m_ClearDepth;

  /// @brief Field m_AllowXRRendering, offset: 0x5b, size: 0x1, def value: None
  bool ___m_AllowXRRendering;

  /// @brief Field m_AllowHDROutput, offset: 0x5c, size: 0x1, def value: None
  bool ___m_AllowHDROutput;

  /// @brief Field m_UseScreenCoordOverride, offset: 0x5d, size: 0x1, def value: None
  bool ___m_UseScreenCoordOverride;

  /// @brief Field m_ScreenSizeOverride, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_ScreenSizeOverride;

  /// @brief Field m_ScreenCoordScaleBias, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Vector4 ___m_ScreenCoordScaleBias;

  /// @brief Field m_Camera, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Camera> ___m_Camera;

  /// @brief Field m_RequiresDepthTexture, offset: 0x88, size: 0x1, def value: None
  bool ___m_RequiresDepthTexture;

  /// @brief Field m_RequiresColorTexture, offset: 0x89, size: 0x1, def value: None
  bool ___m_RequiresColorTexture;

  /// @brief Field m_Version, offset: 0x8c, size: 0x4, def value: None
  float_t ___m_Version;

  /// @brief Field m_MotionVectorsPersistentData, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::MotionVectorsPersistentData* ___m_MotionVectorsPersistentData;

  /// @brief Field m_History, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::Universal::UniversalCameraHistory* ___m_History;

  /// @brief Field m_TaaSettings, offset: 0xa0, size: 0x20, def value: None
  ::UnityEngine::Rendering::Universal::TemporalAA_Settings ___m_TaaSettings;

  /// @brief Field m_VolumeStack, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::Rendering::VolumeStack* ___m_VolumeStack;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_RenderShadows) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_RequiresDepthTextureOption) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_RequiresOpaqueTextureOption) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_CameraType) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_Cameras) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_RendererIndex) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_VolumeLayerMask) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_VolumeTrigger) == 0x40, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_VolumeFrameworkUpdateModeOption) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_RenderPostProcessing) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_Antialiasing) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_AntialiasingQuality) == 0x54, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_StopNaN) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_Dithering) == 0x59, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_ClearDepth) == 0x5a, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_AllowXRRendering) == 0x5b, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_AllowHDROutput) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_UseScreenCoordOverride) == 0x5d, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_ScreenSizeOverride) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_ScreenCoordScaleBias) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_Camera) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_RequiresDepthTexture) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_RequiresColorTexture) == 0x89, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_Version) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_MotionVectorsPersistentData) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_History) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_TaaSettings) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, ___m_VolumeStack) == 0xc0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData, 0xc8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData*, "UnityEngine.Rendering.Universal", "UniversalAdditionalCameraData");
NEED_NO_BOX(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::UniversalAdditionalCameraData___c*, "UnityEngine.Rendering.Universal", "UniversalAdditionalCameraData/<>c");

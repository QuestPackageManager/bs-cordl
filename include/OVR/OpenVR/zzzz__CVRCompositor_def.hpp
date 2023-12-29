#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRCompositor)
namespace OVR::OpenVR {
struct EVRCompositorError;
}
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
namespace System::Text {
class StringBuilder;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
namespace OVR::OpenVR {
struct EVRCompositorTimingMode;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRCompositor;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRCompositor);
// Type: OVR.OpenVR::CVRCompositor
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 360, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9156)), TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9333))
// CS Name: ::OVR.OpenVR::CVRCompositor*
class CORDL_TYPE CVRCompositor : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x158
  __declspec(property(get = __get_FnTable, put = __set_FnTable))::OVR::OpenVR::IVRCompositor FnTable;

  constexpr ::OVR::OpenVR::IVRCompositor& __get_FnTable();

  constexpr ::OVR::OpenVR::IVRCompositor const& __get_FnTable() const;

  constexpr void __set_FnTable(::OVR::OpenVR::IVRCompositor value);

  static inline ::OVR::OpenVR::CVRCompositor* New_ctor(void* pInterface);

  /// @brief Method .ctor addr 0x267c1d8 size 0x114 virtual false final false
  inline void _ctor(void* pInterface);

  /// @brief Method SetTrackingSpace addr 0x267c2ec size 0x24 virtual false final false
  inline void SetTrackingSpace(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin);

  /// @brief Method GetTrackingSpace addr 0x267c310 size 0x24 virtual false final false
  inline ::OVR::OpenVR::ETrackingUniverseOrigin GetTrackingSpace();

  /// @brief Method WaitGetPoses addr 0x267c334 size 0x38 virtual false final false
  inline ::OVR::OpenVR::EVRCompositorError WaitGetPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pRenderPoseArray,
                                                        ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pGamePoseArray);

  /// @brief Method GetLastPoses addr 0x267c36c size 0x38 virtual false final false
  inline ::OVR::OpenVR::EVRCompositorError GetLastPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pRenderPoseArray,
                                                        ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pGamePoseArray);

  /// @brief Method GetLastPoseForTrackedDeviceIndex addr 0x267c3a4 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRCompositorError GetLastPoseForTrackedDeviceIndex(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                            ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose);

  /// @brief Method Submit addr 0x267c3c8 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRCompositorError Submit(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                  ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags);

  /// @brief Method ClearLastSubmittedFrame addr 0x267c3ec size 0x24 virtual false final false
  inline void ClearLastSubmittedFrame();

  /// @brief Method PostPresentHandoff addr 0x267c410 size 0x24 virtual false final false
  inline void PostPresentHandoff();

  /// @brief Method GetFrameTiming addr 0x267c434 size 0x24 virtual false final false
  inline bool GetFrameTiming(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo);

  /// @brief Method GetFrameTimings addr 0x267c458 size 0x24 virtual false final false
  inline uint32_t GetFrameTimings(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames);

  /// @brief Method GetFrameTimeRemaining addr 0x267c47c size 0x24 virtual false final false
  inline float_t GetFrameTimeRemaining();

  /// @brief Method GetCumulativeStats addr 0x267c4a0 size 0x24 virtual false final false
  inline void GetCumulativeStats(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes);

  /// @brief Method FadeToColor addr 0x267c4c4 size 0x28 virtual false final false
  inline void FadeToColor(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground);

  /// @brief Method GetCurrentFadeColor addr 0x267c4ec size 0x28 virtual false final false
  inline ::OVR::OpenVR::HmdColor_t GetCurrentFadeColor(bool bBackground);

  /// @brief Method FadeGrid addr 0x267c514 size 0x28 virtual false final false
  inline void FadeGrid(float_t fSeconds, bool bFadeIn);

  /// @brief Method GetCurrentGridAlpha addr 0x267c53c size 0x24 virtual false final false
  inline float_t GetCurrentGridAlpha();

  /// @brief Method SetSkyboxOverride addr 0x267c560 size 0x2c virtual false final false
  inline ::OVR::OpenVR::EVRCompositorError SetSkyboxOverride(::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*> pTextures);

  /// @brief Method ClearSkyboxOverride addr 0x267c58c size 0x24 virtual false final false
  inline void ClearSkyboxOverride();

  /// @brief Method CompositorBringToFront addr 0x267c5b0 size 0x24 virtual false final false
  inline void CompositorBringToFront();

  /// @brief Method CompositorGoToBack addr 0x267c5d4 size 0x24 virtual false final false
  inline void CompositorGoToBack();

  /// @brief Method CompositorQuit addr 0x267c5f8 size 0x24 virtual false final false
  inline void CompositorQuit();

  /// @brief Method IsFullscreen addr 0x267c61c size 0x24 virtual false final false
  inline bool IsFullscreen();

  /// @brief Method GetCurrentSceneFocusProcess addr 0x267c640 size 0x24 virtual false final false
  inline uint32_t GetCurrentSceneFocusProcess();

  /// @brief Method GetLastFrameRenderer addr 0x267c664 size 0x24 virtual false final false
  inline uint32_t GetLastFrameRenderer();

  /// @brief Method CanRenderScene addr 0x267c688 size 0x24 virtual false final false
  inline bool CanRenderScene();

  /// @brief Method ShowMirrorWindow addr 0x267c6ac size 0x24 virtual false final false
  inline void ShowMirrorWindow();

  /// @brief Method HideMirrorWindow addr 0x267c6d0 size 0x24 virtual false final false
  inline void HideMirrorWindow();

  /// @brief Method IsMirrorWindowVisible addr 0x267c6f4 size 0x24 virtual false final false
  inline bool IsMirrorWindowVisible();

  /// @brief Method CompositorDumpImages addr 0x267c718 size 0x24 virtual false final false
  inline void CompositorDumpImages();

  /// @brief Method ShouldAppRenderWithLowResources addr 0x267c73c size 0x24 virtual false final false
  inline bool ShouldAppRenderWithLowResources();

  /// @brief Method ForceInterleavedReprojectionOn addr 0x267c760 size 0x28 virtual false final false
  inline void ForceInterleavedReprojectionOn(bool bOverride);

  /// @brief Method ForceReconnectProcess addr 0x267c788 size 0x24 virtual false final false
  inline void ForceReconnectProcess();

  /// @brief Method SuspendRendering addr 0x267c7ac size 0x28 virtual false final false
  inline void SuspendRendering(bool bSuspend);

  /// @brief Method GetMirrorTextureD3D11 addr 0x267c7d4 size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRCompositorError GetMirrorTextureD3D11(::OVR::OpenVR::EVREye eEye, void* pD3D11DeviceOrResource, ByRef<void*> ppD3D11ShaderResourceView);

  /// @brief Method ReleaseMirrorTextureD3D11 addr 0x267c7f8 size 0x24 virtual false final false
  inline void ReleaseMirrorTextureD3D11(void* pD3D11ShaderResourceView);

  /// @brief Method GetMirrorTextureGL addr 0x267c81c size 0x28 virtual false final false
  inline ::OVR::OpenVR::EVRCompositorError GetMirrorTextureGL(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, void* pglSharedTextureHandle);

  /// @brief Method ReleaseSharedGLTexture addr 0x267c844 size 0x24 virtual false final false
  inline bool ReleaseSharedGLTexture(uint32_t glTextureId, void* glSharedTextureHandle);

  /// @brief Method LockGLSharedTextureForAccess addr 0x267c868 size 0x24 virtual false final false
  inline void LockGLSharedTextureForAccess(void* glSharedTextureHandle);

  /// @brief Method UnlockGLSharedTextureForAccess addr 0x267c88c size 0x24 virtual false final false
  inline void UnlockGLSharedTextureForAccess(void* glSharedTextureHandle);

  /// @brief Method GetVulkanInstanceExtensionsRequired addr 0x267c8b0 size 0x24 virtual false final false
  inline uint32_t GetVulkanInstanceExtensionsRequired(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  /// @brief Method GetVulkanDeviceExtensionsRequired addr 0x267c8d4 size 0x24 virtual false final false
  inline uint32_t GetVulkanDeviceExtensionsRequired(void* pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  /// @brief Method SetExplicitTimingMode addr 0x267c8f8 size 0x24 virtual false final false
  inline void SetExplicitTimingMode(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode);

  /// @brief Method SubmitExplicitTimingData addr 0x267c91c size 0x24 virtual false final false
  inline ::OVR::OpenVR::EVRCompositorError SubmitExplicitTimingData();

  // Ctor Parameters [CppParam { name: "", ty: "CVRCompositor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRCompositor(CVRCompositor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRCompositor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRCompositor(CVRCompositor const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRCompositor();

public:
  /// @brief Field FnTable, offset: 0x10, size: 0x158, def value: None
  ::OVR::OpenVR::IVRCompositor ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRCompositor, 0x168>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRCompositor, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRCompositor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRCompositor*, "OVR.OpenVR", "CVRCompositor");

#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRCompositor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__IVRCompositor_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(CVRCompositor)
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
namespace OVR::OpenVR {
struct ETrackingUniverseOrigin;
}
namespace OVR::OpenVR {
struct EVRCompositorError;
}
namespace OVR::OpenVR {
struct EVRCompositorTimingMode;
}
namespace OVR::OpenVR {
struct EVREye;
}
namespace OVR::OpenVR {
struct EVRSubmitFlags;
}
namespace OVR::OpenVR {
struct HmdColor_t;
}
namespace OVR::OpenVR {
struct Texture_t;
}
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
namespace OVR::OpenVR {
struct VRTextureBounds_t;
}
namespace System::Text {
class StringBuilder;
}
namespace System {
struct IntPtr;
}
// Forward declare root types
namespace OVR::OpenVR {
class CVRCompositor;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::CVRCompositor);
// Dependencies OVR.OpenVR.IVRCompositor, System.Object
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.CVRCompositor
class CORDL_TYPE CVRCompositor : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x158
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRCompositor FnTable;

  /// @brief Method CanRenderScene, addr 0x406f1a8, size 0x24, virtual false, abstract: false, final false
  inline bool CanRenderScene();

  /// @brief Method ClearLastSubmittedFrame, addr 0x406ef0c, size 0x24, virtual false, abstract: false, final false
  inline void ClearLastSubmittedFrame();

  /// @brief Method ClearSkyboxOverride, addr 0x406f0ac, size 0x24, virtual false, abstract: false, final false
  inline void ClearSkyboxOverride();

  /// @brief Method CompositorBringToFront, addr 0x406f0d0, size 0x24, virtual false, abstract: false, final false
  inline void CompositorBringToFront();

  /// @brief Method CompositorDumpImages, addr 0x406f238, size 0x24, virtual false, abstract: false, final false
  inline void CompositorDumpImages();

  /// @brief Method CompositorGoToBack, addr 0x406f0f4, size 0x24, virtual false, abstract: false, final false
  inline void CompositorGoToBack();

  /// @brief Method CompositorQuit, addr 0x406f118, size 0x24, virtual false, abstract: false, final false
  inline void CompositorQuit();

  /// @brief Method FadeGrid, addr 0x406f034, size 0x28, virtual false, abstract: false, final false
  inline void FadeGrid(float_t fSeconds, bool bFadeIn);

  /// @brief Method FadeToColor, addr 0x406efe4, size 0x28, virtual false, abstract: false, final false
  inline void FadeToColor(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground);

  /// @brief Method ForceInterleavedReprojectionOn, addr 0x406f280, size 0x28, virtual false, abstract: false, final false
  inline void ForceInterleavedReprojectionOn(bool bOverride);

  /// @brief Method ForceReconnectProcess, addr 0x406f2a8, size 0x24, virtual false, abstract: false, final false
  inline void ForceReconnectProcess();

  /// @brief Method GetCumulativeStats, addr 0x406efc0, size 0x24, virtual false, abstract: false, final false
  inline void GetCumulativeStats(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes);

  /// @brief Method GetCurrentFadeColor, addr 0x406f00c, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdColor_t GetCurrentFadeColor(bool bBackground);

  /// @brief Method GetCurrentGridAlpha, addr 0x406f05c, size 0x24, virtual false, abstract: false, final false
  inline float_t GetCurrentGridAlpha();

  /// @brief Method GetCurrentSceneFocusProcess, addr 0x406f160, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetCurrentSceneFocusProcess();

  /// @brief Method GetFrameTimeRemaining, addr 0x406ef9c, size 0x24, virtual false, abstract: false, final false
  inline float_t GetFrameTimeRemaining();

  /// @brief Method GetFrameTiming, addr 0x406ef54, size 0x24, virtual false, abstract: false, final false
  inline bool GetFrameTiming(::ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo);

  /// @brief Method GetFrameTimings, addr 0x406ef78, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetFrameTimings(::ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames);

  /// @brief Method GetLastFrameRenderer, addr 0x406f184, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetLastFrameRenderer();

  /// @brief Method GetLastPoseForTrackedDeviceIndex, addr 0x406eec4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError GetLastPoseForTrackedDeviceIndex(uint32_t unDeviceIndex, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                            ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose);

  /// @brief Method GetLastPoses, addr 0x406ee8c, size 0x38, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError GetLastPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pRenderPoseArray,
                                                        ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pGamePoseArray);

  /// @brief Method GetMirrorTextureD3D11, addr 0x406f2f4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError GetMirrorTextureD3D11(::OVR::OpenVR::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource, ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView);

  /// @brief Method GetMirrorTextureGL, addr 0x406f33c, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError GetMirrorTextureGL(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pglTextureId, ::System::IntPtr pglSharedTextureHandle);

  /// @brief Method GetTrackingSpace, addr 0x406ee30, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::ETrackingUniverseOrigin GetTrackingSpace();

  /// @brief Method GetVulkanDeviceExtensionsRequired, addr 0x406f3f4, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetVulkanDeviceExtensionsRequired(::System::IntPtr pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  /// @brief Method GetVulkanInstanceExtensionsRequired, addr 0x406f3d0, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetVulkanInstanceExtensionsRequired(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  /// @brief Method HideMirrorWindow, addr 0x406f1f0, size 0x24, virtual false, abstract: false, final false
  inline void HideMirrorWindow();

  /// @brief Method IsFullscreen, addr 0x406f13c, size 0x24, virtual false, abstract: false, final false
  inline bool IsFullscreen();

  /// @brief Method IsMirrorWindowVisible, addr 0x406f214, size 0x24, virtual false, abstract: false, final false
  inline bool IsMirrorWindowVisible();

  /// @brief Method LockGLSharedTextureForAccess, addr 0x406f388, size 0x24, virtual false, abstract: false, final false
  inline void LockGLSharedTextureForAccess(::System::IntPtr glSharedTextureHandle);

  static inline ::OVR::OpenVR::CVRCompositor* New_ctor(::System::IntPtr pInterface);

  /// @brief Method PostPresentHandoff, addr 0x406ef30, size 0x24, virtual false, abstract: false, final false
  inline void PostPresentHandoff();

  /// @brief Method ReleaseMirrorTextureD3D11, addr 0x406f318, size 0x24, virtual false, abstract: false, final false
  inline void ReleaseMirrorTextureD3D11(::System::IntPtr pD3D11ShaderResourceView);

  /// @brief Method ReleaseSharedGLTexture, addr 0x406f364, size 0x24, virtual false, abstract: false, final false
  inline bool ReleaseSharedGLTexture(uint32_t glTextureId, ::System::IntPtr glSharedTextureHandle);

  /// @brief Method SetExplicitTimingMode, addr 0x406f418, size 0x24, virtual false, abstract: false, final false
  inline void SetExplicitTimingMode(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode);

  /// @brief Method SetSkyboxOverride, addr 0x406f080, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError SetSkyboxOverride(::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*> pTextures);

  /// @brief Method SetTrackingSpace, addr 0x406ee0c, size 0x24, virtual false, abstract: false, final false
  inline void SetTrackingSpace(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin);

  /// @brief Method ShouldAppRenderWithLowResources, addr 0x406f25c, size 0x24, virtual false, abstract: false, final false
  inline bool ShouldAppRenderWithLowResources();

  /// @brief Method ShowMirrorWindow, addr 0x406f1cc, size 0x24, virtual false, abstract: false, final false
  inline void ShowMirrorWindow();

  /// @brief Method Submit, addr 0x406eee8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Submit(::OVR::OpenVR::EVREye eEye, ::ByRef<::OVR::OpenVR::Texture_t> pTexture, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                  ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags);

  /// @brief Method SubmitExplicitTimingData, addr 0x406f43c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError SubmitExplicitTimingData();

  /// @brief Method SuspendRendering, addr 0x406f2cc, size 0x28, virtual false, abstract: false, final false
  inline void SuspendRendering(bool bSuspend);

  /// @brief Method UnlockGLSharedTextureForAccess, addr 0x406f3ac, size 0x24, virtual false, abstract: false, final false
  inline void UnlockGLSharedTextureForAccess(::System::IntPtr glSharedTextureHandle);

  /// @brief Method WaitGetPoses, addr 0x406ee54, size 0x38, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError WaitGetPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pRenderPoseArray,
                                                        ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pGamePoseArray);

  constexpr ::OVR::OpenVR::IVRCompositor const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRCompositor& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRCompositor value);

  /// @brief Method .ctor, addr 0x406ecf8, size 0x114, virtual false, abstract: false, final false
  inline void _ctor(::System::IntPtr pInterface);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CVRCompositor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "CVRCompositor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CVRCompositor(CVRCompositor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CVRCompositor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CVRCompositor(CVRCompositor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8882 };

  /// @brief Field FnTable, offset: 0x10, size: 0x158, def value: None
  ::OVR::OpenVR::IVRCompositor ___FnTable;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::CVRCompositor, ___FnTable) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRCompositor, 0x168>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRCompositor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRCompositor*, "OVR.OpenVR", "CVRCompositor");

#pragma once
// IWYU pragma private; include "OVR/OpenVR/CVRCompositor.hpp"
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
// Type: OVR.OpenVR::CVRCompositor
// SizeInfo { instance_size: 360, native_size: -1, calculated_instance_size: 360, calculated_native_size: 360, minimum_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: false
// CS Name: ::OVR.OpenVR::CVRCompositor*
class CORDL_TYPE CVRCompositor : public ::System::Object {
public:
  // Declarations
  /// @brief Field FnTable, offset 0x10, size 0x158
  __declspec(property(get = __cordl_internal_get_FnTable, put = __cordl_internal_set_FnTable)) ::OVR::OpenVR::IVRCompositor FnTable;

  /// @brief Method CanRenderScene, addr 0x4012688, size 0x24, virtual false, abstract: false, final false
  inline bool CanRenderScene();

  /// @brief Method ClearLastSubmittedFrame, addr 0x40123ec, size 0x24, virtual false, abstract: false, final false
  inline void ClearLastSubmittedFrame();

  /// @brief Method ClearSkyboxOverride, addr 0x401258c, size 0x24, virtual false, abstract: false, final false
  inline void ClearSkyboxOverride();

  /// @brief Method CompositorBringToFront, addr 0x40125b0, size 0x24, virtual false, abstract: false, final false
  inline void CompositorBringToFront();

  /// @brief Method CompositorDumpImages, addr 0x4012718, size 0x24, virtual false, abstract: false, final false
  inline void CompositorDumpImages();

  /// @brief Method CompositorGoToBack, addr 0x40125d4, size 0x24, virtual false, abstract: false, final false
  inline void CompositorGoToBack();

  /// @brief Method CompositorQuit, addr 0x40125f8, size 0x24, virtual false, abstract: false, final false
  inline void CompositorQuit();

  /// @brief Method FadeGrid, addr 0x4012514, size 0x28, virtual false, abstract: false, final false
  inline void FadeGrid(float_t fSeconds, bool bFadeIn);

  /// @brief Method FadeToColor, addr 0x40124c4, size 0x28, virtual false, abstract: false, final false
  inline void FadeToColor(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground);

  /// @brief Method ForceInterleavedReprojectionOn, addr 0x4012760, size 0x28, virtual false, abstract: false, final false
  inline void ForceInterleavedReprojectionOn(bool bOverride);

  /// @brief Method ForceReconnectProcess, addr 0x4012788, size 0x24, virtual false, abstract: false, final false
  inline void ForceReconnectProcess();

  /// @brief Method GetCumulativeStats, addr 0x40124a0, size 0x24, virtual false, abstract: false, final false
  inline void GetCumulativeStats(ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes);

  /// @brief Method GetCurrentFadeColor, addr 0x40124ec, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::HmdColor_t GetCurrentFadeColor(bool bBackground);

  /// @brief Method GetCurrentGridAlpha, addr 0x401253c, size 0x24, virtual false, abstract: false, final false
  inline float_t GetCurrentGridAlpha();

  /// @brief Method GetCurrentSceneFocusProcess, addr 0x4012640, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetCurrentSceneFocusProcess();

  /// @brief Method GetFrameTimeRemaining, addr 0x401247c, size 0x24, virtual false, abstract: false, final false
  inline float_t GetFrameTimeRemaining();

  /// @brief Method GetFrameTiming, addr 0x4012434, size 0x24, virtual false, abstract: false, final false
  inline bool GetFrameTiming(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo);

  /// @brief Method GetFrameTimings, addr 0x4012458, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetFrameTimings(ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames);

  /// @brief Method GetLastFrameRenderer, addr 0x4012664, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetLastFrameRenderer();

  /// @brief Method GetLastPoseForTrackedDeviceIndex, addr 0x40123a4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError GetLastPoseForTrackedDeviceIndex(uint32_t unDeviceIndex, ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose,
                                                                            ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose);

  /// @brief Method GetLastPoses, addr 0x401236c, size 0x38, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError GetLastPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pRenderPoseArray,
                                                        ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pGamePoseArray);

  /// @brief Method GetMirrorTextureD3D11, addr 0x40127d4, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError GetMirrorTextureD3D11(::OVR::OpenVR::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource, ByRef<::System::IntPtr> ppD3D11ShaderResourceView);

  /// @brief Method GetMirrorTextureGL, addr 0x401281c, size 0x28, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError GetMirrorTextureGL(::OVR::OpenVR::EVREye eEye, ByRef<uint32_t> pglTextureId, ::System::IntPtr pglSharedTextureHandle);

  /// @brief Method GetTrackingSpace, addr 0x4012310, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::ETrackingUniverseOrigin GetTrackingSpace();

  /// @brief Method GetVulkanDeviceExtensionsRequired, addr 0x40128d4, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetVulkanDeviceExtensionsRequired(::System::IntPtr pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  /// @brief Method GetVulkanInstanceExtensionsRequired, addr 0x40128b0, size 0x24, virtual false, abstract: false, final false
  inline uint32_t GetVulkanInstanceExtensionsRequired(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  /// @brief Method HideMirrorWindow, addr 0x40126d0, size 0x24, virtual false, abstract: false, final false
  inline void HideMirrorWindow();

  /// @brief Method IsFullscreen, addr 0x401261c, size 0x24, virtual false, abstract: false, final false
  inline bool IsFullscreen();

  /// @brief Method IsMirrorWindowVisible, addr 0x40126f4, size 0x24, virtual false, abstract: false, final false
  inline bool IsMirrorWindowVisible();

  /// @brief Method LockGLSharedTextureForAccess, addr 0x4012868, size 0x24, virtual false, abstract: false, final false
  inline void LockGLSharedTextureForAccess(::System::IntPtr glSharedTextureHandle);

  static inline ::OVR::OpenVR::CVRCompositor* New_ctor(::System::IntPtr pInterface);

  /// @brief Method PostPresentHandoff, addr 0x4012410, size 0x24, virtual false, abstract: false, final false
  inline void PostPresentHandoff();

  /// @brief Method ReleaseMirrorTextureD3D11, addr 0x40127f8, size 0x24, virtual false, abstract: false, final false
  inline void ReleaseMirrorTextureD3D11(::System::IntPtr pD3D11ShaderResourceView);

  /// @brief Method ReleaseSharedGLTexture, addr 0x4012844, size 0x24, virtual false, abstract: false, final false
  inline bool ReleaseSharedGLTexture(uint32_t glTextureId, ::System::IntPtr glSharedTextureHandle);

  /// @brief Method SetExplicitTimingMode, addr 0x40128f8, size 0x24, virtual false, abstract: false, final false
  inline void SetExplicitTimingMode(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode);

  /// @brief Method SetSkyboxOverride, addr 0x4012560, size 0x2c, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError SetSkyboxOverride(::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*> pTextures);

  /// @brief Method SetTrackingSpace, addr 0x40122ec, size 0x24, virtual false, abstract: false, final false
  inline void SetTrackingSpace(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin);

  /// @brief Method ShouldAppRenderWithLowResources, addr 0x401273c, size 0x24, virtual false, abstract: false, final false
  inline bool ShouldAppRenderWithLowResources();

  /// @brief Method ShowMirrorWindow, addr 0x40126ac, size 0x24, virtual false, abstract: false, final false
  inline void ShowMirrorWindow();

  /// @brief Method Submit, addr 0x40123c8, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Submit(::OVR::OpenVR::EVREye eEye, ByRef<::OVR::OpenVR::Texture_t> pTexture, ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                  ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags);

  /// @brief Method SubmitExplicitTimingData, addr 0x401291c, size 0x24, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError SubmitExplicitTimingData();

  /// @brief Method SuspendRendering, addr 0x40127ac, size 0x28, virtual false, abstract: false, final false
  inline void SuspendRendering(bool bSuspend);

  /// @brief Method UnlockGLSharedTextureForAccess, addr 0x401288c, size 0x24, virtual false, abstract: false, final false
  inline void UnlockGLSharedTextureForAccess(::System::IntPtr glSharedTextureHandle);

  /// @brief Method WaitGetPoses, addr 0x4012334, size 0x38, virtual false, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError WaitGetPoses(::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pRenderPoseArray,
                                                        ::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*> pGamePoseArray);

  constexpr ::OVR::OpenVR::IVRCompositor const& __cordl_internal_get_FnTable() const;

  constexpr ::OVR::OpenVR::IVRCompositor& __cordl_internal_get_FnTable();

  constexpr void __cordl_internal_set_FnTable(::OVR::OpenVR::IVRCompositor value);

  /// @brief Method .ctor, addr 0x40121d8, size 0x114, virtual false, abstract: false, final false
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

  /// @brief Field FnTable, offset: 0x10, size: 0x158, def value: None
  ::OVR::OpenVR::IVRCompositor ___FnTable;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8852 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::CVRCompositor, 0x168>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::CVRCompositor, ___FnTable) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::CVRCompositor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::CVRCompositor*, "OVR.OpenVR", "CVRCompositor");

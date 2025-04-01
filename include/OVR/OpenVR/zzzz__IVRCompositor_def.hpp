#pragma once
// IWYU pragma private; include "OVR/OpenVR/IVRCompositor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(IVRCompositor)
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
class IVRCompositor__CanRenderScene;
}
namespace OVR::OpenVR {
class IVRCompositor__ClearLastSubmittedFrame;
}
namespace OVR::OpenVR {
class IVRCompositor__ClearSkyboxOverride;
}
namespace OVR::OpenVR {
class IVRCompositor__CompositorBringToFront;
}
namespace OVR::OpenVR {
class IVRCompositor__CompositorDumpImages;
}
namespace OVR::OpenVR {
class IVRCompositor__CompositorGoToBack;
}
namespace OVR::OpenVR {
class IVRCompositor__CompositorQuit;
}
namespace OVR::OpenVR {
class IVRCompositor__FadeGrid;
}
namespace OVR::OpenVR {
class IVRCompositor__FadeToColor;
}
namespace OVR::OpenVR {
class IVRCompositor__ForceInterleavedReprojectionOn;
}
namespace OVR::OpenVR {
class IVRCompositor__ForceReconnectProcess;
}
namespace OVR::OpenVR {
class IVRCompositor__GetCumulativeStats;
}
namespace OVR::OpenVR {
class IVRCompositor__GetCurrentFadeColor;
}
namespace OVR::OpenVR {
class IVRCompositor__GetCurrentGridAlpha;
}
namespace OVR::OpenVR {
class IVRCompositor__GetCurrentSceneFocusProcess;
}
namespace OVR::OpenVR {
class IVRCompositor__GetFrameTimeRemaining;
}
namespace OVR::OpenVR {
class IVRCompositor__GetFrameTiming;
}
namespace OVR::OpenVR {
class IVRCompositor__GetFrameTimings;
}
namespace OVR::OpenVR {
class IVRCompositor__GetLastFrameRenderer;
}
namespace OVR::OpenVR {
class IVRCompositor__GetLastPoseForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class IVRCompositor__GetLastPoses;
}
namespace OVR::OpenVR {
class IVRCompositor__GetMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class IVRCompositor__GetMirrorTextureGL;
}
namespace OVR::OpenVR {
class IVRCompositor__GetTrackingSpace;
}
namespace OVR::OpenVR {
class IVRCompositor__GetVulkanDeviceExtensionsRequired;
}
namespace OVR::OpenVR {
class IVRCompositor__GetVulkanInstanceExtensionsRequired;
}
namespace OVR::OpenVR {
class IVRCompositor__HideMirrorWindow;
}
namespace OVR::OpenVR {
class IVRCompositor__IsFullscreen;
}
namespace OVR::OpenVR {
class IVRCompositor__IsMirrorWindowVisible;
}
namespace OVR::OpenVR {
class IVRCompositor__LockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class IVRCompositor__PostPresentHandoff;
}
namespace OVR::OpenVR {
class IVRCompositor__ReleaseMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class IVRCompositor__ReleaseSharedGLTexture;
}
namespace OVR::OpenVR {
class IVRCompositor__SetExplicitTimingMode;
}
namespace OVR::OpenVR {
class IVRCompositor__SetSkyboxOverride;
}
namespace OVR::OpenVR {
class IVRCompositor__SetTrackingSpace;
}
namespace OVR::OpenVR {
class IVRCompositor__ShouldAppRenderWithLowResources;
}
namespace OVR::OpenVR {
class IVRCompositor__ShowMirrorWindow;
}
namespace OVR::OpenVR {
class IVRCompositor__SubmitExplicitTimingData;
}
namespace OVR::OpenVR {
class IVRCompositor__Submit;
}
namespace OVR::OpenVR {
class IVRCompositor__SuspendRendering;
}
namespace OVR::OpenVR {
class IVRCompositor__UnlockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class IVRCompositor__WaitGetPoses;
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
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
// Forward declare root types
namespace OVR::OpenVR {
class IVRCompositor__CanRenderScene;
}
namespace OVR::OpenVR {
class IVRCompositor__ClearLastSubmittedFrame;
}
namespace OVR::OpenVR {
class IVRCompositor__ClearSkyboxOverride;
}
namespace OVR::OpenVR {
class IVRCompositor__CompositorBringToFront;
}
namespace OVR::OpenVR {
class IVRCompositor__CompositorDumpImages;
}
namespace OVR::OpenVR {
class IVRCompositor__CompositorGoToBack;
}
namespace OVR::OpenVR {
class IVRCompositor__CompositorQuit;
}
namespace OVR::OpenVR {
class IVRCompositor__FadeGrid;
}
namespace OVR::OpenVR {
class IVRCompositor__FadeToColor;
}
namespace OVR::OpenVR {
class IVRCompositor__ForceInterleavedReprojectionOn;
}
namespace OVR::OpenVR {
class IVRCompositor__ForceReconnectProcess;
}
namespace OVR::OpenVR {
class IVRCompositor__GetCumulativeStats;
}
namespace OVR::OpenVR {
class IVRCompositor__GetCurrentFadeColor;
}
namespace OVR::OpenVR {
class IVRCompositor__GetCurrentGridAlpha;
}
namespace OVR::OpenVR {
class IVRCompositor__GetCurrentSceneFocusProcess;
}
namespace OVR::OpenVR {
class IVRCompositor__GetFrameTimeRemaining;
}
namespace OVR::OpenVR {
class IVRCompositor__GetFrameTiming;
}
namespace OVR::OpenVR {
class IVRCompositor__GetFrameTimings;
}
namespace OVR::OpenVR {
class IVRCompositor__GetLastFrameRenderer;
}
namespace OVR::OpenVR {
class IVRCompositor__GetLastPoseForTrackedDeviceIndex;
}
namespace OVR::OpenVR {
class IVRCompositor__GetLastPoses;
}
namespace OVR::OpenVR {
class IVRCompositor__GetMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class IVRCompositor__GetMirrorTextureGL;
}
namespace OVR::OpenVR {
class IVRCompositor__GetTrackingSpace;
}
namespace OVR::OpenVR {
class IVRCompositor__GetVulkanDeviceExtensionsRequired;
}
namespace OVR::OpenVR {
class IVRCompositor__GetVulkanInstanceExtensionsRequired;
}
namespace OVR::OpenVR {
class IVRCompositor__HideMirrorWindow;
}
namespace OVR::OpenVR {
class IVRCompositor__IsFullscreen;
}
namespace OVR::OpenVR {
class IVRCompositor__IsMirrorWindowVisible;
}
namespace OVR::OpenVR {
class IVRCompositor__LockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class IVRCompositor__PostPresentHandoff;
}
namespace OVR::OpenVR {
class IVRCompositor__ReleaseMirrorTextureD3D11;
}
namespace OVR::OpenVR {
class IVRCompositor__ReleaseSharedGLTexture;
}
namespace OVR::OpenVR {
class IVRCompositor__SetExplicitTimingMode;
}
namespace OVR::OpenVR {
class IVRCompositor__SetSkyboxOverride;
}
namespace OVR::OpenVR {
class IVRCompositor__SetTrackingSpace;
}
namespace OVR::OpenVR {
class IVRCompositor__ShouldAppRenderWithLowResources;
}
namespace OVR::OpenVR {
class IVRCompositor__ShowMirrorWindow;
}
namespace OVR::OpenVR {
class IVRCompositor__Submit;
}
namespace OVR::OpenVR {
class IVRCompositor__SubmitExplicitTimingData;
}
namespace OVR::OpenVR {
class IVRCompositor__SuspendRendering;
}
namespace OVR::OpenVR {
class IVRCompositor__UnlockGLSharedTextureForAccess;
}
namespace OVR::OpenVR {
class IVRCompositor__WaitGetPoses;
}
namespace OVR::OpenVR {
struct IVRCompositor;
}
// Write type traits
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__CanRenderScene);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__CompositorBringToFront);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__CompositorDumpImages);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__CompositorGoToBack);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__CompositorQuit);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__FadeGrid);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__FadeToColor);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__ForceReconnectProcess);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetCumulativeStats);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetFrameTiming);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetFrameTimings);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetLastPoses);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetTrackingSpace);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__HideMirrorWindow);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__IsFullscreen);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__PostPresentHandoff);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__SetSkyboxOverride);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__SetTrackingSpace);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__ShowMirrorWindow);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__Submit);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__SuspendRendering);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess);
MARK_REF_PTR_T(::OVR::OpenVR::IVRCompositor__WaitGetPoses);
MARK_VAL_T(::OVR::OpenVR::IVRCompositor);
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_SetTrackingSpace
class CORDL_TYPE IVRCompositor__SetTrackingSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405a730, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405a7b4, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405a71c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::ETrackingUniverseOrigin eOrigin);

  static inline ::OVR::OpenVR::IVRCompositor__SetTrackingSpace* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405a690, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__SetTrackingSpace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SetTrackingSpace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__SetTrackingSpace(IVRCompositor__SetTrackingSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SetTrackingSpace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__SetTrackingSpace(IVRCompositor__SetTrackingSpace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8662 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__SetTrackingSpace, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetTrackingSpace
class CORDL_TYPE IVRCompositor__GetTrackingSpace : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405a85c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405a87c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackingUniverseOrigin EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405a848, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::ETrackingUniverseOrigin Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__GetTrackingSpace* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405a7c0, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetTrackingSpace();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetTrackingSpace", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetTrackingSpace(IVRCompositor__GetTrackingSpace&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetTrackingSpace", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetTrackingSpace(IVRCompositor__GetTrackingSpace const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8663 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetTrackingSpace, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_WaitGetPoses
class CORDL_TYPE IVRCompositor__WaitGetPoses : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405a958, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                             ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405aa0c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405a944, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                  ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount);

  static inline ::OVR::OpenVR::IVRCompositor__WaitGetPoses* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405a8a4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__WaitGetPoses();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__WaitGetPoses", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__WaitGetPoses(IVRCompositor__WaitGetPoses&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__WaitGetPoses", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__WaitGetPoses(IVRCompositor__WaitGetPoses const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8664 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__WaitGetPoses, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetLastPoses
class CORDL_TYPE IVRCompositor__GetLastPoses : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405aae8, size 0xb4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                             ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ab9c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405aad4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pRenderPoseArray, uint32_t unRenderPoseArrayCount,
                                                  ::ByRef<::ArrayW<::OVR::OpenVR::TrackedDevicePose_t, ::Array<::OVR::OpenVR::TrackedDevicePose_t>*>> pGamePoseArray, uint32_t unGamePoseArrayCount);

  static inline ::OVR::OpenVR::IVRCompositor__GetLastPoses* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405aa34, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetLastPoses();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetLastPoses", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetLastPoses(IVRCompositor__GetLastPoses&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetLastPoses", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetLastPoses(IVRCompositor__GetLastPoses const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8665 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetLastPoses, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetLastPoseForTrackedDeviceIndex
class CORDL_TYPE IVRCompositor__GetLastPoseForTrackedDeviceIndex : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ac64, size 0xdc, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t unDeviceIndex, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ad40, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose,
                                                     ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ac50, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(uint32_t unDeviceIndex, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputPose, ::ByRef<::OVR::OpenVR::TrackedDevicePose_t> pOutputGamePose);

  static inline ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405abc4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetLastPoseForTrackedDeviceIndex();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetLastPoseForTrackedDeviceIndex", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetLastPoseForTrackedDeviceIndex(IVRCompositor__GetLastPoseForTrackedDeviceIndex&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetLastPoseForTrackedDeviceIndex", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetLastPoseForTrackedDeviceIndex(IVRCompositor__GetLastPoseForTrackedDeviceIndex const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8666 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_Submit
class CORDL_TYPE IVRCompositor__Submit : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ae14, size 0x124, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::ByRef<::OVR::OpenVR::Texture_t> pTexture, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                             ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405af38, size 0x34, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::ByRef<::OVR::OpenVR::Texture_t> pTexture, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ae00, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, ::ByRef<::OVR::OpenVR::Texture_t> pTexture, ::ByRef<::OVR::OpenVR::VRTextureBounds_t> pBounds,
                                                  ::OVR::OpenVR::EVRSubmitFlags nSubmitFlags);

  static inline ::OVR::OpenVR::IVRCompositor__Submit* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ad74, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__Submit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__Submit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__Submit(IVRCompositor__Submit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__Submit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__Submit(IVRCompositor__Submit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8667 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__Submit, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_ClearLastSubmittedFrame
class CORDL_TYPE IVRCompositor__ClearLastSubmittedFrame : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405b008, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405b028, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405aff4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405af6c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__ClearLastSubmittedFrame();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ClearLastSubmittedFrame", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__ClearLastSubmittedFrame(IVRCompositor__ClearLastSubmittedFrame&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ClearLastSubmittedFrame", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__ClearLastSubmittedFrame(IVRCompositor__ClearLastSubmittedFrame const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8668 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_PostPresentHandoff
class CORDL_TYPE IVRCompositor__PostPresentHandoff : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405b0d0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405b0f0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405b0bc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__PostPresentHandoff* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405b034, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__PostPresentHandoff();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__PostPresentHandoff", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__PostPresentHandoff(IVRCompositor__PostPresentHandoff&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__PostPresentHandoff", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__PostPresentHandoff(IVRCompositor__PostPresentHandoff const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8669 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__PostPresentHandoff, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetFrameTiming
class CORDL_TYPE IVRCompositor__GetFrameTiming : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405b1b0, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405b268, size 0x2c, virtual true, abstract: false, final false
  inline bool EndInvoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405b19c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t unFramesAgo);

  static inline ::OVR::OpenVR::IVRCompositor__GetFrameTiming* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405b0fc, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetFrameTiming();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetFrameTiming", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetFrameTiming(IVRCompositor__GetFrameTiming&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetFrameTiming", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetFrameTiming(IVRCompositor__GetFrameTiming const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8670 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetFrameTiming, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetFrameTimings
class CORDL_TYPE IVRCompositor__GetFrameTimings : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405b348, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405b400, size 0x2c, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405b334, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::ByRef<::OVR::OpenVR::Compositor_FrameTiming> pTiming, uint32_t nFrames);

  static inline ::OVR::OpenVR::IVRCompositor__GetFrameTimings* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405b294, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetFrameTimings();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetFrameTimings", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetFrameTimings(IVRCompositor__GetFrameTimings&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetFrameTimings", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetFrameTimings(IVRCompositor__GetFrameTimings const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8671 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetFrameTimings, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetFrameTimeRemaining
class CORDL_TYPE IVRCompositor__GetFrameTimeRemaining : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405b4c8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405b4e8, size 0x28, virtual true, abstract: false, final false
  inline float_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405b4b4, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405b42c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetFrameTimeRemaining();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetFrameTimeRemaining", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetFrameTimeRemaining(IVRCompositor__GetFrameTimeRemaining&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetFrameTimeRemaining", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetFrameTimeRemaining(IVRCompositor__GetFrameTimeRemaining const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8672 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetCumulativeStats
class CORDL_TYPE IVRCompositor__GetCumulativeStats : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405b5c4, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405b67c, size 0x1c, virtual true, abstract: false, final false
  inline void EndInvoke(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405b5b0, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::ByRef<::OVR::OpenVR::Compositor_CumulativeStats> pStats, uint32_t nStatsSizeInBytes);

  static inline ::OVR::OpenVR::IVRCompositor__GetCumulativeStats* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405b510, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetCumulativeStats();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetCumulativeStats", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetCumulativeStats(IVRCompositor__GetCumulativeStats&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetCumulativeStats", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetCumulativeStats(IVRCompositor__GetCumulativeStats const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8673 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetCumulativeStats, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_FadeToColor
class CORDL_TYPE IVRCompositor__FadeToColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405b73c, size 0x120, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405b85c, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405b724, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(float_t fSeconds, float_t fRed, float_t fGreen, float_t fBlue, float_t fAlpha, bool bBackground);

  static inline ::OVR::OpenVR::IVRCompositor__FadeToColor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405b698, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__FadeToColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__FadeToColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__FadeToColor(IVRCompositor__FadeToColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__FadeToColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__FadeToColor(IVRCompositor__FadeToColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8674 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__FadeToColor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetCurrentFadeColor
class CORDL_TYPE IVRCompositor__GetCurrentFadeColor : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405b90c, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bBackground, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405b994, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdColor_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405b8f4, size 0x18, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::HmdColor_t Invoke(bool bBackground);

  static inline ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405b868, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetCurrentFadeColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetCurrentFadeColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetCurrentFadeColor(IVRCompositor__GetCurrentFadeColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetCurrentFadeColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetCurrentFadeColor(IVRCompositor__GetCurrentFadeColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8675 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_FadeGrid
class CORDL_TYPE IVRCompositor__FadeGrid : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ba64, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(float_t fSeconds, bool bFadeIn, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405bb24, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ba4c, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(float_t fSeconds, bool bFadeIn);

  static inline ::OVR::OpenVR::IVRCompositor__FadeGrid* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405b9c0, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__FadeGrid();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__FadeGrid", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__FadeGrid(IVRCompositor__FadeGrid&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__FadeGrid", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__FadeGrid(IVRCompositor__FadeGrid const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8676 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__FadeGrid, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetCurrentGridAlpha
class CORDL_TYPE IVRCompositor__GetCurrentGridAlpha : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405bbcc, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405bbec, size 0x28, virtual true, abstract: false, final false
  inline float_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405bbb8, size 0x14, virtual true, abstract: false, final false
  inline float_t Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405bb30, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetCurrentGridAlpha();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetCurrentGridAlpha", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetCurrentGridAlpha(IVRCompositor__GetCurrentGridAlpha&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetCurrentGridAlpha", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetCurrentGridAlpha(IVRCompositor__GetCurrentGridAlpha const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8677 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_SetSkyboxOverride
class CORDL_TYPE IVRCompositor__SetSkyboxOverride : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405bcc8, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::ByRef<::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*>> pTextures, uint32_t unTextureCount, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405bd5c, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405bcb4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::ByRef<::ArrayW<::OVR::OpenVR::Texture_t, ::Array<::OVR::OpenVR::Texture_t>*>> pTextures, uint32_t unTextureCount);

  static inline ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405bc14, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__SetSkyboxOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SetSkyboxOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__SetSkyboxOverride(IVRCompositor__SetSkyboxOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SetSkyboxOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__SetSkyboxOverride(IVRCompositor__SetSkyboxOverride const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8678 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__SetSkyboxOverride, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_ClearSkyboxOverride
class CORDL_TYPE IVRCompositor__ClearSkyboxOverride : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405be20, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405be40, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405be0c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405bd84, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__ClearSkyboxOverride();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ClearSkyboxOverride", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__ClearSkyboxOverride(IVRCompositor__ClearSkyboxOverride&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ClearSkyboxOverride", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__ClearSkyboxOverride(IVRCompositor__ClearSkyboxOverride const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8679 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_CompositorBringToFront
class CORDL_TYPE IVRCompositor__CompositorBringToFront : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405bee8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405bf08, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405bed4, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__CompositorBringToFront* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405be4c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__CompositorBringToFront();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CompositorBringToFront", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__CompositorBringToFront(IVRCompositor__CompositorBringToFront&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CompositorBringToFront", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__CompositorBringToFront(IVRCompositor__CompositorBringToFront const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8680 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__CompositorBringToFront, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_CompositorGoToBack
class CORDL_TYPE IVRCompositor__CompositorGoToBack : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405bfb0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405bfd0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405bf9c, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__CompositorGoToBack* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405bf14, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__CompositorGoToBack();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CompositorGoToBack", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__CompositorGoToBack(IVRCompositor__CompositorGoToBack&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CompositorGoToBack", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__CompositorGoToBack(IVRCompositor__CompositorGoToBack const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8681 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__CompositorGoToBack, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_CompositorQuit
class CORDL_TYPE IVRCompositor__CompositorQuit : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c078, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c098, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c064, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__CompositorQuit* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405bfdc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__CompositorQuit();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CompositorQuit", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__CompositorQuit(IVRCompositor__CompositorQuit&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CompositorQuit", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__CompositorQuit(IVRCompositor__CompositorQuit const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8682 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__CompositorQuit, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_IsFullscreen
class CORDL_TYPE IVRCompositor__IsFullscreen : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c140, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c160, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c12c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__IsFullscreen* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c0a4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__IsFullscreen();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__IsFullscreen", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__IsFullscreen(IVRCompositor__IsFullscreen&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__IsFullscreen", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__IsFullscreen(IVRCompositor__IsFullscreen const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8683 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__IsFullscreen, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetCurrentSceneFocusProcess
class CORDL_TYPE IVRCompositor__GetCurrentSceneFocusProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c224, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c244, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c210, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c188, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetCurrentSceneFocusProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetCurrentSceneFocusProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetCurrentSceneFocusProcess(IVRCompositor__GetCurrentSceneFocusProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetCurrentSceneFocusProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetCurrentSceneFocusProcess(IVRCompositor__GetCurrentSceneFocusProcess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8684 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetLastFrameRenderer
class CORDL_TYPE IVRCompositor__GetLastFrameRenderer : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c308, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c328, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c2f4, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c26c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetLastFrameRenderer();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetLastFrameRenderer", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetLastFrameRenderer(IVRCompositor__GetLastFrameRenderer&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetLastFrameRenderer", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetLastFrameRenderer(IVRCompositor__GetLastFrameRenderer const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8685 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_CanRenderScene
class CORDL_TYPE IVRCompositor__CanRenderScene : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c3ec, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c40c, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c3d8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__CanRenderScene* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c350, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__CanRenderScene();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CanRenderScene", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__CanRenderScene(IVRCompositor__CanRenderScene&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CanRenderScene", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__CanRenderScene(IVRCompositor__CanRenderScene const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8686 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__CanRenderScene, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_ShowMirrorWindow
class CORDL_TYPE IVRCompositor__ShowMirrorWindow : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c4d0, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c4f0, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c4bc, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c434, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__ShowMirrorWindow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ShowMirrorWindow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__ShowMirrorWindow(IVRCompositor__ShowMirrorWindow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ShowMirrorWindow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__ShowMirrorWindow(IVRCompositor__ShowMirrorWindow const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8687 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__ShowMirrorWindow, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_HideMirrorWindow
class CORDL_TYPE IVRCompositor__HideMirrorWindow : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c598, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c5b8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c584, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__HideMirrorWindow* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c4fc, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__HideMirrorWindow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__HideMirrorWindow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__HideMirrorWindow(IVRCompositor__HideMirrorWindow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__HideMirrorWindow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__HideMirrorWindow(IVRCompositor__HideMirrorWindow const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8688 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__HideMirrorWindow, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_IsMirrorWindowVisible
class CORDL_TYPE IVRCompositor__IsMirrorWindowVisible : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c660, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c680, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c64c, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c5c4, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__IsMirrorWindowVisible();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__IsMirrorWindowVisible", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__IsMirrorWindowVisible(IVRCompositor__IsMirrorWindowVisible&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__IsMirrorWindowVisible", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__IsMirrorWindowVisible(IVRCompositor__IsMirrorWindowVisible const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8689 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_CompositorDumpImages
class CORDL_TYPE IVRCompositor__CompositorDumpImages : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c744, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c764, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c730, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__CompositorDumpImages* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c6a8, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__CompositorDumpImages();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CompositorDumpImages", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__CompositorDumpImages(IVRCompositor__CompositorDumpImages&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__CompositorDumpImages", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__CompositorDumpImages(IVRCompositor__CompositorDumpImages const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8690 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__CompositorDumpImages, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_ShouldAppRenderWithLowResources
class CORDL_TYPE IVRCompositor__ShouldAppRenderWithLowResources : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c80c, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c82c, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c7f8, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c770, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__ShouldAppRenderWithLowResources();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ShouldAppRenderWithLowResources", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__ShouldAppRenderWithLowResources(IVRCompositor__ShouldAppRenderWithLowResources&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ShouldAppRenderWithLowResources", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__ShouldAppRenderWithLowResources(IVRCompositor__ShouldAppRenderWithLowResources const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8691 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_ForceInterleavedReprojectionOn
class CORDL_TYPE IVRCompositor__ForceInterleavedReprojectionOn : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405c8f8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bOverride, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405c980, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405c8e0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool bOverride);

  static inline ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c854, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__ForceInterleavedReprojectionOn();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ForceInterleavedReprojectionOn", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__ForceInterleavedReprojectionOn(IVRCompositor__ForceInterleavedReprojectionOn&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ForceInterleavedReprojectionOn", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__ForceInterleavedReprojectionOn(IVRCompositor__ForceInterleavedReprojectionOn const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8692 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_ForceReconnectProcess
class CORDL_TYPE IVRCompositor__ForceReconnectProcess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405ca28, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ca48, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405ca14, size 0x14, virtual true, abstract: false, final false
  inline void Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405c98c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__ForceReconnectProcess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ForceReconnectProcess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__ForceReconnectProcess(IVRCompositor__ForceReconnectProcess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ForceReconnectProcess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__ForceReconnectProcess(IVRCompositor__ForceReconnectProcess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8693 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__ForceReconnectProcess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_SuspendRendering
class CORDL_TYPE IVRCompositor__SuspendRendering : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405caf8, size 0x88, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(bool bSuspend, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405cb80, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405cae0, size 0x18, virtual true, abstract: false, final false
  inline void Invoke(bool bSuspend);

  static inline ::OVR::OpenVR::IVRCompositor__SuspendRendering* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ca54, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__SuspendRendering();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SuspendRendering", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__SuspendRendering(IVRCompositor__SuspendRendering&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SuspendRendering", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__SuspendRendering(IVRCompositor__SuspendRendering const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8694 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__SuspendRendering, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetMirrorTextureD3D11
class CORDL_TYPE IVRCompositor__GetMirrorTextureD3D11 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405cc2c, size 0xd4, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource, ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView,
                                             ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405cd00, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::ByRef<::System::IntPtr> ppD3D11ShaderResourceView, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405cc18, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, ::System::IntPtr pD3D11DeviceOrResource, ::ByRef<::System::IntPtr> ppD3D11ShaderResourceView);

  static inline ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405cb8c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetMirrorTextureD3D11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetMirrorTextureD3D11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetMirrorTextureD3D11(IVRCompositor__GetMirrorTextureD3D11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetMirrorTextureD3D11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetMirrorTextureD3D11(IVRCompositor__GetMirrorTextureD3D11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8695 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_ReleaseMirrorTextureD3D11
class CORDL_TYPE IVRCompositor__ReleaseMirrorTextureD3D11 : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405cdcc, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr pD3D11ShaderResourceView, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405ce50, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405cdb8, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr pD3D11ShaderResourceView);

  static inline ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405cd2c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__ReleaseMirrorTextureD3D11();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ReleaseMirrorTextureD3D11", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__ReleaseMirrorTextureD3D11(IVRCompositor__ReleaseMirrorTextureD3D11&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ReleaseMirrorTextureD3D11", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__ReleaseMirrorTextureD3D11(IVRCompositor__ReleaseMirrorTextureD3D11 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8696 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetMirrorTextureGL
class CORDL_TYPE IVRCompositor__GetMirrorTextureGL : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405cefc, size 0xec, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pglTextureId, ::System::IntPtr pglSharedTextureHandle, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405cfe8, size 0x2c, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::ByRef<uint32_t> pglTextureId, ::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405cee8, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke(::OVR::OpenVR::EVREye eEye, ::ByRef<uint32_t> pglTextureId, ::System::IntPtr pglSharedTextureHandle);

  static inline ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405ce5c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetMirrorTextureGL();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetMirrorTextureGL", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetMirrorTextureGL(IVRCompositor__GetMirrorTextureGL&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetMirrorTextureGL", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetMirrorTextureGL(IVRCompositor__GetMirrorTextureGL const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8697 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_ReleaseSharedGLTexture
class CORDL_TYPE IVRCompositor__ReleaseSharedGLTexture : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d0b4, size 0xb8, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(uint32_t glTextureId, ::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d16c, size 0x28, virtual true, abstract: false, final false
  inline bool EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d0a0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(uint32_t glTextureId, ::System::IntPtr glSharedTextureHandle);

  static inline ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d014, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__ReleaseSharedGLTexture();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ReleaseSharedGLTexture", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__ReleaseSharedGLTexture(IVRCompositor__ReleaseSharedGLTexture&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__ReleaseSharedGLTexture", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__ReleaseSharedGLTexture(IVRCompositor__ReleaseSharedGLTexture const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8698 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_LockGLSharedTextureForAccess
class CORDL_TYPE IVRCompositor__LockGLSharedTextureForAccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d234, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d2b8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d220, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr glSharedTextureHandle);

  static inline ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d194, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__LockGLSharedTextureForAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__LockGLSharedTextureForAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__LockGLSharedTextureForAccess(IVRCompositor__LockGLSharedTextureForAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__LockGLSharedTextureForAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__LockGLSharedTextureForAccess(IVRCompositor__LockGLSharedTextureForAccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8699 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_UnlockGLSharedTextureForAccess
class CORDL_TYPE IVRCompositor__UnlockGLSharedTextureForAccess : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d364, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr glSharedTextureHandle, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d3e8, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d350, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::System::IntPtr glSharedTextureHandle);

  static inline ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d2c4, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__UnlockGLSharedTextureForAccess();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__UnlockGLSharedTextureForAccess", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__UnlockGLSharedTextureForAccess(IVRCompositor__UnlockGLSharedTextureForAccess&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__UnlockGLSharedTextureForAccess", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__UnlockGLSharedTextureForAccess(IVRCompositor__UnlockGLSharedTextureForAccess const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8700 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetVulkanInstanceExtensionsRequired
class CORDL_TYPE IVRCompositor__GetVulkanInstanceExtensionsRequired : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d4a8, size 0x94, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d53c, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d494, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  static inline ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d3f4, size 0xa0, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetVulkanInstanceExtensionsRequired();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetVulkanInstanceExtensionsRequired", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetVulkanInstanceExtensionsRequired(IVRCompositor__GetVulkanInstanceExtensionsRequired&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetVulkanInstanceExtensionsRequired", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetVulkanInstanceExtensionsRequired(IVRCompositor__GetVulkanInstanceExtensionsRequired const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8701 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_GetVulkanDeviceExtensionsRequired
class CORDL_TYPE IVRCompositor__GetVulkanDeviceExtensionsRequired : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d604, size 0xc0, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::IntPtr pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize, ::System::AsyncCallback* callback,
                                             ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d6c4, size 0x28, virtual true, abstract: false, final false
  inline uint32_t EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d5f0, size 0x14, virtual true, abstract: false, final false
  inline uint32_t Invoke(::System::IntPtr pPhysicalDevice, ::System::Text::StringBuilder* pchValue, uint32_t unBufferSize);

  static inline ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d564, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__GetVulkanDeviceExtensionsRequired();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetVulkanDeviceExtensionsRequired", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__GetVulkanDeviceExtensionsRequired(IVRCompositor__GetVulkanDeviceExtensionsRequired&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__GetVulkanDeviceExtensionsRequired", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__GetVulkanDeviceExtensionsRequired(IVRCompositor__GetVulkanDeviceExtensionsRequired const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8702 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_SetExplicitTimingMode
class CORDL_TYPE IVRCompositor__SetExplicitTimingMode : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d78c, size 0x84, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode, ::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d810, size 0xc, virtual true, abstract: false, final false
  inline void EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d778, size 0x14, virtual true, abstract: false, final false
  inline void Invoke(::OVR::OpenVR::EVRCompositorTimingMode eTimingMode);

  static inline ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d6ec, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__SetExplicitTimingMode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SetExplicitTimingMode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__SetExplicitTimingMode(IVRCompositor__SetExplicitTimingMode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SetExplicitTimingMode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__SetExplicitTimingMode(IVRCompositor__SetExplicitTimingMode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8703 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies System.MulticastDelegate
namespace OVR::OpenVR {
// Is value type: false
// CS Name: OVR.OpenVR.IVRCompositor/_SubmitExplicitTimingData
class CORDL_TYPE IVRCompositor__SubmitExplicitTimingData : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method BeginInvoke, addr 0x405d8b8, size 0x20, virtual true, abstract: false, final false
  inline ::System::IAsyncResult* BeginInvoke(::System::AsyncCallback* callback, ::System::Object* object);

  /// @brief Method EndInvoke, addr 0x405d8d8, size 0x28, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError EndInvoke(::System::IAsyncResult* result);

  /// @brief Method Invoke, addr 0x405d8a4, size 0x14, virtual true, abstract: false, final false
  inline ::OVR::OpenVR::EVRCompositorError Invoke();

  static inline ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x405d81c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor__SubmitExplicitTimingData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SubmitExplicitTimingData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IVRCompositor__SubmitExplicitTimingData(IVRCompositor__SubmitExplicitTimingData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IVRCompositor__SubmitExplicitTimingData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IVRCompositor__SubmitExplicitTimingData(IVRCompositor__SubmitExplicitTimingData const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8704 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData, 0x80>, "Size mismatch!");

} // namespace OVR::OpenVR
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IVRCompositor
struct CORDL_TYPE IVRCompositor {
public:
  // Declarations
  using _CanRenderScene = ::OVR::OpenVR::IVRCompositor__CanRenderScene;

  using _ClearLastSubmittedFrame = ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame;

  using _ClearSkyboxOverride = ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride;

  using _CompositorBringToFront = ::OVR::OpenVR::IVRCompositor__CompositorBringToFront;

  using _CompositorDumpImages = ::OVR::OpenVR::IVRCompositor__CompositorDumpImages;

  using _CompositorGoToBack = ::OVR::OpenVR::IVRCompositor__CompositorGoToBack;

  using _CompositorQuit = ::OVR::OpenVR::IVRCompositor__CompositorQuit;

  using _FadeGrid = ::OVR::OpenVR::IVRCompositor__FadeGrid;

  using _FadeToColor = ::OVR::OpenVR::IVRCompositor__FadeToColor;

  using _ForceInterleavedReprojectionOn = ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn;

  using _ForceReconnectProcess = ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess;

  using _GetCumulativeStats = ::OVR::OpenVR::IVRCompositor__GetCumulativeStats;

  using _GetCurrentFadeColor = ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor;

  using _GetCurrentGridAlpha = ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha;

  using _GetCurrentSceneFocusProcess = ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess;

  using _GetFrameTimeRemaining = ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining;

  using _GetFrameTiming = ::OVR::OpenVR::IVRCompositor__GetFrameTiming;

  using _GetFrameTimings = ::OVR::OpenVR::IVRCompositor__GetFrameTimings;

  using _GetLastFrameRenderer = ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer;

  using _GetLastPoseForTrackedDeviceIndex = ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex;

  using _GetLastPoses = ::OVR::OpenVR::IVRCompositor__GetLastPoses;

  using _GetMirrorTextureD3D11 = ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11;

  using _GetMirrorTextureGL = ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL;

  using _GetTrackingSpace = ::OVR::OpenVR::IVRCompositor__GetTrackingSpace;

  using _GetVulkanDeviceExtensionsRequired = ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired;

  using _GetVulkanInstanceExtensionsRequired = ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired;

  using _HideMirrorWindow = ::OVR::OpenVR::IVRCompositor__HideMirrorWindow;

  using _IsFullscreen = ::OVR::OpenVR::IVRCompositor__IsFullscreen;

  using _IsMirrorWindowVisible = ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible;

  using _LockGLSharedTextureForAccess = ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess;

  using _PostPresentHandoff = ::OVR::OpenVR::IVRCompositor__PostPresentHandoff;

  using _ReleaseMirrorTextureD3D11 = ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11;

  using _ReleaseSharedGLTexture = ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture;

  using _SetExplicitTimingMode = ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode;

  using _SetSkyboxOverride = ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride;

  using _SetTrackingSpace = ::OVR::OpenVR::IVRCompositor__SetTrackingSpace;

  using _ShouldAppRenderWithLowResources = ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources;

  using _ShowMirrorWindow = ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow;

  using _Submit = ::OVR::OpenVR::IVRCompositor__Submit;

  using _SubmitExplicitTimingData = ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData;

  using _SuspendRendering = ::OVR::OpenVR::IVRCompositor__SuspendRendering;

  using _UnlockGLSharedTextureForAccess = ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess;

  using _WaitGetPoses = ::OVR::OpenVR::IVRCompositor__WaitGetPoses;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IVRCompositor();

  // Ctor Parameters [CppParam { name: "SetTrackingSpace", ty: "::OVR::OpenVR::IVRCompositor__SetTrackingSpace*", modifiers: "", def_value: None }, CppParam { name: "GetTrackingSpace", ty:
  // "::OVR::OpenVR::IVRCompositor__GetTrackingSpace*", modifiers: "", def_value: None }, CppParam { name: "WaitGetPoses", ty: "::OVR::OpenVR::IVRCompositor__WaitGetPoses*", modifiers: "", def_value:
  // None }, CppParam { name: "GetLastPoses", ty: "::OVR::OpenVR::IVRCompositor__GetLastPoses*", modifiers: "", def_value: None }, CppParam { name: "GetLastPoseForTrackedDeviceIndex", ty:
  // "::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*", modifiers: "", def_value: None }, CppParam { name: "Submit", ty: "::OVR::OpenVR::IVRCompositor__Submit*", modifiers: "",
  // def_value: None }, CppParam { name: "ClearLastSubmittedFrame", ty: "::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*", modifiers: "", def_value: None }, CppParam { name:
  // "PostPresentHandoff", ty: "::OVR::OpenVR::IVRCompositor__PostPresentHandoff*", modifiers: "", def_value: None }, CppParam { name: "GetFrameTiming", ty:
  // "::OVR::OpenVR::IVRCompositor__GetFrameTiming*", modifiers: "", def_value: None }, CppParam { name: "GetFrameTimings", ty: "::OVR::OpenVR::IVRCompositor__GetFrameTimings*", modifiers: "",
  // def_value: None }, CppParam { name: "GetFrameTimeRemaining", ty: "::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*", modifiers: "", def_value: None }, CppParam { name: "GetCumulativeStats",
  // ty: "::OVR::OpenVR::IVRCompositor__GetCumulativeStats*", modifiers: "", def_value: None }, CppParam { name: "FadeToColor", ty: "::OVR::OpenVR::IVRCompositor__FadeToColor*", modifiers: "",
  // def_value: None }, CppParam { name: "GetCurrentFadeColor", ty: "::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*", modifiers: "", def_value: None }, CppParam { name: "FadeGrid", ty:
  // "::OVR::OpenVR::IVRCompositor__FadeGrid*", modifiers: "", def_value: None }, CppParam { name: "GetCurrentGridAlpha", ty: "::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*", modifiers: "",
  // def_value: None }, CppParam { name: "SetSkyboxOverride", ty: "::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*", modifiers: "", def_value: None }, CppParam { name: "ClearSkyboxOverride", ty:
  // "::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*", modifiers: "", def_value: None }, CppParam { name: "CompositorBringToFront", ty: "::OVR::OpenVR::IVRCompositor__CompositorBringToFront*",
  // modifiers: "", def_value: None }, CppParam { name: "CompositorGoToBack", ty: "::OVR::OpenVR::IVRCompositor__CompositorGoToBack*", modifiers: "", def_value: None }, CppParam { name:
  // "CompositorQuit", ty: "::OVR::OpenVR::IVRCompositor__CompositorQuit*", modifiers: "", def_value: None }, CppParam { name: "IsFullscreen", ty: "::OVR::OpenVR::IVRCompositor__IsFullscreen*",
  // modifiers: "", def_value: None }, CppParam { name: "GetCurrentSceneFocusProcess", ty: "::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*", modifiers: "", def_value: None }, CppParam {
  // name: "GetLastFrameRenderer", ty: "::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*", modifiers: "", def_value: None }, CppParam { name: "CanRenderScene", ty:
  // "::OVR::OpenVR::IVRCompositor__CanRenderScene*", modifiers: "", def_value: None }, CppParam { name: "ShowMirrorWindow", ty: "::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*", modifiers: "",
  // def_value: None }, CppParam { name: "HideMirrorWindow", ty: "::OVR::OpenVR::IVRCompositor__HideMirrorWindow*", modifiers: "", def_value: None }, CppParam { name: "IsMirrorWindowVisible", ty:
  // "::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*", modifiers: "", def_value: None }, CppParam { name: "CompositorDumpImages", ty: "::OVR::OpenVR::IVRCompositor__CompositorDumpImages*",
  // modifiers: "", def_value: None }, CppParam { name: "ShouldAppRenderWithLowResources", ty: "::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*", modifiers: "", def_value: None },
  // CppParam { name: "ForceInterleavedReprojectionOn", ty: "::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*", modifiers: "", def_value: None }, CppParam { name: "ForceReconnectProcess",
  // ty: "::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*", modifiers: "", def_value: None }, CppParam { name: "SuspendRendering", ty: "::OVR::OpenVR::IVRCompositor__SuspendRendering*",
  // modifiers: "", def_value: None }, CppParam { name: "GetMirrorTextureD3D11", ty: "::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*", modifiers: "", def_value: None }, CppParam { name:
  // "ReleaseMirrorTextureD3D11", ty: "::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*", modifiers: "", def_value: None }, CppParam { name: "GetMirrorTextureGL", ty:
  // "::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*", modifiers: "", def_value: None }, CppParam { name: "ReleaseSharedGLTexture", ty: "::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*",
  // modifiers: "", def_value: None }, CppParam { name: "LockGLSharedTextureForAccess", ty: "::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*", modifiers: "", def_value: None }, CppParam {
  // name: "UnlockGLSharedTextureForAccess", ty: "::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*", modifiers: "", def_value: None }, CppParam { name:
  // "GetVulkanInstanceExtensionsRequired", ty: "::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*", modifiers: "", def_value: None }, CppParam { name:
  // "GetVulkanDeviceExtensionsRequired", ty: "::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*", modifiers: "", def_value: None }, CppParam { name: "SetExplicitTimingMode", ty:
  // "::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*", modifiers: "", def_value: None }, CppParam { name: "SubmitExplicitTimingData", ty:
  // "::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*", modifiers: "", def_value: None }]
  constexpr IVRCompositor(::OVR::OpenVR::IVRCompositor__SetTrackingSpace* SetTrackingSpace, ::OVR::OpenVR::IVRCompositor__GetTrackingSpace* GetTrackingSpace,
                          ::OVR::OpenVR::IVRCompositor__WaitGetPoses* WaitGetPoses, ::OVR::OpenVR::IVRCompositor__GetLastPoses* GetLastPoses,
                          ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex, ::OVR::OpenVR::IVRCompositor__Submit* Submit,
                          ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame* ClearLastSubmittedFrame, ::OVR::OpenVR::IVRCompositor__PostPresentHandoff* PostPresentHandoff,
                          ::OVR::OpenVR::IVRCompositor__GetFrameTiming* GetFrameTiming, ::OVR::OpenVR::IVRCompositor__GetFrameTimings* GetFrameTimings,
                          ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining* GetFrameTimeRemaining, ::OVR::OpenVR::IVRCompositor__GetCumulativeStats* GetCumulativeStats,
                          ::OVR::OpenVR::IVRCompositor__FadeToColor* FadeToColor, ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor* GetCurrentFadeColor,
                          ::OVR::OpenVR::IVRCompositor__FadeGrid* FadeGrid, ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha* GetCurrentGridAlpha,
                          ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride* SetSkyboxOverride, ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride* ClearSkyboxOverride,
                          ::OVR::OpenVR::IVRCompositor__CompositorBringToFront* CompositorBringToFront, ::OVR::OpenVR::IVRCompositor__CompositorGoToBack* CompositorGoToBack,
                          ::OVR::OpenVR::IVRCompositor__CompositorQuit* CompositorQuit, ::OVR::OpenVR::IVRCompositor__IsFullscreen* IsFullscreen,
                          ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess, ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer* GetLastFrameRenderer,
                          ::OVR::OpenVR::IVRCompositor__CanRenderScene* CanRenderScene, ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow* ShowMirrorWindow,
                          ::OVR::OpenVR::IVRCompositor__HideMirrorWindow* HideMirrorWindow, ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible* IsMirrorWindowVisible,
                          ::OVR::OpenVR::IVRCompositor__CompositorDumpImages* CompositorDumpImages, ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources,
                          ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn, ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess* ForceReconnectProcess,
                          ::OVR::OpenVR::IVRCompositor__SuspendRendering* SuspendRendering, ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11* GetMirrorTextureD3D11,
                          ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11, ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL* GetMirrorTextureGL,
                          ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture* ReleaseSharedGLTexture, ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess* LockGLSharedTextureForAccess,
                          ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess,
                          ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired,
                          ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired,
                          ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode* SetExplicitTimingMode, ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData* SubmitExplicitTimingData) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8705 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x158 };

  /// @brief Field SetTrackingSpace, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__SetTrackingSpace* SetTrackingSpace;

  /// @brief Field GetTrackingSpace, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetTrackingSpace* GetTrackingSpace;

  /// @brief Field WaitGetPoses, offset: 0x10, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__WaitGetPoses* WaitGetPoses;

  /// @brief Field GetLastPoses, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetLastPoses* GetLastPoses;

  /// @brief Field GetLastPoseForTrackedDeviceIndex, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex* GetLastPoseForTrackedDeviceIndex;

  /// @brief Field Submit, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__Submit* Submit;

  /// @brief Field ClearLastSubmittedFrame, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame* ClearLastSubmittedFrame;

  /// @brief Field PostPresentHandoff, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__PostPresentHandoff* PostPresentHandoff;

  /// @brief Field GetFrameTiming, offset: 0x40, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetFrameTiming* GetFrameTiming;

  /// @brief Field GetFrameTimings, offset: 0x48, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetFrameTimings* GetFrameTimings;

  /// @brief Field GetFrameTimeRemaining, offset: 0x50, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining* GetFrameTimeRemaining;

  /// @brief Field GetCumulativeStats, offset: 0x58, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetCumulativeStats* GetCumulativeStats;

  /// @brief Field FadeToColor, offset: 0x60, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__FadeToColor* FadeToColor;

  /// @brief Field GetCurrentFadeColor, offset: 0x68, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor* GetCurrentFadeColor;

  /// @brief Field FadeGrid, offset: 0x70, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__FadeGrid* FadeGrid;

  /// @brief Field GetCurrentGridAlpha, offset: 0x78, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha* GetCurrentGridAlpha;

  /// @brief Field SetSkyboxOverride, offset: 0x80, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__SetSkyboxOverride* SetSkyboxOverride;

  /// @brief Field ClearSkyboxOverride, offset: 0x88, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride* ClearSkyboxOverride;

  /// @brief Field CompositorBringToFront, offset: 0x90, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__CompositorBringToFront* CompositorBringToFront;

  /// @brief Field CompositorGoToBack, offset: 0x98, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__CompositorGoToBack* CompositorGoToBack;

  /// @brief Field CompositorQuit, offset: 0xa0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__CompositorQuit* CompositorQuit;

  /// @brief Field IsFullscreen, offset: 0xa8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__IsFullscreen* IsFullscreen;

  /// @brief Field GetCurrentSceneFocusProcess, offset: 0xb0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess* GetCurrentSceneFocusProcess;

  /// @brief Field GetLastFrameRenderer, offset: 0xb8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer* GetLastFrameRenderer;

  /// @brief Field CanRenderScene, offset: 0xc0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__CanRenderScene* CanRenderScene;

  /// @brief Field ShowMirrorWindow, offset: 0xc8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__ShowMirrorWindow* ShowMirrorWindow;

  /// @brief Field HideMirrorWindow, offset: 0xd0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__HideMirrorWindow* HideMirrorWindow;

  /// @brief Field IsMirrorWindowVisible, offset: 0xd8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible* IsMirrorWindowVisible;

  /// @brief Field CompositorDumpImages, offset: 0xe0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__CompositorDumpImages* CompositorDumpImages;

  /// @brief Field ShouldAppRenderWithLowResources, offset: 0xe8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources* ShouldAppRenderWithLowResources;

  /// @brief Field ForceInterleavedReprojectionOn, offset: 0xf0, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn* ForceInterleavedReprojectionOn;

  /// @brief Field ForceReconnectProcess, offset: 0xf8, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__ForceReconnectProcess* ForceReconnectProcess;

  /// @brief Field SuspendRendering, offset: 0x100, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__SuspendRendering* SuspendRendering;

  /// @brief Field GetMirrorTextureD3D11, offset: 0x108, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11* GetMirrorTextureD3D11;

  /// @brief Field ReleaseMirrorTextureD3D11, offset: 0x110, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11* ReleaseMirrorTextureD3D11;

  /// @brief Field GetMirrorTextureGL, offset: 0x118, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL* GetMirrorTextureGL;

  /// @brief Field ReleaseSharedGLTexture, offset: 0x120, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture* ReleaseSharedGLTexture;

  /// @brief Field LockGLSharedTextureForAccess, offset: 0x128, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess* LockGLSharedTextureForAccess;

  /// @brief Field UnlockGLSharedTextureForAccess, offset: 0x130, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess* UnlockGLSharedTextureForAccess;

  /// @brief Field GetVulkanInstanceExtensionsRequired, offset: 0x138, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired* GetVulkanInstanceExtensionsRequired;

  /// @brief Field GetVulkanDeviceExtensionsRequired, offset: 0x140, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired* GetVulkanDeviceExtensionsRequired;

  /// @brief Field SetExplicitTimingMode, offset: 0x148, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode* SetExplicitTimingMode;

  /// @brief Field SubmitExplicitTimingData, offset: 0x150, size: 0x8, def value: None
  ::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData* SubmitExplicitTimingData;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SetTrackingSpace) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetTrackingSpace) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, WaitGetPoses) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetLastPoses) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetLastPoseForTrackedDeviceIndex) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, Submit) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ClearLastSubmittedFrame) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, PostPresentHandoff) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetFrameTiming) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetFrameTimings) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetFrameTimeRemaining) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetCumulativeStats) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, FadeToColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetCurrentFadeColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, FadeGrid) == 0x70, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetCurrentGridAlpha) == 0x78, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SetSkyboxOverride) == 0x80, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ClearSkyboxOverride) == 0x88, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CompositorBringToFront) == 0x90, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CompositorGoToBack) == 0x98, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CompositorQuit) == 0xa0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, IsFullscreen) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetCurrentSceneFocusProcess) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetLastFrameRenderer) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CanRenderScene) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ShowMirrorWindow) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, HideMirrorWindow) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, IsMirrorWindowVisible) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, CompositorDumpImages) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ShouldAppRenderWithLowResources) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ForceInterleavedReprojectionOn) == 0xf0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ForceReconnectProcess) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SuspendRendering) == 0x100, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetMirrorTextureD3D11) == 0x108, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ReleaseMirrorTextureD3D11) == 0x110, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetMirrorTextureGL) == 0x118, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, ReleaseSharedGLTexture) == 0x120, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, LockGLSharedTextureForAccess) == 0x128, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, UnlockGLSharedTextureForAccess) == 0x130, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetVulkanInstanceExtensionsRequired) == 0x138, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, GetVulkanDeviceExtensionsRequired) == 0x140, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SetExplicitTimingMode) == 0x148, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IVRCompositor, SubmitExplicitTimingData) == 0x150, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IVRCompositor, 0x158>, "Size mismatch!");

} // namespace OVR::OpenVR
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__CanRenderScene);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__CanRenderScene*, "OVR.OpenVR", "IVRCompositor/_CanRenderScene");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__ClearLastSubmittedFrame*, "OVR.OpenVR", "IVRCompositor/_ClearLastSubmittedFrame");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__ClearSkyboxOverride*, "OVR.OpenVR", "IVRCompositor/_ClearSkyboxOverride");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__CompositorBringToFront);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__CompositorBringToFront*, "OVR.OpenVR", "IVRCompositor/_CompositorBringToFront");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__CompositorDumpImages);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__CompositorDumpImages*, "OVR.OpenVR", "IVRCompositor/_CompositorDumpImages");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__CompositorGoToBack);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__CompositorGoToBack*, "OVR.OpenVR", "IVRCompositor/_CompositorGoToBack");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__CompositorQuit);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__CompositorQuit*, "OVR.OpenVR", "IVRCompositor/_CompositorQuit");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__FadeGrid);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__FadeGrid*, "OVR.OpenVR", "IVRCompositor/_FadeGrid");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__FadeToColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__FadeToColor*, "OVR.OpenVR", "IVRCompositor/_FadeToColor");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__ForceInterleavedReprojectionOn*, "OVR.OpenVR", "IVRCompositor/_ForceInterleavedReprojectionOn");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__ForceReconnectProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__ForceReconnectProcess*, "OVR.OpenVR", "IVRCompositor/_ForceReconnectProcess");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetCumulativeStats);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetCumulativeStats*, "OVR.OpenVR", "IVRCompositor/_GetCumulativeStats");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetCurrentFadeColor*, "OVR.OpenVR", "IVRCompositor/_GetCurrentFadeColor");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetCurrentGridAlpha*, "OVR.OpenVR", "IVRCompositor/_GetCurrentGridAlpha");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetCurrentSceneFocusProcess*, "OVR.OpenVR", "IVRCompositor/_GetCurrentSceneFocusProcess");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetFrameTimeRemaining*, "OVR.OpenVR", "IVRCompositor/_GetFrameTimeRemaining");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetFrameTiming);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetFrameTiming*, "OVR.OpenVR", "IVRCompositor/_GetFrameTiming");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetFrameTimings);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetFrameTimings*, "OVR.OpenVR", "IVRCompositor/_GetFrameTimings");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetLastFrameRenderer*, "OVR.OpenVR", "IVRCompositor/_GetLastFrameRenderer");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetLastPoseForTrackedDeviceIndex*, "OVR.OpenVR", "IVRCompositor/_GetLastPoseForTrackedDeviceIndex");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetLastPoses);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetLastPoses*, "OVR.OpenVR", "IVRCompositor/_GetLastPoses");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetMirrorTextureD3D11*, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetMirrorTextureGL*, "OVR.OpenVR", "IVRCompositor/_GetMirrorTextureGL");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetTrackingSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetTrackingSpace*, "OVR.OpenVR", "IVRCompositor/_GetTrackingSpace");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetVulkanDeviceExtensionsRequired*, "OVR.OpenVR", "IVRCompositor/_GetVulkanDeviceExtensionsRequired");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__GetVulkanInstanceExtensionsRequired*, "OVR.OpenVR", "IVRCompositor/_GetVulkanInstanceExtensionsRequired");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__HideMirrorWindow);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__HideMirrorWindow*, "OVR.OpenVR", "IVRCompositor/_HideMirrorWindow");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__IsFullscreen);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__IsFullscreen*, "OVR.OpenVR", "IVRCompositor/_IsFullscreen");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__IsMirrorWindowVisible*, "OVR.OpenVR", "IVRCompositor/_IsMirrorWindowVisible");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__LockGLSharedTextureForAccess*, "OVR.OpenVR", "IVRCompositor/_LockGLSharedTextureForAccess");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__PostPresentHandoff);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__PostPresentHandoff*, "OVR.OpenVR", "IVRCompositor/_PostPresentHandoff");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__ReleaseMirrorTextureD3D11*, "OVR.OpenVR", "IVRCompositor/_ReleaseMirrorTextureD3D11");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__ReleaseSharedGLTexture*, "OVR.OpenVR", "IVRCompositor/_ReleaseSharedGLTexture");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__SetExplicitTimingMode*, "OVR.OpenVR", "IVRCompositor/_SetExplicitTimingMode");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__SetSkyboxOverride);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__SetSkyboxOverride*, "OVR.OpenVR", "IVRCompositor/_SetSkyboxOverride");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__SetTrackingSpace);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__SetTrackingSpace*, "OVR.OpenVR", "IVRCompositor/_SetTrackingSpace");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__ShouldAppRenderWithLowResources*, "OVR.OpenVR", "IVRCompositor/_ShouldAppRenderWithLowResources");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__ShowMirrorWindow);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__ShowMirrorWindow*, "OVR.OpenVR", "IVRCompositor/_ShowMirrorWindow");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__Submit);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__Submit*, "OVR.OpenVR", "IVRCompositor/_Submit");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__SubmitExplicitTimingData*, "OVR.OpenVR", "IVRCompositor/_SubmitExplicitTimingData");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__SuspendRendering);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__SuspendRendering*, "OVR.OpenVR", "IVRCompositor/_SuspendRendering");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__UnlockGLSharedTextureForAccess*, "OVR.OpenVR", "IVRCompositor/_UnlockGLSharedTextureForAccess");
NEED_NO_BOX(::OVR::OpenVR::IVRCompositor__WaitGetPoses);
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor__WaitGetPoses*, "OVR.OpenVR", "IVRCompositor/_WaitGetPoses");
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IVRCompositor, "OVR.OpenVR", "IVRCompositor");

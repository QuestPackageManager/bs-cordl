#pragma once
// IWYU pragma private; include "Unity/XR/Oculus/NativeMethods.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace System {
struct IntPtr;
}
namespace Unity::XR::Oculus {
struct Boundary_BoundaryType;
}
namespace Unity::XR::Oculus {
class NativeMethods_Internal;
}
namespace Unity::XR::Oculus {
struct NativeMethods_UserDefinedSettings;
}
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class NativeMethods;
}
namespace Unity::XR::Oculus {
class NativeMethods_Internal;
}
namespace Unity::XR::Oculus {
struct NativeMethods_UserDefinedSettings;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::NativeMethods);
MARK_REF_PTR_T(::Unity::XR::Oculus::NativeMethods_Internal);
MARK_VAL_T(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings);
// Dependencies
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: Unity.XR.Oculus.NativeMethods/UserDefinedSettings
struct CORDL_TYPE NativeMethods_UserDefinedSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMethods_UserDefinedSettings();

  // Ctor Parameters [CppParam { name: "sharedDepthBuffer", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "dashSupport", ty: "uint16_t", modifiers: "", def_value: None }, CppParam
  // { name: "stereoRenderingMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "lowOverheadMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "optimizeBufferDiscards", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "phaseSync", ty:
  // "uint16_t", modifiers: "", def_value: None }, CppParam { name: "symmetricProjection", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "subsampledLayout", ty: "uint16_t",
  // modifiers: "", def_value: None }, CppParam { name: "lateLatching", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lateLatchingDebug", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "enableTrackingOriginStageMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "spaceWarp", ty: "uint16_t", modifiers: "", def_value: None
  // }, CppParam { name: "depthSubmission", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingMethod", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr NativeMethods_UserDefinedSettings(uint16_t sharedDepthBuffer, uint16_t dashSupport, uint16_t stereoRenderingMode, uint16_t colorSpace, uint16_t lowOverheadMode,
                                              uint16_t optimizeBufferDiscards, uint16_t phaseSync, uint16_t symmetricProjection, uint16_t subsampledLayout, uint16_t lateLatching,
                                              uint16_t lateLatchingDebug, uint16_t enableTrackingOriginStageMode, uint16_t spaceWarp, uint16_t depthSubmission,
                                              uint16_t foveatedRenderingMethod) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17412 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1e };

  /// @brief Field sharedDepthBuffer, offset: 0x0, size: 0x2, def value: None
  uint16_t sharedDepthBuffer;

  /// @brief Field dashSupport, offset: 0x2, size: 0x2, def value: None
  uint16_t dashSupport;

  /// @brief Field stereoRenderingMode, offset: 0x4, size: 0x2, def value: None
  uint16_t stereoRenderingMode;

  /// @brief Field colorSpace, offset: 0x6, size: 0x2, def value: None
  uint16_t colorSpace;

  /// @brief Field lowOverheadMode, offset: 0x8, size: 0x2, def value: None
  uint16_t lowOverheadMode;

  /// @brief Field optimizeBufferDiscards, offset: 0xa, size: 0x2, def value: None
  uint16_t optimizeBufferDiscards;

  /// @brief Field phaseSync, offset: 0xc, size: 0x2, def value: None
  uint16_t phaseSync;

  /// @brief Field symmetricProjection, offset: 0xe, size: 0x2, def value: None
  uint16_t symmetricProjection;

  /// @brief Field subsampledLayout, offset: 0x10, size: 0x2, def value: None
  uint16_t subsampledLayout;

  /// @brief Field lateLatching, offset: 0x12, size: 0x2, def value: None
  uint16_t lateLatching;

  /// @brief Field lateLatchingDebug, offset: 0x14, size: 0x2, def value: None
  uint16_t lateLatchingDebug;

  /// @brief Field enableTrackingOriginStageMode, offset: 0x16, size: 0x2, def value: None
  uint16_t enableTrackingOriginStageMode;

  /// @brief Field spaceWarp, offset: 0x18, size: 0x2, def value: None
  uint16_t spaceWarp;

  /// @brief Field depthSubmission, offset: 0x1a, size: 0x2, def value: None
  uint16_t depthSubmission;

  /// @brief Field foveatedRenderingMethod, offset: 0x1c, size: 0x2, def value: None
  uint16_t foveatedRenderingMethod;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, sharedDepthBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, dashSupport) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, stereoRenderingMode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, colorSpace) == 0x6, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, lowOverheadMode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, optimizeBufferDiscards) == 0xa, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, phaseSync) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, symmetricProjection) == 0xe, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, subsampledLayout) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, lateLatching) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, lateLatchingDebug) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, enableTrackingOriginStageMode) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, spaceWarp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, depthSubmission) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, foveatedRenderingMethod) == 0x1c, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, 0x1e>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.NativeMethods/Internal
class CORDL_TYPE NativeMethods_Internal : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnableAppMetrics, addr 0x4835df0, size 0x7c, virtual false, abstract: false, final false
  static inline void EnableAppMetrics(bool enable);

  /// @brief Method EnablePerfMetrics, addr 0x4835d74, size 0x7c, virtual false, abstract: false, final false
  static inline void EnablePerfMetrics(bool enable);

  /// @brief Method GetAppHasInputFocus, addr 0x4835ef0, size 0x70, virtual false, abstract: false, final false
  static inline bool GetAppHasInputFocus();

  /// @brief Method GetAppShouldQuit, addr 0x483614c, size 0x70, virtual false, abstract: false, final false
  static inline bool GetAppShouldQuit();

  /// @brief Method GetBoundaryConfigured, addr 0x4835f60, size 0x70, virtual false, abstract: false, final false
  static inline bool GetBoundaryConfigured();

  /// @brief Method GetBoundaryDimensions, addr 0x4835fd0, size 0x8c, virtual false, abstract: false, final false
  static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::Boundary_BoundaryType boundaryType, ::ByRef<::UnityEngine::Vector3> dimensions);

  /// @brief Method GetBoundaryVisible, addr 0x483605c, size 0x70, virtual false, abstract: false, final false
  static inline bool GetBoundaryVisible();

  /// @brief Method GetDisplayAvailableFrequencies, addr 0x48361bc, size 0x8c, virtual false, abstract: false, final false
  static inline bool GetDisplayAvailableFrequencies(::System::IntPtr ptr, ::ByRef<int32_t> numFrequencies);

  /// @brief Method GetDisplayFrequency, addr 0x48362cc, size 0x84, virtual false, abstract: false, final false
  static inline bool GetDisplayFrequency(::ByRef<float_t> refreshRate);

  /// @brief Method GetEyeTrackedFoveatedRenderingEnabled, addr 0x48365f8, size 0x70, virtual false, abstract: false, final false
  static inline bool GetEyeTrackedFoveatedRenderingEnabled();

  /// @brief Method GetEyeTrackedFoveatedRenderingSupported, addr 0x4836588, size 0x70, virtual false, abstract: false, final false
  static inline bool GetEyeTrackedFoveatedRenderingSupported();

  /// @brief Method GetIsSupportedDevice, addr 0x4835a0c, size 0x70, virtual false, abstract: false, final false
  static inline bool GetIsSupportedDevice();

  /// @brief Method GetOVRPVersion, addr 0x4835cf4, size 0x80, virtual false, abstract: false, final false
  static inline void GetOVRPVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> version);

  /// @brief Method GetShouldRestartSession, addr 0x48366e8, size 0x70, virtual false, abstract: false, final false
  static inline bool GetShouldRestartSession();

  /// @brief Method GetSystemHeadsetType, addr 0x4836350, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType();

  /// @brief Method GetTiledMultiResLevel, addr 0x48364a4, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetTiledMultiResLevel();

  /// @brief Method GetTiledMultiResSupported, addr 0x48363b8, size 0x70, virtual false, abstract: false, final false
  static inline bool GetTiledMultiResSupported();

  /// @brief Method LoadOVRPlugin, addr 0x4835a7c, size 0x8c, virtual false, abstract: false, final false
  static inline bool LoadOVRPlugin(::StringW ovrpPath);

  /// @brief Method SetBoundaryVisible, addr 0x48360cc, size 0x7c, virtual false, abstract: false, final false
  static inline void SetBoundaryVisible(bool boundaryVisible);

  /// @brief Method SetCPULevel, addr 0x4835bfc, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SetCPULevel(int32_t cpuLevel);

  /// @brief Method SetColorOffset, addr 0x4835978, size 0x94, virtual false, abstract: false, final false
  static inline void SetColorOffset(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetColorScale, addr 0x48358e0, size 0x98, virtual false, abstract: false, final false
  static inline void SetColorScale(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetDeveloperModeStrict, addr 0x4835e6c, size 0x84, virtual false, abstract: false, final false
  static inline bool SetDeveloperModeStrict(bool active);

  /// @brief Method SetDisplayFrequency, addr 0x4836248, size 0x84, virtual false, abstract: false, final false
  static inline bool SetDisplayFrequency(float_t refreshRate);

  /// @brief Method SetEyeTrackedFoveatedRenderingEnabled, addr 0x4836668, size 0x7c, virtual false, abstract: false, final false
  static inline void SetEyeTrackedFoveatedRenderingEnabled(bool isEnabled);

  /// @brief Method SetGPULevel, addr 0x4835c78, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SetGPULevel(int32_t gpuLevel);

  /// @brief Method SetTiledMultiResDynamic, addr 0x483650c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetTiledMultiResDynamic(bool isDynamic);

  /// @brief Method SetTiledMultiResLevel, addr 0x4836428, size 0x7c, virtual false, abstract: false, final false
  static inline void SetTiledMultiResLevel(int32_t level);

  /// @brief Method SetUserDefinedSettings, addr 0x4835b70, size 0x8c, virtual false, abstract: false, final false
  static inline void SetUserDefinedSettings(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings settings);

  /// @brief Method UnloadOVRPlugin, addr 0x4835b0c, size 0x64, virtual false, abstract: false, final false
  static inline void UnloadOVRPlugin();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMethods_Internal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeMethods_Internal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeMethods_Internal(NativeMethods_Internal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeMethods_Internal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeMethods_Internal(NativeMethods_Internal const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17413 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods_Internal, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Dependencies System.Object
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: Unity.XR.Oculus.NativeMethods
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
  // Declarations
  using Internal = ::Unity::XR::Oculus::NativeMethods_Internal;

  using UserDefinedSettings = ::Unity::XR::Oculus::NativeMethods_UserDefinedSettings;

  /// @brief Method EnableAppMetrics, addr 0x48358d8, size 0x8, virtual false, abstract: false, final false
  static inline void EnableAppMetrics(bool enable);

  /// @brief Method EnablePerfMetrics, addr 0x4835564, size 0x8, virtual false, abstract: false, final false
  static inline void EnablePerfMetrics(bool enable);

  /// @brief Method GetAppShouldQuit, addr 0x4836148, size 0x4, virtual false, abstract: false, final false
  static inline bool GetAppShouldQuit();

  /// @brief Method GetBoundaryConfigured, addr 0x4833140, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryConfigured();

  /// @brief Method GetBoundaryDimensions, addr 0x4833148, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::Boundary_BoundaryType boundaryType, ::ByRef<::UnityEngine::Vector3> dimensions);

  /// @brief Method GetBoundaryVisible, addr 0x4833150, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryVisible();

  /// @brief Method GetDisplayAvailableFrequencies, addr 0x4834610, size 0x4, virtual false, abstract: false, final false
  static inline bool GetDisplayAvailableFrequencies(::System::IntPtr ptr, ::ByRef<int32_t> numFrequencies);

  /// @brief Method GetDisplayFrequency, addr 0x4834620, size 0x4, virtual false, abstract: false, final false
  static inline bool GetDisplayFrequency(::ByRef<float_t> refreshRate);

  /// @brief Method GetEyeTrackedFoveatedRenderingEnabled, addr 0x4832b08, size 0x4, virtual false, abstract: false, final false
  static inline bool GetEyeTrackedFoveatedRenderingEnabled();

  /// @brief Method GetEyeTrackedFoveatedRenderingSupported, addr 0x4832ae4, size 0x4, virtual false, abstract: false, final false
  static inline bool GetEyeTrackedFoveatedRenderingSupported();

  /// @brief Method GetHasInputFocus, addr 0x4833090, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHasInputFocus();

  /// @brief Method GetIsSupportedDevice, addr 0x483371c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetIsSupportedDevice();

  /// @brief Method GetOVRPVersion, addr 0x4834770, size 0x4, virtual false, abstract: false, final false
  static inline void GetOVRPVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> version);

  /// @brief Method GetShouldRestartSession, addr 0x48366e4, size 0x4, virtual false, abstract: false, final false
  static inline bool GetShouldRestartSession();

  /// @brief Method GetSystemHeadsetType, addr 0x48328a4, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType();

  /// @brief Method GetTiledMultiResLevel, addr 0x4832a5c, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetTiledMultiResLevel();

  /// @brief Method GetTiledMultiResSupported, addr 0x483295c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetTiledMultiResSupported();

  /// @brief Method LoadOVRPlugin, addr 0x483430c, size 0x4, virtual false, abstract: false, final false
  static inline bool LoadOVRPlugin(::StringW ovrpPath);

  /// @brief Method SetBoundaryVisible, addr 0x483315c, size 0x8, virtual false, abstract: false, final false
  static inline void SetBoundaryVisible(bool boundaryVisible);

  /// @brief Method SetCPULevel, addr 0x4834454, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SetCPULevel(int32_t cpuLevel);

  /// @brief Method SetColorOffset, addr 0x483289c, size 0x4, virtual false, abstract: false, final false
  static inline void SetColorOffset(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetColorScale, addr 0x4832898, size 0x4, virtual false, abstract: false, final false
  static inline void SetColorScale(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetDeveloperModeStrict, addr 0x4833290, size 0x8, virtual false, abstract: false, final false
  static inline bool SetDeveloperModeStrict(bool active);

  /// @brief Method SetDisplayFrequency, addr 0x4834618, size 0x4, virtual false, abstract: false, final false
  static inline bool SetDisplayFrequency(float_t refreshRate);

  /// @brief Method SetEyeTrackedFoveatedRenderingEnabled, addr 0x483290c, size 0x8, virtual false, abstract: false, final false
  static inline void SetEyeTrackedFoveatedRenderingEnabled(bool isEnabled);

  /// @brief Method SetGPULevel, addr 0x4834470, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SetGPULevel(int32_t gpuLevel);

  /// @brief Method SetTiledMultiResDynamic, addr 0x48329dc, size 0x8, virtual false, abstract: false, final false
  static inline void SetTiledMultiResDynamic(bool isDynamic);

  /// @brief Method SetTiledMultiResLevel, addr 0x4832adc, size 0x4, virtual false, abstract: false, final false
  static inline void SetTiledMultiResLevel(int32_t level);

  /// @brief Method SetUserDefinedSettings, addr 0x4833e88, size 0x2c, virtual false, abstract: false, final false
  static inline void SetUserDefinedSettings(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings settings);

  /// @brief Method UnloadOVRPlugin, addr 0x4835b08, size 0x4, virtual false, abstract: false, final false
  static inline void UnloadOVRPlugin();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NativeMethods();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NativeMethods(NativeMethods&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NativeMethods", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NativeMethods(NativeMethods const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17414 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods*, "Unity.XR.Oculus", "NativeMethods");
NEED_NO_BOX(::Unity::XR::Oculus::NativeMethods_Internal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods_Internal*, "Unity.XR.Oculus", "NativeMethods/Internal");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods_UserDefinedSettings, "Unity.XR.Oculus", "NativeMethods/UserDefinedSettings");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NativeMethods)
namespace Unity::XR::Oculus {
struct SystemHeadset;
}
namespace Unity::XR::Oculus {
struct __Boundary__BoundaryType;
}
namespace Unity::XR::Oculus {
class __NativeMethods__Internal;
}
namespace Unity::XR::Oculus {
struct __NativeMethods__UserDefinedSettings;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class NativeMethods;
}
namespace Unity::XR::Oculus {
class __NativeMethods__Internal;
}
namespace Unity::XR::Oculus {
struct __NativeMethods__UserDefinedSettings;
}
// Write type traits
MARK_REF_PTR_T(::Unity::XR::Oculus::NativeMethods);
MARK_REF_PTR_T(::Unity::XR::Oculus::__NativeMethods__Internal);
MARK_VAL_T(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings);
// Type: ::UserDefinedSettings
// SizeInfo { instance_size: 30, native_size: 30, calculated_instance_size: 30, calculated_native_size: 46, minimum_alignment: 2, natural_alignment: 2, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: true
// CS Name: ::NativeMethods::UserDefinedSettings
struct CORDL_TYPE __NativeMethods__UserDefinedSettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NativeMethods__UserDefinedSettings();

  // Ctor Parameters [CppParam { name: "sharedDepthBuffer", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "dashSupport", ty: "uint16_t", modifiers: "", def_value: None }, CppParam
  // { name: "stereoRenderingMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "colorSpace", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name:
  // "lowOverheadMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "optimizeBufferDiscards", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "phaseSync", ty:
  // "uint16_t", modifiers: "", def_value: None }, CppParam { name: "symmetricProjection", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "subsampledLayout", ty: "uint16_t",
  // modifiers: "", def_value: None }, CppParam { name: "lateLatching", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "lateLatchingDebug", ty: "uint16_t", modifiers: "",
  // def_value: None }, CppParam { name: "enableTrackingOriginStageMode", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "spaceWarp", ty: "uint16_t", modifiers: "", def_value: None
  // }, CppParam { name: "depthSubmission", ty: "uint16_t", modifiers: "", def_value: None }, CppParam { name: "foveatedRenderingMethod", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr __NativeMethods__UserDefinedSettings(uint16_t sharedDepthBuffer, uint16_t dashSupport, uint16_t stereoRenderingMode, uint16_t colorSpace, uint16_t lowOverheadMode,
                                                 uint16_t optimizeBufferDiscards, uint16_t phaseSync, uint16_t symmetricProjection, uint16_t subsampledLayout, uint16_t lateLatching,
                                                 uint16_t lateLatchingDebug, uint16_t enableTrackingOriginStageMode, uint16_t spaceWarp, uint16_t depthSubmission,
                                                 uint16_t foveatedRenderingMethod) noexcept;

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

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1e };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, 0x1e>, "Size mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, sharedDepthBuffer) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, dashSupport) == 0x2, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, stereoRenderingMode) == 0x4, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, colorSpace) == 0x6, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, lowOverheadMode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, optimizeBufferDiscards) == 0xa, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, phaseSync) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, symmetricProjection) == 0xe, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, subsampledLayout) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, lateLatching) == 0x12, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, lateLatchingDebug) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, enableTrackingOriginStageMode) == 0x16, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, spaceWarp) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, depthSubmission) == 0x1a, "Offset mismatch!");

static_assert(offsetof(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, foveatedRenderingMethod) == 0x1c, "Offset mismatch!");

} // namespace Unity::XR::Oculus
// Type: ::Internal
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: ::NativeMethods::Internal*
class CORDL_TYPE __NativeMethods__Internal : public ::System::Object {
public:
  // Declarations
  /// @brief Method EnableAppMetrics, addr 0x2d60034, size 0x7c, virtual false, abstract: false, final false
  static inline void EnableAppMetrics(bool enable);

  /// @brief Method EnablePerfMetrics, addr 0x2d5ffb8, size 0x7c, virtual false, abstract: false, final false
  static inline void EnablePerfMetrics(bool enable);

  /// @brief Method GetAppHasInputFocus, addr 0x2d60134, size 0x70, virtual false, abstract: false, final false
  static inline bool GetAppHasInputFocus();

  /// @brief Method GetAppShouldQuit, addr 0x2d60390, size 0x70, virtual false, abstract: false, final false
  static inline bool GetAppShouldQuit();

  /// @brief Method GetBoundaryConfigured, addr 0x2d601a4, size 0x70, virtual false, abstract: false, final false
  static inline bool GetBoundaryConfigured();

  /// @brief Method GetBoundaryDimensions, addr 0x2d60214, size 0x8c, virtual false, abstract: false, final false
  static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions);

  /// @brief Method GetBoundaryVisible, addr 0x2d602a0, size 0x70, virtual false, abstract: false, final false
  static inline bool GetBoundaryVisible();

  /// @brief Method GetDisplayAvailableFrequencies, addr 0x2d60400, size 0x8c, virtual false, abstract: false, final false
  static inline bool GetDisplayAvailableFrequencies(void* ptr, ByRef<int32_t> numFrequencies);

  /// @brief Method GetDisplayFrequency, addr 0x2d60510, size 0x84, virtual false, abstract: false, final false
  static inline bool GetDisplayFrequency(ByRef<float_t> refreshRate);

  /// @brief Method GetEyeTrackedFoveatedRenderingSupported, addr 0x2d607cc, size 0x70, virtual false, abstract: false, final false
  static inline bool GetEyeTrackedFoveatedRenderingSupported();

  /// @brief Method GetIsSupportedDevice, addr 0x2d5fbd4, size 0x70, virtual false, abstract: false, final false
  static inline bool GetIsSupportedDevice();

  /// @brief Method GetOVRPVersion, addr 0x2d5ff38, size 0x80, virtual false, abstract: false, final false
  static inline void GetOVRPVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> version);

  /// @brief Method GetShouldRestartSession, addr 0x2d60840, size 0x70, virtual false, abstract: false, final false
  static inline bool GetShouldRestartSession();

  /// @brief Method GetSystemHeadsetType, addr 0x2d60594, size 0x68, virtual false, abstract: false, final false
  static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType();

  /// @brief Method GetTiledMultiResLevel, addr 0x2d606e8, size 0x68, virtual false, abstract: false, final false
  static inline int32_t GetTiledMultiResLevel();

  /// @brief Method GetTiledMultiResSupported, addr 0x2d605fc, size 0x70, virtual false, abstract: false, final false
  static inline bool GetTiledMultiResSupported();

  /// @brief Method LoadOVRPlugin, addr 0x2d5fc44, size 0x8c, virtual false, abstract: false, final false
  static inline bool LoadOVRPlugin(::StringW ovrpPath);

  /// @brief Method SetBoundaryVisible, addr 0x2d60310, size 0x7c, virtual false, abstract: false, final false
  static inline void SetBoundaryVisible(bool boundaryVisible);

  /// @brief Method SetCPULevel, addr 0x2d5fe40, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SetCPULevel(int32_t cpuLevel);

  /// @brief Method SetColorOffset, addr 0x2d5fb40, size 0x94, virtual false, abstract: false, final false
  static inline void SetColorOffset(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetColorScale, addr 0x2d5faa8, size 0x98, virtual false, abstract: false, final false
  static inline void SetColorScale(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetDeveloperModeStrict, addr 0x2d600b0, size 0x84, virtual false, abstract: false, final false
  static inline bool SetDeveloperModeStrict(bool active);

  /// @brief Method SetDisplayFrequency, addr 0x2d6048c, size 0x84, virtual false, abstract: false, final false
  static inline bool SetDisplayFrequency(float_t refreshRate);

  /// @brief Method SetGPULevel, addr 0x2d5febc, size 0x7c, virtual false, abstract: false, final false
  static inline int32_t SetGPULevel(int32_t gpuLevel);

  /// @brief Method SetHasUserAuthorizedEyeTrackingPermission, addr 0x2d5fdc4, size 0x7c, virtual false, abstract: false, final false
  static inline void SetHasUserAuthorizedEyeTrackingPermission(bool authorized);

  /// @brief Method SetTiledMultiResDynamic, addr 0x2d60750, size 0x7c, virtual false, abstract: false, final false
  static inline void SetTiledMultiResDynamic(bool isDynamic);

  /// @brief Method SetTiledMultiResLevel, addr 0x2d6066c, size 0x7c, virtual false, abstract: false, final false
  static inline void SetTiledMultiResLevel(int32_t level);

  /// @brief Method SetUserDefinedSettings, addr 0x2d5fd38, size 0x8c, virtual false, abstract: false, final false
  static inline void SetUserDefinedSettings(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings settings);

  /// @brief Method UnloadOVRPlugin, addr 0x2d5fcd4, size 0x64, virtual false, abstract: false, final false
  static inline void UnloadOVRPlugin();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __NativeMethods__Internal();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__NativeMethods__Internal", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __NativeMethods__Internal(__NativeMethods__Internal&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__NativeMethods__Internal", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __NativeMethods__Internal(__NativeMethods__Internal const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::__NativeMethods__Internal, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
// Type: Unity.XR.Oculus::NativeMethods
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace Unity::XR::Oculus {
// Is value type: false
// CS Name: ::Unity.XR.Oculus::NativeMethods*
class CORDL_TYPE NativeMethods : public ::System::Object {
public:
  // Declarations
  using Internal = ::Unity::XR::Oculus::__NativeMethods__Internal;

  using UserDefinedSettings = ::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings;

  /// @brief Method EnableAppMetrics, addr 0x2d5faa0, size 0x8, virtual false, abstract: false, final false
  static inline void EnableAppMetrics(bool enable);

  /// @brief Method EnablePerfMetrics, addr 0x2d5f72c, size 0x8, virtual false, abstract: false, final false
  static inline void EnablePerfMetrics(bool enable);

  /// @brief Method GetAppShouldQuit, addr 0x2d6038c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetAppShouldQuit();

  /// @brief Method GetBoundaryConfigured, addr 0x2d5d284, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryConfigured();

  /// @brief Method GetBoundaryDimensions, addr 0x2d5d28c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryDimensions(::Unity::XR::Oculus::__Boundary__BoundaryType boundaryType, ByRef<::UnityEngine::Vector3> dimensions);

  /// @brief Method GetBoundaryVisible, addr 0x2d5d294, size 0x4, virtual false, abstract: false, final false
  static inline bool GetBoundaryVisible();

  /// @brief Method GetDisplayAvailableFrequencies, addr 0x2d5e7d0, size 0x4, virtual false, abstract: false, final false
  static inline bool GetDisplayAvailableFrequencies(void* ptr, ByRef<int32_t> numFrequencies);

  /// @brief Method GetDisplayFrequency, addr 0x2d5e7e0, size 0x4, virtual false, abstract: false, final false
  static inline bool GetDisplayFrequency(ByRef<float_t> refreshRate);

  /// @brief Method GetEyeTrackedFoveatedRenderingSupported, addr 0x2d5e0dc, size 0x4, virtual false, abstract: false, final false
  static inline bool GetEyeTrackedFoveatedRenderingSupported();

  /// @brief Method GetHasInputFocus, addr 0x2d5d1d4, size 0x4, virtual false, abstract: false, final false
  static inline bool GetHasInputFocus();

  /// @brief Method GetIsSupportedDevice, addr 0x2d5d834, size 0x4, virtual false, abstract: false, final false
  static inline bool GetIsSupportedDevice();

  /// @brief Method GetOVRPVersion, addr 0x2d5e930, size 0x4, virtual false, abstract: false, final false
  static inline void GetOVRPVersion(::ArrayW<uint8_t, ::Array<uint8_t>*> version);

  /// @brief Method GetShouldRestartSession, addr 0x2d6083c, size 0x4, virtual false, abstract: false, final false
  static inline bool GetShouldRestartSession();

  /// @brief Method GetSystemHeadsetType, addr 0x2d5cd40, size 0x4, virtual false, abstract: false, final false
  static inline ::Unity::XR::Oculus::SystemHeadset GetSystemHeadsetType();

  /// @brief Method GetTiledMultiResLevel, addr 0x2d5cee4, size 0x4, virtual false, abstract: false, final false
  static inline int32_t GetTiledMultiResLevel();

  /// @brief Method GetTiledMultiResSupported, addr 0x2d5cdd0, size 0x4, virtual false, abstract: false, final false
  static inline bool GetTiledMultiResSupported();

  /// @brief Method LoadOVRPlugin, addr 0x2d5e4b4, size 0x4, virtual false, abstract: false, final false
  static inline bool LoadOVRPlugin(::StringW ovrpPath);

  /// @brief Method SetBoundaryVisible, addr 0x2d5d2a0, size 0x8, virtual false, abstract: false, final false
  static inline void SetBoundaryVisible(bool boundaryVisible);

  /// @brief Method SetCPULevel, addr 0x2d5e5f8, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SetCPULevel(int32_t cpuLevel);

  /// @brief Method SetColorOffset, addr 0x2d5cd38, size 0x4, virtual false, abstract: false, final false
  static inline void SetColorOffset(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetColorScale, addr 0x2d5cd34, size 0x4, virtual false, abstract: false, final false
  static inline void SetColorScale(float_t x, float_t y, float_t z, float_t w);

  /// @brief Method SetDeveloperModeStrict, addr 0x2d5d3cc, size 0x8, virtual false, abstract: false, final false
  static inline bool SetDeveloperModeStrict(bool active);

  /// @brief Method SetDisplayFrequency, addr 0x2d5e7d8, size 0x4, virtual false, abstract: false, final false
  static inline bool SetDisplayFrequency(float_t refreshRate);

  /// @brief Method SetGPULevel, addr 0x2d5e614, size 0x4, virtual false, abstract: false, final false
  static inline int32_t SetGPULevel(int32_t gpuLevel);

  /// @brief Method SetHasUserAuthorizedEyeTrackingPermission, addr 0x2d5e144, size 0x8, virtual false, abstract: false, final false
  static inline void SetHasUserAuthorizedEyeTrackingPermission(bool authorized);

  /// @brief Method SetTiledMultiResDynamic, addr 0x2d5ce64, size 0x8, virtual false, abstract: false, final false
  static inline void SetTiledMultiResDynamic(bool isDynamic);

  /// @brief Method SetTiledMultiResLevel, addr 0x2d5cdd4, size 0x4, virtual false, abstract: false, final false
  static inline void SetTiledMultiResLevel(int32_t level);

  /// @brief Method SetUserDefinedSettings, addr 0x2d5e034, size 0x2c, virtual false, abstract: false, final false
  static inline void SetUserDefinedSettings(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings settings);

  /// @brief Method UnloadOVRPlugin, addr 0x2d5fcd0, size 0x4, virtual false, abstract: false, final false
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::XR::Oculus::NativeMethods, 0x10>, "Size mismatch!");

} // namespace Unity::XR::Oculus
NEED_NO_BOX(::Unity::XR::Oculus::NativeMethods);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::NativeMethods*, "Unity.XR.Oculus", "NativeMethods");
NEED_NO_BOX(::Unity::XR::Oculus::__NativeMethods__Internal);
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__NativeMethods__Internal*, "Unity.XR.Oculus", "NativeMethods/Internal");
DEFINE_IL2CPP_ARG_TYPE(::Unity::XR::Oculus::__NativeMethods__UserDefinedSettings, "Unity.XR.Oculus", "NativeMethods/UserDefinedSettings");

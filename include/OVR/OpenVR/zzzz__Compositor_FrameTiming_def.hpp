#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__TrackedDevicePose_t_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Compositor_FrameTiming)
namespace OVR::OpenVR {
struct TrackedDevicePose_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_FrameTiming;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Compositor_FrameTiming);
// Type: OVR.OpenVR::Compositor_FrameTiming
// SizeInfo { instance_size: 176, native_size: 176, calculated_instance_size: 176, calculated_native_size: 192, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8658))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8704))
// CS Name: ::OVR.OpenVR::Compositor_FrameTiming
struct CORDL_TYPE Compositor_FrameTiming {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_nSize", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nFrameIndex", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumMisPresented", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nReprojectionFlags", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flSystemTimeInSeconds", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "m_flPreSubmitGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flPostSubmitGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flTotalRenderGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flCompositorRenderGpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorRenderCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flCompositorIdleCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flClientFrameIntervalMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flPresentCallCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flWaitForPresentCpuMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flSubmitFrameMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flWaitGetPosesCalledMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flNewPosesReadyMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flNewFrameReadyMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flCompositorUpdateStartMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCompositorUpdateEndMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flCompositorRenderStartMs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_HmdPose", ty: "::OVR::OpenVR::TrackedDevicePose_t", modifiers: "", def_value: None }]
  constexpr Compositor_FrameTiming(uint32_t m_nSize, uint32_t m_nFrameIndex, uint32_t m_nNumFramePresents, uint32_t m_nNumMisPresented, uint32_t m_nNumDroppedFrames, uint32_t m_nReprojectionFlags,
                                   double_t m_flSystemTimeInSeconds, float_t m_flPreSubmitGpuMs, float_t m_flPostSubmitGpuMs, float_t m_flTotalRenderGpuMs, float_t m_flCompositorRenderGpuMs,
                                   float_t m_flCompositorRenderCpuMs, float_t m_flCompositorIdleCpuMs, float_t m_flClientFrameIntervalMs, float_t m_flPresentCallCpuMs, float_t m_flWaitForPresentCpuMs,
                                   float_t m_flSubmitFrameMs, float_t m_flWaitGetPosesCalledMs, float_t m_flNewPosesReadyMs, float_t m_flNewFrameReadyMs, float_t m_flCompositorUpdateStartMs,
                                   float_t m_flCompositorUpdateEndMs, float_t m_flCompositorRenderStartMs, ::OVR::OpenVR::TrackedDevicePose_t m_HmdPose) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Compositor_FrameTiming();

  /// @brief Field m_nSize, offset: 0x0, size: 0x4, def value: None
  uint32_t m_nSize;

  /// @brief Field m_nFrameIndex, offset: 0x4, size: 0x4, def value: None
  uint32_t m_nFrameIndex;

  /// @brief Field m_nNumFramePresents, offset: 0x8, size: 0x4, def value: None
  uint32_t m_nNumFramePresents;

  /// @brief Field m_nNumMisPresented, offset: 0xc, size: 0x4, def value: None
  uint32_t m_nNumMisPresented;

  /// @brief Field m_nNumDroppedFrames, offset: 0x10, size: 0x4, def value: None
  uint32_t m_nNumDroppedFrames;

  /// @brief Field m_nReprojectionFlags, offset: 0x14, size: 0x4, def value: None
  uint32_t m_nReprojectionFlags;

  /// @brief Field m_flSystemTimeInSeconds, offset: 0x18, size: 0x8, def value: None
  double_t m_flSystemTimeInSeconds;

  /// @brief Field m_flPreSubmitGpuMs, offset: 0x20, size: 0x4, def value: None
  float_t m_flPreSubmitGpuMs;

  /// @brief Field m_flPostSubmitGpuMs, offset: 0x24, size: 0x4, def value: None
  float_t m_flPostSubmitGpuMs;

  /// @brief Field m_flTotalRenderGpuMs, offset: 0x28, size: 0x4, def value: None
  float_t m_flTotalRenderGpuMs;

  /// @brief Field m_flCompositorRenderGpuMs, offset: 0x2c, size: 0x4, def value: None
  float_t m_flCompositorRenderGpuMs;

  /// @brief Field m_flCompositorRenderCpuMs, offset: 0x30, size: 0x4, def value: None
  float_t m_flCompositorRenderCpuMs;

  /// @brief Field m_flCompositorIdleCpuMs, offset: 0x34, size: 0x4, def value: None
  float_t m_flCompositorIdleCpuMs;

  /// @brief Field m_flClientFrameIntervalMs, offset: 0x38, size: 0x4, def value: None
  float_t m_flClientFrameIntervalMs;

  /// @brief Field m_flPresentCallCpuMs, offset: 0x3c, size: 0x4, def value: None
  float_t m_flPresentCallCpuMs;

  /// @brief Field m_flWaitForPresentCpuMs, offset: 0x40, size: 0x4, def value: None
  float_t m_flWaitForPresentCpuMs;

  /// @brief Field m_flSubmitFrameMs, offset: 0x44, size: 0x4, def value: None
  float_t m_flSubmitFrameMs;

  /// @brief Field m_flWaitGetPosesCalledMs, offset: 0x48, size: 0x4, def value: None
  float_t m_flWaitGetPosesCalledMs;

  /// @brief Field m_flNewPosesReadyMs, offset: 0x4c, size: 0x4, def value: None
  float_t m_flNewPosesReadyMs;

  /// @brief Field m_flNewFrameReadyMs, offset: 0x50, size: 0x4, def value: None
  float_t m_flNewFrameReadyMs;

  /// @brief Field m_flCompositorUpdateStartMs, offset: 0x54, size: 0x4, def value: None
  float_t m_flCompositorUpdateStartMs;

  /// @brief Field m_flCompositorUpdateEndMs, offset: 0x58, size: 0x4, def value: None
  float_t m_flCompositorUpdateEndMs;

  /// @brief Field m_flCompositorRenderStartMs, offset: 0x5c, size: 0x4, def value: None
  float_t m_flCompositorRenderStartMs;

  /// @brief Field m_HmdPose, offset: 0x60, size: 0x50, def value: None
  ::OVR::OpenVR::TrackedDevicePose_t m_HmdPose;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xb0 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Compositor_FrameTiming, 0xb0>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_nSize) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_nFrameIndex) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_nNumFramePresents) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_nNumMisPresented) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_nNumDroppedFrames) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_nReprojectionFlags) == 0x14, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flSystemTimeInSeconds) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flPreSubmitGpuMs) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flPostSubmitGpuMs) == 0x24, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flTotalRenderGpuMs) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flCompositorRenderGpuMs) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flCompositorRenderCpuMs) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flCompositorIdleCpuMs) == 0x34, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flClientFrameIntervalMs) == 0x38, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flPresentCallCpuMs) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flWaitForPresentCpuMs) == 0x40, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flSubmitFrameMs) == 0x44, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flWaitGetPosesCalledMs) == 0x48, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flNewPosesReadyMs) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flNewFrameReadyMs) == 0x50, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flCompositorUpdateStartMs) == 0x54, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flCompositorUpdateEndMs) == 0x58, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_flCompositorRenderStartMs) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_FrameTiming, m_HmdPose) == 0x60, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_FrameTiming, "OVR.OpenVR", "Compositor_FrameTiming");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Compositor_CumulativeStats)
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_CumulativeStats;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Compositor_CumulativeStats);
// Type: OVR.OpenVR::Compositor_CumulativeStats
// SizeInfo { instance_size: 60, native_size: 60, calculated_instance_size: 60, calculated_native_size: 76, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8705))
// CS Name: ::OVR.OpenVR::Compositor_CumulativeStats
struct CORDL_TYPE Compositor_CumulativeStats {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_nPid", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumFramePresents", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_nNumDroppedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumReprojectedFrames", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nNumFramePresentsOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_nNumReprojectedFramesOnStartup", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nNumFramePresentsLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nNumReprojectedFramesLoading", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nNumFramePresentsTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "m_nNumDroppedFramesTimedOut", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_nNumReprojectedFramesTimedOut", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr Compositor_CumulativeStats(uint32_t m_nPid, uint32_t m_nNumFramePresents, uint32_t m_nNumDroppedFrames, uint32_t m_nNumReprojectedFrames, uint32_t m_nNumFramePresentsOnStartup,
                                       uint32_t m_nNumDroppedFramesOnStartup, uint32_t m_nNumReprojectedFramesOnStartup, uint32_t m_nNumLoading, uint32_t m_nNumFramePresentsLoading,
                                       uint32_t m_nNumDroppedFramesLoading, uint32_t m_nNumReprojectedFramesLoading, uint32_t m_nNumTimedOut, uint32_t m_nNumFramePresentsTimedOut,
                                       uint32_t m_nNumDroppedFramesTimedOut, uint32_t m_nNumReprojectedFramesTimedOut) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr Compositor_CumulativeStats();

  /// @brief Field m_nPid, offset: 0x0, size: 0x4, def value: None
  uint32_t m_nPid;

  /// @brief Field m_nNumFramePresents, offset: 0x4, size: 0x4, def value: None
  uint32_t m_nNumFramePresents;

  /// @brief Field m_nNumDroppedFrames, offset: 0x8, size: 0x4, def value: None
  uint32_t m_nNumDroppedFrames;

  /// @brief Field m_nNumReprojectedFrames, offset: 0xc, size: 0x4, def value: None
  uint32_t m_nNumReprojectedFrames;

  /// @brief Field m_nNumFramePresentsOnStartup, offset: 0x10, size: 0x4, def value: None
  uint32_t m_nNumFramePresentsOnStartup;

  /// @brief Field m_nNumDroppedFramesOnStartup, offset: 0x14, size: 0x4, def value: None
  uint32_t m_nNumDroppedFramesOnStartup;

  /// @brief Field m_nNumReprojectedFramesOnStartup, offset: 0x18, size: 0x4, def value: None
  uint32_t m_nNumReprojectedFramesOnStartup;

  /// @brief Field m_nNumLoading, offset: 0x1c, size: 0x4, def value: None
  uint32_t m_nNumLoading;

  /// @brief Field m_nNumFramePresentsLoading, offset: 0x20, size: 0x4, def value: None
  uint32_t m_nNumFramePresentsLoading;

  /// @brief Field m_nNumDroppedFramesLoading, offset: 0x24, size: 0x4, def value: None
  uint32_t m_nNumDroppedFramesLoading;

  /// @brief Field m_nNumReprojectedFramesLoading, offset: 0x28, size: 0x4, def value: None
  uint32_t m_nNumReprojectedFramesLoading;

  /// @brief Field m_nNumTimedOut, offset: 0x2c, size: 0x4, def value: None
  uint32_t m_nNumTimedOut;

  /// @brief Field m_nNumFramePresentsTimedOut, offset: 0x30, size: 0x4, def value: None
  uint32_t m_nNumFramePresentsTimedOut;

  /// @brief Field m_nNumDroppedFramesTimedOut, offset: 0x34, size: 0x4, def value: None
  uint32_t m_nNumDroppedFramesTimedOut;

  /// @brief Field m_nNumReprojectedFramesTimedOut, offset: 0x38, size: 0x4, def value: None
  uint32_t m_nNumReprojectedFramesTimedOut;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x3c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Compositor_CumulativeStats, 0x3c>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nPid) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumFramePresents) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumDroppedFrames) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumReprojectedFrames) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumFramePresentsOnStartup) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumDroppedFramesOnStartup) == 0x14, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumReprojectedFramesOnStartup) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumLoading) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumFramePresentsLoading) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumDroppedFramesLoading) == 0x24, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumReprojectedFramesLoading) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumTimedOut) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumFramePresentsTimedOut) == 0x30, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumDroppedFramesTimedOut) == 0x34, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_CumulativeStats, m_nNumReprojectedFramesTimedOut) == 0x38, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_CumulativeStats, "OVR.OpenVR", "Compositor_CumulativeStats");

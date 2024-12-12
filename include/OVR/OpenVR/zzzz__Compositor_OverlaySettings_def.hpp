#pragma once
// IWYU pragma private; include "OVR/OpenVR/Compositor_OverlaySettings.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdMatrix44_t_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Compositor_OverlaySettings)
// Forward declare root types
namespace OVR::OpenVR {
struct Compositor_OverlaySettings;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::Compositor_OverlaySettings);
// Dependencies OVR.OpenVR.HmdMatrix44_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.Compositor_OverlaySettings
struct CORDL_TYPE Compositor_OverlaySettings {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr Compositor_OverlaySettings();

  // Ctor Parameters [CppParam { name: "size", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "curved", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "antialias",
  // ty: "bool", modifiers: "", def_value: None }, CppParam { name: "scale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "distance", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "alpha", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "uOffset", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vOffset", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "uScale", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "vScale", ty: "float_t", modifiers: "", def_value: None
  // }, CppParam { name: "gridDivs", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gridWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "gridScale", ty:
  // "float_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty: "::OVR::OpenVR::HmdMatrix44_t", modifiers: "", def_value: None }]
  constexpr Compositor_OverlaySettings(uint32_t size, bool curved, bool antialias, float_t scale, float_t distance, float_t alpha, float_t uOffset, float_t vOffset, float_t uScale, float_t vScale,
                                       float_t gridDivs, float_t gridWidth, float_t gridScale, ::OVR::OpenVR::HmdMatrix44_t transform) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9011 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x70 };

  /// @brief Field size, offset: 0x0, size: 0x4, def value: None
  uint32_t size;

  /// @brief Field curved, offset: 0x4, size: 0x1, def value: None
  bool curved;

  /// @brief Field antialias, offset: 0x5, size: 0x1, def value: None
  bool antialias;

  /// @brief Field scale, offset: 0x8, size: 0x4, def value: None
  float_t scale;

  /// @brief Field distance, offset: 0xc, size: 0x4, def value: None
  float_t distance;

  /// @brief Field alpha, offset: 0x10, size: 0x4, def value: None
  float_t alpha;

  /// @brief Field uOffset, offset: 0x14, size: 0x4, def value: None
  float_t uOffset;

  /// @brief Field vOffset, offset: 0x18, size: 0x4, def value: None
  float_t vOffset;

  /// @brief Field uScale, offset: 0x1c, size: 0x4, def value: None
  float_t uScale;

  /// @brief Field vScale, offset: 0x20, size: 0x4, def value: None
  float_t vScale;

  /// @brief Field gridDivs, offset: 0x24, size: 0x4, def value: None
  float_t gridDivs;

  /// @brief Field gridWidth, offset: 0x28, size: 0x4, def value: None
  float_t gridWidth;

  /// @brief Field gridScale, offset: 0x2c, size: 0x4, def value: None
  float_t gridScale;

  /// @brief Field transform, offset: 0x30, size: 0x40, def value: None
  ::OVR::OpenVR::HmdMatrix44_t transform;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, size) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, curved) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, antialias) == 0x5, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, scale) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, distance) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, alpha) == 0x10, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, uOffset) == 0x14, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, vOffset) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, uScale) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, vScale) == 0x20, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, gridDivs) == 0x24, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, gridWidth) == 0x28, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, gridScale) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::Compositor_OverlaySettings, transform) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::Compositor_OverlaySettings, 0x70>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::Compositor_OverlaySettings, "OVR.OpenVR", "Compositor_OverlaySettings");

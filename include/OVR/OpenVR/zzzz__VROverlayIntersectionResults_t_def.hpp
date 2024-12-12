#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayIntersectionResults_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include "OVR/OpenVR/zzzz__HmdVector3_t_def.hpp"
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionResults_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionResults_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionResults_t);
// Dependencies OVR.OpenVR.HmdVector2_t, OVR.OpenVR.HmdVector3_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VROverlayIntersectionResults_t
struct CORDL_TYPE VROverlayIntersectionResults_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayIntersectionResults_t();

  // Ctor Parameters [CppParam { name: "vPoint", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "", def_value: None }, CppParam { name: "vNormal", ty: "::OVR::OpenVR::HmdVector3_t", modifiers: "",
  // def_value: None }, CppParam { name: "vUVs", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }, CppParam { name: "fDistance", ty: "float_t", modifiers: "", def_value: None }]
  constexpr VROverlayIntersectionResults_t(::OVR::OpenVR::HmdVector3_t vPoint, ::OVR::OpenVR::HmdVector3_t vNormal, ::OVR::OpenVR::HmdVector2_t vUVs, float_t fDistance) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9020 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  /// @brief Field vPoint, offset: 0x0, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vPoint;

  /// @brief Field vNormal, offset: 0xc, size: 0xc, def value: None
  ::OVR::OpenVR::HmdVector3_t vNormal;

  /// @brief Field vUVs, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::HmdVector2_t vUVs;

  /// @brief Field fDistance, offset: 0x20, size: 0x4, def value: None
  float_t fDistance;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionResults_t, vPoint) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionResults_t, vNormal) == 0xc, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionResults_t, vUVs) == 0x18, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionResults_t, fDistance) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionResults_t, 0x24>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionResults_t, "OVR.OpenVR", "VROverlayIntersectionResults_t");

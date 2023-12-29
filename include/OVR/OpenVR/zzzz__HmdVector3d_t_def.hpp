#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdVector3d_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdVector3d_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdVector3d_t);
// Type: OVR.OpenVR::HmdVector3d_t
// SizeInfo { instance_size: 24, native_size: 24, calculated_instance_size: 24, calculated_native_size: 40, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9418))
// CS Name: ::OVR.OpenVR::HmdVector3d_t
struct CORDL_TYPE HmdVector3d_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "v0", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "double_t", modifiers: "", def_value: None }, CppParam { name: "v2", ty:
  // "double_t", modifiers: "", def_value: None }]
  constexpr HmdVector3d_t(double_t v0, double_t v1, double_t v2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdVector3d_t();

  /// @brief Field v0, offset: 0x0, size: 0x8, def value: None
  double_t v0;

  /// @brief Field v1, offset: 0x8, size: 0x8, def value: None
  double_t v1;

  /// @brief Field v2, offset: 0x10, size: 0x8, def value: None
  double_t v2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdVector3d_t, 0x18>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector3d_t, v0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector3d_t, v1) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector3d_t, v2) == 0x10, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdVector3d_t, "OVR.OpenVR", "HmdVector3d_t");

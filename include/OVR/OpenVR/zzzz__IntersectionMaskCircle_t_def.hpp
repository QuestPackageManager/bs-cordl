#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(IntersectionMaskCircle_t)
// Forward declare root types
namespace OVR::OpenVR {
struct IntersectionMaskCircle_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::IntersectionMaskCircle_t);
// Type: OVR.OpenVR::IntersectionMaskCircle_t
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8709))
// CS Name: ::OVR.OpenVR::IntersectionMaskCircle_t
struct CORDL_TYPE IntersectionMaskCircle_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_flCenterX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flCenterY", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "m_flRadius", ty: "float_t", modifiers: "", def_value: None }]
  constexpr IntersectionMaskCircle_t(float_t m_flCenterX, float_t m_flCenterY, float_t m_flRadius) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr IntersectionMaskCircle_t();

  /// @brief Field m_flCenterX, offset: 0x0, size: 0x4, def value: None
  float_t m_flCenterX;

  /// @brief Field m_flCenterY, offset: 0x4, size: 0x4, def value: None
  float_t m_flCenterY;

  /// @brief Field m_flRadius, offset: 0x8, size: 0x4, def value: None
  float_t m_flRadius;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IntersectionMaskCircle_t, 0xc>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IntersectionMaskCircle_t, "OVR.OpenVR", "IntersectionMaskCircle_t");

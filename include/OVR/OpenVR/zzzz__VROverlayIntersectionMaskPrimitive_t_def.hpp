#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__EVROverlayIntersectionMaskPrimitiveType_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_Data_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionMaskPrimitive_t)
namespace OVR::OpenVR {
struct EVROverlayIntersectionMaskPrimitiveType;
}
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_Data_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t);
// Type: OVR.OpenVR::VROverlayIntersectionMaskPrimitive_t
// SizeInfo { instance_size: 20, native_size: 20, calculated_instance_size: 20, calculated_native_size: 36, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8643)), TypeDefinitionIndex(TypeDefinitionIndex(8631))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8710))
// CS Name: ::OVR.OpenVR::VROverlayIntersectionMaskPrimitive_t
struct CORDL_TYPE VROverlayIntersectionMaskPrimitive_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "m_nPrimitiveType", ty: "::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType", modifiers: "", def_value: None }, CppParam { name: "m_Primitive", ty:
  // "::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t", modifiers: "", def_value: None }]
  constexpr VROverlayIntersectionMaskPrimitive_t(::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType,
                                                 ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayIntersectionMaskPrimitive_t();

  /// @brief Field m_nPrimitiveType, offset: 0x0, size: 0x4, def value: None
  ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType;

  /// @brief Field m_Primitive, offset: 0x4, size: 0x10, def value: None
  ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, 0x14>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_t");

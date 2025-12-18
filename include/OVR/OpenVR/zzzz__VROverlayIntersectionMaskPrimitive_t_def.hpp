#pragma once
// IWYU pragma private; include "OVR/OpenVR/VROverlayIntersectionMaskPrimitive_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__EVROverlayIntersectionMaskPrimitiveType_def.hpp"
#include "OVR/OpenVR/zzzz__VROverlayIntersectionMaskPrimitive_Data_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(VROverlayIntersectionMaskPrimitive_t)
// Forward declare root types
namespace OVR::OpenVR {
struct VROverlayIntersectionMaskPrimitive_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t);
// Dependencies OVR.OpenVR.EVROverlayIntersectionMaskPrimitiveType, OVR.OpenVR.VROverlayIntersectionMaskPrimitive_Data_t
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.VROverlayIntersectionMaskPrimitive_t
struct CORDL_TYPE VROverlayIntersectionMaskPrimitive_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr VROverlayIntersectionMaskPrimitive_t();

  // Ctor Parameters [CppParam { name: "m_nPrimitiveType", ty: "::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType", modifiers: "", def_value: None }, CppParam { name: "m_Primitive", ty:
  // "::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t", modifiers: "", def_value: None }]
  constexpr VROverlayIntersectionMaskPrimitive_t(::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType,
                                                 ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 8509 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x14 };

  /// @brief Field m_nPrimitiveType, offset: 0x0, size: 0x4, def value: None
  ::OVR::OpenVR::EVROverlayIntersectionMaskPrimitiveType m_nPrimitiveType;

  /// @brief Field m_Primitive, offset: 0x4, size: 0x10, def value: None
  ::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_Data_t m_Primitive;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, m_nPrimitiveType) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, m_Primitive) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, 0x14>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VROverlayIntersectionMaskPrimitive_t, "OVR.OpenVR", "VROverlayIntersectionMaskPrimitive_t");

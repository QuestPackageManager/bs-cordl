#pragma once
// IWYU pragma private; include "OVR/OpenVR/IntersectionMaskRectangle_t.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(IntersectionMaskRectangle_t)
// Forward declare root types
namespace OVR::OpenVR {
struct IntersectionMaskRectangle_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::IntersectionMaskRectangle_t);
// Dependencies
namespace OVR::OpenVR {
// Is value type: true
// CS Name: OVR.OpenVR.IntersectionMaskRectangle_t
struct CORDL_TYPE IntersectionMaskRectangle_t {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr IntersectionMaskRectangle_t();

  // Ctor Parameters [CppParam { name: "m_flTopLeftX", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flTopLeftY", ty: "float_t", modifiers: "", def_value: None }, CppParam {
  // name: "m_flWidth", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "m_flHeight", ty: "float_t", modifiers: "", def_value: None }]
  constexpr IntersectionMaskRectangle_t(float_t m_flTopLeftX, float_t m_flTopLeftY, float_t m_flWidth, float_t m_flHeight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9026 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_flTopLeftX, offset: 0x0, size: 0x4, def value: None
  float_t m_flTopLeftX;

  /// @brief Field m_flTopLeftY, offset: 0x4, size: 0x4, def value: None
  float_t m_flTopLeftY;

  /// @brief Field m_flWidth, offset: 0x8, size: 0x4, def value: None
  float_t m_flWidth;

  /// @brief Field m_flHeight, offset: 0xc, size: 0x4, def value: None
  float_t m_flHeight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::OVR::OpenVR::IntersectionMaskRectangle_t, m_flTopLeftX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IntersectionMaskRectangle_t, m_flTopLeftY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IntersectionMaskRectangle_t, m_flWidth) == 0x8, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::IntersectionMaskRectangle_t, m_flHeight) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::IntersectionMaskRectangle_t, 0x10>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::IntersectionMaskRectangle_t, "OVR.OpenVR", "IntersectionMaskRectangle_t");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdVector2_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdVector2_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdVector2_t);
// Type: OVR.OpenVR::HmdVector2_t
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 24, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8650))
// CS Name: ::OVR.OpenVR::HmdVector2_t
struct CORDL_TYPE HmdVector2_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "v0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HmdVector2_t(float_t v0, float_t v1) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdVector2_t();

  /// @brief Field v0, offset: 0x0, size: 0x4, def value: None
  float_t v0;

  /// @brief Field v1, offset: 0x4, size: 0x4, def value: None
  float_t v1;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdVector2_t, 0x8>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector2_t, v0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector2_t, v1) == 0x4, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdVector2_t, "OVR.OpenVR", "HmdVector2_t");

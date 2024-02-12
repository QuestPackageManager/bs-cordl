#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HmdVector3_t)
// Forward declare root types
namespace OVR::OpenVR {
struct HmdVector3_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdVector3_t);
// Type: OVR.OpenVR::HmdVector3_t
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8591))
// CS Name: ::OVR.OpenVR::HmdVector3_t
struct CORDL_TYPE HmdVector3_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "v0", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v1", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "v2", ty:
  // "float_t", modifiers: "", def_value: None }]
  constexpr HmdVector3_t(float_t v0, float_t v1, float_t v2) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdVector3_t();

  /// @brief Field v0, offset: 0x0, size: 0x4, def value: None
  float_t v0;

  /// @brief Field v1, offset: 0x4, size: 0x4, def value: None
  float_t v1;

  /// @brief Field v2, offset: 0x8, size: 0x4, def value: None
  float_t v2;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdVector3_t, 0xc>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector3_t, v0) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector3_t, v1) == 0x4, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdVector3_t, v2) == 0x8, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdVector3_t, "OVR.OpenVR", "HmdVector3_t");

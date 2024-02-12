#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__HmdVector2_t_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(HmdRect2_t)
namespace OVR::OpenVR {
struct HmdVector2_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct HmdRect2_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::HmdRect2_t);
// Type: OVR.OpenVR::HmdRect2_t
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(8594))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8599))
// CS Name: ::OVR.OpenVR::HmdRect2_t
struct CORDL_TYPE HmdRect2_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "vTopLeft", ty: "::OVR::OpenVR::HmdVector2_t", modifiers: "", def_value: None }, CppParam { name: "vBottomRight", ty: "::OVR::OpenVR::HmdVector2_t", modifiers:
  // "", def_value: None }]
  constexpr HmdRect2_t(::OVR::OpenVR::HmdVector2_t vTopLeft, ::OVR::OpenVR::HmdVector2_t vBottomRight) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HmdRect2_t();

  /// @brief Field vTopLeft, offset: 0x0, size: 0x8, def value: None
  ::OVR::OpenVR::HmdVector2_t vTopLeft;

  /// @brief Field vBottomRight, offset: 0x8, size: 0x8, def value: None
  ::OVR::OpenVR::HmdVector2_t vBottomRight;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::HmdRect2_t, 0x10>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdRect2_t, vTopLeft) == 0x0, "Offset mismatch!");

static_assert(offsetof(::OVR::OpenVR::HmdRect2_t, vBottomRight) == 0x8, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::HmdRect2_t, "OVR.OpenVR", "HmdRect2_t");

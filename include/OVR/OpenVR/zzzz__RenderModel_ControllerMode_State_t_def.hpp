#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(RenderModel_ControllerMode_State_t)
// Forward declare root types
namespace OVR::OpenVR {
struct RenderModel_ControllerMode_State_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::RenderModel_ControllerMode_State_t);
// Type: OVR.OpenVR::RenderModel_ControllerMode_State_t
// SizeInfo { instance_size: 1, native_size: 1, calculated_instance_size: 1, calculated_native_size: 17, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8717))
// CS Name: ::OVR.OpenVR::RenderModel_ControllerMode_State_t
struct CORDL_TYPE RenderModel_ControllerMode_State_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "bScrollWheelVisible", ty: "bool", modifiers: "", def_value: None }]
  constexpr RenderModel_ControllerMode_State_t(bool bScrollWheelVisible) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr RenderModel_ControllerMode_State_t();

  /// @brief Field bScrollWheelVisible, offset: 0x0, size: 0x1, def value: None
  bool bScrollWheelVisible;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::RenderModel_ControllerMode_State_t, 0x1>, "Size mismatch!");

static_assert(offsetof(::OVR::OpenVR::RenderModel_ControllerMode_State_t, bScrollWheelVisible) == 0x0, "Offset mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::RenderModel_ControllerMode_State_t, "OVR.OpenVR", "RenderModel_ControllerMode_State_t");

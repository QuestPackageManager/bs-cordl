#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "OVR/OpenVR/zzzz__VRControllerAxis_t_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(VRControllerState_t)
namespace OVR::OpenVR {
struct VRControllerAxis_t;
}
// Forward declare root types
namespace OVR::OpenVR {
struct VRControllerState_t;
}
// Write type traits
MARK_VAL_T(::OVR::OpenVR::VRControllerState_t);
// Type: OVR.OpenVR::VRControllerState_t
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 80, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace OVR::OpenVR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8695))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8696))
// CS Name: ::OVR.OpenVR::VRControllerState_t
struct CORDL_TYPE VRControllerState_t {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "unPacketNum", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "ulButtonPressed", ty: "uint64_t", modifiers: "", def_value: None }, CppParam {
  // name: "ulButtonTouched", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "rAxis0", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name:
  // "rAxis1", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis2", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam
  // { name: "rAxis3", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }, CppParam { name: "rAxis4", ty: "::OVR::OpenVR::VRControllerAxis_t", modifiers: "", def_value: None }]
  constexpr VRControllerState_t(uint32_t unPacketNum, uint64_t ulButtonPressed, uint64_t ulButtonTouched, ::OVR::OpenVR::VRControllerAxis_t rAxis0, ::OVR::OpenVR::VRControllerAxis_t rAxis1,
                                ::OVR::OpenVR::VRControllerAxis_t rAxis2, ::OVR::OpenVR::VRControllerAxis_t rAxis3, ::OVR::OpenVR::VRControllerAxis_t rAxis4) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr VRControllerState_t();

  /// @brief Field unPacketNum, offset: 0x0, size: 0x4, def value: None
  uint32_t unPacketNum;

  /// @brief Field ulButtonPressed, offset: 0x8, size: 0x8, def value: None
  uint64_t ulButtonPressed;

  /// @brief Field ulButtonTouched, offset: 0x10, size: 0x8, def value: None
  uint64_t ulButtonTouched;

  /// @brief Field rAxis0, offset: 0x18, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis0;

  /// @brief Field rAxis1, offset: 0x20, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis1;

  /// @brief Field rAxis2, offset: 0x28, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis2;

  /// @brief Field rAxis3, offset: 0x30, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis3;

  /// @brief Field rAxis4, offset: 0x38, size: 0x8, def value: None
  ::OVR::OpenVR::VRControllerAxis_t rAxis4;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::OVR::OpenVR::VRControllerState_t, 0x40>, "Size mismatch!");

} // namespace OVR::OpenVR
DEFINE_IL2CPP_ARG_TYPE(::OVR::OpenVR::VRControllerState_t, "OVR.OpenVR", "VRControllerState_t");

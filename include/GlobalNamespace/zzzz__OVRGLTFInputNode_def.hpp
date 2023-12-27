#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(OVRGLTFInputNode)
// Forward declare root types
namespace GlobalNamespace {
struct OVRGLTFInputNode;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::OVRGLTFInputNode);
// Type: ::OVRGLTFInputNode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7554))
// CS Name: ::OVRGLTFInputNode
struct CORDL_TYPE OVRGLTFInputNode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __OVRGLTFInputNode_Unwrapped
  enum struct __OVRGLTFInputNode_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Button_A_X = static_cast<int32_t>(0x1),
    __E_Button_B_Y = static_cast<int32_t>(0x2),
    __E_Button_Oculus_Menu = static_cast<int32_t>(0x3),
    __E_Trigger_Grip = static_cast<int32_t>(0x4),
    __E_Trigger_Front = static_cast<int32_t>(0x5),
    __E_ThumbStick = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __OVRGLTFInputNode_Unwrapped() const noexcept {
    return static_cast<__OVRGLTFInputNode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr OVRGLTFInputNode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr OVRGLTFInputNode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::OVRGLTFInputNode const None;

  /// @brief Field Button_A_X value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::OVRGLTFInputNode const Button_A_X;

  /// @brief Field Button_B_Y value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::OVRGLTFInputNode const Button_B_Y;

  /// @brief Field Button_Oculus_Menu value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::OVRGLTFInputNode const Button_Oculus_Menu;

  /// @brief Field Trigger_Grip value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::OVRGLTFInputNode const Trigger_Grip;

  /// @brief Field Trigger_Front value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::OVRGLTFInputNode const Trigger_Front;

  /// @brief Field ThumbStick value: static_cast<int32_t>(0x6)
  static ::GlobalNamespace::OVRGLTFInputNode const ThumbStick;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::OVRGLTFInputNode, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRGLTFInputNode, "", "OVRGLTFInputNode");

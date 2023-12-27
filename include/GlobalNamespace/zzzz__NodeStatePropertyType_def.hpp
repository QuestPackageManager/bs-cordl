#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NodeStatePropertyType)
// Forward declare root types
namespace GlobalNamespace {
struct NodeStatePropertyType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::NodeStatePropertyType);
// Type: ::NodeStatePropertyType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7533))
// CS Name: ::NodeStatePropertyType
struct CORDL_TYPE NodeStatePropertyType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NodeStatePropertyType_Unwrapped
  enum struct __NodeStatePropertyType_Unwrapped : int32_t {
    __E_Acceleration = static_cast<int32_t>(0x0),
    __E_AngularAcceleration = static_cast<int32_t>(0x1),
    __E_Velocity = static_cast<int32_t>(0x2),
    __E_AngularVelocity = static_cast<int32_t>(0x3),
    __E_Position = static_cast<int32_t>(0x4),
    __E_Orientation = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NodeStatePropertyType_Unwrapped() const noexcept {
    return static_cast<__NodeStatePropertyType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NodeStatePropertyType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr NodeStatePropertyType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Acceleration value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::NodeStatePropertyType const Acceleration;

  /// @brief Field AngularAcceleration value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::NodeStatePropertyType const AngularAcceleration;

  /// @brief Field Velocity value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::NodeStatePropertyType const Velocity;

  /// @brief Field AngularVelocity value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::NodeStatePropertyType const AngularVelocity;

  /// @brief Field Position value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::NodeStatePropertyType const Position;

  /// @brief Field Orientation value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::NodeStatePropertyType const Orientation;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::NodeStatePropertyType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NodeStatePropertyType, "", "NodeStatePropertyType");

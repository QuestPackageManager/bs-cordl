#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/DebugGizmoType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugGizmoType)
// Forward declare root types
namespace Meta::XR::ImmersiveDebugger {
struct DebugGizmoType;
}
// Write type traits
MARK_VAL_T(::Meta::XR::ImmersiveDebugger::DebugGizmoType);
// Dependencies
namespace Meta::XR::ImmersiveDebugger {
// Is value type: true
// CS Name: Meta.XR.ImmersiveDebugger.DebugGizmoType
struct CORDL_TYPE DebugGizmoType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __DebugGizmoType_Unwrapped
  enum struct __DebugGizmoType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Axis = static_cast<int32_t>(0x1),
    __E_Point = static_cast<int32_t>(0x2),
    __E_Line = static_cast<int32_t>(0x3),
    __E_Lines = static_cast<int32_t>(0x4),
    __E_Plane = static_cast<int32_t>(0x5),
    __E_Cube = static_cast<int32_t>(0x6),
    __E_TopCenterBox = static_cast<int32_t>(0x7),
    __E_Box = static_cast<int32_t>(0x8),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __DebugGizmoType_Unwrapped() const noexcept {
    return static_cast<__DebugGizmoType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugGizmoType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr DebugGizmoType(int32_t value__) noexcept;

  /// @brief Field Axis value: I32(1)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const Axis;

  /// @brief Field Box value: I32(8)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const Box;

  /// @brief Field Cube value: I32(6)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const Cube;

  /// @brief Field Line value: I32(3)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const Line;

  /// @brief Field Lines value: I32(4)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const Lines;

  /// @brief Field None value: I32(0)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const None;

  /// @brief Field Plane value: I32(5)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const Plane;

  /// @brief Field Point value: I32(2)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const Point;

  /// @brief Field TopCenterBox value: I32(7)
  static ::Meta::XR::ImmersiveDebugger::DebugGizmoType const TopCenterBox;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 23216 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Meta::XR::ImmersiveDebugger::DebugGizmoType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Meta::XR::ImmersiveDebugger::DebugGizmoType, 0x4>, "Size mismatch!");

} // namespace Meta::XR::ImmersiveDebugger
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::ImmersiveDebugger::DebugGizmoType, "Meta.XR.ImmersiveDebugger", "DebugGizmoType");

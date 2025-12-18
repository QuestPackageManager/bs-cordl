#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchySearchFilterOperator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchySearchFilterOperator)
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchySearchFilterOperator;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchySearchFilterOperator);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchySearchFilterOperator
struct CORDL_TYPE HierarchySearchFilterOperator {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HierarchySearchFilterOperator_Unwrapped
  enum struct __HierarchySearchFilterOperator_Unwrapped : int32_t {
    __E_Equal = static_cast<int32_t>(0x0),
    __E_Contains = static_cast<int32_t>(0x1),
    __E_Greater = static_cast<int32_t>(0x2),
    __E_GreaterOrEqual = static_cast<int32_t>(0x3),
    __E_Lesser = static_cast<int32_t>(0x4),
    __E_LesserOrEqual = static_cast<int32_t>(0x5),
    __E_NotEqual = static_cast<int32_t>(0x6),
    __E_Not = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HierarchySearchFilterOperator_Unwrapped() const noexcept {
    return static_cast<__HierarchySearchFilterOperator_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchySearchFilterOperator();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchySearchFilterOperator(int32_t value__) noexcept;

  /// @brief Field Contains value: I32(1)
  static ::Unity::Hierarchy::HierarchySearchFilterOperator const Contains;

  /// @brief Field Equal value: I32(0)
  static ::Unity::Hierarchy::HierarchySearchFilterOperator const Equal;

  /// @brief Field Greater value: I32(2)
  static ::Unity::Hierarchy::HierarchySearchFilterOperator const Greater;

  /// @brief Field GreaterOrEqual value: I32(3)
  static ::Unity::Hierarchy::HierarchySearchFilterOperator const GreaterOrEqual;

  /// @brief Field Lesser value: I32(4)
  static ::Unity::Hierarchy::HierarchySearchFilterOperator const Lesser;

  /// @brief Field LesserOrEqual value: I32(5)
  static ::Unity::Hierarchy::HierarchySearchFilterOperator const LesserOrEqual;

  /// @brief Field Not value: I32(7)
  static ::Unity::Hierarchy::HierarchySearchFilterOperator const Not;

  /// @brief Field NotEqual value: I32(6)
  static ::Unity::Hierarchy::HierarchySearchFilterOperator const NotEqual;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21762 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchySearchFilterOperator, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchySearchFilterOperator, 0x4>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchySearchFilterOperator, "Unity.Hierarchy", "HierarchySearchFilterOperator");

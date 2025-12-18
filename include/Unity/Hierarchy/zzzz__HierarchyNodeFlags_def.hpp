#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeFlags)
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeFlags);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeFlags
struct CORDL_TYPE HierarchyNodeFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __HierarchyNodeFlags_Unwrapped
  enum struct __HierarchyNodeFlags_Unwrapped : uint32_t {
    __E_None = static_cast<uint32_t>(0x0u),
    __E_Expanded = static_cast<uint32_t>(0x1u),
    __E_Selected = static_cast<uint32_t>(0x2u),
    __E_Cut = static_cast<uint32_t>(0x4u),
    __E_Hidden = static_cast<uint32_t>(0x8u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HierarchyNodeFlags_Unwrapped() const noexcept {
    return static_cast<__HierarchyNodeFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
  constexpr HierarchyNodeFlags(uint32_t value__) noexcept;

  /// @brief Field Cut value: U32(4)
  static ::Unity::Hierarchy::HierarchyNodeFlags const Cut;

  /// @brief Field Expanded value: U32(1)
  static ::Unity::Hierarchy::HierarchyNodeFlags const Expanded;

  /// @brief Field Hidden value: U32(8)
  static ::Unity::Hierarchy::HierarchyNodeFlags const Hidden;

  /// @brief Field None value: U32(0)
  static ::Unity::Hierarchy::HierarchyNodeFlags const None;

  /// @brief Field Selected value: U32(2)
  static ::Unity::Hierarchy::HierarchyNodeFlags const Selected;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21757 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeFlags, 0x4>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeFlags, "Unity.Hierarchy", "HierarchyNodeFlags");

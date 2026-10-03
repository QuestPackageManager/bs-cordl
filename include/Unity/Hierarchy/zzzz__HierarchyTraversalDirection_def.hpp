#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyTraversalDirection.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyTraversalDirection)
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyTraversalDirection;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyTraversalDirection);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyTraversalDirection, "Unity.Hierarchy", "HierarchyTraversalDirection");
// [Flags]
// [NativeHeader("Modules/HierarchyCore/Public/HierarchyTraversalDirection.h")]
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyTraversalDirection
struct CORDL_TYPE HierarchyTraversalDirection {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint32_t;

  /// @brief Nested struct __HierarchyTraversalDirection_Unwrapped
  enum struct __HierarchyTraversalDirection_Unwrapped : uint32_t {
    __E_Parents = static_cast<uint32_t>(0x0u),
    __E_Children = static_cast<uint32_t>(0x1u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HierarchyTraversalDirection_Unwrapped() const noexcept {
    return static_cast<__HierarchyTraversalDirection_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint32_t() const noexcept {
    return static_cast<uint32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyTraversalDirection();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None, comment: None }]
  constexpr HierarchyTraversalDirection(uint32_t value__) noexcept;

  /// @brief Field Children value: U32(1)
  static ::Unity::Hierarchy::HierarchyTraversalDirection const Children;

  /// @brief Field Parents value: U32(0)
  static ::Unity::Hierarchy::HierarchyTraversalDirection const Parents;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22613 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  uint32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyTraversalDirection, value__) == 0x0, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyTraversalDirection) == 0x4, "Size mismatch!");

} // namespace Unity::Hierarchy

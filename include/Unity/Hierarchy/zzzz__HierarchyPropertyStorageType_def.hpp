#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyPropertyStorageType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyPropertyStorageType)
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyPropertyStorageType;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyPropertyStorageType);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyPropertyStorageType
struct CORDL_TYPE HierarchyPropertyStorageType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HierarchyPropertyStorageType_Unwrapped
  enum struct __HierarchyPropertyStorageType_Unwrapped : int32_t {
    __E_Sparse = static_cast<int32_t>(0x0),
    __E_Dense = static_cast<int32_t>(0x1),
    __E_Blob = static_cast<int32_t>(0x2),
    __E_Default = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HierarchyPropertyStorageType_Unwrapped() const noexcept {
    return static_cast<__HierarchyPropertyStorageType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyPropertyStorageType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyPropertyStorageType(int32_t value__) noexcept;

  /// @brief Field Blob value: I32(2)
  static ::Unity::Hierarchy::HierarchyPropertyStorageType const Blob;

  /// @brief Field Default value: I32(1)
  static ::Unity::Hierarchy::HierarchyPropertyStorageType const Default;

  /// @brief Field Dense value: I32(1)
  static ::Unity::Hierarchy::HierarchyPropertyStorageType const Dense;

  /// @brief Field Sparse value: I32(0)
  static ::Unity::Hierarchy::HierarchyPropertyStorageType const Sparse;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21761 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyPropertyStorageType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyPropertyStorageType, 0x4>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyPropertyStorageType, "Unity.Hierarchy", "HierarchyPropertyStorageType");

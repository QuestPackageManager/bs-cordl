#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyPropertyDescriptor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyPropertyStorageType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyPropertyDescriptor)
namespace Unity::Hierarchy {
struct HierarchyPropertyStorageType;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyPropertyDescriptor;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyPropertyDescriptor);
// Dependencies Unity.Hierarchy.HierarchyPropertyStorageType
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyPropertyDescriptor
struct CORDL_TYPE HierarchyPropertyDescriptor {
public:
  // Declarations
  __declspec(property(put = set_Size)) int32_t Size;

  __declspec(property(put = set_Type)) ::Unity::Hierarchy::HierarchyPropertyStorageType Type;

  /// @brief Method set_Size, addr 0x69063f4, size 0x8, virtual false, abstract: false, final false
  inline void set_Size(int32_t value);

  /// @brief Method set_Type, addr 0x69063fc, size 0x8, virtual false, abstract: false, final false
  inline void set_Type(::Unity::Hierarchy::HierarchyPropertyStorageType value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyPropertyDescriptor();

  // Ctor Parameters [CppParam { name: "m_Size", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::Unity::Hierarchy::HierarchyPropertyStorageType", modifiers: "",
  // def_value: None }]
  constexpr HierarchyPropertyDescriptor(int32_t m_Size, ::Unity::Hierarchy::HierarchyPropertyStorageType m_Type) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Size, offset: 0x0, size: 0x4, def value: None
  int32_t m_Size;

  /// @brief Field m_Type, offset: 0x4, size: 0x4, def value: None
  ::Unity::Hierarchy::HierarchyPropertyStorageType m_Type;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyPropertyDescriptor, m_Size) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyPropertyDescriptor, m_Type) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyPropertyDescriptor, 0x8>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyPropertyDescriptor, "Unity.Hierarchy", "HierarchyPropertyDescriptor");

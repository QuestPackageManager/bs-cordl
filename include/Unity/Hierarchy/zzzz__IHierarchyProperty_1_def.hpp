#pragma once
// IWYU pragma private; include "Unity/Hierarchy/IHierarchyProperty_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IHierarchyProperty_1)
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace Unity::Hierarchy {
template <typename T> class IHierarchyProperty_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::Unity::Hierarchy::IHierarchyProperty_1);
// Dependencies
namespace Unity::Hierarchy {
// cpp template
template <typename T>
// Is value type: false
// CS Name: Unity.Hierarchy.IHierarchyProperty`1<T>
class CORDL_TYPE IHierarchyProperty_1 {
public:
  // Declarations
  /// @brief Method GetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline T GetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method SetValue, addr 0xffffffffffffffff, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline void SetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node, T value);

  // Ctor Parameters [CppParam { name: "", ty: "IHierarchyProperty_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IHierarchyProperty_1(IHierarchyProperty_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21747 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Unity::Hierarchy::IHierarchyProperty_1, "Unity.Hierarchy", "IHierarchyProperty`1");

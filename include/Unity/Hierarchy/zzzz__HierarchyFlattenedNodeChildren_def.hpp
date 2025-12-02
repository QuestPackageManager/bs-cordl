#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedNodeChildren.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyFlattenedNodeChildren)
namespace Unity::Hierarchy {
struct HierarchyFlattenedNodeChildren_Enumerator;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyFlattenedNodeChildren;
}
namespace Unity::Hierarchy {
struct HierarchyFlattenedNodeChildren_Enumerator;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyFlattenedNodeChildren);
MARK_VAL_T(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator);
// Dependencies Unity.Hierarchy.HierarchyNode
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattenedNodeChildren
struct CORDL_TYPE HierarchyFlattenedNodeChildren {
public:
  // Declarations
  using Enumerator = ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator;

  /// @brief Method GetEnumerator, addr 0x6901908, size 0x24, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator GetEnumerator();

  /// @brief Method ThrowIfVersionChanged, addr 0x6901954, size 0x70, virtual false, abstract: false, final false
  inline void ThrowIfVersionChanged();

  /// @brief Method .ctor, addr 0x6901634, size 0x1b0, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, ::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattenedNodeChildren();

  // Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None }, CppParam { name: "m_Node", ty:
  // "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t",
  // modifiers: "", def_value: None }]
  constexpr HierarchyFlattenedNodeChildren(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyNode m_Node, int32_t m_Version, int32_t m_Count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_HierarchyFlattened, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_Node, offset: 0x8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyNode m_Node;

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Count, offset: 0x14, size: 0x4, def value: None
  int32_t m_Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, m_HierarchyFlattened) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, m_Node) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, m_Count) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyFlattenedNodeChildren, 0x18>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyFlattenedNodeChildren, Unity.Hierarchy.HierarchyNode
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattenedNodeChildren/Enumerator
struct CORDL_TYPE HierarchyFlattenedNodeChildren_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyNode Current;

  /// @brief Method MoveNext, addr 0x6901a9c, size 0x1dc, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x690192c, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyFlattenedNodeChildren enumerable, ::Unity::Hierarchy::HierarchyNode node);

  /// @brief Method get_Current, addr 0x69019c4, size 0xd8, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Hierarchy::HierarchyNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattenedNodeChildren_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyFlattenedNodeChildren", modifiers: "", def_value: None }, CppParam { name: "m_HierarchyFlattened", ty:
  // "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None }, CppParam { name: "m_Node", ty: "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: None }, CppParam { name:
  // "m_CurrentIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ChildrenIndex", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_ChildrenCount", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyFlattenedNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyFlattenedNodeChildren m_Enumerable, ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened,
                                                      ::Unity::Hierarchy::HierarchyNode m_Node, int32_t m_CurrentIndex, int32_t m_ChildrenIndex, int32_t m_ChildrenCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21703 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x38 };

  /// @brief Field m_Enumerable, offset: 0x0, size: 0x18, def value: None
  ::Unity::Hierarchy::HierarchyFlattenedNodeChildren m_Enumerable;

  /// @brief Field m_HierarchyFlattened, offset: 0x18, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_Node, offset: 0x20, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyNode m_Node;

  /// @brief Field m_CurrentIndex, offset: 0x28, size: 0x4, def value: None
  int32_t m_CurrentIndex;

  /// @brief Field m_ChildrenIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t m_ChildrenIndex;

  /// @brief Field m_ChildrenCount, offset: 0x30, size: 0x4, def value: None
  int32_t m_ChildrenCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, m_Enumerable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, m_HierarchyFlattened) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, m_Node) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, m_CurrentIndex) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, m_ChildrenIndex) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, m_ChildrenCount) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, 0x38>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyFlattenedNodeChildren, "Unity.Hierarchy", "HierarchyFlattenedNodeChildren");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyFlattenedNodeChildren_Enumerator, "Unity.Hierarchy", "HierarchyFlattenedNodeChildren/Enumerator");

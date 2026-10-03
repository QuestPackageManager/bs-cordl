#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedChildrenEnumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyFlattenedChildrenEnumerable)
namespace Unity::Hierarchy {
struct HierarchyFlattenedChildrenEnumerable_Enumerator;
}
namespace Unity::Hierarchy {
struct HierarchyFlattenedNode;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyFlattenedChildrenEnumerable;
}
namespace Unity::Hierarchy {
struct HierarchyFlattenedChildrenEnumerable_Enumerator;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable);
MARK_VAL_T(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable, "Unity.Hierarchy", "HierarchyFlattenedChildrenEnumerable");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator, "Unity.Hierarchy", "HierarchyFlattenedChildrenEnumerable/Enumerator");
// [IsReadOnly]
// Dependencies Unity.Hierarchy.HierarchyFlattenedNode
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattenedChildrenEnumerable
struct CORDL_TYPE HierarchyFlattenedChildrenEnumerable {
public:
  // Declarations
  using Enumerator = ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator;

  /// @brief Method GetEnumerator, addr 0x6f93854, size 0x3c, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator GetEnumerator();

  /// @brief Method .ctor, addr 0x6f934e0, size 0x240, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyFlattened* hierarchyFlattened, /* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode> node);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattenedChildrenEnumerable();

  // Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ParentNode", ty:
  // "::Unity::Hierarchy::HierarchyFlattenedNode", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_ParentIndex", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr HierarchyFlattenedChildrenEnumerable(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyFlattenedNode m_ParentNode, int32_t m_ParentIndex) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22577 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_HierarchyFlattened, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_ParentNode, offset: 0x8, size: 0x24, def value: None
  ::Unity::Hierarchy::HierarchyFlattenedNode m_ParentNode;

  /// @brief Field m_ParentIndex, offset: 0x2c, size: 0x4, def value: None
  int32_t m_ParentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable, m_HierarchyFlattened) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable, m_ParentNode) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable, m_ParentIndex) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable) == 0x30, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyFlattenedChildrenEnumerable
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattenedChildrenEnumerable/Enumerator
struct CORDL_TYPE HierarchyFlattenedChildrenEnumerable_Enumerator {
public:
  // Declarations
  /// @brief [IsReadOnly]
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyFlattenedNode Current;

  /// @brief Method MoveNext, addr 0x6f939e4, size 0x144, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method ThrowIfVersionChanged, addr 0x6f93b28, size 0x70, virtual false, abstract: false, final false
  inline void ThrowIfVersionChanged();

  /// @brief Method .ctor, addr 0x6f93890, size 0x40, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable enumerable);

  /// @brief Method get_Current, addr 0x6f938d0, size 0x114, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Hierarchy::HierarchyFlattenedNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattenedChildrenEnumerable_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_End", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Depth", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Version", ty:
  // "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Current", ty: "int32_t", modifiers: "", def_value: None, comment: None }]
  constexpr HierarchyFlattenedChildrenEnumerable_Enumerator(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable m_Enumerable, int32_t m_End, int32_t m_Depth, int32_t m_Version,
                                                            int32_t m_Current) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22576 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  /// @brief Field m_Enumerable, offset: 0x0, size: 0x30, def value: None
  ::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable m_Enumerable;

  /// @brief Field m_End, offset: 0x30, size: 0x4, def value: None
  int32_t m_End;

  /// @brief Field m_Depth, offset: 0x34, size: 0x4, def value: None
  int32_t m_Depth;

  /// @brief Field m_Version, offset: 0x38, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Current, offset: 0x3c, size: 0x4, def value: None
  int32_t m_Current;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator, m_Enumerable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator, m_End) == 0x30, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator, m_Depth) == 0x34, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator, m_Version) == 0x38, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator, m_Current) == 0x3c, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyFlattenedChildrenEnumerable_Enumerator) == 0x40, "Size mismatch!");

} // namespace Unity::Hierarchy

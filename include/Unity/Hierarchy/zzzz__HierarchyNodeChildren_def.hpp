#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeChildren.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeChildren)
namespace System {
struct IntPtr;
}
namespace Unity::Hierarchy {
struct HierarchyNodeChildren_Enumerator;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyNodeChildren;
}
namespace Unity::Hierarchy {
struct HierarchyNodeChildren_Enumerator;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeChildren);
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeChildren_Enumerator);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeChildren
struct CORDL_TYPE HierarchyNodeChildren {
public:
  // Declarations
  using Enumerator = ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator;

  /// @brief Method GetEnumerator, addr 0x696ad28, size 0x18, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeChildren_Enumerator GetEnumerator();

  /// @brief Method ThrowIfVersionChanged, addr 0x696ad5c, size 0x74, virtual false, abstract: false, final false
  inline void ThrowIfVersionChanged();

  /// @brief Method .ctor, addr 0x696abb0, size 0x14c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::Hierarchy* hierarchy, ::System::IntPtr nodeChildrenPtr);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeChildren();

  // Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: None }, CppParam { name: "m_Ptr", ty: "::Unity::Hierarchy::HierarchyNode*",
  // modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyNodeChildren(::Unity::Hierarchy::Hierarchy* m_Hierarchy, ::Unity::Hierarchy::HierarchyNode* m_Ptr, int32_t m_Version, int32_t m_Count) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21733 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_Hierarchy, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_Ptr, offset: 0x8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyNode* m_Ptr;

  /// @brief Field m_Version, offset: 0x10, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Count, offset: 0x14, size: 0x4, def value: None
  int32_t m_Count;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren, m_Hierarchy) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren, m_Ptr) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren, m_Version) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren, m_Count) == 0x14, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeChildren, 0x18>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyNodeChildren
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeChildren/Enumerator
struct CORDL_TYPE HierarchyNodeChildren_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyNode Current;

  /// @brief Method MoveNext, addr 0x696ae50, size 0x1c, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x696ad40, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::ByRef<::Unity::Hierarchy::HierarchyNodeChildren> enumerable);

  /// @brief Method get_Current, addr 0x696add0, size 0x80, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Hierarchy::HierarchyNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeChildren_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Enumerable", ty: "::Unity::Hierarchy::HierarchyNodeChildren", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
  // def_value: None }]
  constexpr HierarchyNodeChildren_Enumerator(::Unity::Hierarchy::HierarchyNodeChildren m_Enumerable, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21732 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field m_Enumerable, offset: 0x0, size: 0x18, def value: None
  ::Unity::Hierarchy::HierarchyNodeChildren m_Enumerable;

  /// @brief Field m_Index, offset: 0x18, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren_Enumerator, m_Enumerable) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeChildren_Enumerator, m_Index) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeChildren_Enumerator, 0x20>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeChildren, "Unity.Hierarchy", "HierarchyNodeChildren");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeChildren_Enumerator, "Unity.Hierarchy", "HierarchyNodeChildren/Enumerator");

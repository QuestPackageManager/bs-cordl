#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewModelNodesEnumerable.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyFlattenedNode_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include "Unity/Hierarchy/zzzz__ReadOnlyNativeVector_1_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyViewModelNodesEnumerable)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
struct HierarchyViewModelNodesEnumerable_Enumerator;
}
namespace Unity::Hierarchy {
class HierarchyViewModelNodesEnumerable_Predicate;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyViewModelNodesEnumerable_Predicate;
}
namespace Unity::Hierarchy {
struct HierarchyViewModelNodesEnumerable;
}
namespace Unity::Hierarchy {
struct HierarchyViewModelNodesEnumerable_Enumerator;
}
// Write type traits
MARK_REF_T(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*);
MARK_VAL_T(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable);
MARK_VAL_T(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator);
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*, "Unity.Hierarchy", "HierarchyViewModelNodesEnumerable/Predicate");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable, "Unity.Hierarchy", "HierarchyViewModelNodesEnumerable");
DEFINE_IL2CPP_CLASS(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator, "Unity.Hierarchy", "HierarchyViewModelNodesEnumerable/Enumerator");
// Dependencies System.MulticastDelegate
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewModelNodesEnumerable/Predicate
class CORDL_TYPE HierarchyViewModelNodesEnumerable_Predicate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x6f95edc, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(/* [IsReadOnly] */ ::by_ref<::Unity::Hierarchy::HierarchyNode const> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  static inline ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x6f95e5c, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModelNodesEnumerable_Predicate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModelNodesEnumerable_Predicate", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyViewModelNodesEnumerable_Predicate(HierarchyViewModelNodesEnumerable_Predicate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewModelNodesEnumerable_Predicate", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyViewModelNodesEnumerable_Predicate(HierarchyViewModelNodesEnumerable_Predicate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22589 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate) == 0x80, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyFlattenedNode, Unity.Hierarchy.HierarchyNodeFlags, Unity.Hierarchy.ReadOnlyNativeVector`1<T>
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewModelNodesEnumerable/Enumerator
struct CORDL_TYPE HierarchyViewModelNodesEnumerable_Enumerator {
public:
  // Declarations
  /// @brief [IsReadOnly]
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyNode Current;

  /// @brief Method MoveNext, addr 0x6f95ffc, size 0x158, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method ThrowIfVersionChanged, addr 0x6f96154, size 0x70, virtual false, abstract: false, final false
  inline void ThrowIfVersionChanged();

  /// @brief Method .ctor, addr 0x6f95e20, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable enumerable);

  /// @brief Method get_Current, addr 0x6f95ef0, size 0x10c, virtual false, abstract: false, final false
  inline ::by_ref<::Unity::Hierarchy::HierarchyNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModelNodesEnumerable_Enumerator();

  // Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Predicate", ty:
  // "::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags",
  // modifiers: "", def_value: None, comment: None }, CppParam { name: "m_FlattenedNodes", ty: "::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode>", modifiers: "",
  // def_value: None, comment: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "",
  // def_value: None, comment: None }]
  constexpr HierarchyViewModelNodesEnumerable_Enumerator(::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel, ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* m_Predicate,
                                                         ::Unity::Hierarchy::HierarchyNodeFlags m_Flags,
                                                         ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> m_FlattenedNodes, int32_t m_Version,
                                                         int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22590 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_HierarchyViewModel, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel;

  /// @brief Field m_Predicate, offset: 0x8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* m_Predicate;

  /// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
  ::Unity::Hierarchy::HierarchyNodeFlags m_Flags;

  /// @brief Field m_FlattenedNodes, offset: 0x18, size: 0x10, def value: None
  ::Unity::Hierarchy::ReadOnlyNativeVector_1<::Unity::Hierarchy::HierarchyFlattenedNode> m_FlattenedNodes;

  /// @brief Field m_Version, offset: 0x28, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Index, offset: 0x2c, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator, m_HierarchyViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator, m_Predicate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator, m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator, m_FlattenedNodes) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator, m_Version) == 0x28, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator, m_Index) == 0x2c, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator) == 0x30, "Size mismatch!");

} // namespace Unity::Hierarchy
// [IsReadOnly]
// Dependencies Unity.Hierarchy.HierarchyNodeFlags
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewModelNodesEnumerable
struct CORDL_TYPE HierarchyViewModelNodesEnumerable {
public:
  // Declarations
  using Enumerator = ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator;

  using Predicate = ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate;

  /// @brief Method GetEnumerator, addr 0x6f95de4, size 0x3c, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Enumerator GetEnumerator();

  /// @brief Method .ctor, addr 0x6f95d5c, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyViewModel* viewModel, ::Unity::Hierarchy::HierarchyNodeFlags flags, ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* predicate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewModelNodesEnumerable();

  // Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Predicate", ty:
  // "::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate*", modifiers: "", def_value: None, comment: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags",
  // modifiers: "", def_value: None, comment: None }]
  constexpr HierarchyViewModelNodesEnumerable(::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel, ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* m_Predicate,
                                              ::Unity::Hierarchy::HierarchyNodeFlags m_Flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 22591 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_HierarchyViewModel, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel;

  /// @brief Field m_Predicate, offset: 0x8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModelNodesEnumerable_Predicate* m_Predicate;

  /// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
  ::Unity::Hierarchy::HierarchyNodeFlags m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable, m_HierarchyViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable, m_Predicate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable, m_Flags) == 0x10, "Offset mismatch!");

static_assert(sizeof(::Unity::Hierarchy::HierarchyViewModelNodesEnumerable) == 0x18, "Size mismatch!");

} // namespace Unity::Hierarchy

#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyViewNodesEnumerable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNodeFlags_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyViewNodesEnumerable)
namespace System {
struct IntPtr;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
struct HierarchyFlattenedNode;
}
namespace Unity::Hierarchy {
class HierarchyFlattened;
}
namespace Unity::Hierarchy {
struct HierarchyNodeFlags;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
class HierarchyViewModel;
}
namespace Unity::Hierarchy {
struct HierarchyViewNodesEnumerable_Enumerator;
}
namespace Unity::Hierarchy {
class HierarchyViewNodesEnumerable_Predicate;
}
// Forward declare root types
namespace Unity::Hierarchy {
class HierarchyViewNodesEnumerable_Predicate;
}
namespace Unity::Hierarchy {
struct HierarchyViewNodesEnumerable;
}
namespace Unity::Hierarchy {
struct HierarchyViewNodesEnumerable_Enumerator;
}
// Write type traits
MARK_REF_PTR_T(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate);
MARK_VAL_T(::Unity::Hierarchy::HierarchyViewNodesEnumerable);
MARK_VAL_T(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator);
// Dependencies System.MulticastDelegate
namespace Unity::Hierarchy {
// Is value type: false
// CS Name: Unity.Hierarchy.HierarchyViewNodesEnumerable/Predicate
class CORDL_TYPE HierarchyViewNodesEnumerable_Predicate : public ::System::MulticastDelegate {
public:
  // Declarations
  /// @brief Method Invoke, addr 0x696ced0, size 0x14, virtual true, abstract: false, final false
  inline bool Invoke(::ByRef<::Unity::Hierarchy::HierarchyNode> node, ::Unity::Hierarchy::HierarchyNodeFlags flags);

  static inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* New_ctor(::System::Object* object, ::System::IntPtr method);

  /// @brief Method .ctor, addr 0x696ce50, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Object* object, ::System::IntPtr method);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewNodesEnumerable_Predicate();

public:
  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewNodesEnumerable_Predicate", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  HierarchyViewNodesEnumerable_Predicate(HierarchyViewNodesEnumerable_Predicate&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "HierarchyViewNodesEnumerable_Predicate", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  HierarchyViewNodesEnumerable_Predicate(HierarchyViewNodesEnumerable_Predicate const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21744 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate, 0x80>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyNodeFlags
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewNodesEnumerable/Enumerator
struct CORDL_TYPE HierarchyViewNodesEnumerable_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyNode Current;

  /// @brief Method MoveNext, addr 0x696cf70, size 0xd4, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method ThrowIfVersionChanged, addr 0x696d044, size 0x70, virtual false, abstract: false, final false
  inline void ThrowIfVersionChanged();

  /// @brief Method .ctor, addr 0x696ce08, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyViewNodesEnumerable enumerable);

  /// @brief Method get_Current, addr 0x696ceec, size 0x84, virtual false, abstract: false, final false
  inline ::ByRef<::Unity::Hierarchy::HierarchyNode> get_Current();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewNodesEnumerable_Enumerator();

  // Ctor Parameters [CppParam { name: "m_HierarchyFlattened", ty: "::Unity::Hierarchy::HierarchyFlattened*", modifiers: "", def_value: None }, CppParam { name: "m_Predicate", ty:
  // "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "",
  // def_value: None }, CppParam { name: "m_NodesPtr", ty: "::Unity::Hierarchy::HierarchyFlattenedNode*", modifiers: "", def_value: None }, CppParam { name: "m_NodesCount", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyViewNodesEnumerable_Enumerator(::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* m_Predicate,
                                                    ::Unity::Hierarchy::HierarchyNodeFlags m_Flags, ::Unity::Hierarchy::HierarchyFlattenedNode* m_NodesPtr, int32_t m_NodesCount, int32_t m_Version,
                                                    int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21745 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x30 };

  /// @brief Field m_HierarchyFlattened, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattened* m_HierarchyFlattened;

  /// @brief Field m_Predicate, offset: 0x8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* m_Predicate;

  /// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
  ::Unity::Hierarchy::HierarchyNodeFlags m_Flags;

  /// @brief Field m_NodesPtr, offset: 0x18, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyFlattenedNode* m_NodesPtr;

  /// @brief Field m_NodesCount, offset: 0x20, size: 0x4, def value: None
  int32_t m_NodesCount;

  /// @brief Field m_Version, offset: 0x24, size: 0x4, def value: None
  int32_t m_Version;

  /// @brief Field m_Index, offset: 0x28, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, m_HierarchyFlattened) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, m_Predicate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, m_Flags) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, m_NodesPtr) == 0x18, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, m_NodesCount) == 0x20, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, m_Version) == 0x24, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, m_Index) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, 0x30>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies Unity.Hierarchy.HierarchyNodeFlags
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyViewNodesEnumerable
struct CORDL_TYPE HierarchyViewNodesEnumerable {
public:
  // Declarations
  using Enumerator = ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator;

  using Predicate = ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate;

  /// @brief Method GetEnumerator, addr 0x696cdcc, size 0x3c, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator GetEnumerator();

  /// @brief Method .ctor, addr 0x696cd44, size 0x88, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::HierarchyViewModel* viewModel, ::Unity::Hierarchy::HierarchyNodeFlags flags, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* predicate);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyViewNodesEnumerable();

  // Ctor Parameters [CppParam { name: "m_HierarchyViewModel", ty: "::Unity::Hierarchy::HierarchyViewModel*", modifiers: "", def_value: None }, CppParam { name: "m_Predicate", ty:
  // "::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*", modifiers: "", def_value: None }, CppParam { name: "m_Flags", ty: "::Unity::Hierarchy::HierarchyNodeFlags", modifiers: "",
  // def_value: None }]
  constexpr HierarchyViewNodesEnumerable(::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel, ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* m_Predicate,
                                         ::Unity::Hierarchy::HierarchyNodeFlags m_Flags) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21746 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x18 };

  /// @brief Field m_HierarchyViewModel, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewModel* m_HierarchyViewModel;

  /// @brief Field m_Predicate, offset: 0x8, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate* m_Predicate;

  /// @brief Field m_Flags, offset: 0x10, size: 0x4, def value: None
  ::Unity::Hierarchy::HierarchyNodeFlags m_Flags;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable, m_HierarchyViewModel) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable, m_Predicate) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyViewNodesEnumerable, m_Flags) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyViewNodesEnumerable, 0x18>, "Size mismatch!");

} // namespace Unity::Hierarchy
NEED_NO_BOX(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate);
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Predicate*, "Unity.Hierarchy", "HierarchyViewNodesEnumerable/Predicate");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyViewNodesEnumerable, "Unity.Hierarchy", "HierarchyViewNodesEnumerable");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyViewNodesEnumerable_Enumerator, "Unity.Hierarchy", "HierarchyViewNodesEnumerable/Enumerator");

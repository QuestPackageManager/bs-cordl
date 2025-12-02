#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNodeTypeHandlerBaseEnumerable.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNodeTypeHandlerBaseEnumerable)
namespace System::Buffers {
template <typename T> class IMemoryOwner_1;
}
namespace System {
class IDisposable;
}
namespace System {
struct IntPtr;
}
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBaseEnumerable_Enumerator;
}
namespace Unity::Hierarchy {
class HierarchyNodeTypeHandlerBase;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBaseEnumerable;
}
namespace Unity::Hierarchy {
struct HierarchyNodeTypeHandlerBaseEnumerable_Enumerator;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable);
MARK_VAL_T(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBaseEnumerable/Enumerator
struct CORDL_TYPE HierarchyNodeTypeHandlerBaseEnumerable_Enumerator {
public:
  // Declarations
  __declspec(property(get = get_Current)) ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* Current;

  /// @brief Convert operator to "::System::IDisposable"
  constexpr operator ::System::IDisposable*();

  /// @brief Method Dispose, addr 0x6903bb8, size 0xa4, virtual true, abstract: false, final true
  inline void Dispose();

  /// @brief Method MoveNext, addr 0x6903e08, size 0x1c, virtual false, abstract: false, final false
  inline bool MoveNext();

  /// @brief Method .ctor, addr 0x69038bc, size 0x1e4, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::Hierarchy* hierarchy);

  /// @brief Method get_Current, addr 0x6903c5c, size 0x1ac, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBase* get_Current();

  /// @brief Convert to "::System::IDisposable"
  constexpr ::System::IDisposable* i___System__IDisposable();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeTypeHandlerBaseEnumerable_Enumerator();

  // Ctor Parameters [CppParam { name: "m_Handlers", ty: "::System::Buffers::IMemoryOwner_1<::System::IntPtr>*", modifiers: "", def_value: None }, CppParam { name: "m_Count", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "m_Index", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyNodeTypeHandlerBaseEnumerable_Enumerator(::System::Buffers::IMemoryOwner_1<::System::IntPtr>* m_Handlers, int32_t m_Count, int32_t m_Index) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21712 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Handlers, offset: 0x0, size: 0x8, def value: None
  ::System::Buffers::IMemoryOwner_1<::System::IntPtr>* m_Handlers;

  /// @brief Field m_Count, offset: 0x8, size: 0x4, def value: None
  int32_t m_Count;

  /// @brief Field m_Index, offset: 0xc, size: 0x4, def value: None
  int32_t m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator, m_Handlers) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator, m_Count) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator, m_Index) == 0xc, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator, 0x10>, "Size mismatch!");

} // namespace Unity::Hierarchy
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNodeTypeHandlerBaseEnumerable
struct CORDL_TYPE HierarchyNodeTypeHandlerBaseEnumerable {
public:
  // Declarations
  using Enumerator = ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator;

  /// @brief Method GetEnumerator, addr 0x6903894, size 0x28, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator GetEnumerator();

  /// @brief Method .ctor, addr 0x690388c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::Hierarchy* hierarchy);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNodeTypeHandlerBaseEnumerable();

  // Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: None }]
  constexpr HierarchyNodeTypeHandlerBaseEnumerable(::Unity::Hierarchy::Hierarchy* m_Hierarchy) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21713 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Hierarchy, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable, m_Hierarchy) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable, 0x8>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBaseEnumerable");
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNodeTypeHandlerBaseEnumerable_Enumerator, "Unity.Hierarchy", "HierarchyNodeTypeHandlerBaseEnumerable/Enumerator");

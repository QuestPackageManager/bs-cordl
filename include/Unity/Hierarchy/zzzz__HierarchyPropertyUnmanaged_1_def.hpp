#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyPropertyUnmanaged_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyPropertyId_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyPropertyUnmanaged_1)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
namespace Unity::Hierarchy {
struct HierarchyPropertyId;
}
namespace Unity::Hierarchy {
class Hierarchy;
}
namespace Unity::Hierarchy {
template <typename T> class IHierarchyProperty_1;
}
// Forward declare root types
namespace Unity::Hierarchy {
template <typename T> struct HierarchyPropertyUnmanaged_1;
}
// Write type traits
MARK_GEN_VAL_T(::Unity::Hierarchy::HierarchyPropertyUnmanaged_1);
// Dependencies Unity.Hierarchy.HierarchyPropertyId
namespace Unity::Hierarchy {
// cpp template
template <typename T>
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyPropertyUnmanaged`1<T>
struct CORDL_TYPE HierarchyPropertyUnmanaged_1 {
public:
  // Declarations
  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>"
  constexpr operator ::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>*();

  /// @brief Convert operator to "::Unity::Hierarchy::IHierarchyProperty_1<T>"
  constexpr operator ::Unity::Hierarchy::IHierarchyProperty_1<T>*();

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T> other);

  /// @brief Method GetHashCode, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T GetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method SetValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void SetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node, T value);

  /// @brief Method ToString, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method Unity.Hierarchy.IHierarchyProperty<T>.GetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline T Unity_Hierarchy_IHierarchyProperty_T__GetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node);

  /// @brief Method Unity.Hierarchy.IHierarchyProperty<T>.SetValue, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void Unity_Hierarchy_IHierarchyProperty_T__SetValue(::ByRef<::Unity::Hierarchy::HierarchyNode> node, T value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::Unity::Hierarchy::Hierarchy* hierarchy, ::ByRef<::Unity::Hierarchy::HierarchyPropertyId> property);

  /// @brief Convert to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>"
  constexpr ::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyUnmanaged_1<T>>* i___System__IEquatable_1___Unity__Hierarchy__HierarchyPropertyUnmanaged_1_T__();

  /// @brief Convert to "::Unity::Hierarchy::IHierarchyProperty_1<T>"
  constexpr ::Unity::Hierarchy::IHierarchyProperty_1<T>* i___Unity__Hierarchy__IHierarchyProperty_1_T_();

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyPropertyUnmanaged_1();

  // Ctor Parameters [CppParam { name: "m_Hierarchy", ty: "::Unity::Hierarchy::Hierarchy*", modifiers: "", def_value: None }, CppParam { name: "m_Property", ty:
  // "::Unity::Hierarchy::HierarchyPropertyId", modifiers: "", def_value: None }]
  constexpr HierarchyPropertyUnmanaged_1(::Unity::Hierarchy::Hierarchy* m_Hierarchy, ::Unity::Hierarchy::HierarchyPropertyId m_Property) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21714 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field m_Hierarchy, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::Hierarchy* m_Hierarchy;

  /// @brief Field m_Property, offset: 0x8, size: 0x4, def value: None
  ::Unity::Hierarchy::HierarchyPropertyId m_Property;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE_GENERIC_STRUCT(::Unity::Hierarchy::HierarchyPropertyUnmanaged_1, "Unity.Hierarchy", "HierarchyPropertyUnmanaged`1");

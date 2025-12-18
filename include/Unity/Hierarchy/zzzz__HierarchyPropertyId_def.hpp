#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyPropertyId.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyPropertyId)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyPropertyId;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyPropertyId);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyPropertyId
struct CORDL_TYPE HierarchyPropertyId {
public:
  // Declarations
  __declspec(property(get = get_Id)) int32_t Id;

  /// @brief Field s_Null, offset 0xffffffff, size 0x4
  __declspec(property(get = getStaticF_s_Null, put = setStaticF_s_Null)) ::Unity::Hierarchy::HierarchyPropertyId s_Null;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyId>"
  constexpr operator ::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyId>*();

  /// @brief Method Equals, addr 0x696f41c, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x696f2f4, size 0x10, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Hierarchy::HierarchyPropertyId other);

  /// @brief Method GetHashCode, addr 0x696f498, size 0x8, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x696f304, size 0x118, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x696f2d8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Hierarchy::HierarchyPropertyId getStaticF_s_Null();

  /// @brief Method get_Id, addr 0x696f2d0, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Id();

  /// @brief Method get_Null, addr 0x696f288, size 0x48, virtual false, abstract: false, final false
  static inline ::ByRef<::Unity::Hierarchy::HierarchyPropertyId> get_Null();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyId>"
  constexpr ::System::IEquatable_1<::Unity::Hierarchy::HierarchyPropertyId>* i___System__IEquatable_1___Unity__Hierarchy__HierarchyPropertyId_();

  /// @brief Method op_Equality, addr 0x696f2e0, size 0x14, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::Unity::Hierarchy::HierarchyPropertyId> lhs, ::ByRef<::Unity::Hierarchy::HierarchyPropertyId> rhs);

  static inline void setStaticF_s_Null(::Unity::Hierarchy::HierarchyPropertyId value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyPropertyId();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyPropertyId(int32_t m_Id) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21760 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  int32_t m_Id;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyPropertyId, m_Id) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyPropertyId, 0x4>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyPropertyId, "Unity.Hierarchy", "HierarchyPropertyId");

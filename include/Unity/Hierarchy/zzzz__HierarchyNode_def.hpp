#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyNode)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyNode);
// Dependencies
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyNode
struct CORDL_TYPE HierarchyNode {
public:
  // Declarations
  __declspec(property(get = get_Id)) int32_t Id;

  __declspec(property(get = get_Version)) int32_t Version;

  /// @brief Field s_Null, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_s_Null, put = setStaticF_s_Null)) ::Unity::Hierarchy::HierarchyNode s_Null;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyNode>"
  constexpr operator ::System::IEquatable_1<::Unity::Hierarchy::HierarchyNode>*();

  /// @brief Method Equals, addr 0x696efdc, size 0x8c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x696ee38, size 0x28, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Hierarchy::HierarchyNode other);

  /// @brief Method GetHashCode, addr 0x696eda0, size 0x7c, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method ToString, addr 0x696ee60, size 0x17c, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method .ctor, addr 0x696ee30, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::Unity::Hierarchy::HierarchyNode getStaticF_s_Null();

  /// @brief Method get_Id, addr 0x696ee20, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Id();

  /// @brief Method get_Null, addr 0x696a668, size 0x48, virtual false, abstract: false, final false
  static inline ::ByRef<::Unity::Hierarchy::HierarchyNode> get_Null();

  /// @brief Method get_Version, addr 0x696ee28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Version();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyNode>"
  constexpr ::System::IEquatable_1<::Unity::Hierarchy::HierarchyNode>* i___System__IEquatable_1___Unity__Hierarchy__HierarchyNode_();

  /// @brief Method op_Equality, addr 0x696a6b0, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::Unity::Hierarchy::HierarchyNode> lhs, ::ByRef<::Unity::Hierarchy::HierarchyNode> rhs);

  /// @brief Method op_Inequality, addr 0x696acfc, size 0x2c, virtual false, abstract: false, final false
  static inline bool op_Inequality(::ByRef<::Unity::Hierarchy::HierarchyNode> lhs, ::ByRef<::Unity::Hierarchy::HierarchyNode> rhs);

  static inline void setStaticF_s_Null(::Unity::Hierarchy::HierarchyNode value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyNode();

  // Ctor Parameters [CppParam { name: "m_Id", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyNode(int32_t m_Id, int32_t m_Version) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21756 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field m_Id, offset: 0x0, size: 0x4, def value: None
  int32_t m_Id;

  /// @brief Field m_Version, offset: 0x4, size: 0x4, def value: None
  int32_t m_Version;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyNode, m_Id) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyNode, m_Version) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyNode, 0x8>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyNode, "Unity.Hierarchy", "HierarchyNode");

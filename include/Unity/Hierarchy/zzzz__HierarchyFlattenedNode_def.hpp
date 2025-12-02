#pragma once
// IWYU pragma private; include "Unity/Hierarchy/HierarchyFlattenedNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "Unity/Hierarchy/zzzz__HierarchyNodeType_def.hpp"
#include "Unity/Hierarchy/zzzz__HierarchyNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HierarchyFlattenedNode)
namespace System {
template <typename T> class IEquatable_1;
}
namespace System {
class Object;
}
namespace Unity::Hierarchy {
struct HierarchyNode;
}
// Forward declare root types
namespace Unity::Hierarchy {
struct HierarchyFlattenedNode;
}
// Write type traits
MARK_VAL_T(::Unity::Hierarchy::HierarchyFlattenedNode);
// Dependencies Unity.Hierarchy.HierarchyNode, Unity.Hierarchy.HierarchyNodeType
namespace Unity::Hierarchy {
// Is value type: true
// CS Name: Unity.Hierarchy.HierarchyFlattenedNode
struct CORDL_TYPE HierarchyFlattenedNode {
public:
  // Declarations
  __declspec(property(get = get_ChildrenCount)) int32_t ChildrenCount;

  __declspec(property(get = get_NextSiblingOffset)) int32_t NextSiblingOffset;

  __declspec(property(get = get_Node)) ::Unity::Hierarchy::HierarchyNode Node;

  /// @brief Field s_Null, offset 0xffffffff, size 0x1c
  __declspec(property(get = getStaticF_s_Null, put = setStaticF_s_Null)) ::Unity::Hierarchy::HierarchyFlattenedNode s_Null;

  /// @brief Convert operator to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>"
  constexpr operator ::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>*();

  /// @brief Method Equals, addr 0x6905e88, size 0x7c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method Equals, addr 0x6905d10, size 0x14, virtual true, abstract: false, final true
  inline bool Equals(::Unity::Hierarchy::HierarchyFlattenedNode other);

  /// @brief Method GetHashCode, addr 0x6905f04, size 0x18, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method GetNodeByRef, addr 0x6905f98, size 0x4, virtual false, abstract: false, final false
  static inline ::ByRef<::Unity::Hierarchy::HierarchyNode> GetNodeByRef(::ByRef<::Unity::Hierarchy::HierarchyFlattenedNode> hierarchyFlattenedNode);

  /// @brief Method ToString, addr 0x6905d24, size 0x164, virtual true, abstract: false, final false
  inline ::StringW ToString();

  static inline ::Unity::Hierarchy::HierarchyFlattenedNode getStaticF_s_Null();

  /// @brief Method get_ChildrenCount, addr 0x6905d08, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ChildrenCount();

  /// @brief Method get_NextSiblingOffset, addr 0x6905d00, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_NextSiblingOffset();

  /// @brief Method get_Node, addr 0x6905cf8, size 0x8, virtual false, abstract: false, final false
  inline ::Unity::Hierarchy::HierarchyNode get_Node();

  /// @brief Method get_Null, addr 0x6901cd0, size 0x48, virtual false, abstract: false, final false
  static inline ::ByRef<::Unity::Hierarchy::HierarchyFlattenedNode> get_Null();

  /// @brief Convert to "::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>"
  constexpr ::System::IEquatable_1<::Unity::Hierarchy::HierarchyFlattenedNode>* i___System__IEquatable_1___Unity__Hierarchy__HierarchyFlattenedNode_();

  /// @brief Method op_Equality, addr 0x6901d18, size 0x14, virtual false, abstract: false, final false
  static inline bool op_Equality(::ByRef<::Unity::Hierarchy::HierarchyFlattenedNode> lhs, ::ByRef<::Unity::Hierarchy::HierarchyFlattenedNode> rhs);

  static inline void setStaticF_s_Null(::Unity::Hierarchy::HierarchyFlattenedNode value);

  // Ctor Parameters []
  // @brief default ctor
  constexpr HierarchyFlattenedNode();

  // Ctor Parameters [CppParam { name: "m_Node", ty: "::Unity::Hierarchy::HierarchyNode", modifiers: "", def_value: None }, CppParam { name: "m_Type", ty: "::Unity::Hierarchy::HierarchyNodeType",
  // modifiers: "", def_value: None }, CppParam { name: "m_ParentOffset", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_NextSiblingOffset", ty: "int32_t", modifiers: "",
  // def_value: None }, CppParam { name: "m_ChildrenCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_Depth", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HierarchyFlattenedNode(::Unity::Hierarchy::HierarchyNode m_Node, ::Unity::Hierarchy::HierarchyNodeType m_Type, int32_t m_ParentOffset, int32_t m_NextSiblingOffset, int32_t m_ChildrenCount,
                                   int32_t m_Depth) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 21728 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  /// @brief Field m_Node, offset: 0x0, size: 0x8, def value: None
  ::Unity::Hierarchy::HierarchyNode m_Node;

  /// @brief Field m_Type, offset: 0x8, size: 0x4, def value: None
  ::Unity::Hierarchy::HierarchyNodeType m_Type;

  /// @brief Field m_ParentOffset, offset: 0xc, size: 0x4, def value: None
  int32_t m_ParentOffset;

  /// @brief Field m_NextSiblingOffset, offset: 0x10, size: 0x4, def value: None
  int32_t m_NextSiblingOffset;

  /// @brief Field m_ChildrenCount, offset: 0x14, size: 0x4, def value: None
  int32_t m_ChildrenCount;

  /// @brief Field m_Depth, offset: 0x18, size: 0x4, def value: None
  int32_t m_Depth;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNode, m_Node) == 0x0, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNode, m_Type) == 0x8, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNode, m_ParentOffset) == 0xc, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNode, m_NextSiblingOffset) == 0x10, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNode, m_ChildrenCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::Unity::Hierarchy::HierarchyFlattenedNode, m_Depth) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Hierarchy::HierarchyFlattenedNode, 0x1c>, "Size mismatch!");

} // namespace Unity::Hierarchy
DEFINE_IL2CPP_ARG_TYPE(::Unity::Hierarchy::HierarchyFlattenedNode, "Unity.Hierarchy", "HierarchyFlattenedNode");

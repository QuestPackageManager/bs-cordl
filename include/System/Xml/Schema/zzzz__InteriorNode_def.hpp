#pragma once
// IWYU pragma private; include "System/Xml/Schema/InteriorNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
CORDL_MODULE_EXPORT(InteriorNode)
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
// Forward declare root types
namespace System::Xml::Schema {
class InteriorNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::InteriorNode);
// Dependencies System.Xml.Schema.SyntaxTreeNode
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.InteriorNode
class CORDL_TYPE InteriorNode : public ::System::Xml::Schema::SyntaxTreeNode {
public:
  // Declarations
  __declspec(property(get = get_LeftChild, put = set_LeftChild)) ::System::Xml::Schema::SyntaxTreeNode* LeftChild;

  __declspec(property(get = get_RightChild, put = set_RightChild)) ::System::Xml::Schema::SyntaxTreeNode* RightChild;

  /// @brief Field leftChild, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_leftChild, put = __cordl_internal_set_leftChild)) ::System::Xml::Schema::SyntaxTreeNode* leftChild;

  /// @brief Field rightChild, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_rightChild, put = __cordl_internal_set_rightChild)) ::System::Xml::Schema::SyntaxTreeNode* rightChild;

  /// @brief Method ExpandTree, addr 0x439c338, size 0x64, virtual true, abstract: false, final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  /// @brief Method ExpandTreeNoRecursive, addr 0x439c150, size 0x1e8, virtual false, abstract: false, final false
  inline void ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  static inline ::System::Xml::Schema::InteriorNode* New_ctor();

  constexpr ::System::Xml::Schema::SyntaxTreeNode* const& __cordl_internal_get_leftChild() const;

  constexpr ::System::Xml::Schema::SyntaxTreeNode*& __cordl_internal_get_leftChild();

  constexpr ::System::Xml::Schema::SyntaxTreeNode* const& __cordl_internal_get_rightChild() const;

  constexpr ::System::Xml::Schema::SyntaxTreeNode*& __cordl_internal_get_rightChild();

  constexpr void __cordl_internal_set_leftChild(::System::Xml::Schema::SyntaxTreeNode* value);

  constexpr void __cordl_internal_set_rightChild(::System::Xml::Schema::SyntaxTreeNode* value);

  /// @brief Method .ctor, addr 0x439c39c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_LeftChild, addr 0x439c130, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SyntaxTreeNode* get_LeftChild();

  /// @brief Method get_RightChild, addr 0x439c140, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SyntaxTreeNode* get_RightChild();

  /// @brief Method set_LeftChild, addr 0x439c138, size 0x8, virtual false, abstract: false, final false
  inline void set_LeftChild(::System::Xml::Schema::SyntaxTreeNode* value);

  /// @brief Method set_RightChild, addr 0x439c148, size 0x8, virtual false, abstract: false, final false
  inline void set_RightChild(::System::Xml::Schema::SyntaxTreeNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteriorNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InteriorNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteriorNode(InteriorNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteriorNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteriorNode(InteriorNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7502 };

  /// @brief Field leftChild, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::SyntaxTreeNode* ___leftChild;

  /// @brief Field rightChild, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::SyntaxTreeNode* ___rightChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::InteriorNode, ___leftChild) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::InteriorNode, ___rightChild) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::InteriorNode, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::InteriorNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::InteriorNode*, "System.Xml.Schema", "InteriorNode");

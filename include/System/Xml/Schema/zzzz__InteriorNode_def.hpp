#pragma once
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
// Type: System.Xml.Schema::InteriorNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11599))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11602))
// CS Name: ::System.Xml.Schema::InteriorNode*
class CORDL_TYPE InteriorNode : public ::System::Xml::Schema::SyntaxTreeNode {
public:
  // Declarations
  /// @brief Field leftChild, offset 0x10, size 0x8
  __declspec(property(get = __get_leftChild, put = __set_leftChild))::System::Xml::Schema::SyntaxTreeNode* leftChild;

  /// @brief Field rightChild, offset 0x18, size 0x8
  __declspec(property(get = __get_rightChild, put = __set_rightChild))::System::Xml::Schema::SyntaxTreeNode* rightChild;

  __declspec(property(get = get_LeftChild, put = set_LeftChild))::System::Xml::Schema::SyntaxTreeNode* LeftChild;

  __declspec(property(get = get_RightChild, put = set_RightChild))::System::Xml::Schema::SyntaxTreeNode* RightChild;

  constexpr ::System::Xml::Schema::SyntaxTreeNode*& __get_leftChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SyntaxTreeNode*> const& __get_leftChild() const;

  constexpr void __set_leftChild(::System::Xml::Schema::SyntaxTreeNode* value);

  constexpr ::System::Xml::Schema::SyntaxTreeNode*& __get_rightChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::SyntaxTreeNode*> const& __get_rightChild() const;

  constexpr void __set_rightChild(::System::Xml::Schema::SyntaxTreeNode* value);

  /// @brief Method get_LeftChild, addr 0x28ae1ac, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SyntaxTreeNode* get_LeftChild();

  /// @brief Method set_LeftChild, addr 0x28ae1b4, size 0x8, virtual false, abstract: false, final false
  inline void set_LeftChild(::System::Xml::Schema::SyntaxTreeNode* value);

  /// @brief Method get_RightChild, addr 0x28ae1bc, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::SyntaxTreeNode* get_RightChild();

  /// @brief Method set_RightChild, addr 0x28ae1c4, size 0x8, virtual false, abstract: false, final false
  inline void set_RightChild(::System::Xml::Schema::SyntaxTreeNode* value);

  /// @brief Method ExpandTreeNoRecursive, addr 0x28ae1cc, size 0x1e0, virtual false, abstract: false, final false
  inline void ExpandTreeNoRecursive(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  /// @brief Method ExpandTree, addr 0x28ae3ac, size 0x64, virtual true, abstract: false, final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  static inline ::System::Xml::Schema::InteriorNode* New_ctor();

  /// @brief Method .ctor, addr 0x28ae410, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InteriorNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InteriorNode(InteriorNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InteriorNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InteriorNode(InteriorNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InteriorNode();

public:
  /// @brief Field leftChild, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::SyntaxTreeNode* ___leftChild;

  /// @brief Field rightChild, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::SyntaxTreeNode* ___rightChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::InteriorNode, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::InteriorNode, ___leftChild) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::InteriorNode, ___rightChild) == 0x18, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::InteriorNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::InteriorNode*, "System.Xml.Schema", "InteriorNode");

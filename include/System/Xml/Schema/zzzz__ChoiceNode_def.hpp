#pragma once
// IWYU pragma private; include "System/Xml/Schema/ChoiceNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
CORDL_MODULE_EXPORT(ChoiceNode)
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class InteriorNode;
}
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
class ChoiceNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::ChoiceNode);
// Dependencies System.Xml.Schema.InteriorNode
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.ChoiceNode
class CORDL_TYPE ChoiceNode : public ::System::Xml::Schema::InteriorNode {
public:
  // Declarations
  __declspec(property(get = get_IsNullable)) bool IsNullable;

  /// @brief Method ConstructChildPos, addr 0x439c878, size 0xd4, virtual false, abstract: false, final false
  static inline void ConstructChildPos(::System::Xml::Schema::SyntaxTreeNode* child, ::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                                       ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method ConstructPos, addr 0x439c94c, size 0x12c, virtual true, abstract: false, final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method ExpandTree, addr 0x439cb10, size 0x4, virtual true, abstract: false, final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  static inline ::System::Xml::Schema::ChoiceNode* New_ctor();

  /// @brief Method .ctor, addr 0x439c0b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNullable, addr 0x439ca78, size 0x98, virtual true, abstract: false, final false
  inline bool get_IsNullable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ChoiceNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ChoiceNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ChoiceNode(ChoiceNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ChoiceNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ChoiceNode(ChoiceNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7505 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::ChoiceNode, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::ChoiceNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::ChoiceNode*, "System.Xml.Schema", "ChoiceNode");

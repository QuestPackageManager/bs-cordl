#pragma once
// IWYU pragma private; include "System/Xml/Schema/LeafNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LeafNode)
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
// Forward declare root types
namespace System::Xml::Schema {
class LeafNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::LeafNode);
// Dependencies System.Xml.Schema.SyntaxTreeNode
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.LeafNode
class CORDL_TYPE LeafNode : public ::System::Xml::Schema::SyntaxTreeNode {
public:
  // Declarations
  __declspec(property(get = get_IsNullable)) bool IsNullable;

  __declspec(property(get = get_Pos, put = set_Pos)) int32_t Pos;

  /// @brief Field pos, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_pos, put = __cordl_internal_set_pos)) int32_t pos;

  /// @brief Method ConstructPos, addr 0x439bf18, size 0x40, virtual true, abstract: false, final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method ExpandTree, addr 0x439bf14, size 0x4, virtual true, abstract: false, final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  static inline ::System::Xml::Schema::LeafNode* New_ctor(int32_t pos);

  constexpr int32_t const& __cordl_internal_get_pos() const;

  constexpr int32_t& __cordl_internal_get_pos();

  constexpr void __cordl_internal_set_pos(int32_t value);

  /// @brief Method .ctor, addr 0x439bedc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(int32_t pos);

  /// @brief Method get_IsNullable, addr 0x439bf58, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_Pos, addr 0x439bf04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_Pos();

  /// @brief Method set_Pos, addr 0x439bf0c, size 0x8, virtual false, abstract: false, final false
  inline void set_Pos(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LeafNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LeafNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LeafNode(LeafNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LeafNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LeafNode(LeafNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7500 };

  /// @brief Field pos, offset: 0x10, size: 0x4, def value: None
  int32_t ___pos;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::LeafNode, ___pos) == 0x10, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::LeafNode, 0x18>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::LeafNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::LeafNode*, "System.Xml.Schema", "LeafNode");

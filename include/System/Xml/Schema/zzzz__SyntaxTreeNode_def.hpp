#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(SyntaxTreeNode)
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class InteriorNode;
}
// Forward declare root types
namespace System::Xml::Schema {
class SyntaxTreeNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SyntaxTreeNode);
// Type: System.Xml.Schema::SyntaxTreeNode
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11599))
// CS Name: ::System.Xml.Schema::SyntaxTreeNode*
class CORDL_TYPE SyntaxTreeNode : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_IsNullable)) bool IsNullable;

  __declspec(property(get = get_IsRangeNode)) bool IsRangeNode;

  /// @brief Method ExpandTree addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  /// @brief Method ConstructPos addr 0x0 size 0xffffffffffffffff virtual true final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method get_IsNullable addr 0x0 size 0xffffffffffffffff virtual true final false
  inline bool get_IsNullable();

  /// @brief Method get_IsRangeNode addr 0x28adbcc size 0x8 virtual true final false
  inline bool get_IsRangeNode();

  static inline ::System::Xml::Schema::SyntaxTreeNode* New_ctor();

  /// @brief Method .ctor addr 0x28adbd4 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "SyntaxTreeNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SyntaxTreeNode(SyntaxTreeNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SyntaxTreeNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SyntaxTreeNode(SyntaxTreeNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SyntaxTreeNode();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SyntaxTreeNode, 0x10>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SyntaxTreeNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SyntaxTreeNode*, "System.Xml.Schema", "SyntaxTreeNode");

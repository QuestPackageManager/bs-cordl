#pragma once
// IWYU pragma private; include "System/Xml/Schema/StarNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
CORDL_MODULE_EXPORT(StarNode)
namespace System::Xml::Schema {
class BitSet;
}
// Forward declare root types
namespace System::Xml::Schema {
class StarNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::StarNode);
// Dependencies System.Xml.Schema.InteriorNode
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.StarNode
class CORDL_TYPE StarNode : public ::System::Xml::Schema::InteriorNode {
public:
  // Declarations
  __declspec(property(get = get_IsNullable)) bool IsNullable;

  /// @brief Method ConstructPos, addr 0x439b5c8, size 0x9c, virtual true, abstract: false, final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  static inline ::System::Xml::Schema::StarNode* New_ctor();

  /// @brief Method .ctor, addr 0x439b66c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNullable, addr 0x439b664, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsNullable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr StarNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "StarNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  StarNode(StarNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "StarNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  StarNode(StarNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7503 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::StarNode, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::StarNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::StarNode*, "System.Xml.Schema", "StarNode");

#pragma once
// IWYU pragma private; include "System/Xml/Schema/SequenceNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__InteriorNode_def.hpp"
#include <cstddef>
CORDL_MODULE_EXPORT(SequenceNode)
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
struct SequenceNode_SequenceConstructPosContext;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
// Forward declare root types
namespace System::Xml::Schema {
class SequenceNode;
}
namespace System::Xml::Schema {
struct SequenceNode_SequenceConstructPosContext;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::SequenceNode);
MARK_VAL_T(::System::Xml::Schema::SequenceNode_SequenceConstructPosContext);
// Dependencies
namespace System::Xml::Schema {
// Is value type: true
// CS Name: System.Xml.Schema.SequenceNode/SequenceConstructPosContext
struct CORDL_TYPE SequenceNode_SequenceConstructPosContext {
public:
  // Declarations
  /// @brief Method .ctor, addr 0x439b0b0, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::SequenceNode* node, ::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos);

  // Ctor Parameters []
  // @brief default ctor
  constexpr SequenceNode_SequenceConstructPosContext();

  // Ctor Parameters [CppParam { name: "this_", ty: "::System::Xml::Schema::SequenceNode*", modifiers: "", def_value: None }, CppParam { name: "firstpos", ty: "::System::Xml::Schema::BitSet*",
  // modifiers: "", def_value: None }, CppParam { name: "lastpos", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None }, CppParam { name: "lastposLeft", ty:
  // "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None }, CppParam { name: "firstposRight", ty: "::System::Xml::Schema::BitSet*", modifiers: "", def_value: None }]
  constexpr SequenceNode_SequenceConstructPosContext(::System::Xml::Schema::SequenceNode* this_, ::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                                                     ::System::Xml::Schema::BitSet* lastposLeft, ::System::Xml::Schema::BitSet* firstposRight) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7498 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x28 };

  /// @brief Field this_, offset: 0x0, size: 0x8, def value: None
  ::System::Xml::Schema::SequenceNode* this_;

  /// @brief Field firstpos, offset: 0x8, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* firstpos;

  /// @brief Field lastpos, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* lastpos;

  /// @brief Field lastposLeft, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* lastposLeft;

  /// @brief Field firstposRight, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::BitSet* firstposRight;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::SequenceNode_SequenceConstructPosContext, this_) == 0x0, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SequenceNode_SequenceConstructPosContext, firstpos) == 0x8, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SequenceNode_SequenceConstructPosContext, lastpos) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SequenceNode_SequenceConstructPosContext, lastposLeft) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::SequenceNode_SequenceConstructPosContext, firstposRight) == 0x20, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SequenceNode_SequenceConstructPosContext, 0x28>, "Size mismatch!");

} // namespace System::Xml::Schema
// Dependencies System.Xml.Schema.InteriorNode
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.SequenceNode
class CORDL_TYPE SequenceNode : public ::System::Xml::Schema::InteriorNode {
public:
  // Declarations
  using SequenceConstructPosContext = ::System::Xml::Schema::SequenceNode_SequenceConstructPosContext;

  __declspec(property(get = get_IsNullable)) bool IsNullable;

  /// @brief Method ConstructPos, addr 0x439ad64, size 0x34c, virtual true, abstract: false, final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method ExpandTree, addr 0x439b22c, size 0x4, virtual true, abstract: false, final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  static inline ::System::Xml::Schema::SequenceNode* New_ctor();

  /// @brief Method .ctor, addr 0x439b230, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_IsNullable, addr 0x439b0c0, size 0x16c, virtual true, abstract: false, final false
  inline bool get_IsNullable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SequenceNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SequenceNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SequenceNode(SequenceNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SequenceNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SequenceNode(SequenceNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7499 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::SequenceNode, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::SequenceNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SequenceNode*, "System.Xml.Schema", "SequenceNode");
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::SequenceNode_SequenceConstructPosContext, "System.Xml.Schema", "SequenceNode/SequenceConstructPosContext");

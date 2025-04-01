#pragma once
// IWYU pragma private; include "System/Xml/Schema/NamespaceListNode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
CORDL_MODULE_EXPORT(NamespaceListNode)
namespace System::Collections {
class ICollection;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Schema {
class NamespaceListNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::NamespaceListNode);
// Dependencies System.Xml.Schema.SyntaxTreeNode
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.NamespaceListNode
class CORDL_TYPE NamespaceListNode : public ::System::Xml::Schema::SyntaxTreeNode {
public:
  // Declarations
  __declspec(property(get = get_IsNullable)) bool IsNullable;

  /// @brief Field namespaceList, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_namespaceList, put = __cordl_internal_set_namespaceList)) ::System::Xml::Schema::NamespaceList* namespaceList;

  /// @brief Field particle, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_particle, put = __cordl_internal_set_particle)) ::System::Object* particle;

  /// @brief Method ConstructPos, addr 0x439752c, size 0x38, virtual true, abstract: false, final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method ExpandTree, addr 0x43970b0, size 0x474, virtual true, abstract: false, final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  /// @brief Method GetResolvedSymbols, addr 0x4397090, size 0x20, virtual true, abstract: false, final false
  inline ::System::Collections::ICollection* GetResolvedSymbols(::System::Xml::Schema::SymbolsDictionary* symbols);

  static inline ::System::Xml::Schema::NamespaceListNode* New_ctor(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle);

  constexpr ::System::Xml::Schema::NamespaceList* const& __cordl_internal_get_namespaceList() const;

  constexpr ::System::Xml::Schema::NamespaceList*& __cordl_internal_get_namespaceList();

  constexpr ::System::Object* const& __cordl_internal_get_particle() const;

  constexpr ::System::Object*& __cordl_internal_get_particle();

  constexpr void __cordl_internal_set_namespaceList(::System::Xml::Schema::NamespaceList* value);

  constexpr void __cordl_internal_set_particle(::System::Object* value);

  /// @brief Method .ctor, addr 0x4397064, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle);

  /// @brief Method get_IsNullable, addr 0x4397564, size 0x38, virtual true, abstract: false, final false
  inline bool get_IsNullable();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceListNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NamespaceListNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamespaceListNode(NamespaceListNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceListNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamespaceListNode(NamespaceListNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7501 };

  /// @brief Field namespaceList, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::NamespaceList* ___namespaceList;

  /// @brief Field particle, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___particle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::NamespaceListNode, ___namespaceList) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::NamespaceListNode, ___particle) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::NamespaceListNode, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::NamespaceListNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NamespaceListNode*, "System.Xml.Schema", "NamespaceListNode");

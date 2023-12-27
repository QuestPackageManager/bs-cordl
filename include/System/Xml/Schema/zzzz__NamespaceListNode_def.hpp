#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__SyntaxTreeNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(NamespaceListNode)
namespace System::Xml::Schema {
class SymbolsDictionary;
}
namespace System::Xml::Schema {
class Positions;
}
namespace System::Xml::Schema {
class NamespaceList;
}
namespace System::Xml::Schema {
class InteriorNode;
}
namespace System::Xml::Schema {
class BitSet;
}
namespace System::Collections {
class ICollection;
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
// Type: System.Xml.Schema::NamespaceListNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11599))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11601))
// CS Name: ::System.Xml.Schema::NamespaceListNode*
class CORDL_TYPE NamespaceListNode : public ::System::Xml::Schema::SyntaxTreeNode {
public:
  // Declarations
  /// @brief Field namespaceList, offset 0x10, size 0x8
  __declspec(property(get = __get_namespaceList, put = __set_namespaceList))::System::Xml::Schema::NamespaceList* namespaceList;

  /// @brief Field particle, offset 0x18, size 0x8
  __declspec(property(get = __get_particle, put = __set_particle))::System::Object* particle;

  __declspec(property(get = get_IsNullable)) bool IsNullable;

  constexpr ::System::Xml::Schema::NamespaceList*& __get_namespaceList();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::NamespaceList*> const& __get_namespaceList() const;

  constexpr void __set_namespaceList(::System::Xml::Schema::NamespaceList* value);

  constexpr ::System::Object*& __get_particle();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_particle() const;

  constexpr void __set_particle(::System::Object* value);

  static inline ::System::Xml::Schema::NamespaceListNode* New_ctor(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle);

  /// @brief Method .ctor addr 0x28adc60 size 0x2c virtual false final false
  inline void _ctor(::System::Xml::Schema::NamespaceList* namespaceList, ::System::Object* particle);

  /// @brief Method GetResolvedSymbols addr 0x28adc8c size 0x20 virtual true final false
  inline ::System::Collections::ICollection* GetResolvedSymbols(::System::Xml::Schema::SymbolsDictionary* symbols);

  /// @brief Method ExpandTree addr 0x28adcac size 0x478 virtual true final false
  inline void ExpandTree(::System::Xml::Schema::InteriorNode* parent, ::System::Xml::Schema::SymbolsDictionary* symbols, ::System::Xml::Schema::Positions* positions);

  /// @brief Method ConstructPos addr 0x28ae12c size 0x40 virtual true final false
  inline void ConstructPos(::System::Xml::Schema::BitSet* firstpos, ::System::Xml::Schema::BitSet* lastpos,
                           ::ArrayW<::System::Xml::Schema::BitSet*, ::Array<::System::Xml::Schema::BitSet*>*> followpos);

  /// @brief Method get_IsNullable addr 0x28ae16c size 0x40 virtual true final false
  inline bool get_IsNullable();

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceListNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NamespaceListNode(NamespaceListNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NamespaceListNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NamespaceListNode(NamespaceListNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NamespaceListNode();

public:
  /// @brief Field namespaceList, offset: 0x10, size: 0x8, def value: None
  ::System::Xml::Schema::NamespaceList* ___namespaceList;

  /// @brief Field particle, offset: 0x18, size: 0x8, def value: None
  ::System::Object* ___particle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::NamespaceListNode, 0x20>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::NamespaceListNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::NamespaceListNode*, "System.Xml.Schema", "NamespaceListNode");

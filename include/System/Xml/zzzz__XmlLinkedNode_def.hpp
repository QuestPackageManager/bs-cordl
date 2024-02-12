#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
CORDL_MODULE_EXPORT(XmlLinkedNode)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlLinkedNode;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlLinkedNode);
// Type: System.Xml::XmlLinkedNode
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(11418))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11411))
// CS Name: ::System.Xml::XmlLinkedNode*
class CORDL_TYPE XmlLinkedNode : public ::System::Xml::XmlNode {
public:
  // Declarations
  /// @brief Field next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next))::System::Xml::XmlLinkedNode* next;

  __declspec(property(get = get_PreviousSibling))::System::Xml::XmlNode* PreviousSibling;

  __declspec(property(get = get_NextSibling))::System::Xml::XmlNode* NextSibling;

  constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& __cordl_internal_get_next() const;

  constexpr void __cordl_internal_set_next(::System::Xml::XmlLinkedNode* value);

  static inline ::System::Xml::XmlLinkedNode* New_ctor(::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x288b670, size 0x18, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* doc);

  /// @brief Method get_PreviousSibling, addr 0x288da04, size 0x68, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_PreviousSibling();

  /// @brief Method get_NextSibling, addr 0x288da6c, size 0x50, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_NextSibling();

  // Ctor Parameters [CppParam { name: "", ty: "XmlLinkedNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlLinkedNode(XmlLinkedNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlLinkedNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlLinkedNode(XmlLinkedNode const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlLinkedNode();

public:
  /// @brief Field next, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlLinkedNode, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlLinkedNode, ___next) == 0x18, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlLinkedNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlLinkedNode*, "System.Xml", "XmlLinkedNode");

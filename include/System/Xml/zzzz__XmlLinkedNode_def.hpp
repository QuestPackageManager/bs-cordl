#pragma once
// IWYU pragma private; include "System/Xml/XmlLinkedNode.hpp"
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
// Dependencies System.Xml.XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlLinkedNode
class CORDL_TYPE XmlLinkedNode : public ::System::Xml::XmlNode {
public:
  // Declarations
  __declspec(property(get = get_NextSibling)) ::System::Xml::XmlNode* NextSibling;

  __declspec(property(get = get_PreviousSibling)) ::System::Xml::XmlNode* PreviousSibling;

  /// @brief Field next, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Xml::XmlLinkedNode* next;

  static inline ::System::Xml::XmlLinkedNode* New_ctor(::System::Xml::XmlDocument* doc);

  constexpr ::System::Xml::XmlLinkedNode* const& __cordl_internal_get_next() const;

  constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_next();

  constexpr void __cordl_internal_set_next(::System::Xml::XmlLinkedNode* value);

  /// @brief Method .ctor, addr 0x4342e04, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* doc);

  /// @brief Method get_NextSibling, addr 0x434af74, size 0x50, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_NextSibling();

  /// @brief Method get_PreviousSibling, addr 0x434af0c, size 0x68, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_PreviousSibling();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlLinkedNode();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlLinkedNode", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlLinkedNode(XmlLinkedNode&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlLinkedNode", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlLinkedNode(XmlLinkedNode const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7303 };

  /// @brief Field next, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___next;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlLinkedNode, ___next) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlLinkedNode, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlLinkedNode);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlLinkedNode*, "System.Xml", "XmlLinkedNode");

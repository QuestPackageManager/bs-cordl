#pragma once
// IWYU pragma private; include "System/Xml/XmlDocumentFragment.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDocumentFragment)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlLinkedNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlDocumentFragment;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDocumentFragment);
// Dependencies System.Xml.XmlNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlDocumentFragment
class CORDL_TYPE XmlDocumentFragment : public ::System::Xml::XmlNode {
public:
  // Declarations
  __declspec(property(put = set_InnerXml)) ::StringW InnerXml;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_LastNode, put = set_LastNode)) ::System::Xml::XmlLinkedNode* LastNode;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_OwnerDocument)) ::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(get = get_ParentNode)) ::System::Xml::XmlNode* ParentNode;

  /// @brief Field lastChild, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_lastChild, put = __cordl_internal_set_lastChild)) ::System::Xml::XmlLinkedNode* lastChild;

  /// @brief Method CanInsertAfter, addr 0x433c6a8, size 0x70, virtual true, abstract: false, final false
  inline bool CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  /// @brief Method CanInsertBefore, addr 0x433c718, size 0x68, virtual true, abstract: false, final false
  inline bool CanInsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  /// @brief Method CloneNode, addr 0x433c5a0, size 0x84, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method IsValidChildType, addr 0x433c63c, size 0x6c, virtual true, abstract: false, final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  static inline ::System::Xml::XmlDocumentFragment* New_ctor(::System::Xml::XmlDocument* ownerDocument);

  /// @brief Method WriteContentTo, addr 0x433c790, size 0x2d0, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x433c780, size 0x10, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr ::System::Xml::XmlLinkedNode* const& __cordl_internal_get_lastChild() const;

  constexpr ::System::Xml::XmlLinkedNode*& __cordl_internal_get_lastChild();

  constexpr void __cordl_internal_set_lastChild(::System::Xml::XmlLinkedNode* value);

  /// @brief Method .ctor, addr 0x4339b04, size 0x7c, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::XmlDocument* ownerDocument);

  /// @brief Method get_IsContainer, addr 0x433c624, size 0x8, virtual true, abstract: false, final false
  inline bool get_IsContainer();

  /// @brief Method get_LastNode, addr 0x433c62c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method get_LocalName, addr 0x433c260, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x433c238, size 0x28, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x433c288, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_OwnerDocument, addr 0x433c298, size 0x78, virtual true, abstract: false, final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method get_ParentNode, addr 0x433c290, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method set_InnerXml, addr 0x433c310, size 0x8c, virtual true, abstract: false, final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method set_LastNode, addr 0x433c634, size 0x8, virtual true, abstract: false, final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDocumentFragment();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentFragment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDocumentFragment(XmlDocumentFragment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentFragment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDocumentFragment(XmlDocumentFragment const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7294 };

  /// @brief Field lastChild, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlDocumentFragment, ___lastChild) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDocumentFragment, 0x20>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDocumentFragment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocumentFragment*, "System.Xml", "XmlDocumentFragment");

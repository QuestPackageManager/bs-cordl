#pragma once
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
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlLinkedNode;
}
// Forward declare root types
namespace System::Xml {
class XmlDocumentFragment;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDocumentFragment);
// Type: System.Xml::XmlDocumentFragment
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11448))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11434))
// CS Name: ::System.Xml::XmlDocumentFragment*
class CORDL_TYPE XmlDocumentFragment : public ::System::Xml::XmlNode {
public:
  // Declarations
  /// @brief Field lastChild, offset 0x18, size 0x8
  __declspec(property(get = __get_lastChild, put = __set_lastChild))::System::Xml::XmlLinkedNode* lastChild;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_ParentNode))::System::Xml::XmlNode* ParentNode;

  __declspec(property(get = get_OwnerDocument))::System::Xml::XmlDocument* OwnerDocument;

  __declspec(property(put = set_InnerXml))::StringW InnerXml;

  __declspec(property(get = get_IsContainer)) bool IsContainer;

  __declspec(property(get = get_LastNode, put = set_LastNode))::System::Xml::XmlLinkedNode* LastNode;

  constexpr ::System::Xml::XmlLinkedNode*& __get_lastChild();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::XmlLinkedNode*> const& __get_lastChild() const;

  constexpr void __set_lastChild(::System::Xml::XmlLinkedNode* value);

  static inline ::System::Xml::XmlDocumentFragment* New_ctor(::System::Xml::XmlDocument* ownerDocument);

  /// @brief Method .ctor addr 0x270a9b0 size 0x84 virtual false final false
  inline void _ctor(::System::Xml::XmlDocument* ownerDocument);

  /// @brief Method get_Name addr 0x270aa3c size 0x28 virtual true final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName addr 0x270aa64 size 0x28 virtual true final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NodeType addr 0x270aa8c size 0x8 virtual true final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_ParentNode addr 0x270aa94 size 0x8 virtual true final false
  inline ::System::Xml::XmlNode* get_ParentNode();

  /// @brief Method get_OwnerDocument addr 0x270aa9c size 0x78 virtual true final false
  inline ::System::Xml::XmlDocument* get_OwnerDocument();

  /// @brief Method set_InnerXml addr 0x270ab14 size 0x8c virtual true final false
  inline void set_InnerXml(::StringW value);

  /// @brief Method CloneNode addr 0x270adac size 0x84 virtual true final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method get_IsContainer addr 0x270ae30 size 0x8 virtual true final false
  inline bool get_IsContainer();

  /// @brief Method get_LastNode addr 0x270ae38 size 0x8 virtual true final false
  inline ::System::Xml::XmlLinkedNode* get_LastNode();

  /// @brief Method set_LastNode addr 0x270ae40 size 0x8 virtual true final false
  inline void set_LastNode(::System::Xml::XmlLinkedNode* value);

  /// @brief Method IsValidChildType addr 0x270ae48 size 0x6c virtual true final false
  inline bool IsValidChildType(::System::Xml::XmlNodeType type);

  /// @brief Method CanInsertAfter addr 0x270aeb4 size 0x70 virtual true final false
  inline bool CanInsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentFragment", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDocumentFragment(XmlDocumentFragment&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDocumentFragment", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDocumentFragment(XmlDocumentFragment const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDocumentFragment();

public:
  /// @brief Field lastChild, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::XmlLinkedNode* ___lastChild;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDocumentFragment, 0x20>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlDocumentFragment, ___lastChild) == 0x18, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDocumentFragment);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDocumentFragment*, "System.Xml", "XmlDocumentFragment");

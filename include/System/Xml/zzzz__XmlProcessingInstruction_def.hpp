#pragma once
// IWYU pragma private; include "System/Xml/XmlProcessingInstruction.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlProcessingInstruction)
namespace System::Xml::XPath {
struct XPathNodeType;
}
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
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlProcessingInstruction;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlProcessingInstruction);
// Dependencies System.Xml.XmlLinkedNode
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlProcessingInstruction
class CORDL_TYPE XmlProcessingInstruction : public ::System::Xml::XmlLinkedNode {
public:
  // Declarations
  __declspec(property(put = set_Data)) ::StringW Data;

  __declspec(property(get = get_InnerText, put = set_InnerText)) ::StringW InnerText;

  __declspec(property(get = get_LocalName)) ::StringW LocalName;

  __declspec(property(get = get_Name)) ::StringW Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  __declspec(property(get = get_XPLocalName)) ::StringW XPLocalName;

  __declspec(property(get = get_XPNodeType)) ::System::Xml::XPath::XPathNodeType XPNodeType;

  /// @brief Field data, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_data, put = __cordl_internal_set_data)) ::StringW data;

  /// @brief Field target, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_target, put = __cordl_internal_set_target)) ::StringW target;

  /// @brief Method CloneNode, addr 0x60b0540, size 0x38, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  static inline ::System::Xml::XmlProcessingInstruction* New_ctor(::StringW target, ::StringW data, ::System::Xml::XmlDocument* doc);

  /// @brief Method WriteContentTo, addr 0x60b05a0, size 0x4, virtual true, abstract: false, final false
  inline void WriteContentTo(::System::Xml::XmlWriter* w);

  /// @brief Method WriteTo, addr 0x60b0578, size 0x28, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr ::StringW const& __cordl_internal_get_data() const;

  constexpr ::StringW& __cordl_internal_get_data();

  constexpr ::StringW const& __cordl_internal_get_target() const;

  constexpr ::StringW& __cordl_internal_get_target();

  constexpr void __cordl_internal_set_data(::StringW value);

  constexpr void __cordl_internal_set_target(::StringW value);

  /// @brief Method .ctor, addr 0x60b0424, size 0x30, virtual false, abstract: false, final false
  inline void _ctor(::StringW target, ::StringW data, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_InnerText, addr 0x60b052c, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method get_LocalName, addr 0x60b0474, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_Name, addr 0x60b0454, size 0x20, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_NodeType, addr 0x60b0538, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value, addr 0x60b0480, size 0x8, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method get_XPLocalName, addr 0x60b05a4, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_XPLocalName();

  /// @brief Method get_XPNodeType, addr 0x60b05b0, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XPath::XPathNodeType get_XPNodeType();

  /// @brief Method set_Data, addr 0x60b048c, size 0xa0, virtual false, abstract: false, final false
  inline void set_Data(::StringW value);

  /// @brief Method set_InnerText, addr 0x60b0534, size 0x4, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method set_Value, addr 0x60b0488, size 0x4, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlProcessingInstruction();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlProcessingInstruction", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlProcessingInstruction(XmlProcessingInstruction&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlProcessingInstruction", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlProcessingInstruction(XmlProcessingInstruction const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9382 };

  /// @brief Field target, offset: 0x20, size: 0x8, def value: None
  ::StringW ___target;

  /// @brief Field data, offset: 0x28, size: 0x8, def value: None
  ::StringW ___data;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlProcessingInstruction, ___target) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlProcessingInstruction, ___data) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlProcessingInstruction, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlProcessingInstruction);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlProcessingInstruction*, "System.Xml", "XmlProcessingInstruction");

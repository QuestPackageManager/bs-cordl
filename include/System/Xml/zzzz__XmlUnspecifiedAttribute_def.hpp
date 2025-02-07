#pragma once
// IWYU pragma private; include "System/Xml/XmlUnspecifiedAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlUnspecifiedAttribute)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
class XmlNode;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml {
class XmlUnspecifiedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUnspecifiedAttribute);
// Dependencies System.Xml.XmlAttribute
namespace System::Xml {
// Is value type: false
// CS Name: System.Xml.XmlUnspecifiedAttribute
class CORDL_TYPE XmlUnspecifiedAttribute : public ::System::Xml::XmlAttribute {
public:
  // Declarations
  __declspec(property(put = set_InnerText)) ::StringW InnerText;

  __declspec(property(get = get_Specified)) bool Specified;

  /// @brief Field fSpecified, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_fSpecified, put = __cordl_internal_set_fSpecified)) bool fSpecified;

  /// @brief Method AppendChild, addr 0x434ea04, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild);

  /// @brief Method CloneNode, addr 0x434e854, size 0x130, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method InsertAfter, addr 0x434e9c4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* InsertAfter(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  /// @brief Method InsertBefore, addr 0x434e9a4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* InsertBefore(::System::Xml::XmlNode* newChild, ::System::Xml::XmlNode* refChild);

  static inline ::System::Xml::XmlUnspecifiedAttribute* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method RemoveChild, addr 0x434e9e4, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild);

  /// @brief Method SetSpecified, addr 0x434ea38, size 0xc, virtual false, abstract: false, final false
  inline void SetSpecified(bool f);

  /// @brief Method WriteTo, addr 0x434ea24, size 0x14, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* w);

  constexpr bool const& __cordl_internal_get_fSpecified() const;

  constexpr bool& __cordl_internal_get_fSpecified();

  constexpr void __cordl_internal_set_fSpecified(bool value);

  /// @brief Method .ctor, addr 0x434e844, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Specified, addr 0x434e84c, size 0x8, virtual true, abstract: false, final false
  inline bool get_Specified();

  /// @brief Method set_InnerText, addr 0x434e984, size 0x20, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUnspecifiedAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUnspecifiedAttribute(XmlUnspecifiedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUnspecifiedAttribute(XmlUnspecifiedAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7320 };

  /// @brief Field fSpecified, offset: 0x28, size: 0x1, def value: None
  bool ___fSpecified;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::XmlUnspecifiedAttribute, ___fSpecified) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUnspecifiedAttribute, 0x30>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUnspecifiedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUnspecifiedAttribute*, "System.Xml", "XmlUnspecifiedAttribute");

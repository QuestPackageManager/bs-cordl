#pragma once
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
// Forward declare root types
namespace System::Xml {
class XmlUnspecifiedAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlUnspecifiedAttribute);
// Type: System.Xml::XmlUnspecifiedAttribute
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 1, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11497))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11528))
// CS Name: ::System.Xml::XmlUnspecifiedAttribute*
class CORDL_TYPE XmlUnspecifiedAttribute : public ::System::Xml::XmlAttribute {
public:
  // Declarations
  /// @brief Field fSpecified, offset 0x28, size 0x1
  __declspec(property(get = __get_fSpecified, put = __set_fSpecified)) bool fSpecified;

  __declspec(property(get = get_Specified)) bool Specified;

  __declspec(property(put = set_InnerText))::StringW InnerText;

  constexpr bool& __get_fSpecified();

  constexpr bool const& __get_fSpecified() const;

  constexpr void __set_fSpecified(bool value);

  static inline ::System::Xml::XmlUnspecifiedAttribute* New_ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x288cf94, size 0x8, virtual false, abstract: false, final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW namespaceURI, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Specified, addr 0x2891fc4, size 0x8, virtual true, abstract: false, final false
  inline bool get_Specified();

  /// @brief Method CloneNode, addr 0x2891fcc, size 0x130, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method set_InnerText, addr 0x28920fc, size 0x20, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method RemoveChild, addr 0x289211c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* RemoveChild(::System::Xml::XmlNode* oldChild);

  /// @brief Method AppendChild, addr 0x289213c, size 0x20, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* AppendChild(::System::Xml::XmlNode* newChild);

  /// @brief Method SetSpecified, addr 0x289215c, size 0xc, virtual false, abstract: false, final false
  inline void SetSpecified(bool f);

  // Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlUnspecifiedAttribute(XmlUnspecifiedAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlUnspecifiedAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlUnspecifiedAttribute(XmlUnspecifiedAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlUnspecifiedAttribute();

public:
  /// @brief Field fSpecified, offset: 0x28, size: 0x1, def value: None
  bool ___fSpecified;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlUnspecifiedAttribute, 0x30>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlUnspecifiedAttribute, ___fSpecified) == 0x28, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlUnspecifiedAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlUnspecifiedAttribute*, "System.Xml", "XmlUnspecifiedAttribute");

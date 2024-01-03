#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlLinkedNode_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XmlDeclaration)
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlNode;
}
// Forward declare root types
namespace System::Xml {
class XmlDeclaration;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlDeclaration);
// Type: System.Xml::XmlDeclaration
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11513))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11504))
// CS Name: ::System.Xml::XmlDeclaration*
class CORDL_TYPE XmlDeclaration : public ::System::Xml::XmlLinkedNode {
public:
  // Declarations
  /// @brief Field version, offset 0x20, size 0x8
  __declspec(property(get = __get_version, put = __set_version))::StringW version;

  /// @brief Field encoding, offset 0x28, size 0x8
  __declspec(property(get = __get_encoding, put = __set_encoding))::StringW encoding;

  /// @brief Field standalone, offset 0x30, size 0x8
  __declspec(property(get = __get_standalone, put = __set_standalone))::StringW standalone;

  __declspec(property(get = get_Version, put = set_Version))::StringW Version;

  __declspec(property(get = get_Encoding, put = set_Encoding))::StringW Encoding;

  __declspec(property(get = get_Standalone, put = set_Standalone))::StringW Standalone;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  __declspec(property(get = get_InnerText, put = set_InnerText))::StringW InnerText;

  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_LocalName))::StringW LocalName;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  constexpr ::StringW& __get_version();

  constexpr ::StringW const& __get_version() const;

  constexpr void __set_version(::StringW value);

  constexpr ::StringW& __get_encoding();

  constexpr ::StringW const& __get_encoding() const;

  constexpr void __set_encoding(::StringW value);

  constexpr ::StringW& __get_standalone();

  constexpr ::StringW const& __get_standalone() const;

  constexpr void __set_standalone(::StringW value);

  static inline ::System::Xml::XmlDeclaration* New_ctor(::StringW version, ::StringW encoding, ::StringW standalone, ::System::Xml::XmlDocument* doc);

  /// @brief Method .ctor, addr 0x28840e8, size 0x190, virtual false, abstract: false, final false
  inline void _ctor(::StringW version, ::StringW encoding, ::StringW standalone, ::System::Xml::XmlDocument* doc);

  /// @brief Method get_Version, addr 0x28844a8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Version();

  /// @brief Method set_Version, addr 0x28844b0, size 0x8, virtual false, abstract: false, final false
  inline void set_Version(::StringW value);

  /// @brief Method get_Encoding, addr 0x28844b8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Encoding();

  /// @brief Method set_Encoding, addr 0x28842f4, size 0x68, virtual false, abstract: false, final false
  inline void set_Encoding(::StringW value);

  /// @brief Method get_Standalone, addr 0x28844c0, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Standalone();

  /// @brief Method set_Standalone, addr 0x288435c, size 0x14c, virtual false, abstract: false, final false
  inline void set_Standalone(::StringW value);

  /// @brief Method get_Value, addr 0x28844c8, size 0x10, virtual true, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x28844d8, size 0x10, virtual true, abstract: false, final false
  inline void set_Value(::StringW value);

  /// @brief Method get_InnerText, addr 0x28844e8, size 0x168, virtual true, abstract: false, final false
  inline ::StringW get_InnerText();

  /// @brief Method set_InnerText, addr 0x2884650, size 0x18c, virtual true, abstract: false, final false
  inline void set_InnerText(::StringW value);

  /// @brief Method get_Name, addr 0x28847dc, size 0x40, virtual true, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_LocalName, addr 0x288481c, size 0xc, virtual true, abstract: false, final false
  inline ::StringW get_LocalName();

  /// @brief Method get_NodeType, addr 0x2884828, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method CloneNode, addr 0x2884830, size 0x3c, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNode* CloneNode(bool deep);

  /// @brief Method IsValidXmlVersion, addr 0x2884278, size 0x7c, virtual false, abstract: false, final false
  inline bool IsValidXmlVersion(::StringW ver);

  // Ctor Parameters [CppParam { name: "", ty: "XmlDeclaration", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlDeclaration(XmlDeclaration&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlDeclaration", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlDeclaration(XmlDeclaration const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlDeclaration();

public:
  /// @brief Field version, offset: 0x20, size: 0x8, def value: None
  ::StringW ___version;

  /// @brief Field encoding, offset: 0x28, size: 0x8, def value: None
  ::StringW ___encoding;

  /// @brief Field standalone, offset: 0x30, size: 0x8, def value: None
  ::StringW ___standalone;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlDeclaration, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::XmlDeclaration, ___version) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDeclaration, ___encoding) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::XmlDeclaration, ___standalone) == 0x30, "Offset mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlDeclaration);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlDeclaration*, "System.Xml", "XmlDeclaration");

#pragma once
// IWYU pragma private; include "System/Xml/Linq/XDocument.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XContainer_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XDocument)
namespace System::Xml::Linq {
class XAttribute;
}
namespace System::Xml::Linq {
class XDeclaration;
}
namespace System::Xml::Linq {
class XElement;
}
namespace System::Xml::Linq {
class XNode;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System::Xml {
class XmlWriter;
}
// Forward declare root types
namespace System::Xml::Linq {
class XDocument;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XDocument);
// Dependencies System.Xml.Linq.XContainer
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XDocument
class CORDL_TYPE XDocument : public ::System::Xml::Linq::XContainer {
public:
  // Declarations
  __declspec(property(get = get_Declaration, put = set_Declaration)) ::System::Xml::Linq::XDeclaration* Declaration;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Root)) ::System::Xml::Linq::XElement* Root;

  /// @brief Field _declaration, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__declaration, put = __cordl_internal_set__declaration)) ::System::Xml::Linq::XDeclaration* _declaration;

  /// @brief Method AddAttribute, addr 0x424a918, size 0x4c, virtual true, abstract: false, final false
  inline void AddAttribute(::System::Xml::Linq::XAttribute* a);

  /// @brief Method AddAttributeSkipNotify, addr 0x424a964, size 0x4c, virtual true, abstract: false, final false
  inline void AddAttributeSkipNotify(::System::Xml::Linq::XAttribute* a);

  /// @brief Method CloneNode, addr 0x424a9b0, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Linq::XNode* CloneNode();

  /// @brief Method GetFirstNode, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  template <typename T> inline T GetFirstNode();

  /// @brief Method IsWhitespace, addr 0x424aa08, size 0x94, virtual false, abstract: false, final false
  static inline bool IsWhitespace(::StringW s);

  static inline ::System::Xml::Linq::XDocument* New_ctor();

  static inline ::System::Xml::Linq::XDocument* New_ctor(::System::Xml::Linq::XDocument* other);

  /// @brief Method ValidateDocument, addr 0x424ac40, size 0x124, virtual false, abstract: false, final false
  inline void ValidateDocument(::System::Xml::Linq::XNode* previous, ::System::Xml::XmlNodeType allowBefore, ::System::Xml::XmlNodeType allowAfter);

  /// @brief Method ValidateNode, addr 0x424aa9c, size 0x1a4, virtual true, abstract: false, final false
  inline void ValidateNode(::System::Xml::Linq::XNode* node, ::System::Xml::Linq::XNode* previous);

  /// @brief Method ValidateString, addr 0x424ad64, size 0x60, virtual true, abstract: false, final false
  inline void ValidateString(::StringW s);

  /// @brief Method WriteTo, addr 0x424a7ec, size 0x12c, virtual true, abstract: false, final false
  inline void WriteTo(::System::Xml::XmlWriter* writer);

  constexpr ::System::Xml::Linq::XDeclaration* const& __cordl_internal_get__declaration() const;

  constexpr ::System::Xml::Linq::XDeclaration*& __cordl_internal_get__declaration();

  constexpr void __cordl_internal_set__declaration(::System::Xml::Linq::XDeclaration* value);

  /// @brief Method .ctor, addr 0x424a70c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method .ctor, addr 0x424a714, size 0x78, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XDocument* other);

  /// @brief Method get_Declaration, addr 0x424a78c, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XDeclaration* get_Declaration();

  /// @brief Method get_NodeType, addr 0x424a79c, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Root, addr 0x424a7a4, size 0x48, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XElement* get_Root();

  /// @brief Method set_Declaration, addr 0x424a794, size 0x8, virtual false, abstract: false, final false
  inline void set_Declaration(::System::Xml::Linq::XDeclaration* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XDocument();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XDocument", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XDocument(XDocument&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XDocument", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XDocument(XDocument const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17966 };

  /// @brief Field _declaration, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Linq::XDeclaration* ____declaration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XDocument, ____declaration) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XDocument, 0x38>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XDocument);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XDocument*, "System.Xml.Linq", "XDocument");

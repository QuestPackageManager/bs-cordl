#pragma once
// IWYU pragma private; include "System/Xml/Linq/XAttribute.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XAttribute)
namespace System::Xml::Linq {
class XName;
}
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml {
struct XmlNodeType;
}
namespace System {
class Object;
}
// Forward declare root types
namespace System::Xml::Linq {
class XAttribute;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Linq::XAttribute);
// Dependencies System.Xml.Linq.XObject
namespace System::Xml::Linq {
// Is value type: false
// CS Name: System.Xml.Linq.XAttribute
class CORDL_TYPE XAttribute : public ::System::Xml::Linq::XObject {
public:
  // Declarations
  __declspec(property(get = get_IsNamespaceDeclaration)) bool IsNamespaceDeclaration;

  __declspec(property(get = get_Name)) ::System::Xml::Linq::XName* Name;

  __declspec(property(get = get_NodeType)) ::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value)) ::StringW Value;

  /// @brief Field name, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name)) ::System::Xml::Linq::XName* name;

  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_next, put = __cordl_internal_set_next)) ::System::Xml::Linq::XAttribute* next;

  /// @brief Field value, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_value, put = __cordl_internal_set_value)) ::StringW value;

  /// @brief Method GetPrefixOfNamespace, addr 0x424ac30, size 0x138, virtual false, abstract: false, final false
  inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns);

  static inline ::System::Xml::Linq::XAttribute* New_ctor(::System::Xml::Linq::XName* name, ::System::Object* value);

  static inline ::System::Xml::Linq::XAttribute* New_ctor(::System::Xml::Linq::XAttribute* other);

  /// @brief Method ToString, addr 0x424a854, size 0x3dc, virtual true, abstract: false, final false
  inline ::StringW ToString();

  /// @brief Method ValidateAttribute, addr 0x424a288, size 0x230, virtual false, abstract: false, final false
  static inline void ValidateAttribute(::System::Xml::Linq::XName* name, ::StringW value);

  constexpr ::System::Xml::Linq::XName* const& __cordl_internal_get_name() const;

  constexpr ::System::Xml::Linq::XName*& __cordl_internal_get_name();

  constexpr ::System::Xml::Linq::XAttribute* const& __cordl_internal_get_next() const;

  constexpr ::System::Xml::Linq::XAttribute*& __cordl_internal_get_next();

  constexpr ::StringW const& __cordl_internal_get_value() const;

  constexpr ::StringW& __cordl_internal_get_value();

  constexpr void __cordl_internal_set_name(::System::Xml::Linq::XName* value);

  constexpr void __cordl_internal_set_next(::System::Xml::Linq::XAttribute* value);

  constexpr void __cordl_internal_set_value(::StringW value);

  /// @brief Method .ctor, addr 0x4249d98, size 0xb4, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XName* name, ::System::Object* value);

  /// @brief Method .ctor, addr 0x424a4b8, size 0x80, virtual false, abstract: false, final false
  inline void _ctor(::System::Xml::Linq::XAttribute* other);

  /// @brief Method get_IsNamespaceDeclaration, addr 0x424a538, size 0x9c, virtual false, abstract: false, final false
  inline bool get_IsNamespaceDeclaration();

  /// @brief Method get_Name, addr 0x424a5f0, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Linq::XName* get_Name();

  /// @brief Method get_NodeType, addr 0x424a5f8, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value, addr 0x424a600, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Value();

  /// @brief Method set_Value, addr 0x424a608, size 0xfc, virtual false, abstract: false, final false
  inline void set_Value(::StringW value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XAttribute();

public:
  // Ctor Parameters [CppParam { name: "", ty: "XAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XAttribute(XAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XAttribute(XAttribute const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17951 };

  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Linq::XAttribute* ___next;

  /// @brief Field name, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Linq::XName* ___name;

  /// @brief Field value, offset: 0x30, size: 0x8, def value: None
  ::StringW ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Linq::XAttribute, ___next) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XAttribute, ___name) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Linq::XAttribute, ___value) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XAttribute, 0x38>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XAttribute*, "System.Xml.Linq", "XAttribute");

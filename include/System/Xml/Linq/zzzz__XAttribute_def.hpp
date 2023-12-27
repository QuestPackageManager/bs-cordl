#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Linq/zzzz__XObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(XAttribute)
namespace System::Xml::Linq {
class XNamespace;
}
namespace System::Xml::Linq {
class XName;
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
// Type: System.Xml.Linq::XAttribute
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Linq {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15454))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15432))
// CS Name: ::System.Xml.Linq::XAttribute*
class CORDL_TYPE XAttribute : public ::System::Xml::Linq::XObject {
public:
  // Declarations
  /// @brief Field next, offset 0x20, size 0x8
  __declspec(property(get = __get_next, put = __set_next))::System::Xml::Linq::XAttribute* next;

  /// @brief Field name, offset 0x28, size 0x8
  __declspec(property(get = __get_name, put = __set_name))::System::Xml::Linq::XName* name;

  /// @brief Field value, offset 0x30, size 0x8
  __declspec(property(get = __get_value, put = __set_value))::StringW value;

  __declspec(property(get = get_IsNamespaceDeclaration)) bool IsNamespaceDeclaration;

  __declspec(property(get = get_Name))::System::Xml::Linq::XName* Name;

  __declspec(property(get = get_NodeType))::System::Xml::XmlNodeType NodeType;

  __declspec(property(get = get_Value, put = set_Value))::StringW Value;

  constexpr ::System::Xml::Linq::XAttribute*& __get_next();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XAttribute*> const& __get_next() const;

  constexpr void __set_next(::System::Xml::Linq::XAttribute* value);

  constexpr ::System::Xml::Linq::XName*& __get_name();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Linq::XName*> const& __get_name() const;

  constexpr void __set_name(::System::Xml::Linq::XName* value);

  constexpr ::StringW& __get_value();

  constexpr ::StringW const& __get_value() const;

  constexpr void __set_value(::StringW value);

  static inline ::System::Xml::Linq::XAttribute* New_ctor(::System::Xml::Linq::XName* name, ::System::Object* value);

  /// @brief Method .ctor addr 0x285a9e8 size 0xbc virtual false final false
  inline void _ctor(::System::Xml::Linq::XName* name, ::System::Object* value);

  static inline ::System::Xml::Linq::XAttribute* New_ctor(::System::Xml::Linq::XAttribute* other);

  /// @brief Method .ctor addr 0x285b0e8 size 0x7c virtual false final false
  inline void _ctor(::System::Xml::Linq::XAttribute* other);

  /// @brief Method get_IsNamespaceDeclaration addr 0x285b164 size 0x9c virtual false final false
  inline bool get_IsNamespaceDeclaration();

  /// @brief Method get_Name addr 0x285b21c size 0x8 virtual false final false
  inline ::System::Xml::Linq::XName* get_Name();

  /// @brief Method get_NodeType addr 0x285b224 size 0x8 virtual true final false
  inline ::System::Xml::XmlNodeType get_NodeType();

  /// @brief Method get_Value addr 0x285b22c size 0x8 virtual false final false
  inline ::StringW get_Value();

  /// @brief Method set_Value addr 0x285b234 size 0x100 virtual false final false
  inline void set_Value(::StringW value);

  /// @brief Method ToString addr 0x285b484 size 0x3d4 virtual true final false
  inline ::StringW ToString();

  /// @brief Method GetPrefixOfNamespace addr 0x285b858 size 0x138 virtual false final false
  inline ::StringW GetPrefixOfNamespace(::System::Xml::Linq::XNamespace* ns);

  /// @brief Method ValidateAttribute addr 0x285aeb8 size 0x230 virtual false final false
  static inline void ValidateAttribute(::System::Xml::Linq::XName* name, ::StringW value);

  // Ctor Parameters [CppParam { name: "", ty: "XAttribute", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XAttribute(XAttribute&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XAttribute", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XAttribute(XAttribute const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XAttribute();

public:
  /// @brief Field next, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Linq::XAttribute* ___next;

  /// @brief Field name, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Linq::XName* ___name;

  /// @brief Field value, offset: 0x30, size: 0x8, def value: None
  ::StringW ___value;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Linq::XAttribute, 0x38>, "Size mismatch!");

} // namespace System::Xml::Linq
NEED_NO_BOX(::System::Xml::Linq::XAttribute);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Linq::XAttribute*, "System.Xml.Linq", "XAttribute");

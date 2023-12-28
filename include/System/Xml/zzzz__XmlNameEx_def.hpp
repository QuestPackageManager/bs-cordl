#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/zzzz__XmlName_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(XmlNameEx)
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaAttribute;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
class XmlSchemaElement;
}
namespace System::Xml {
class XmlName;
}
namespace System::Xml::Schema {
struct XmlSchemaValidity;
}
namespace System {
class Object;
}
namespace System::Xml {
class XmlDocument;
}
namespace System::Xml::Schema {
class IXmlSchemaInfo;
}
// Forward declare root types
namespace System::Xml {
class XmlNameEx;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::XmlNameEx);
// Type: System.Xml::XmlNameEx
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11515))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11516))
// CS Name: ::System.Xml::XmlNameEx*
class CORDL_TYPE XmlNameEx : public ::System::Xml::XmlName {
public:
  // Declarations
  /// @brief Field flags, offset 0x48, size 0x1
  __declspec(property(get = __get_flags, put = __set_flags)) uint8_t flags;

  /// @brief Field memberType, offset 0x50, size 0x8
  __declspec(property(get = __get_memberType, put = __set_memberType))::System::Xml::Schema::XmlSchemaSimpleType* memberType;

  /// @brief Field schemaType, offset 0x58, size 0x8
  __declspec(property(get = __get_schemaType, put = __set_schemaType))::System::Xml::Schema::XmlSchemaType* schemaType;

  /// @brief Field decl, offset 0x60, size 0x8
  __declspec(property(get = __get_decl, put = __set_decl))::System::Object* decl;

  __declspec(property(get = get_Validity))::System::Xml::Schema::XmlSchemaValidity Validity;

  __declspec(property(get = get_IsDefault)) bool IsDefault;

  __declspec(property(get = get_IsNil)) bool IsNil;

  __declspec(property(get = get_MemberType))::System::Xml::Schema::XmlSchemaSimpleType* MemberType;

  __declspec(property(get = get_SchemaType))::System::Xml::Schema::XmlSchemaType* SchemaType;

  __declspec(property(get = get_SchemaElement))::System::Xml::Schema::XmlSchemaElement* SchemaElement;

  __declspec(property(get = get_SchemaAttribute))::System::Xml::Schema::XmlSchemaAttribute* SchemaAttribute;

  constexpr uint8_t& __get_flags();

  constexpr uint8_t const& __get_flags() const;

  constexpr void __set_flags(uint8_t value);

  constexpr ::System::Xml::Schema::XmlSchemaSimpleType*& __get_memberType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaSimpleType*> const& __get_memberType() const;

  constexpr void __set_memberType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  constexpr ::System::Xml::Schema::XmlSchemaType*& __get_schemaType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& __get_schemaType() const;

  constexpr void __set_schemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr ::System::Object*& __get_decl();

  constexpr ::cordl_internals::to_const_pointer<::System::Object*> const& __get_decl() const;

  constexpr void __set_decl(::System::Object* value);

  static inline ::System::Xml::XmlNameEx* New_ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next,
                                                   ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method .ctor addr 0x288e2d0 size 0x3cc virtual false final false
  inline void _ctor(::StringW prefix, ::StringW localName, ::StringW ns, int32_t hashCode, ::System::Xml::XmlDocument* ownerDoc, ::System::Xml::XmlName* next,
                    ::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  /// @brief Method get_Validity addr 0x288e7b8 size 0x30 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaValidity get_Validity();

  /// @brief Method get_IsDefault addr 0x288e7e8 size 0xc virtual true final false
  inline bool get_IsDefault();

  /// @brief Method get_IsNil addr 0x288e7f4 size 0xc virtual true final false
  inline bool get_IsNil();

  /// @brief Method get_MemberType addr 0x288e800 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaSimpleType* get_MemberType();

  /// @brief Method get_SchemaType addr 0x288e808 size 0x8 virtual true final false
  inline ::System::Xml::Schema::XmlSchemaType* get_SchemaType();

  /// @brief Method get_SchemaElement addr 0x288e810 size 0x7c virtual true final false
  inline ::System::Xml::Schema::XmlSchemaElement* get_SchemaElement();

  /// @brief Method get_SchemaAttribute addr 0x288e88c size 0x7c virtual true final false
  inline ::System::Xml::Schema::XmlSchemaAttribute* get_SchemaAttribute();

  /// @brief Method SetValidity addr 0x288e76c size 0x14 virtual false final false
  inline void SetValidity(::System::Xml::Schema::XmlSchemaValidity value);

  /// @brief Method SetIsDefault addr 0x288e780 size 0x1c virtual false final false
  inline void SetIsDefault(bool value);

  /// @brief Method SetIsNil addr 0x288e79c size 0x1c virtual false final false
  inline void SetIsNil(bool value);

  /// @brief Method Equals addr 0x288e908 size 0x3d4 virtual true final false
  inline bool Equals(::System::Xml::Schema::IXmlSchemaInfo* schemaInfo);

  // Ctor Parameters [CppParam { name: "", ty: "XmlNameEx", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  XmlNameEx(XmlNameEx&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "XmlNameEx", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  XmlNameEx(XmlNameEx const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr XmlNameEx();

public:
  /// @brief Field flags, offset: 0x48, size: 0x1, def value: None
  uint8_t ___flags;

  /// @brief Field memberType, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaSimpleType* ___memberType;

  /// @brief Field schemaType, offset: 0x58, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___schemaType;

  /// @brief Field decl, offset: 0x60, size: 0x8, def value: None
  ::System::Object* ___decl;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::XmlNameEx, 0x68>, "Size mismatch!");

} // namespace System::Xml
NEED_NO_BOX(::System::Xml::XmlNameEx);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::XmlNameEx*, "System.Xml", "XmlNameEx");

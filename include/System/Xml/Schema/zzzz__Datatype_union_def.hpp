#pragma once
// IWYU pragma private; include "System/Xml/Schema/Datatype_union.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__Datatype_anySimpleType_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(Datatype_union)
namespace System::Xml::Schema {
class DatatypeImplementation;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
struct RestrictionFlags;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System {
class Exception;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class Datatype_union;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::Datatype_union);
// Dependencies System.Xml.Schema.Datatype_anySimpleType
namespace System::Xml::Schema {
// Is value type: false
// CS Name: System.Xml.Schema.Datatype_union
class CORDL_TYPE Datatype_union : public ::System::Xml::Schema::Datatype_anySimpleType {
public:
  // Declarations
  __declspec(property(get = get_BaseMemberTypes)) ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> BaseMemberTypes;

  __declspec(property(get = get_FacetsChecker)) ::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_ListValueType)) ::System::Type* ListValueType;

  __declspec(property(get = get_TypeCode)) ::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValidRestrictionFlags)) ::System::Xml::Schema::RestrictionFlags ValidRestrictionFlags;

  __declspec(property(get = get_ValueType)) ::System::Type* ValueType;

  /// @brief Field atomicValueType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_atomicValueType, put = setStaticF_atomicValueType)) ::System::Type* atomicValueType;

  /// @brief Field listValueType, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF_listValueType, put = setStaticF_listValueType)) ::System::Type* listValueType;

  /// @brief Field types, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_types, put = __cordl_internal_set_types)) ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>
      types;

  /// @brief Method Compare, addr 0x43b6c14, size 0x104, virtual true, abstract: false, final false
  inline int32_t Compare(::System::Object* value1, ::System::Object* value2);

  /// @brief Method CreateValueConverter, addr 0x43b6c08, size 0xc, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method HasAtomicMembers, addr 0x43b4c0c, size 0x7c, virtual false, abstract: false, final false
  inline bool HasAtomicMembers();

  /// @brief Method IsUnionBaseOf, addr 0x43b5020, size 0x88, virtual false, abstract: false, final false
  inline bool IsUnionBaseOf(::System::Xml::Schema::DatatypeImplementation* derivedType);

  static inline ::System::Xml::Schema::Datatype_union* New_ctor(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> types);

  /// @brief Method TryParseValue, addr 0x43b6e38, size 0x1ec, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::ByRef<::System::Object*> typedValue);

  /// @brief Method TryParseValue, addr 0x43b7024, size 0x498, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::System::Object* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, ::ByRef<::System::Object*> typedValue);

  constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> const& __cordl_internal_get_types() const;

  constexpr ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*>& __cordl_internal_get_types();

  constexpr void __cordl_internal_set_types(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> value);

  /// @brief Method .ctor, addr 0x43b4da4, size 0x68, virtual false, abstract: false, final false
  inline void _ctor(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> types);

  static inline ::System::Type* getStaticF_atomicValueType();

  static inline ::System::Type* getStaticF_listValueType();

  /// @brief Method get_BaseMemberTypes, addr 0x43b6e30, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> get_BaseMemberTypes();

  /// @brief Method get_FacetsChecker, addr 0x43b6d78, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_ListValueType, addr 0x43b6dd0, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_TypeCode, addr 0x43b6d70, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_ValidRestrictionFlags, addr 0x43b6e28, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();

  /// @brief Method get_ValueType, addr 0x43b6d18, size 0x58, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  static inline void setStaticF_atomicValueType(::System::Type* value);

  static inline void setStaticF_listValueType(::System::Type* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Datatype_union();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Datatype_union", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Datatype_union(Datatype_union&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Datatype_union", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Datatype_union(Datatype_union const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 7525 };

  /// @brief Field types, offset: 0x38, size: 0x8, def value: None
  ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> ___types;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::System::Xml::Schema::Datatype_union, ___types) == 0x38, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::Datatype_union, 0x40>, "Size mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::Datatype_union);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::Datatype_union*, "System.Xml.Schema", "Datatype_union");

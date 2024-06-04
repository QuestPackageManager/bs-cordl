#pragma once
// IWYU pragma private; include "System/Xml/Schema/DatatypeImplementation.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Schema/zzzz__XmlSchemaDatatypeVariety_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaDatatype_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DatatypeImplementation)
namespace System::Collections {
class Hashtable;
}
namespace System::Xml::Schema {
class FacetsChecker;
}
namespace System::Xml::Schema {
class RestrictionFacets;
}
namespace System::Xml::Schema {
struct RestrictionFlags;
}
namespace System::Xml::Schema {
struct XmlSchemaDatatypeVariety;
}
namespace System::Xml::Schema {
class XmlSchemaDatatype;
}
namespace System::Xml::Schema {
class XmlSchemaObjectCollection;
}
namespace System::Xml::Schema {
class XmlSchemaObjectTable;
}
namespace System::Xml::Schema {
class XmlSchemaObject;
}
namespace System::Xml::Schema {
class XmlSchemaSimpleType;
}
namespace System::Xml::Schema {
class XmlSchemaType;
}
namespace System::Xml::Schema {
struct XmlSchemaWhiteSpace;
}
namespace System::Xml::Schema {
struct XmlTypeCode;
}
namespace System::Xml::Schema {
class XmlValueConverter;
}
namespace System::Xml::Schema {
class __DatatypeImplementation__SchemaDatatypeMap;
}
namespace System::Xml {
class IXmlNamespaceResolver;
}
namespace System::Xml {
class XmlNameTable;
}
namespace System::Xml {
class XmlQualifiedName;
}
namespace System::Xml {
struct XmlTokenizedType;
}
namespace System {
class Exception;
}
namespace System {
class IComparable;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Schema {
class DatatypeImplementation;
}
namespace System::Xml::Schema {
class __DatatypeImplementation__SchemaDatatypeMap;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Schema::DatatypeImplementation);
MARK_REF_PTR_T(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap);
// Type: ::SchemaDatatypeMap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::DatatypeImplementation::SchemaDatatypeMap*
class CORDL_TYPE __DatatypeImplementation__SchemaDatatypeMap : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_Name))::StringW Name;

  __declspec(property(get = get_ParentIndex)) int32_t ParentIndex;

  /// @brief Field name, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_name, put = __cordl_internal_set_name))::StringW name;

  /// @brief Field parentIndex, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_parentIndex, put = __cordl_internal_set_parentIndex)) int32_t parentIndex;

  /// @brief Field type, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Xml::Schema::DatatypeImplementation* type;

  /// @brief Convert operator to "::System::IComparable"
  constexpr operator ::System::IComparable*() noexcept;

  /// @brief Method CompareTo, addr 0x2f288f4, size 0x70, virtual true, abstract: false, final true
  inline int32_t CompareTo(::System::Object* obj);

  static inline ::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap* New_ctor(::StringW name, ::System::Xml::Schema::DatatypeImplementation* type);

  static inline ::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap* New_ctor(::StringW name, ::System::Xml::Schema::DatatypeImplementation* type, int32_t parentIndex);

  constexpr ::StringW const& __cordl_internal_get_name() const;

  constexpr ::StringW& __cordl_internal_get_name();

  constexpr int32_t const& __cordl_internal_get_parentIndex() const;

  constexpr int32_t& __cordl_internal_get_parentIndex();

  constexpr ::System::Xml::Schema::DatatypeImplementation*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::DatatypeImplementation*> const& __cordl_internal_get_type() const;

  constexpr void __cordl_internal_set_name(::StringW value);

  constexpr void __cordl_internal_set_parentIndex(int32_t value);

  constexpr void __cordl_internal_set_type(::System::Xml::Schema::DatatypeImplementation* value);

  /// @brief Method .ctor, addr 0x2f26484, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Xml::Schema::DatatypeImplementation* type);

  /// @brief Method .ctor, addr 0x2f264b0, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::StringW name, ::System::Xml::Schema::DatatypeImplementation* type, int32_t parentIndex);

  /// @brief Method get_Name, addr 0x2f288e4, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_Name();

  /// @brief Method get_ParentIndex, addr 0x2f288ec, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_ParentIndex();

  /// @brief Convert to "::System::IComparable"
  constexpr ::System::IComparable* i___System__IComparable() noexcept;

  /// @brief Method op_Explicit, addr 0x2f288cc, size 0x18, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::DatatypeImplementation* op_Explicit___System__Xml__Schema__DatatypeImplementation_(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap* sdm);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __DatatypeImplementation__SchemaDatatypeMap();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__DatatypeImplementation__SchemaDatatypeMap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __DatatypeImplementation__SchemaDatatypeMap(__DatatypeImplementation__SchemaDatatypeMap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__DatatypeImplementation__SchemaDatatypeMap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __DatatypeImplementation__SchemaDatatypeMap(__DatatypeImplementation__SchemaDatatypeMap const&) = delete;

  /// @brief Field name, offset: 0x10, size: 0x8, def value: None
  ::StringW ___name;

  /// @brief Field type, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::DatatypeImplementation* ___type;

  /// @brief Field parentIndex, offset: 0x20, size: 0x4, def value: None
  int32_t ___parentIndex;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap, 0x28>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap, ___name) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap, ___type) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap, ___parentIndex) == 0x20, "Offset mismatch!");

} // namespace System::Xml::Schema
// Type: System.Xml.Schema::DatatypeImplementation
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Schema {
// Is value type: false
// CS Name: ::System.Xml.Schema::DatatypeImplementation*
class CORDL_TYPE DatatypeImplementation : public ::System::Xml::Schema::XmlSchemaDatatype {
public:
  // Declarations
  using SchemaDatatypeMap = ::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap;

  __declspec(property(get = get_Base))::System::Xml::Schema::DatatypeImplementation* Base;

  __declspec(property(get = get_BuiltInWhitespaceFacet))::System::Xml::Schema::XmlSchemaWhiteSpace BuiltInWhitespaceFacet;

  __declspec(property(get = get_FacetsChecker))::System::Xml::Schema::FacetsChecker* FacetsChecker;

  __declspec(property(get = get_HasLexicalFacets)) bool HasLexicalFacets;

  __declspec(property(get = get_HasValueFacets)) bool HasValueFacets;

  __declspec(property(get = get_ListValueType))::System::Type* ListValueType;

  /// @brief Field QnAnySimpleType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_QnAnySimpleType, put = setStaticF_QnAnySimpleType))::System::Xml::XmlQualifiedName* QnAnySimpleType;

  /// @brief Field QnAnyType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_QnAnyType, put = setStaticF_QnAnyType))::System::Xml::XmlQualifiedName* QnAnyType;

  __declspec(property(get = get_Restriction))::System::Xml::Schema::RestrictionFacets* Restriction;

  __declspec(property(get = get_TokenizedType))::System::Xml::XmlTokenizedType TokenizedType;

  __declspec(property(get = get_TypeCode))::System::Xml::Schema::XmlTypeCode TypeCode;

  __declspec(property(get = get_ValidRestrictionFlags))::System::Xml::Schema::RestrictionFlags ValidRestrictionFlags;

  __declspec(property(get = get_ValueConverter))::System::Xml::Schema::XmlValueConverter* ValueConverter;

  __declspec(property(get = get_ValueType))::System::Type* ValueType;

  __declspec(property(get = get_Variety))::System::Xml::Schema::XmlSchemaDatatypeVariety Variety;

  /// @brief Field anyAtomicType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_anyAtomicType, put = setStaticF_anyAtomicType))::System::Xml::Schema::XmlSchemaSimpleType* anyAtomicType;

  /// @brief Field anySimpleType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_anySimpleType, put = setStaticF_anySimpleType))::System::Xml::Schema::XmlSchemaSimpleType* anySimpleType;

  /// @brief Field baseType, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_baseType, put = __cordl_internal_set_baseType))::System::Xml::Schema::DatatypeImplementation* baseType;

  /// @brief Field binaryFacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_binaryFacetsChecker, put = setStaticF_binaryFacetsChecker))::System::Xml::Schema::FacetsChecker* binaryFacetsChecker;

  /// @brief Field builtinTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_builtinTypes, put = setStaticF_builtinTypes))::System::Collections::Hashtable* builtinTypes;

  /// @brief Field c_ENTITIES, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_ENTITIES, put = setStaticF_c_ENTITIES))::System::Xml::Schema::DatatypeImplementation* c_ENTITIES;

  /// @brief Field c_ENTITY, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_ENTITY, put = setStaticF_c_ENTITY))::System::Xml::Schema::DatatypeImplementation* c_ENTITY;

  /// @brief Field c_ENUMERATION, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_ENUMERATION, put = setStaticF_c_ENUMERATION))::System::Xml::Schema::DatatypeImplementation* c_ENUMERATION;

  /// @brief Field c_ID, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_ID, put = setStaticF_c_ID))::System::Xml::Schema::DatatypeImplementation* c_ID;

  /// @brief Field c_IDREF, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_IDREF, put = setStaticF_c_IDREF))::System::Xml::Schema::DatatypeImplementation* c_IDREF;

  /// @brief Field c_IDREFS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_IDREFS, put = setStaticF_c_IDREFS))::System::Xml::Schema::DatatypeImplementation* c_IDREFS;

  /// @brief Field c_NCName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_NCName, put = setStaticF_c_NCName))::System::Xml::Schema::DatatypeImplementation* c_NCName;

  /// @brief Field c_NMTOKEN, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_NMTOKEN, put = setStaticF_c_NMTOKEN))::System::Xml::Schema::DatatypeImplementation* c_NMTOKEN;

  /// @brief Field c_NMTOKENS, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_NMTOKENS, put = setStaticF_c_NMTOKENS))::System::Xml::Schema::DatatypeImplementation* c_NMTOKENS;

  /// @brief Field c_NOTATION, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_NOTATION, put = setStaticF_c_NOTATION))::System::Xml::Schema::DatatypeImplementation* c_NOTATION;

  /// @brief Field c_Name, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_Name, put = setStaticF_c_Name))::System::Xml::Schema::DatatypeImplementation* c_Name;

  /// @brief Field c_QName, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_QName, put = setStaticF_c_QName))::System::Xml::Schema::DatatypeImplementation* c_QName;

  /// @brief Field c_QNameXdr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_QNameXdr, put = setStaticF_c_QNameXdr))::System::Xml::Schema::DatatypeImplementation* c_QNameXdr;

  /// @brief Field c_XdrTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_XdrTypes, put = setStaticF_c_XdrTypes))::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*,
                                                                                                ::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*> c_XdrTypes;

  /// @brief Field c_XsdTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_XsdTypes, put = setStaticF_c_XsdTypes))::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*,
                                                                                                ::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*> c_XsdTypes;

  /// @brief Field c_anyAtomicType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_anyAtomicType, put = setStaticF_c_anyAtomicType))::System::Xml::Schema::DatatypeImplementation* c_anyAtomicType;

  /// @brief Field c_anySimpleType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_anySimpleType, put = setStaticF_c_anySimpleType))::System::Xml::Schema::DatatypeImplementation* c_anySimpleType;

  /// @brief Field c_anyURI, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_anyURI, put = setStaticF_c_anyURI))::System::Xml::Schema::DatatypeImplementation* c_anyURI;

  /// @brief Field c_base64Binary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_base64Binary, put = setStaticF_c_base64Binary))::System::Xml::Schema::DatatypeImplementation* c_base64Binary;

  /// @brief Field c_boolean, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_boolean, put = setStaticF_c_boolean))::System::Xml::Schema::DatatypeImplementation* c_boolean;

  /// @brief Field c_byte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_byte, put = setStaticF_c_byte))::System::Xml::Schema::DatatypeImplementation* c_byte;

  /// @brief Field c_char, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_char, put = setStaticF_c_char))::System::Xml::Schema::DatatypeImplementation* c_char;

  /// @brief Field c_date, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_date, put = setStaticF_c_date))::System::Xml::Schema::DatatypeImplementation* c_date;

  /// @brief Field c_dateTime, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_dateTime, put = setStaticF_c_dateTime))::System::Xml::Schema::DatatypeImplementation* c_dateTime;

  /// @brief Field c_dateTimeNoTz, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_dateTimeNoTz, put = setStaticF_c_dateTimeNoTz))::System::Xml::Schema::DatatypeImplementation* c_dateTimeNoTz;

  /// @brief Field c_dateTimeTz, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_dateTimeTz, put = setStaticF_c_dateTimeTz))::System::Xml::Schema::DatatypeImplementation* c_dateTimeTz;

  /// @brief Field c_day, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_day, put = setStaticF_c_day))::System::Xml::Schema::DatatypeImplementation* c_day;

  /// @brief Field c_dayTimeDuration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_dayTimeDuration, put = setStaticF_c_dayTimeDuration))::System::Xml::Schema::DatatypeImplementation* c_dayTimeDuration;

  /// @brief Field c_decimal, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_decimal, put = setStaticF_c_decimal))::System::Xml::Schema::DatatypeImplementation* c_decimal;

  /// @brief Field c_double, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_double, put = setStaticF_c_double))::System::Xml::Schema::DatatypeImplementation* c_double;

  /// @brief Field c_doubleXdr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_doubleXdr, put = setStaticF_c_doubleXdr))::System::Xml::Schema::DatatypeImplementation* c_doubleXdr;

  /// @brief Field c_duration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_duration, put = setStaticF_c_duration))::System::Xml::Schema::DatatypeImplementation* c_duration;

  /// @brief Field c_fixed, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_fixed, put = setStaticF_c_fixed))::System::Xml::Schema::DatatypeImplementation* c_fixed;

  /// @brief Field c_float, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_float, put = setStaticF_c_float))::System::Xml::Schema::DatatypeImplementation* c_float;

  /// @brief Field c_floatXdr, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_floatXdr, put = setStaticF_c_floatXdr))::System::Xml::Schema::DatatypeImplementation* c_floatXdr;

  /// @brief Field c_hexBinary, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_hexBinary, put = setStaticF_c_hexBinary))::System::Xml::Schema::DatatypeImplementation* c_hexBinary;

  /// @brief Field c_int, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_int, put = setStaticF_c_int))::System::Xml::Schema::DatatypeImplementation* c_int;

  /// @brief Field c_integer, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_integer, put = setStaticF_c_integer))::System::Xml::Schema::DatatypeImplementation* c_integer;

  /// @brief Field c_language, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_language, put = setStaticF_c_language))::System::Xml::Schema::DatatypeImplementation* c_language;

  /// @brief Field c_long, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_long, put = setStaticF_c_long))::System::Xml::Schema::DatatypeImplementation* c_long;

  /// @brief Field c_month, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_month, put = setStaticF_c_month))::System::Xml::Schema::DatatypeImplementation* c_month;

  /// @brief Field c_monthDay, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_monthDay, put = setStaticF_c_monthDay))::System::Xml::Schema::DatatypeImplementation* c_monthDay;

  /// @brief Field c_negativeInteger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_negativeInteger, put = setStaticF_c_negativeInteger))::System::Xml::Schema::DatatypeImplementation* c_negativeInteger;

  /// @brief Field c_nonNegativeInteger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_nonNegativeInteger, put = setStaticF_c_nonNegativeInteger))::System::Xml::Schema::DatatypeImplementation* c_nonNegativeInteger;

  /// @brief Field c_nonPositiveInteger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_nonPositiveInteger, put = setStaticF_c_nonPositiveInteger))::System::Xml::Schema::DatatypeImplementation* c_nonPositiveInteger;

  /// @brief Field c_normalizedString, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_normalizedString, put = setStaticF_c_normalizedString))::System::Xml::Schema::DatatypeImplementation* c_normalizedString;

  /// @brief Field c_normalizedStringV1Compat, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_normalizedStringV1Compat, put = setStaticF_c_normalizedStringV1Compat))::System::Xml::Schema::DatatypeImplementation* c_normalizedStringV1Compat;

  /// @brief Field c_positiveInteger, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_positiveInteger, put = setStaticF_c_positiveInteger))::System::Xml::Schema::DatatypeImplementation* c_positiveInteger;

  /// @brief Field c_short, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_short, put = setStaticF_c_short))::System::Xml::Schema::DatatypeImplementation* c_short;

  /// @brief Field c_string, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_string, put = setStaticF_c_string))::System::Xml::Schema::DatatypeImplementation* c_string;

  /// @brief Field c_time, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_time, put = setStaticF_c_time))::System::Xml::Schema::DatatypeImplementation* c_time;

  /// @brief Field c_timeNoTz, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_timeNoTz, put = setStaticF_c_timeNoTz))::System::Xml::Schema::DatatypeImplementation* c_timeNoTz;

  /// @brief Field c_timeTz, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_timeTz, put = setStaticF_c_timeTz))::System::Xml::Schema::DatatypeImplementation* c_timeTz;

  /// @brief Field c_token, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_token, put = setStaticF_c_token))::System::Xml::Schema::DatatypeImplementation* c_token;

  /// @brief Field c_tokenV1Compat, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_tokenV1Compat, put = setStaticF_c_tokenV1Compat))::System::Xml::Schema::DatatypeImplementation* c_tokenV1Compat;

  /// @brief Field c_tokenizedTypes, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_tokenizedTypes,
                             put = setStaticF_c_tokenizedTypes))::ArrayW<::System::Xml::Schema::DatatypeImplementation*, ::Array<::System::Xml::Schema::DatatypeImplementation*>*> c_tokenizedTypes;

  /// @brief Field c_tokenizedTypesXsd, offset 0xffffffff, size 0x8
  static __declspec(
      property(get = getStaticF_c_tokenizedTypesXsd,
               put = setStaticF_c_tokenizedTypesXsd))::ArrayW<::System::Xml::Schema::DatatypeImplementation*, ::Array<::System::Xml::Schema::DatatypeImplementation*>*> c_tokenizedTypesXsd;

  /// @brief Field c_unsignedByte, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_unsignedByte, put = setStaticF_c_unsignedByte))::System::Xml::Schema::DatatypeImplementation* c_unsignedByte;

  /// @brief Field c_unsignedInt, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_unsignedInt, put = setStaticF_c_unsignedInt))::System::Xml::Schema::DatatypeImplementation* c_unsignedInt;

  /// @brief Field c_unsignedLong, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_unsignedLong, put = setStaticF_c_unsignedLong))::System::Xml::Schema::DatatypeImplementation* c_unsignedLong;

  /// @brief Field c_unsignedShort, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_unsignedShort, put = setStaticF_c_unsignedShort))::System::Xml::Schema::DatatypeImplementation* c_unsignedShort;

  /// @brief Field c_untypedAtomicType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_untypedAtomicType, put = setStaticF_c_untypedAtomicType))::System::Xml::Schema::DatatypeImplementation* c_untypedAtomicType;

  /// @brief Field c_uuid, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_uuid, put = setStaticF_c_uuid))::System::Xml::Schema::DatatypeImplementation* c_uuid;

  /// @brief Field c_year, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_year, put = setStaticF_c_year))::System::Xml::Schema::DatatypeImplementation* c_year;

  /// @brief Field c_yearMonth, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_yearMonth, put = setStaticF_c_yearMonth))::System::Xml::Schema::DatatypeImplementation* c_yearMonth;

  /// @brief Field c_yearMonthDuration, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_c_yearMonthDuration, put = setStaticF_c_yearMonthDuration))::System::Xml::Schema::DatatypeImplementation* c_yearMonthDuration;

  /// @brief Field dateTimeFacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dateTimeFacetsChecker, put = setStaticF_dateTimeFacetsChecker))::System::Xml::Schema::FacetsChecker* dateTimeFacetsChecker;

  /// @brief Field dayTimeDurationType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_dayTimeDurationType, put = setStaticF_dayTimeDurationType))::System::Xml::Schema::XmlSchemaSimpleType* dayTimeDurationType;

  /// @brief Field durationFacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_durationFacetsChecker, put = setStaticF_durationFacetsChecker))::System::Xml::Schema::FacetsChecker* durationFacetsChecker;

  /// @brief Field enumToTypeCode, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_enumToTypeCode,
                             put = setStaticF_enumToTypeCode))::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> enumToTypeCode;

  /// @brief Field listFacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_listFacetsChecker, put = setStaticF_listFacetsChecker))::System::Xml::Schema::FacetsChecker* listFacetsChecker;

  /// @brief Field miscFacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_miscFacetsChecker, put = setStaticF_miscFacetsChecker))::System::Xml::Schema::FacetsChecker* miscFacetsChecker;

  /// @brief Field normalizedStringTypeV1Compat, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_normalizedStringTypeV1Compat, put = setStaticF_normalizedStringTypeV1Compat))::System::Xml::Schema::XmlSchemaSimpleType* normalizedStringTypeV1Compat;

  /// @brief Field numeric2FacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_numeric2FacetsChecker, put = setStaticF_numeric2FacetsChecker))::System::Xml::Schema::FacetsChecker* numeric2FacetsChecker;

  /// @brief Field parentSchemaType, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_parentSchemaType, put = __cordl_internal_set_parentSchemaType))::System::Xml::Schema::XmlSchemaType* parentSchemaType;

  /// @brief Field qnameFacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_qnameFacetsChecker, put = setStaticF_qnameFacetsChecker))::System::Xml::Schema::FacetsChecker* qnameFacetsChecker;

  /// @brief Field restriction, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_restriction, put = __cordl_internal_set_restriction))::System::Xml::Schema::RestrictionFacets* restriction;

  /// @brief Field stringFacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_stringFacetsChecker, put = setStaticF_stringFacetsChecker))::System::Xml::Schema::FacetsChecker* stringFacetsChecker;

  /// @brief Field tokenTypeV1Compat, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_tokenTypeV1Compat, put = setStaticF_tokenTypeV1Compat))::System::Xml::Schema::XmlSchemaSimpleType* tokenTypeV1Compat;

  /// @brief Field unionFacetsChecker, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_unionFacetsChecker, put = setStaticF_unionFacetsChecker))::System::Xml::Schema::FacetsChecker* unionFacetsChecker;

  /// @brief Field untypedAtomicType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_untypedAtomicType, put = setStaticF_untypedAtomicType))::System::Xml::Schema::XmlSchemaSimpleType* untypedAtomicType;

  /// @brief Field valueConverter, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_valueConverter, put = __cordl_internal_set_valueConverter))::System::Xml::Schema::XmlValueConverter* valueConverter;

  /// @brief Field variety, offset 0x10, size 0x4
  __declspec(property(get = __cordl_internal_get_variety, put = __cordl_internal_set_variety))::System::Xml::Schema::XmlSchemaDatatypeVariety variety;

  /// @brief Field yearMonthDurationType, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_yearMonthDurationType, put = setStaticF_yearMonthDurationType))::System::Xml::Schema::XmlSchemaSimpleType* yearMonthDurationType;

  /// @brief Method Compare, addr 0x2f28850, size 0x74, virtual false, abstract: false, final false
  inline int32_t Compare(::ArrayW<uint8_t, ::Array<uint8_t>*> value1, ::ArrayW<uint8_t, ::Array<uint8_t>*> value2);

  /// @brief Method CreateBuiltinTypes, addr 0x2f264ec, size 0x7ec, virtual false, abstract: false, final false
  static inline void CreateBuiltinTypes();

  /// @brief Method CreateValueConverter, addr 0x2f27f00, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* CreateValueConverter(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method DeriveByList, addr 0x2f25978, size 0x184, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(int32_t minSize, ::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method DeriveByList, addr 0x2f27948, size 0xc, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* DeriveByList(::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method DeriveByRestriction, addr 0x2f27864, size 0xe4, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatype* DeriveByRestriction(::System::Xml::Schema::XmlSchemaObjectCollection* facets, ::System::Xml::XmlNameTable* nameTable,
                                                                       ::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method DeriveByUnion, addr 0x2f27a44, size 0xac, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::DatatypeImplementation* DeriveByUnion(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> types,
                                                                             ::System::Xml::Schema::XmlSchemaType* schemaType);

  /// @brief Method FinishBuiltinType, addr 0x2f270d4, size 0x1e4, virtual false, abstract: false, final false
  static inline void FinishBuiltinType(::System::Xml::Schema::XmlSchemaSimpleType* derivedType, ::System::Xml::Schema::XmlSchemaSimpleType* baseType);

  /// @brief Method FromTypeName, addr 0x2f26f40, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::DatatypeImplementation* FromTypeName(::StringW name);

  /// @brief Method FromXdrName, addr 0x2f26e80, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::DatatypeImplementation* FromXdrName(::StringW name);

  /// @brief Method FromXmlTokenizedType, addr 0x2f26d88, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedType(::System::Xml::XmlTokenizedType token);

  /// @brief Method FromXmlTokenizedTypeXsd, addr 0x2f26e04, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::DatatypeImplementation* FromXmlTokenizedTypeXsd(::System::Xml::XmlTokenizedType token);

  /// @brief Method GetBuiltInTypes, addr 0x2f276dc, size 0x58, virtual false, abstract: false, final false
  static inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> GetBuiltInTypes();

  /// @brief Method GetNormalizedStringTypeV1Compat, addr 0x2f273f4, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* GetNormalizedStringTypeV1Compat();

  /// @brief Method GetPrimitiveTypeCode, addr 0x2f27734, size 0x130, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlTypeCode GetPrimitiveTypeCode(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method GetSimpleTypeFromTypeCode, addr 0x2f272b8, size 0x7c, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromTypeCode(::System::Xml::Schema::XmlTypeCode typeCode);

  /// @brief Method GetSimpleTypeFromXsdType, addr 0x2f27334, size 0xc0, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* GetSimpleTypeFromXsdType(::System::Xml::XmlQualifiedName* qname);

  /// @brief Method GetTokenTypeV1Compat, addr 0x2f27568, size 0x174, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* GetTokenTypeV1Compat();

  /// @brief Method GetTypeName, addr 0x2f2827c, size 0x6c, virtual false, abstract: false, final false
  inline ::StringW GetTypeName();

  /// @brief Method IsComparable, addr 0x2f27e14, size 0xec, virtual true, abstract: false, final false
  inline bool IsComparable(::System::Xml::Schema::XmlSchemaDatatype* dtype);

  /// @brief Method IsDerivedFrom, addr 0x2f27b5c, size 0x210, virtual true, abstract: false, final false
  inline bool IsDerivedFrom(::System::Xml::Schema::XmlSchemaDatatype* datatype);

  /// @brief Method IsEqual, addr 0x2f27df0, size 0x24, virtual true, abstract: false, final false
  inline bool IsEqual(::System::Object* o1, ::System::Object* o2);

  static inline ::System::Xml::Schema::DatatypeImplementation* New_ctor();

  /// @brief Method ParseValue, addr 0x2f28080, size 0x1fc, virtual true, abstract: false, final false
  inline ::System::Object* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr);

  /// @brief Method ParseValue, addr 0x2f282e8, size 0x17c, virtual true, abstract: false, final false
  inline ::System::Object* ParseValue(::StringW s, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* nsmgr, bool createAtomicValue);

  /// @brief Method StartBuiltinType, addr 0x2f27000, size 0xd4, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* StartBuiltinType(::System::Xml::XmlQualifiedName* qname, ::System::Xml::Schema::XmlSchemaDatatype* dataType);

  /// @brief Method TryParseValue, addr 0x2f28464, size 0x3ec, virtual true, abstract: false, final false
  inline ::System::Exception* TryParseValue(::System::Object* value, ::System::Xml::XmlNameTable* nameTable, ::System::Xml::IXmlNamespaceResolver* namespaceResolver,
                                            ByRef<::System::Object*> typedValue);

  /// @brief Method VerifySchemaValid, addr 0x2f27b58, size 0x4, virtual true, abstract: false, final false
  inline void VerifySchemaValid(::System::Xml::Schema::XmlSchemaObjectTable* notations, ::System::Xml::Schema::XmlSchemaObject* caller);

  constexpr ::System::Xml::Schema::DatatypeImplementation*& __cordl_internal_get_baseType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::DatatypeImplementation*> const& __cordl_internal_get_baseType() const;

  constexpr ::System::Xml::Schema::XmlSchemaType*& __cordl_internal_get_parentSchemaType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaType*> const& __cordl_internal_get_parentSchemaType() const;

  constexpr ::System::Xml::Schema::RestrictionFacets*& __cordl_internal_get_restriction();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::RestrictionFacets*> const& __cordl_internal_get_restriction() const;

  constexpr ::System::Xml::Schema::XmlValueConverter*& __cordl_internal_get_valueConverter();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlValueConverter*> const& __cordl_internal_get_valueConverter() const;

  constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety const& __cordl_internal_get_variety() const;

  constexpr ::System::Xml::Schema::XmlSchemaDatatypeVariety& __cordl_internal_get_variety();

  constexpr void __cordl_internal_set_baseType(::System::Xml::Schema::DatatypeImplementation* value);

  constexpr void __cordl_internal_set_parentSchemaType(::System::Xml::Schema::XmlSchemaType* value);

  constexpr void __cordl_internal_set_restriction(::System::Xml::Schema::RestrictionFacets* value);

  constexpr void __cordl_internal_set_valueConverter(::System::Xml::Schema::XmlValueConverter* value);

  constexpr void __cordl_internal_set_variety(::System::Xml::Schema::XmlSchemaDatatypeVariety value);

  /// @brief Method .ctor, addr 0x2f288c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_QnAnySimpleType();

  static inline ::System::Xml::XmlQualifiedName* getStaticF_QnAnyType();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_anyAtomicType();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_anySimpleType();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_binaryFacetsChecker();

  static inline ::System::Collections::Hashtable* getStaticF_builtinTypes();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_ENTITIES();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_ENTITY();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_ENUMERATION();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_ID();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_IDREF();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_IDREFS();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_NCName();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_NMTOKEN();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_NMTOKENS();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_NOTATION();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_Name();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_QName();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_QNameXdr();

  static inline ::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*, ::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*> getStaticF_c_XdrTypes();

  static inline ::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*, ::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*> getStaticF_c_XsdTypes();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_anyAtomicType();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_anySimpleType();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_anyURI();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_base64Binary();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_boolean();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_byte();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_char();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_date();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_dateTime();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_dateTimeNoTz();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_dateTimeTz();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_day();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_dayTimeDuration();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_decimal();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_double();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_doubleXdr();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_duration();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_fixed();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_float();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_floatXdr();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_hexBinary();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_int();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_integer();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_language();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_long();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_month();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_monthDay();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_negativeInteger();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_nonNegativeInteger();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_nonPositiveInteger();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_normalizedString();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_normalizedStringV1Compat();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_positiveInteger();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_short();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_string();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_time();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_timeNoTz();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_timeTz();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_token();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_tokenV1Compat();

  static inline ::ArrayW<::System::Xml::Schema::DatatypeImplementation*, ::Array<::System::Xml::Schema::DatatypeImplementation*>*> getStaticF_c_tokenizedTypes();

  static inline ::ArrayW<::System::Xml::Schema::DatatypeImplementation*, ::Array<::System::Xml::Schema::DatatypeImplementation*>*> getStaticF_c_tokenizedTypesXsd();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_unsignedByte();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_unsignedInt();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_unsignedLong();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_unsignedShort();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_untypedAtomicType();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_uuid();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_year();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_yearMonth();

  static inline ::System::Xml::Schema::DatatypeImplementation* getStaticF_c_yearMonthDuration();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_dateTimeFacetsChecker();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_dayTimeDurationType();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_durationFacetsChecker();

  static inline ::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> getStaticF_enumToTypeCode();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_listFacetsChecker();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_miscFacetsChecker();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_normalizedStringTypeV1Compat();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_numeric2FacetsChecker();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_qnameFacetsChecker();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_stringFacetsChecker();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_tokenTypeV1Compat();

  static inline ::System::Xml::Schema::FacetsChecker* getStaticF_unionFacetsChecker();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_untypedAtomicType();

  static inline ::System::Xml::Schema::XmlSchemaSimpleType* getStaticF_yearMonthDurationType();

  /// @brief Method get_AnySimpleType, addr 0x2f26cd8, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* get_AnySimpleType();

  /// @brief Method get_Base, addr 0x2f28070, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Schema::DatatypeImplementation* get_Base();

  /// @brief Method get_BuiltInWhitespaceFacet, addr 0x2f28078, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaWhiteSpace get_BuiltInWhitespaceFacet();

  /// @brief Method get_FacetsChecker, addr 0x2f27f08, size 0x58, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::FacetsChecker* get_FacetsChecker();

  /// @brief Method get_HasLexicalFacets, addr 0x2f28020, size 0x28, virtual true, abstract: false, final false
  inline bool get_HasLexicalFacets();

  /// @brief Method get_HasValueFacets, addr 0x2f28048, size 0x28, virtual true, abstract: false, final false
  inline bool get_HasValueFacets();

  /// @brief Method get_ListValueType, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Type* get_ListValueType();

  /// @brief Method get_Restriction, addr 0x2f28018, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::RestrictionFacets* get_Restriction();

  /// @brief Method get_TokenizedType, addr 0x2f27f94, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::XmlTokenizedType get_TokenizedType();

  /// @brief Method get_TypeCode, addr 0x2f28010, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlTypeCode get_TypeCode();

  /// @brief Method get_UntypedAtomicType, addr 0x2f26d30, size 0x58, virtual false, abstract: false, final false
  static inline ::System::Xml::Schema::XmlSchemaSimpleType* get_UntypedAtomicType();

  /// @brief Method get_ValidRestrictionFlags, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Xml::Schema::RestrictionFlags get_ValidRestrictionFlags();

  /// @brief Method get_ValueConverter, addr 0x2f27f60, size 0x34, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlValueConverter* get_ValueConverter();

  /// @brief Method get_ValueType, addr 0x2f27f9c, size 0x6c, virtual true, abstract: false, final false
  inline ::System::Type* get_ValueType();

  /// @brief Method get_Variety, addr 0x2f28008, size 0x8, virtual true, abstract: false, final false
  inline ::System::Xml::Schema::XmlSchemaDatatypeVariety get_Variety();

  static inline void setStaticF_QnAnySimpleType(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_QnAnyType(::System::Xml::XmlQualifiedName* value);

  static inline void setStaticF_anyAtomicType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  static inline void setStaticF_anySimpleType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  static inline void setStaticF_binaryFacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_builtinTypes(::System::Collections::Hashtable* value);

  static inline void setStaticF_c_ENTITIES(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_ENTITY(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_ENUMERATION(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_ID(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_IDREF(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_IDREFS(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_NCName(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_NMTOKEN(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_NMTOKENS(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_NOTATION(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_Name(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_QName(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_QNameXdr(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void
  setStaticF_c_XdrTypes(::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*, ::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*> value);

  static inline void
  setStaticF_c_XsdTypes(::ArrayW<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*, ::Array<::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*>*> value);

  static inline void setStaticF_c_anyAtomicType(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_anySimpleType(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_anyURI(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_base64Binary(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_boolean(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_byte(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_char(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_date(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_dateTime(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_dateTimeNoTz(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_dateTimeTz(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_day(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_dayTimeDuration(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_decimal(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_double(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_doubleXdr(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_duration(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_fixed(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_float(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_floatXdr(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_hexBinary(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_int(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_integer(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_language(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_long(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_month(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_monthDay(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_negativeInteger(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_nonNegativeInteger(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_nonPositiveInteger(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_normalizedString(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_normalizedStringV1Compat(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_positiveInteger(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_short(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_string(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_time(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_timeNoTz(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_timeTz(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_token(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_tokenV1Compat(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_tokenizedTypes(::ArrayW<::System::Xml::Schema::DatatypeImplementation*, ::Array<::System::Xml::Schema::DatatypeImplementation*>*> value);

  static inline void setStaticF_c_tokenizedTypesXsd(::ArrayW<::System::Xml::Schema::DatatypeImplementation*, ::Array<::System::Xml::Schema::DatatypeImplementation*>*> value);

  static inline void setStaticF_c_unsignedByte(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_unsignedInt(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_unsignedLong(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_unsignedShort(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_untypedAtomicType(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_uuid(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_year(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_yearMonth(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_c_yearMonthDuration(::System::Xml::Schema::DatatypeImplementation* value);

  static inline void setStaticF_dateTimeFacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_dayTimeDurationType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  static inline void setStaticF_durationFacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_enumToTypeCode(::ArrayW<::System::Xml::Schema::XmlSchemaSimpleType*, ::Array<::System::Xml::Schema::XmlSchemaSimpleType*>*> value);

  static inline void setStaticF_listFacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_miscFacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_normalizedStringTypeV1Compat(::System::Xml::Schema::XmlSchemaSimpleType* value);

  static inline void setStaticF_numeric2FacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_qnameFacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_stringFacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_tokenTypeV1Compat(::System::Xml::Schema::XmlSchemaSimpleType* value);

  static inline void setStaticF_unionFacetsChecker(::System::Xml::Schema::FacetsChecker* value);

  static inline void setStaticF_untypedAtomicType(::System::Xml::Schema::XmlSchemaSimpleType* value);

  static inline void setStaticF_yearMonthDurationType(::System::Xml::Schema::XmlSchemaSimpleType* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DatatypeImplementation();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DatatypeImplementation", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DatatypeImplementation(DatatypeImplementation&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DatatypeImplementation", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DatatypeImplementation(DatatypeImplementation const&) = delete;

  /// @brief Field variety, offset: 0x10, size: 0x4, def value: None
  ::System::Xml::Schema::XmlSchemaDatatypeVariety ___variety;

  /// @brief Field restriction, offset: 0x18, size: 0x8, def value: None
  ::System::Xml::Schema::RestrictionFacets* ___restriction;

  /// @brief Field baseType, offset: 0x20, size: 0x8, def value: None
  ::System::Xml::Schema::DatatypeImplementation* ___baseType;

  /// @brief Field valueConverter, offset: 0x28, size: 0x8, def value: None
  ::System::Xml::Schema::XmlValueConverter* ___valueConverter;

  /// @brief Field parentSchemaType, offset: 0x30, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaType* ___parentSchemaType;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Schema::DatatypeImplementation, 0x38>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Schema::DatatypeImplementation, ___variety) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DatatypeImplementation, ___restriction) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DatatypeImplementation, ___baseType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DatatypeImplementation, ___valueConverter) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Schema::DatatypeImplementation, ___parentSchemaType) == 0x30, "Offset mismatch!");

} // namespace System::Xml::Schema
NEED_NO_BOX(::System::Xml::Schema::DatatypeImplementation);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::DatatypeImplementation*, "System.Xml.Schema", "DatatypeImplementation");
NEED_NO_BOX(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Schema::__DatatypeImplementation__SchemaDatatypeMap*, "System.Xml.Schema", "DatatypeImplementation/SchemaDatatypeMap");

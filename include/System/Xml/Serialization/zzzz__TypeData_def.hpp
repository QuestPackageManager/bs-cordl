#pragma once
// IWYU pragma private; include "System/Xml/Serialization/TypeData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/Xml/Serialization/zzzz__SchemaTypes_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(TypeData)
namespace System::Reflection {
class MethodInfo;
}
namespace System::Reflection {
class PropertyInfo;
}
namespace System::Xml::Schema {
class XmlSchemaPatternFacet;
}
namespace System::Xml::Serialization {
struct SchemaTypes;
}
namespace System {
class InvalidOperationException;
}
namespace System {
class Object;
}
namespace System {
class Type;
}
// Forward declare root types
namespace System::Xml::Serialization {
class TypeData;
}
// Write type traits
MARK_REF_PTR_T(::System::Xml::Serialization::TypeData);
// Type: System.Xml.Serialization::TypeData
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 98, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace System::Xml::Serialization {
// Is value type: false
// CS Name: ::System.Xml.Serialization::TypeData*
class CORDL_TYPE TypeData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_FullTypeName))::StringW FullTypeName;

  __declspec(property(get = get_HasPublicConstructor)) bool HasPublicConstructor;

  __declspec(property(get = get_IsComplexType)) bool IsComplexType;

  __declspec(property(get = get_IsListType)) bool IsListType;

  __declspec(property(get = get_IsNullable, put = set_IsNullable)) bool IsNullable;

  __declspec(property(get = get_IsValueType)) bool IsValueType;

  __declspec(property(get = get_IsXsdType)) bool IsXsdType;

  __declspec(property(get = get_ListItemType))::System::Type* ListItemType;

  __declspec(property(get = get_ListItemTypeData))::System::Xml::Serialization::TypeData* ListItemTypeData;

  __declspec(property(get = get_SchemaType))::System::Xml::Serialization::SchemaTypes SchemaType;

  __declspec(property(get = get_Type))::System::Type* Type;

  __declspec(property(get = get_TypeName))::StringW TypeName;

  __declspec(property(get = get_XmlType))::StringW XmlType;

  /// @brief Field elementName, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_elementName, put = __cordl_internal_set_elementName))::StringW elementName;

  /// @brief Field facet, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_facet, put = __cordl_internal_set_facet))::System::Xml::Schema::XmlSchemaPatternFacet* facet;

  /// @brief Field fullTypeName, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get_fullTypeName, put = __cordl_internal_set_fullTypeName))::StringW fullTypeName;

  /// @brief Field hasPublicConstructor, offset 0x60, size 0x1
  __declspec(property(get = __cordl_internal_get_hasPublicConstructor, put = __cordl_internal_set_hasPublicConstructor)) bool hasPublicConstructor;

  /// @brief Field keywords, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_keywords, put = setStaticF_keywords))::ArrayW<::StringW, ::Array<::StringW>*> keywords;

  /// @brief Field listItemType, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_listItemType, put = __cordl_internal_set_listItemType))::System::Type* listItemType;

  /// @brief Field listItemTypeData, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_listItemTypeData, put = __cordl_internal_set_listItemTypeData))::System::Xml::Serialization::TypeData* listItemTypeData;

  /// @brief Field mappedType, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_mappedType, put = __cordl_internal_set_mappedType))::System::Xml::Serialization::TypeData* mappedType;

  /// @brief Field nullableOverride, offset 0x61, size 0x1
  __declspec(property(get = __cordl_internal_get_nullableOverride, put = __cordl_internal_set_nullableOverride)) bool nullableOverride;

  /// @brief Field sType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_sType, put = __cordl_internal_set_sType))::System::Xml::Serialization::SchemaTypes sType;

  /// @brief Field type, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_type, put = __cordl_internal_set_type))::System::Type* type;

  /// @brief Field typeConvertor, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_typeConvertor, put = __cordl_internal_set_typeConvertor))::System::Reflection::MethodInfo* typeConvertor;

  /// @brief Field typeName, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_typeName, put = __cordl_internal_set_typeName))::StringW typeName;

  /// @brief Method ConvertForAssignment, addr 0x2ef4828, size 0xd0, virtual false, abstract: false, final false
  inline void ConvertForAssignment(ByRef<::System::Object*> value);

  /// @brief Method CreateMissingAddMethodException, addr 0x2ef5518, size 0x118, virtual false, abstract: false, final false
  static inline ::System::InvalidOperationException* CreateMissingAddMethodException(::System::Type* type, ::StringW inheritFrom, ::System::Type* argumentType);

  /// @brief Method GetGenericListItemType, addr 0x2ef51e4, size 0x1f4, virtual false, abstract: false, final false
  static inline ::System::Type* GetGenericListItemType(::System::Type* type);

  /// @brief Method GetIndexerProperty, addr 0x2ef53d8, size 0x140, virtual false, abstract: false, final false
  static inline ::System::Reflection::PropertyInfo* GetIndexerProperty(::System::Type* collectionType);

  /// @brief Method LookupTypeConvertor, addr 0x2ef4788, size 0xa0, virtual false, abstract: false, final false
  inline void LookupTypeConvertor();

  static inline ::System::Xml::Serialization::TypeData* New_ctor(::System::Type* type, ::StringW elementName, bool isPrimitive);

  static inline ::System::Xml::Serialization::TypeData* New_ctor(::System::Type* type, ::StringW elementName, bool isPrimitive, ::System::Xml::Serialization::TypeData* mappedType,
                                                                 ::System::Xml::Schema::XmlSchemaPatternFacet* facet);

  constexpr ::StringW const& __cordl_internal_get_elementName() const;

  constexpr ::StringW& __cordl_internal_get_elementName();

  constexpr ::System::Xml::Schema::XmlSchemaPatternFacet*& __cordl_internal_get_facet();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Schema::XmlSchemaPatternFacet*> const& __cordl_internal_get_facet() const;

  constexpr ::StringW const& __cordl_internal_get_fullTypeName() const;

  constexpr ::StringW& __cordl_internal_get_fullTypeName();

  constexpr bool const& __cordl_internal_get_hasPublicConstructor() const;

  constexpr bool& __cordl_internal_get_hasPublicConstructor();

  constexpr ::System::Type*& __cordl_internal_get_listItemType();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_listItemType() const;

  constexpr ::System::Xml::Serialization::TypeData*& __cordl_internal_get_listItemTypeData();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::TypeData*> const& __cordl_internal_get_listItemTypeData() const;

  constexpr ::System::Xml::Serialization::TypeData*& __cordl_internal_get_mappedType();

  constexpr ::cordl_internals::to_const_pointer<::System::Xml::Serialization::TypeData*> const& __cordl_internal_get_mappedType() const;

  constexpr bool const& __cordl_internal_get_nullableOverride() const;

  constexpr bool& __cordl_internal_get_nullableOverride();

  constexpr ::System::Xml::Serialization::SchemaTypes const& __cordl_internal_get_sType() const;

  constexpr ::System::Xml::Serialization::SchemaTypes& __cordl_internal_get_sType();

  constexpr ::System::Type*& __cordl_internal_get_type();

  constexpr ::cordl_internals::to_const_pointer<::System::Type*> const& __cordl_internal_get_type() const;

  constexpr ::System::Reflection::MethodInfo*& __cordl_internal_get_typeConvertor();

  constexpr ::cordl_internals::to_const_pointer<::System::Reflection::MethodInfo*> const& __cordl_internal_get_typeConvertor() const;

  constexpr ::StringW const& __cordl_internal_get_typeName() const;

  constexpr ::StringW& __cordl_internal_get_typeName();

  constexpr void __cordl_internal_set_elementName(::StringW value);

  constexpr void __cordl_internal_set_facet(::System::Xml::Schema::XmlSchemaPatternFacet* value);

  constexpr void __cordl_internal_set_fullTypeName(::StringW value);

  constexpr void __cordl_internal_set_hasPublicConstructor(bool value);

  constexpr void __cordl_internal_set_listItemType(::System::Type* value);

  constexpr void __cordl_internal_set_listItemTypeData(::System::Xml::Serialization::TypeData* value);

  constexpr void __cordl_internal_set_mappedType(::System::Xml::Serialization::TypeData* value);

  constexpr void __cordl_internal_set_nullableOverride(bool value);

  constexpr void __cordl_internal_set_sType(::System::Xml::Serialization::SchemaTypes value);

  constexpr void __cordl_internal_set_type(::System::Type* value);

  constexpr void __cordl_internal_set_typeConvertor(::System::Reflection::MethodInfo* value);

  constexpr void __cordl_internal_set_typeName(::StringW value);

  /// @brief Method .ctor, addr 0x2ef4218, size 0x10, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW elementName, bool isPrimitive);

  /// @brief Method .ctor, addr 0x2ef4228, size 0x398, virtual false, abstract: false, final false
  inline void _ctor(::System::Type* type, ::StringW elementName, bool isPrimitive, ::System::Xml::Serialization::TypeData* mappedType, ::System::Xml::Schema::XmlSchemaPatternFacet* facet);

  static inline ::ArrayW<::StringW, ::Array<::StringW>*> getStaticF_keywords();

  /// @brief Method get_FullTypeName, addr 0x2ef4910, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_FullTypeName();

  /// @brief Method get_HasPublicConstructor, addr 0x2ef5630, size 0x8, virtual false, abstract: false, final false
  inline bool get_HasPublicConstructor();

  /// @brief Method get_IsComplexType, addr 0x2ef4920, size 0x28, virtual false, abstract: false, final false
  inline bool get_IsComplexType();

  /// @brief Method get_IsListType, addr 0x2ef3db0, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsListType();

  /// @brief Method get_IsNullable, addr 0x2ef49ec, size 0x114, virtual false, abstract: false, final false
  inline bool get_IsNullable();

  /// @brief Method get_IsValueType, addr 0x2ef4958, size 0x94, virtual false, abstract: false, final false
  inline bool get_IsValueType();

  /// @brief Method get_IsXsdType, addr 0x2ef4948, size 0x10, virtual false, abstract: false, final false
  inline bool get_IsXsdType();

  /// @brief Method get_ListItemType, addr 0x2ef4b0c, size 0x6d8, virtual false, abstract: false, final false
  inline ::System::Type* get_ListItemType();

  /// @brief Method get_ListItemTypeData, addr 0x2ef45c0, size 0xb8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::TypeData* get_ListItemTypeData();

  /// @brief Method get_SchemaType, addr 0x2ef4918, size 0x8, virtual false, abstract: false, final false
  inline ::System::Xml::Serialization::SchemaTypes get_SchemaType();

  /// @brief Method get_Type, addr 0x2ef4908, size 0x8, virtual false, abstract: false, final false
  inline ::System::Type* get_Type();

  /// @brief Method get_TypeName, addr 0x2ef48f8, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_TypeName();

  /// @brief Method get_XmlType, addr 0x2ef4900, size 0x8, virtual false, abstract: false, final false
  inline ::StringW get_XmlType();

  static inline void setStaticF_keywords(::ArrayW<::StringW, ::Array<::StringW>*> value);

  /// @brief Method set_IsNullable, addr 0x2ef4b00, size 0xc, virtual false, abstract: false, final false
  inline void set_IsNullable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TypeData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TypeData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TypeData(TypeData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TypeData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TypeData(TypeData const&) = delete;

  /// @brief Field type, offset: 0x10, size: 0x8, def value: None
  ::System::Type* ___type;

  /// @brief Field elementName, offset: 0x18, size: 0x8, def value: None
  ::StringW ___elementName;

  /// @brief Field sType, offset: 0x20, size: 0x4, def value: None
  ::System::Xml::Serialization::SchemaTypes ___sType;

  /// @brief Field listItemType, offset: 0x28, size: 0x8, def value: None
  ::System::Type* ___listItemType;

  /// @brief Field typeName, offset: 0x30, size: 0x8, def value: None
  ::StringW ___typeName;

  /// @brief Field fullTypeName, offset: 0x38, size: 0x8, def value: None
  ::StringW ___fullTypeName;

  /// @brief Field listItemTypeData, offset: 0x40, size: 0x8, def value: None
  ::System::Xml::Serialization::TypeData* ___listItemTypeData;

  /// @brief Field mappedType, offset: 0x48, size: 0x8, def value: None
  ::System::Xml::Serialization::TypeData* ___mappedType;

  /// @brief Field facet, offset: 0x50, size: 0x8, def value: None
  ::System::Xml::Schema::XmlSchemaPatternFacet* ___facet;

  /// @brief Field typeConvertor, offset: 0x58, size: 0x8, def value: None
  ::System::Reflection::MethodInfo* ___typeConvertor;

  /// @brief Field hasPublicConstructor, offset: 0x60, size: 0x1, def value: None
  bool ___hasPublicConstructor;

  /// @brief Field nullableOverride, offset: 0x61, size: 0x1, def value: None
  bool ___nullableOverride;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::System::Xml::Serialization::TypeData, 0x68>, "Size mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___type) == 0x10, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___elementName) == 0x18, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___sType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___listItemType) == 0x28, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___typeName) == 0x30, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___fullTypeName) == 0x38, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___listItemTypeData) == 0x40, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___mappedType) == 0x48, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___facet) == 0x50, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___typeConvertor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___hasPublicConstructor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::System::Xml::Serialization::TypeData, ___nullableOverride) == 0x61, "Offset mismatch!");

} // namespace System::Xml::Serialization
NEED_NO_BOX(::System::Xml::Serialization::TypeData);
DEFINE_IL2CPP_ARG_TYPE(::System::Xml::Serialization::TypeData*, "System.Xml.Serialization", "TypeData");

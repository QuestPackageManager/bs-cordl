#pragma once
// IWYU pragma private; include "System/Xml/Serialization/TypeData.hpp"
#include "System/Xml/Serialization/zzzz__SchemaTypes_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Reflection/zzzz__MethodInfo_def.hpp"
#include "System/Reflection/zzzz__PropertyInfo_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaPatternFacet_def.hpp"
#include "System/Xml/Serialization/zzzz__SchemaTypes_def.hpp"
#include "System/zzzz__InvalidOperationException_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::TypeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::TypeData::*)(::System::Type*, ::StringW, bool)>(&::System::Xml::Serialization::TypeData::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x62e75a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::TypeData::*)(
    ::System::Type*, ::StringW, bool, ::System::Xml::Serialization::TypeData*, ::System::Xml::Schema::XmlSchemaPatternFacet*)>(&::System::Xml::Serialization::TypeData::_ctor)> {
  constexpr static std::size_t size = 0x3c4;
  constexpr static std::size_t addrs = 0x62e75b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                                 ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaPatternFacet*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.LookupTypeConvertor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::LookupTypeConvertor)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x62e7b1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "LookupTypeConvertor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.ConvertForAssignment
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::TypeData::*)(::by_ref<::System::Object*>)>(&::System::Xml::Serialization::TypeData::ConvertForAssignment)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x62e7bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "ConvertForAssignment", {}, { ::i2c::type_of<::by_ref<::System::Object*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_TypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_TypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7c9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_TypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_XmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7ca4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_XmlType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_Type", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_FullTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_FullTypeName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_FullTypeName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_SchemaType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::SchemaTypes (::System::Xml::Serialization::TypeData::*)()>(
    &::System::Xml::Serialization::TypeData::get_SchemaType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_SchemaType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_IsListType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_IsListType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62e6ce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsListType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_IsComplexType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_IsComplexType)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x62e7cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsComplexType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_IsValueType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_IsValueType)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x62e7cfc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsValueType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_IsNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_IsNullable)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x62e7d68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsNullable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.set_IsNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::TypeData::*)(bool)>(&::System::Xml::Serialization::TypeData::set_IsNullable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e7e5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "set_IsNullable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_ListItemTypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeData* (::System::Xml::Serialization::TypeData::*)()>(
    &::System::Xml::Serialization::TypeData::get_ListItemTypeData)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x62e7978;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_ListItemTypeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_ListItemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_ListItemType)> {
  constexpr static std::size_t size = 0x67c;
  constexpr static std::size_t addrs = 0x62e7e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_ListItemType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_IsXsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_IsXsdType)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x62e7cec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsXsdType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.get_HasPublicConstructor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::TypeData::*)()>(&::System::Xml::Serialization::TypeData::get_HasPublicConstructor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x62e8904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_HasPublicConstructor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.GetIndexerProperty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::PropertyInfo* (*)(::System::Type*)>(&::System::Xml::Serialization::TypeData::GetIndexerProperty)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x62e86c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "GetIndexerProperty", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.CreateMissingAddMethodException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::InvalidOperationException* (*)(::System::Type*, ::StringW, ::System::Type*)>(
    &::System::Xml::Serialization::TypeData::CreateMissingAddMethodException)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x62e87b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(),
                                                { "CreateMissingAddMethodException", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::TypeData.GetGenericListItemType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (*)(::System::Type*)>(&::System::Xml::Serialization::TypeData::GetGenericListItemType)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x62e84e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "GetGenericListItemType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Type*& System::Xml::Serialization::TypeData::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Xml::Serialization::TypeData::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::StringW& System::Xml::Serialization::TypeData::__cordl_internal_get_elementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr ::StringW const& System::Xml::Serialization::TypeData::__cordl_internal_get_elementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___elementName;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_elementName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___elementName = value;
}
constexpr ::System::Xml::Serialization::SchemaTypes& System::Xml::Serialization::TypeData::__cordl_internal_get_sType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sType;
}
constexpr ::System::Xml::Serialization::SchemaTypes const& System::Xml::Serialization::TypeData::__cordl_internal_get_sType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___sType;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_sType(::System::Xml::Serialization::SchemaTypes value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___sType = value;
}
constexpr ::System::Type*& System::Xml::Serialization::TypeData::__cordl_internal_get_listItemType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listItemType;
}
constexpr ::System::Type* const& System::Xml::Serialization::TypeData::__cordl_internal_get_listItemType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listItemType;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_listItemType(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listItemType = value;
}
constexpr ::StringW& System::Xml::Serialization::TypeData::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Xml::Serialization::TypeData::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeName = value;
}
constexpr ::StringW& System::Xml::Serialization::TypeData::__cordl_internal_get_fullTypeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr ::StringW const& System::Xml::Serialization::TypeData::__cordl_internal_get_fullTypeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fullTypeName;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_fullTypeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fullTypeName = value;
}
constexpr ::System::Xml::Serialization::TypeData*& System::Xml::Serialization::TypeData::__cordl_internal_get_listItemTypeData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listItemTypeData;
}
constexpr ::System::Xml::Serialization::TypeData* const& System::Xml::Serialization::TypeData::__cordl_internal_get_listItemTypeData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___listItemTypeData;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_listItemTypeData(::System::Xml::Serialization::TypeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___listItemTypeData = value;
}
constexpr ::System::Xml::Serialization::TypeData*& System::Xml::Serialization::TypeData::__cordl_internal_get_mappedType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mappedType;
}
constexpr ::System::Xml::Serialization::TypeData* const& System::Xml::Serialization::TypeData::__cordl_internal_get_mappedType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mappedType;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_mappedType(::System::Xml::Serialization::TypeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mappedType = value;
}
constexpr ::System::Xml::Schema::XmlSchemaPatternFacet*& System::Xml::Serialization::TypeData::__cordl_internal_get_facet() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facet;
}
constexpr ::System::Xml::Schema::XmlSchemaPatternFacet* const& System::Xml::Serialization::TypeData::__cordl_internal_get_facet() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___facet;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_facet(::System::Xml::Schema::XmlSchemaPatternFacet* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___facet = value;
}
constexpr ::System::Reflection::MethodInfo*& System::Xml::Serialization::TypeData::__cordl_internal_get_typeConvertor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeConvertor;
}
constexpr ::System::Reflection::MethodInfo* const& System::Xml::Serialization::TypeData::__cordl_internal_get_typeConvertor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeConvertor;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_typeConvertor(::System::Reflection::MethodInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___typeConvertor = value;
}
constexpr bool& System::Xml::Serialization::TypeData::__cordl_internal_get_hasPublicConstructor() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPublicConstructor;
}
constexpr bool const& System::Xml::Serialization::TypeData::__cordl_internal_get_hasPublicConstructor() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasPublicConstructor;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_hasPublicConstructor(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasPublicConstructor = value;
}
constexpr bool& System::Xml::Serialization::TypeData::__cordl_internal_get_nullableOverride() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullableOverride;
}
constexpr bool const& System::Xml::Serialization::TypeData::__cordl_internal_get_nullableOverride() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___nullableOverride;
}
constexpr void System::Xml::Serialization::TypeData::__cordl_internal_set_nullableOverride(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___nullableOverride = value;
}
inline void System::Xml::Serialization::TypeData::setStaticF_keywords(::ArrayW<::StringW> value) {
  ::cordl_internals::setStaticField<::ArrayW<::StringW>, "keywords", ::System::Xml::Serialization::TypeData*>(std::forward<::ArrayW<::StringW>>(value));
}
inline ::ArrayW<::StringW> System::Xml::Serialization::TypeData::getStaticF_keywords() {
  return ::cordl_internals::getStaticField<::ArrayW<::StringW>, "keywords", ::System::Xml::Serialization::TypeData*>();
}
inline void System::Xml::Serialization::TypeData::_ctor(::System::Type* type, ::StringW elementName, bool isPrimitive) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, elementName, isPrimitive);
}
inline void System::Xml::Serialization::TypeData::_ctor(::System::Type* type, ::StringW elementName, bool isPrimitive, ::System::Xml::Serialization::TypeData* mappedType,
                                                        ::System::Xml::Schema::XmlSchemaPatternFacet* facet) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>(),
                                                               ::i2c::type_of<::System::Xml::Serialization::TypeData*>(), ::i2c::type_of<::System::Xml::Schema::XmlSchemaPatternFacet*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type, elementName, isPrimitive, mappedType, facet);
}
inline void System::Xml::Serialization::TypeData::LookupTypeConvertor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "LookupTypeConvertor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Xml::Serialization::TypeData::ConvertForAssignment(::by_ref<::System::Object*> value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "ConvertForAssignment", {}, { ::i2c::type_of<::by_ref<::System::Object*>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Serialization::TypeData::get_TypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_TypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::TypeData::get_XmlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_XmlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Serialization::TypeData::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::TypeData::get_FullTypeName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_FullTypeName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Serialization::SchemaTypes System::Xml::Serialization::TypeData::get_SchemaType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_SchemaType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::SchemaTypes>(this, ___internal_method);
}
inline bool System::Xml::Serialization::TypeData::get_IsListType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsListType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Serialization::TypeData::get_IsComplexType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsComplexType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Serialization::TypeData::get_IsValueType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsValueType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Serialization::TypeData::get_IsNullable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsNullable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Serialization::TypeData::set_IsNullable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "set_IsNullable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::TypeData::get_ListItemTypeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_ListItemTypeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeData*>(this, ___internal_method);
}
inline ::System::Type* System::Xml::Serialization::TypeData::get_ListItemType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_ListItemType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline bool System::Xml::Serialization::TypeData::get_IsXsdType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_IsXsdType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Xml::Serialization::TypeData::get_HasPublicConstructor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "get_HasPublicConstructor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Reflection::PropertyInfo* System::Xml::Serialization::TypeData::GetIndexerProperty(::System::Type* collectionType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "GetIndexerProperty", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::PropertyInfo*>(nullptr, ___internal_method, collectionType);
}
inline ::System::InvalidOperationException* System::Xml::Serialization::TypeData::CreateMissingAddMethodException(::System::Type* type, ::StringW inheritFrom, ::System::Type* argumentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(),
                                              { "CreateMissingAddMethodException", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::InvalidOperationException*>(nullptr, ___internal_method, type, inheritFrom, argumentType);
}
inline ::System::Type* System::Xml::Serialization::TypeData::GetGenericListItemType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::TypeData*>(), { "GetGenericListItemType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(nullptr, ___internal_method, type);
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::TypeData::New_ctor(::System::Type* type, ::StringW elementName, bool isPrimitive) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::TypeData*>(type, elementName, isPrimitive));
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::TypeData::New_ctor(::System::Type* type, ::StringW elementName, bool isPrimitive,
                                                                                              ::System::Xml::Serialization::TypeData* mappedType, ::System::Xml::Schema::XmlSchemaPatternFacet* facet) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::TypeData*>(type, elementName, isPrimitive, mappedType, facet));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::TypeData::TypeData() {}

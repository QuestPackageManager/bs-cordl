#pragma once
// IWYU pragma private; include "System/Xml/Serialization/XmlTypeMapping.hpp"
#include "System/Xml/Serialization/zzzz__XmlMapping_impl.hpp"
#include "System/Xml/Serialization/zzzz__XmlTypeMapping_def.hpp"
#include "System/Collections/zzzz__ArrayList_def.hpp"
#include "System/Xml/Serialization/zzzz__TypeData_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapping::*)(::StringW, ::StringW, ::System::Xml::Serialization::TypeData*, ::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlTypeMapping::_ctor)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x630dc04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(),
                                                             { ".ctor",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Serialization::TypeData*>(),
                                                                 ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_TypeFullName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeMapping::*)()>(&::System::Xml::Serialization::XmlTypeMapping::get_TypeFullName)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630b01c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_TypeFullName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_TypeData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::TypeData* (::System::Xml::Serialization::XmlTypeMapping::*)()>(
    &::System::Xml::Serialization::XmlTypeMapping::get_TypeData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dca0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_TypeData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_XmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeMapping::*)()>(&::System::Xml::Serialization::XmlTypeMapping::get_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dca8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_XmlType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.set_XmlType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapping::*)(::StringW)>(&::System::Xml::Serialization::XmlTypeMapping::set_XmlType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dcb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_XmlType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_XmlTypeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Xml::Serialization::XmlTypeMapping::*)()>(&::System::Xml::Serialization::XmlTypeMapping::get_XmlTypeNamespace)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x6305f10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_XmlTypeNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.set_XmlTypeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapping::*)(::StringW)>(&::System::Xml::Serialization::XmlTypeMapping::set_XmlTypeNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dcb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_XmlTypeNamespace", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_HasXmlTypeNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapping::*)()>(&::System::Xml::Serialization::XmlTypeMapping::get_HasXmlTypeNamespace)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x630dcc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_HasXmlTypeNamespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_DerivedTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::ArrayList* (::System::Xml::Serialization::XmlTypeMapping::*)()>(
    &::System::Xml::Serialization::XmlTypeMapping::get_DerivedTypes)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dcd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_DerivedTypes", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_MultiReferenceType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapping::*)()>(&::System::Xml::Serialization::XmlTypeMapping::get_MultiReferenceType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dcd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_MultiReferenceType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_BaseMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::XmlTypeMapping::*)()>(
    &::System::Xml::Serialization::XmlTypeMapping::get_BaseMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dce0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_BaseMap", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.set_BaseMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapping::*)(::System::Xml::Serialization::XmlTypeMapping*)>(
    &::System::Xml::Serialization::XmlTypeMapping::set_BaseMap)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dce8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(),
                                                                                           { "set_BaseMap", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.set_IncludeInSchema
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapping::*)(bool)>(&::System::Xml::Serialization::XmlTypeMapping::set_IncludeInSchema)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_IncludeInSchema", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_IsNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapping::*)()>(&::System::Xml::Serialization::XmlTypeMapping::get_IsNullable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dcf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_IsNullable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.set_IsNullable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapping::*)(bool)>(&::System::Xml::Serialization::XmlTypeMapping::set_IsNullable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_IsNullable", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.get_IsAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Xml::Serialization::XmlTypeMapping::*)()>(&::System::Xml::Serialization::XmlTypeMapping::get_IsAny)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dd08;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_IsAny", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.set_IsAny
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapping::*)(bool)>(&::System::Xml::Serialization::XmlTypeMapping::set_IsAny)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x630dd10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_IsAny", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.GetRealTypeMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::XmlTypeMapping::*)(::System::Type*)>(
    &::System::Xml::Serialization::XmlTypeMapping::GetRealTypeMap)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x6305dc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "GetRealTypeMap", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.GetRealElementMap
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::XmlTypeMapping* (::System::Xml::Serialization::XmlTypeMapping::*)(::StringW, ::StringW)>(
    &::System::Xml::Serialization::XmlTypeMapping::GetRealElementMap)> {
  constexpr static std::size_t size = 0x344;
  constexpr static std::size_t addrs = 0x630dd18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "GetRealElementMap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Xml::Serialization::XmlTypeMapping.UpdateRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Serialization::XmlTypeMapping::*)(::System::Xml::XmlQualifiedName*)>(
    &::System::Xml::Serialization::XmlTypeMapping::UpdateRoot)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x630e05c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "UpdateRoot", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_xmlType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlType;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_xmlType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlType;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set_xmlType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlType = value;
}
constexpr ::StringW& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_xmlTypeNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlTypeNamespace;
}
constexpr ::StringW const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_xmlTypeNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xmlTypeNamespace;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set_xmlTypeNamespace(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xmlTypeNamespace = value;
}
constexpr ::System::Xml::Serialization::TypeData*& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Xml::Serialization::TypeData* const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set_type(::System::Xml::Serialization::TypeData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___type = value;
}
constexpr ::System::Xml::Serialization::XmlTypeMapping*& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_baseMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMap;
}
constexpr ::System::Xml::Serialization::XmlTypeMapping* const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_baseMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseMap;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set_baseMap(::System::Xml::Serialization::XmlTypeMapping* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseMap = value;
}
constexpr bool& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_multiReferenceType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiReferenceType;
}
constexpr bool const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_multiReferenceType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___multiReferenceType;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set_multiReferenceType(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___multiReferenceType = value;
}
constexpr bool& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_includeInSchema() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInSchema;
}
constexpr bool const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_includeInSchema() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___includeInSchema;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set_includeInSchema(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___includeInSchema = value;
}
constexpr bool& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_isNullable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNullable;
}
constexpr bool const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_isNullable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isNullable;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set_isNullable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isNullable = value;
}
constexpr bool& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_isAny() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAny;
}
constexpr bool const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get_isAny() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isAny;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set_isAny(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isAny = value;
}
constexpr ::System::Collections::ArrayList*& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get__derivedTypes() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____derivedTypes;
}
constexpr ::System::Collections::ArrayList* const& System::Xml::Serialization::XmlTypeMapping::__cordl_internal_get__derivedTypes() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____derivedTypes;
}
constexpr void System::Xml::Serialization::XmlTypeMapping::__cordl_internal_set__derivedTypes(::System::Collections::ArrayList* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____derivedTypes = value;
}
inline void System::Xml::Serialization::XmlTypeMapping::_ctor(::StringW elementName, ::StringW ns, ::System::Xml::Serialization::TypeData* typeData, ::StringW xmlType, ::StringW xmlTypeNamespace) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(),
                                                           { ".ctor",
                                                             {},
                                                             { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Xml::Serialization::TypeData*>(),
                                                               ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, elementName, ns, typeData, xmlType, xmlTypeNamespace);
}
inline ::StringW System::Xml::Serialization::XmlTypeMapping::get_TypeFullName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_TypeFullName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::Serialization::TypeData* System::Xml::Serialization::XmlTypeMapping::get_TypeData() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_TypeData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::TypeData*>(this, ___internal_method);
}
inline ::StringW System::Xml::Serialization::XmlTypeMapping::get_XmlType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_XmlType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapping::set_XmlType(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_XmlType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::StringW System::Xml::Serialization::XmlTypeMapping::get_XmlTypeNamespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_XmlTypeNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapping::set_XmlTypeNamespace(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_XmlTypeNamespace", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Serialization::XmlTypeMapping::get_HasXmlTypeNamespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_HasXmlTypeNamespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Collections::ArrayList* System::Xml::Serialization::XmlTypeMapping::get_DerivedTypes() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_DerivedTypes", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::ArrayList*>(this, ___internal_method);
}
inline bool System::Xml::Serialization::XmlTypeMapping::get_MultiReferenceType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_MultiReferenceType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlTypeMapping::get_BaseMap() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_BaseMap", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapping::set_BaseMap(::System::Xml::Serialization::XmlTypeMapping* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_BaseMap", {}, { ::i2c::type_of<::System::Xml::Serialization::XmlTypeMapping*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void System::Xml::Serialization::XmlTypeMapping::set_IncludeInSchema(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_IncludeInSchema", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Serialization::XmlTypeMapping::get_IsNullable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_IsNullable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapping::set_IsNullable(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_IsNullable", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Xml::Serialization::XmlTypeMapping::get_IsAny() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "get_IsAny", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Xml::Serialization::XmlTypeMapping::set_IsAny(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "set_IsAny", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlTypeMapping::GetRealTypeMap(::System::Type* objectType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "GetRealTypeMap", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, objectType);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlTypeMapping::GetRealElementMap(::StringW name, ::StringW ens) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "GetRealElementMap", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::XmlTypeMapping*>(this, ___internal_method, name, ens);
}
inline void System::Xml::Serialization::XmlTypeMapping::UpdateRoot(::System::Xml::XmlQualifiedName* qname) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Serialization::XmlTypeMapping*>(), { "UpdateRoot", {}, { ::i2c::type_of<::System::Xml::XmlQualifiedName*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, qname);
}
inline ::System::Xml::Serialization::XmlTypeMapping* System::Xml::Serialization::XmlTypeMapping::New_ctor(::StringW elementName, ::StringW ns, ::System::Xml::Serialization::TypeData* typeData,
                                                                                                          ::StringW xmlType, ::StringW xmlTypeNamespace) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Serialization::XmlTypeMapping*>(elementName, ns, typeData, xmlType, xmlTypeNamespace));
}
// Ctor Parameters []
constexpr ::System::Xml::Serialization::XmlTypeMapping::XmlTypeMapping() {}

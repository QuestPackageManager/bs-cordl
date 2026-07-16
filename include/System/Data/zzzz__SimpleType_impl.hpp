#pragma once
// IWYU pragma private; include "System/Data/SimpleType.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Data/zzzz__SimpleType_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Data/Common/zzzz__StorageType_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISerializable_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationInfo_def.hpp"
#include "System/Runtime/Serialization/zzzz__StreamingContext_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaSimpleType_def.hpp"
#include "System/Xml/zzzz__XmlDocument_def.hpp"
#include "System/Xml/zzzz__XmlNode_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Data::SimpleType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SimpleType::*)(::StringW)>(&::System::Data::SimpleType::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x604acac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SimpleType::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Data::SimpleType::_ctor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x604ace8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.System_Runtime_Serialization_ISerializable_GetObjectData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SimpleType::*)(::System::Runtime::Serialization::SerializationInfo*, ::System::Runtime::Serialization::StreamingContext)>(
    &::System::Data::SimpleType::System_Runtime_Serialization_ISerializable_GetObjectData)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x604b6a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(),
                                                { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.LoadTypeValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SimpleType::*)(::System::Xml::Schema::XmlSchemaSimpleType*)>(&::System::Data::SimpleType::LoadTypeValues)> {
  constexpr static std::size_t size = 0x8b8;
  constexpr static std::size_t addrs = 0x604ade8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "LoadTypeValues", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.IsPlainString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::IsPlainString)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x604b6d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "IsPlainString", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.get_BaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::get_BaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604b818;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_BaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.get_XmlBaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::get_XmlBaseType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604b820;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_XmlBaseType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.get_Name
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::get_Name)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604b828;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_Name", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.get_Namespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::get_Namespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604b830;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_Namespace", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.get_Length
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::get_Length)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604b838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_Length", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.get_MaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::get_MaxLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604b840;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_MaxLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.set_MaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SimpleType::*)(int32_t)>(&::System::Data::SimpleType::set_MaxLength)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604b848;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "set_MaxLength", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.get_BaseSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SimpleType* (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::get_BaseSimpleType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x604b850;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_BaseSimpleType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.get_SimpleTypeQualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::get_SimpleTypeQualifiedName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x604b858;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_SimpleTypeQualifiedName", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.QualifiedName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SimpleType::*)(::StringW)>(&::System::Data::SimpleType::QualifiedName)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x604b8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "QualifiedName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.ToNode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlNode* (::System::Data::SimpleType::*)(::System::Xml::XmlDocument*, ::System::Collections::Hashtable*, bool)>(
    &::System::Data::SimpleType::ToNode)> {
  constexpr static std::size_t size = 0x478;
  constexpr static std::size_t addrs = 0x604b950;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(),
                                                { "ToNode", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.CreateEnumeratedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SimpleType* (*)(::StringW)>(&::System::Data::SimpleType::CreateEnumeratedType)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x604bdc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CreateEnumeratedType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.CreateByteArrayType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SimpleType* (*)(::StringW)>(&::System::Data::SimpleType::CreateByteArrayType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x604be68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CreateByteArrayType", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.CreateLimitedStringType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SimpleType* (*)(int32_t)>(&::System::Data::SimpleType::CreateLimitedStringType)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x604bf04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CreateLimitedStringType", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.CreateSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Data::SimpleType* (*)(::System::Data::Common::StorageType, ::System::Type*)>(&::System::Data::SimpleType::CreateSimpleType)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x604bfa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CreateSimpleType", {}, { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.HasConflictingDefinition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::System::Data::SimpleType::*)(::System::Data::SimpleType*)>(&::System::Data::SimpleType::HasConflictingDefinition)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x604c094;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "HasConflictingDefinition", {}, { ::i2c::type_of<::System::Data::SimpleType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.CanHaveMaxLength
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::CanHaveMaxLength)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x604c1ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CanHaveMaxLength", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Data::SimpleType.ConvertToAnnonymousSimpleType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Data::SimpleType::*)()>(&::System::Data::SimpleType::ConvertToAnnonymousSimpleType)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x604c214;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "ConvertToAnnonymousSimpleType", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__baseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseType;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__baseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseType;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__baseType(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseType = value;
}
constexpr ::System::Data::SimpleType*& System::Data::SimpleType::__cordl_internal_get__baseSimpleType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseSimpleType;
}
constexpr ::System::Data::SimpleType* const& System::Data::SimpleType::__cordl_internal_get__baseSimpleType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____baseSimpleType;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__baseSimpleType(::System::Data::SimpleType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____baseSimpleType = value;
}
constexpr ::System::Xml::XmlQualifiedName*& System::Data::SimpleType::__cordl_internal_get__xmlBaseType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlBaseType;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Data::SimpleType::__cordl_internal_get__xmlBaseType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____xmlBaseType;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__xmlBaseType(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____xmlBaseType = value;
}
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____name;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____name = value;
}
constexpr int32_t& System::Data::SimpleType::__cordl_internal_get__length() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr int32_t const& System::Data::SimpleType::__cordl_internal_get__length() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____length;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__length(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____length = value;
}
constexpr int32_t& System::Data::SimpleType::__cordl_internal_get__minLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minLength;
}
constexpr int32_t const& System::Data::SimpleType::__cordl_internal_get__minLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minLength;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__minLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minLength = value;
}
constexpr int32_t& System::Data::SimpleType::__cordl_internal_get__maxLength() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
constexpr int32_t const& System::Data::SimpleType::__cordl_internal_get__maxLength() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxLength;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__maxLength(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxLength = value;
}
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__pattern() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pattern;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__pattern() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____pattern;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__pattern(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____pattern = value;
}
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__ns() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ns;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__ns() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ns;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__ns(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ns = value;
}
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__maxExclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxExclusive;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__maxExclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxExclusive;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__maxExclusive(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxExclusive = value;
}
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__maxInclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxInclusive;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__maxInclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____maxInclusive;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__maxInclusive(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____maxInclusive = value;
}
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__minExclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minExclusive;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__minExclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minExclusive;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__minExclusive(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minExclusive = value;
}
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__minInclusive() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minInclusive;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__minInclusive() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____minInclusive;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__minInclusive(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____minInclusive = value;
}
constexpr ::StringW& System::Data::SimpleType::__cordl_internal_get__enumeration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumeration;
}
constexpr ::StringW const& System::Data::SimpleType::__cordl_internal_get__enumeration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____enumeration;
}
constexpr void System::Data::SimpleType::__cordl_internal_set__enumeration(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____enumeration = value;
}
inline void System::Data::SimpleType::_ctor(::StringW baseType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseType);
}
inline void System::Data::SimpleType::_ctor(::System::Xml::Schema::XmlSchemaSimpleType* node) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { ".ctor", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline void System::Data::SimpleType::System_Runtime_Serialization_ISerializable_GetObjectData(::System::Runtime::Serialization::SerializationInfo* info,
                                                                                               ::System::Runtime::Serialization::StreamingContext context) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(),
                                              { "System.Runtime.Serialization.ISerializable.GetObjectData",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::SerializationInfo*>(), ::i2c::type_of<::System::Runtime::Serialization::StreamingContext>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, info, context);
}
inline void System::Data::SimpleType::LoadTypeValues(::System::Xml::Schema::XmlSchemaSimpleType* node) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "LoadTypeValues", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaSimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, node);
}
inline bool System::Data::SimpleType::IsPlainString() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "IsPlainString", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::StringW System::Data::SimpleType::get_BaseType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_BaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::System::Xml::XmlQualifiedName* System::Data::SimpleType::get_XmlBaseType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_XmlBaseType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(this, ___internal_method);
}
inline ::StringW System::Data::SimpleType::get_Name() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_Name", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Data::SimpleType::get_Namespace() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_Namespace", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline int32_t System::Data::SimpleType::get_Length() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_Length", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline int32_t System::Data::SimpleType::get_MaxLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_MaxLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Data::SimpleType::set_MaxLength(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "set_MaxLength", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Data::SimpleType* System::Data::SimpleType::get_BaseSimpleType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_BaseSimpleType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SimpleType*>(this, ___internal_method);
}
inline ::StringW System::Data::SimpleType::get_SimpleTypeQualifiedName() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "get_SimpleTypeQualifiedName", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline ::StringW System::Data::SimpleType::QualifiedName(::StringW name) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "QualifiedName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, name);
}
inline ::System::Xml::XmlNode* System::Data::SimpleType::ToNode(::System::Xml::XmlDocument* dc, ::System::Collections::Hashtable* prefixes, bool inRemoting) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(),
                                              { "ToNode", {}, { ::i2c::type_of<::System::Xml::XmlDocument*>(), ::i2c::type_of<::System::Collections::Hashtable*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlNode*>(this, ___internal_method, dc, prefixes, inRemoting);
}
inline ::System::Data::SimpleType* System::Data::SimpleType::CreateEnumeratedType(::StringW values) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CreateEnumeratedType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SimpleType*>(nullptr, ___internal_method, values);
}
inline ::System::Data::SimpleType* System::Data::SimpleType::CreateByteArrayType(::StringW encoding) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CreateByteArrayType", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SimpleType*>(nullptr, ___internal_method, encoding);
}
inline ::System::Data::SimpleType* System::Data::SimpleType::CreateLimitedStringType(int32_t length) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CreateLimitedStringType", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SimpleType*>(nullptr, ___internal_method, length);
}
inline ::System::Data::SimpleType* System::Data::SimpleType::CreateSimpleType(::System::Data::Common::StorageType typeCode, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CreateSimpleType", {}, { ::i2c::type_of<::System::Data::Common::StorageType>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Data::SimpleType*>(nullptr, ___internal_method, typeCode, type);
}
inline ::StringW System::Data::SimpleType::HasConflictingDefinition(::System::Data::SimpleType* otherSimpleType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "HasConflictingDefinition", {}, { ::i2c::type_of<::System::Data::SimpleType*>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method, otherSimpleType);
}
inline bool System::Data::SimpleType::CanHaveMaxLength() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "CanHaveMaxLength", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Data::SimpleType::ConvertToAnnonymousSimpleType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Data::SimpleType*>(), { "ConvertToAnnonymousSimpleType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Data::SimpleType* System::Data::SimpleType::New_ctor(::StringW baseType) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SimpleType*>(baseType));
}
inline ::System::Data::SimpleType* System::Data::SimpleType::New_ctor(::System::Xml::Schema::XmlSchemaSimpleType* node) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Data::SimpleType*>(node));
}
/// @brief Convert operator to "::System::Runtime::Serialization::ISerializable"
constexpr System::Data::SimpleType::operator ::System::Runtime::Serialization::ISerializable*() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Runtime::Serialization::ISerializable"
constexpr ::System::Runtime::Serialization::ISerializable* System::Data::SimpleType::i___System__Runtime__Serialization__ISerializable() noexcept {
  return static_cast<::System::Runtime::Serialization::ISerializable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Data::SimpleType::SimpleType() {}

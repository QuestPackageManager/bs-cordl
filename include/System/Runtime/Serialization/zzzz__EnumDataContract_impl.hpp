#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/EnumDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_impl.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_impl.hpp"
#include "System/Runtime/Serialization/zzzz__EnumDataContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractPairKey_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataMember_def.hpp"
#include "System/Runtime/Serialization/zzzz__EnumDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.Add
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Type*, ::StringW)>(&::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::Add)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6149e98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(),
                                                                                           { "Add", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.GetBaseContractName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlQualifiedName* (*)(::System::Type*)>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::GetBaseContractName)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x6149fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(),
                                                                                           { "GetBaseContractName", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x3fc;
  constexpr static std::size_t addrs = 0x6148b20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.get_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* (
    ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)()>(&::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_Members)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614a980;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_Members", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int64_t>* (::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_Values)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614a988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.get_IsFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_IsFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614a990;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_IsFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.set_IsFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)(bool)>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::set_IsFlags)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614a998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "set_IsFlags", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.get_IsULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_IsULong)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614a9a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_IsULong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.get_ChildElementNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XmlDictionaryString*> (::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_ChildElementNames)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x614a9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_ChildElementNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.ImportBaseType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::ImportBaseType)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x614a054;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(),
                                                                                           { "ImportBaseType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper.ImportDataMembers
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::ImportDataMembers)> {
  constexpr static std::size_t size = 0x7a4;
  constexpr static std::size_t addrs = 0x614a1dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "ImportDataMembers", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Xml::XmlQualifiedName*& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_baseContractName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseContractName;
}
constexpr ::System::Xml::XmlQualifiedName* const& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_baseContractName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseContractName;
}
constexpr void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_set_baseContractName(::System::Xml::XmlQualifiedName* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseContractName = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*&
System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_members() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* const&
System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_members() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___members;
}
constexpr void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_set_members(
    ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___members = value;
}
constexpr ::System::Collections::Generic::List_1<int64_t>*& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr ::System::Collections::Generic::List_1<int64_t>* const& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___values;
}
constexpr void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_set_values(::System::Collections::Generic::List_1<int64_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___values = value;
}
constexpr bool& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_isULong() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isULong;
}
constexpr bool const& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_isULong() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isULong;
}
constexpr void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_set_isULong(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isULong = value;
}
constexpr bool& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_isFlags() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFlags;
}
constexpr bool const& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_isFlags() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isFlags;
}
constexpr void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_set_isFlags(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isFlags = value;
}
constexpr bool& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_hasDataContract() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDataContract;
}
constexpr bool const& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_hasDataContract() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasDataContract;
}
constexpr void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_set_hasDataContract(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasDataContract = value;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*>& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_childElementNames() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNames;
}
constexpr ::ArrayW<::System::Xml::XmlDictionaryString*> const& System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_get_childElementNames() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___childElementNames;
}
constexpr void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::__cordl_internal_set_childElementNames(::ArrayW<::System::Xml::XmlDictionaryString*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___childElementNames = value;
}
inline void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::setStaticF_typeToName(
    ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Xml::XmlQualifiedName*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Xml::XmlQualifiedName*>*, "typeToName",
                                    ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Xml::XmlQualifiedName*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Xml::XmlQualifiedName*>*
System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::getStaticF_typeToName() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::System::Xml::XmlQualifiedName*>*, "typeToName",
                                           ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::setStaticF_nameToType(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Type*>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Type*>*, "nameToType",
                                    ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Type*>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Type*>*
System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::getStaticF_nameToType() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Type*>*, "nameToType",
                                           ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>();
}
inline void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::Add(::System::Type* type, ::StringW localName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(),
                                                                                         { "Add", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, type, localName);
}
inline ::System::Xml::XmlQualifiedName* System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::GetBaseContractName(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(),
                                                                                         { "GetBaseContractName", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlQualifiedName*>(nullptr, ___internal_method, type);
}
inline void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_Members() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_Members", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<int64_t>* System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_Values() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int64_t>*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_IsFlags() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_IsFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::set_IsFlags(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "set_IsFlags", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_IsULong() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_IsULong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Xml::XmlDictionaryString*> System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::get_ChildElementNames() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "get_ChildElementNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlDictionaryString*>>(this, ___internal_method);
}
inline void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::ImportBaseType(::System::Type* baseType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(),
                                                                                         { "ImportBaseType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseType);
}
inline void System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::ImportDataMembers() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(), { "ImportDataMembers", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*
System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper::EnumDataContract_EnumDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::EnumDataContract::*)(::System::Type*)>(&::System::Runtime::Serialization::EnumDataContract::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x6143180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.get_Members
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* (
    ::System::Runtime::Serialization::EnumDataContract::*)()>(&::System::Runtime::Serialization::EnumDataContract::get_Members)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6148f1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_Members", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.get_Values
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<int64_t>* (::System::Runtime::Serialization::EnumDataContract::*)()>(
    &::System::Runtime::Serialization::EnumDataContract::get_Values)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6148f34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_Values", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.get_IsFlags
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::EnumDataContract::*)()>(&::System::Runtime::Serialization::EnumDataContract::get_IsFlags)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6148f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_IsFlags", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.get_IsULong
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::EnumDataContract::*)()>(&::System::Runtime::Serialization::EnumDataContract::get_IsULong)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6148f64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_IsULong", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.get_ChildElementNames
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::ArrayW<::System::Xml::XmlDictionaryString*> (::System::Runtime::Serialization::EnumDataContract::*)()>(
    &::System::Runtime::Serialization::EnumDataContract::get_ChildElementNames)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6148f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_ChildElementNames", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.get_CanContainReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::EnumDataContract::*)()>(&::System::Runtime::Serialization::EnumDataContract::get_CanContainReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6148f94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.WriteEnumValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::EnumDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*)>(
    &::System::Runtime::Serialization::EnumDataContract::WriteEnumValue)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x6148f9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(),
                                                { "WriteEnumValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.ReadEnumValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::EnumDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*)>(
    &::System::Runtime::Serialization::EnumDataContract::ReadEnumValue)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x61493f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(),
                                                                                           { "ReadEnumValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.ReadEnumValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int64_t (::System::Runtime::Serialization::EnumDataContract::*)(::StringW, int32_t, int32_t)>(
    &::System::Runtime::Serialization::EnumDataContract::ReadEnumValue)> {
  constexpr static std::size_t size = 0x1e0;
  constexpr static std::size_t addrs = 0x61496bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(),
                                                             { "ReadEnumValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::EnumDataContract::*)(
    ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::EnumDataContract::Equals)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x614989c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::EnumDataContract::*)()>(&::System::Runtime::Serialization::EnumDataContract::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6149b84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::EnumDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                    ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::EnumDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6149b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::EnumDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::EnumDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                 ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::EnumDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x6149b9c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 6 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper*& System::Runtime::Serialization::EnumDataContract::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper* const& System::Runtime::Serialization::EnumDataContract::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Runtime::Serialization::EnumDataContract::__cordl_internal_set_helper(::System::Runtime::Serialization::EnumDataContract_EnumDataContractCriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Runtime::Serialization::EnumDataContract::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>* System::Runtime::Serialization::EnumDataContract::get_Members() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_Members", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::System::Runtime::Serialization::DataMember*>*>(this, ___internal_method);
}
inline ::System::Collections::Generic::List_1<int64_t>* System::Runtime::Serialization::EnumDataContract::get_Values() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_Values", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<int64_t>*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::EnumDataContract::get_IsFlags() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_IsFlags", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::EnumDataContract::get_IsULong() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_IsULong", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::ArrayW<::System::Xml::XmlDictionaryString*> System::Runtime::Serialization::EnumDataContract::get_ChildElementNames() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), { "get_ChildElementNames", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::System::Xml::XmlDictionaryString*>>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::EnumDataContract::get_CanContainReferences() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::EnumDataContract::WriteEnumValue(::System::Runtime::Serialization::XmlWriterDelegator* writer, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(),
                                              { "WriteEnumValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlWriterDelegator*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, writer, value);
}
inline ::System::Object* System::Runtime::Serialization::EnumDataContract::ReadEnumValue(::System::Runtime::Serialization::XmlReaderDelegator* reader) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(),
                                                                                         { "ReadEnumValue", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, reader);
}
inline int64_t System::Runtime::Serialization::EnumDataContract::ReadEnumValue(::StringW value, int32_t index, int32_t count) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(),
                                                           { "ReadEnumValue", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int64_t>(this, ___internal_method, value, index, count);
}
inline bool
System::Runtime::Serialization::EnumDataContract::Equals(::System::Object* other,
                                                         ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, checkedContracts);
}
inline int32_t System::Runtime::Serialization::EnumDataContract::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Runtime::Serialization::EnumDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                            ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::EnumDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                        ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::EnumDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context);
}
inline ::System::Runtime::Serialization::EnumDataContract* System::Runtime::Serialization::EnumDataContract::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::EnumDataContract*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::EnumDataContract::EnumDataContract() {}

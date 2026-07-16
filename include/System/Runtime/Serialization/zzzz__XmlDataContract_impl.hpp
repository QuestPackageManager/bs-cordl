#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlDataContract.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataContract_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Runtime/Serialization/zzzz__CreateXmlSerializableDelegate_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractPairKey_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlDataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerWriteContext_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlWriterDelegator_def.hpp"
#include "System/Xml/Schema/zzzz__XmlSchemaType_def.hpp"
#include "System/Xml/Serialization/zzzz__IXmlSerializable_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/Xml/zzzz__XmlQualifiedName_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x615c364;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(&::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x615d000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.set_XsdType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)(::System::Xml::Schema::XmlSchemaType*)>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_XsdType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615d110;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                                                           { "set_XsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_IsAnonymous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_IsAnonymous)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x615c904;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), { "get_IsAnonymous", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_HasRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_HasRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615d118;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.set_HasRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)(bool)>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_HasRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615d120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_TopLevelElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_TopLevelElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615d128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_TopLevelElementNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_TopLevelElementNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615d130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_CreateXmlSerializableDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::CreateXmlSerializableDelegate* (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_CreateXmlSerializableDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615d138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), { "get_CreateXmlSerializableDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.set_CreateXmlSerializableDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::CreateXmlSerializableDelegate*)>(&::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_CreateXmlSerializableDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615d140;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                             { "set_CreateXmlSerializableDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*&
System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_knownDataContracts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownDataContracts;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* const&
System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_knownDataContracts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___knownDataContracts;
}
constexpr void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_set_knownDataContracts(
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___knownDataContracts = value;
}
constexpr bool& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_isKnownTypeAttributeChecked() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKnownTypeAttributeChecked;
}
constexpr bool const& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_isKnownTypeAttributeChecked() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isKnownTypeAttributeChecked;
}
constexpr void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_set_isKnownTypeAttributeChecked(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isKnownTypeAttributeChecked = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_topLevelElementName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevelElementName;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_topLevelElementName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevelElementName;
}
constexpr void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_set_topLevelElementName(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topLevelElementName = value;
}
constexpr ::System::Xml::XmlDictionaryString*& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_topLevelElementNamespace() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevelElementNamespace;
}
constexpr ::System::Xml::XmlDictionaryString* const& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_topLevelElementNamespace() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevelElementNamespace;
}
constexpr void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_set_topLevelElementNamespace(::System::Xml::XmlDictionaryString* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___topLevelElementNamespace = value;
}
constexpr bool& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_isTopLevelElementNullable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTopLevelElementNullable;
}
constexpr bool const& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_isTopLevelElementNullable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___isTopLevelElementNullable;
}
constexpr void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_set_isTopLevelElementNullable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___isTopLevelElementNullable = value;
}
constexpr ::System::Xml::Schema::XmlSchemaType*& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_xsdType() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsdType;
}
constexpr ::System::Xml::Schema::XmlSchemaType* const& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_xsdType() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___xsdType;
}
constexpr void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_set_xsdType(::System::Xml::Schema::XmlSchemaType* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___xsdType = value;
}
constexpr bool& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_hasRoot() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasRoot;
}
constexpr bool const& System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_hasRoot() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hasRoot;
}
constexpr void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_set_hasRoot(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hasRoot = value;
}
constexpr ::System::Runtime::Serialization::CreateXmlSerializableDelegate*&
System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_createXmlSerializable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createXmlSerializable;
}
constexpr ::System::Runtime::Serialization::CreateXmlSerializableDelegate* const&
System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_get_createXmlSerializable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___createXmlSerializable;
}
constexpr void
System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::__cordl_internal_set_createXmlSerializable(::System::Runtime::Serialization::CreateXmlSerializableDelegate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___createXmlSerializable = value;
}
inline void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_KnownDataContracts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_XsdType(::System::Xml::Schema::XmlSchemaType* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                                                         { "set_XsdType", {}, { ::i2c::type_of<::System::Xml::Schema::XmlSchemaType*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_IsAnonymous() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), { "get_IsAnonymous", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_HasRoot() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_HasRoot(bool value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_TopLevelElementName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_TopLevelElementNamespace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_CreateXmlSerializableDelegate() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(), { "get_CreateXmlSerializableDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_CreateXmlSerializableDelegate(::System::Runtime::Serialization::CreateXmlSerializableDelegate* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(),
                                                           { "set_CreateXmlSerializableDelegate", {}, { ::i2c::type_of<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::XmlDataContract_XmlDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataContract::*)(::System::Type*)>(&::System::Runtime::Serialization::XmlDataContract::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x615c2b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (
    ::System::Runtime::Serialization::XmlDataContract::*)()>(&::System::Runtime::Serialization::XmlDataContract::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x615c8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_IsAnonymous
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)()>(&::System::Runtime::Serialization::XmlDataContract::get_IsAnonymous)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x615c8e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { "get_IsAnonymous", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_HasRoot
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)()>(&::System::Runtime::Serialization::XmlDataContract::get_HasRoot)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x615c914;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_TopLevelElementName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_TopLevelElementName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x615c930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_TopLevelElementNamespace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_TopLevelElementNamespace)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x615c94c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 12 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_CreateXmlSerializableDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::CreateXmlSerializableDelegate* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_CreateXmlSerializableDelegate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x615c968;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { "get_CreateXmlSerializableDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_CanContainReferences
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)()>(&::System::Runtime::Serialization::XmlDataContract::get_CanContainReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x615caf4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_IsBuiltInDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)()>(&::System::Runtime::Serialization::XmlDataContract::get_IsBuiltInDataContract)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x615cafc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)(
    ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::XmlDataContract::Equals)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x615cbe0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 19 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlDataContract::*)()>(&::System::Runtime::Serialization::XmlDataContract::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x615cd2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlDataContract::*)(::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*,
                                                                                                                   ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::XmlDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x615cd40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::System::Runtime::Serialization::XmlDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*,
                                                                                                                                ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::XmlDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x615ce30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 6 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.GenerateCreateXmlSerializableDelegate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::CreateXmlSerializableDelegate* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::GenerateCreateXmlSerializableDelegate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x615ca7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { "GenerateCreateXmlSerializableDelegate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract._GenerateCreateXmlSerializableDelegate_b__39_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Xml::Serialization::IXmlSerializable* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::_GenerateCreateXmlSerializableDelegate_b__39_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x615cfac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { "<GenerateCreateXmlSerializableDelegate>b__39_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*& System::Runtime::Serialization::XmlDataContract::__cordl_internal_get_helper() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* const& System::Runtime::Serialization::XmlDataContract::__cordl_internal_get_helper() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___helper;
}
constexpr void System::Runtime::Serialization::XmlDataContract::__cordl_internal_set_helper(::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___helper = value;
}
inline void System::Runtime::Serialization::XmlDataContract::_ctor(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { ".ctor", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::XmlDataContract::get_KnownDataContracts() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*>(this,
                                                                                                                                                                               ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract::get_IsAnonymous() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { "get_IsAnonymous", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract::get_HasRoot() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::XmlDataContract::get_TopLevelElementName() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::XmlDataContract::get_TopLevelElementNamespace() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 12 })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* System::Runtime::Serialization::XmlDataContract::get_CreateXmlSerializableDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { "get_CreateXmlSerializableDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract::get_CanContainReferences() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract::get_IsBuiltInDataContract() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool
System::Runtime::Serialization::XmlDataContract::Equals(::System::Object* other,
                                                        ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 19 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, other, checkedContracts);
}
inline int32_t System::Runtime::Serialization::XmlDataContract::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                           ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, xmlWriter, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::XmlDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                       ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), 6 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, context);
}
inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* System::Runtime::Serialization::XmlDataContract::GenerateCreateXmlSerializableDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { "GenerateCreateXmlSerializableDelegate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>(this, ___internal_method);
}
inline ::System::Xml::Serialization::IXmlSerializable* System::Runtime::Serialization::XmlDataContract::_GenerateCreateXmlSerializableDelegate_b__39_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlDataContract*>(), { "<GenerateCreateXmlSerializableDelegate>b__39_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::IXmlSerializable*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlDataContract* System::Runtime::Serialization::XmlDataContract::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlDataContract*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlDataContract::XmlDataContract() {}

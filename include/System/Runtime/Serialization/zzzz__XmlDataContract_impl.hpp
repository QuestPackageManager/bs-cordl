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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::_ctor)> {
  constexpr static std::size_t size = 0x564;
  constexpr static std::size_t addrs = 0x5fad024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::Dictionary_2<
    ::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x5fadcc0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.set_XsdType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)(
    ::System::Xml::Schema::XmlSchemaType*)>(&::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_XsdType)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faddd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), "set_XsdType",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_IsAnonymous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_IsAnonymous)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5fad5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                                 "get_IsAnonymous", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_HasRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_HasRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faddd8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.set_HasRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)(bool)>(
    &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_HasRoot)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fadde0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_TopLevelElementName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryString* (
    ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(&::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_TopLevelElementName)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fadde8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_TopLevelElementNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_TopLevelElementNamespace)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faddf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(
        ::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.get_CreateXmlSerializableDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::CreateXmlSerializableDelegate* (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)()>(
        &::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_CreateXmlSerializableDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5faddf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                                 "get_CreateXmlSerializableDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper.set_CreateXmlSerializableDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::*)(
    ::System::Runtime::Serialization::CreateXmlSerializableDelegate*)>(&::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_CreateXmlSerializableDelegate)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fade00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), "set_CreateXmlSerializableDelegate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>::get() })));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___knownDataContracts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___topLevelElementName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___topLevelElementNamespace)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___xsdType)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___createXmlSerializable)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_KnownDataContracts() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*, false>(
      this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_XsdType(::System::Xml::Schema::XmlSchemaType* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), "set_XsdType",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Xml::Schema::XmlSchemaType*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_IsAnonymous() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                               "get_IsAnonymous", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_HasRoot() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_HasRoot(bool value) {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_TopLevelElementName() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_TopLevelElementNamespace() {
  auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                         ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::get_CreateXmlSerializableDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(),
                                               "get_CreateXmlSerializableDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CreateXmlSerializableDelegate*, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::set_CreateXmlSerializableDelegate(::System::Runtime::Serialization::CreateXmlSerializableDelegate* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>::get(), "set_CreateXmlSerializableDelegate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::CreateXmlSerializableDelegate*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper* System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlDataContract_XmlDataContractCriticalHelper::XmlDataContract_XmlDataContractCriticalHelper() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlDataContract::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlDataContract::_ctor)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x5facf74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_KnownDataContracts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_KnownDataContracts)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fad588;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_IsAnonymous
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_IsAnonymous)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5fad5a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                                               "get_IsAnonymous", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_HasRoot
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_HasRoot)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fad5d4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_TopLevelElementName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_TopLevelElementName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fad5f0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_TopLevelElementNamespace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::XmlDictionaryString* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_TopLevelElementNamespace)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5fad60c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 12));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_CreateXmlSerializableDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::CreateXmlSerializableDelegate* (
    ::System::Runtime::Serialization::XmlDataContract::*)()>(&::System::Runtime::Serialization::XmlDataContract::get_CreateXmlSerializableDelegate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5fad628;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), "get_CreateXmlSerializableDelegate",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_CanContainReferences
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_CanContainReferences)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fad7b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.get_IsBuiltInDataContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::get_IsBuiltInDataContract)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5fad7bc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlDataContract::*)(
    ::System::Object*, ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>*)>(
    &::System::Runtime::Serialization::XmlDataContract::Equals)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x5fad8a0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 19));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::GetHashCode)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5fad9ec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.WriteXmlValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlDataContract::*)(
    ::System::Runtime::Serialization::XmlWriterDelegator*, ::System::Object*, ::System::Runtime::Serialization::XmlObjectSerializerWriteContext*)>(
    &::System::Runtime::Serialization::XmlDataContract::WriteXmlValue)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5fada00;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.ReadXmlValue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlDataContract::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Runtime::Serialization::XmlObjectSerializerReadContext*)>(
    &::System::Runtime::Serialization::XmlDataContract::ReadXmlValue)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fadaf0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract.GenerateCreateXmlSerializableDelegate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::CreateXmlSerializableDelegate* (
    ::System::Runtime::Serialization::XmlDataContract::*)()>(&::System::Runtime::Serialization::XmlDataContract::GenerateCreateXmlSerializableDelegate)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5fad73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                 "GenerateCreateXmlSerializableDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlDataContract._GenerateCreateXmlSerializableDelegate_b__39_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Xml::Serialization::IXmlSerializable* (::System::Runtime::Serialization::XmlDataContract::*)()>(
    &::System::Runtime::Serialization::XmlDataContract::_GenerateCreateXmlSerializableDelegate_b__39_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fadc6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                 "<GenerateCreateXmlSerializableDelegate>b__39_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___helper)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlDataContract::_ctor(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, type);
}
inline ::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*
System::Runtime::Serialization::XmlDataContract::get_KnownDataContracts() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::Dictionary_2<::System::Xml::XmlQualifiedName*, ::System::Runtime::Serialization::DataContract*>*, false>(
      this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract::get_IsAnonymous() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                                                             "get_IsAnonymous", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract::get_HasRoot() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::XmlDataContract::get_TopLevelElementName() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*, false>(this, ___internal_method);
}
inline ::System::Xml::XmlDictionaryString* System::Runtime::Serialization::XmlDataContract::get_TopLevelElementNamespace() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 12)));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::XmlDictionaryString*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* System::Runtime::Serialization::XmlDataContract::get_CreateXmlSerializableDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), "get_CreateXmlSerializableDelegate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CreateXmlSerializableDelegate*, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract::get_CanContainReferences() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlDataContract::get_IsBuiltInDataContract() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool
System::Runtime::Serialization::XmlDataContract::Equals(::System::Object* other,
                                                        ::System::Collections::Generic::Dictionary_2<::System::Runtime::Serialization::DataContractPairKey*, ::System::Object*>* checkedContracts) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 19)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other, checkedContracts);
}
inline int32_t System::Runtime::Serialization::XmlDataContract::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void System::Runtime::Serialization::XmlDataContract::WriteXmlValue(::System::Runtime::Serialization::XmlWriterDelegator* xmlWriter, ::System::Object* obj,
                                                                           ::System::Runtime::Serialization::XmlObjectSerializerWriteContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, xmlWriter, obj, context);
}
inline ::System::Object* System::Runtime::Serialization::XmlDataContract::ReadXmlValue(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                       ::System::Runtime::Serialization::XmlObjectSerializerReadContext* context) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, context);
}
inline ::System::Runtime::Serialization::CreateXmlSerializableDelegate* System::Runtime::Serialization::XmlDataContract::GenerateCreateXmlSerializableDelegate() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                               "GenerateCreateXmlSerializableDelegate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::CreateXmlSerializableDelegate*, false>(this, ___internal_method);
}
inline ::System::Xml::Serialization::IXmlSerializable* System::Runtime::Serialization::XmlDataContract::_GenerateCreateXmlSerializableDelegate_b__39_0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlDataContract*>::get(),
                                               "<GenerateCreateXmlSerializableDelegate>b__39_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Xml::Serialization::IXmlSerializable*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlDataContract* System::Runtime::Serialization::XmlDataContract::New_ctor(::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlDataContract*>(type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlDataContract::XmlDataContract() {}

#pragma once
// IWYU pragma private; include "System/Runtime/Serialization/XmlObjectSerializerReadContextComplex.hpp"
#include "System/Runtime/Serialization/Formatters/zzzz__FormatterAssemblyStyle_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContext_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContextComplex_def.hpp"
#include "System/Collections/zzzz__Hashtable_def.hpp"
#include "System/Reflection/zzzz__AssemblyName_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractSerializer_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContract_def.hpp"
#include "System/Runtime/Serialization/zzzz__IDataContractSurrogate_def.hpp"
#include "System/Runtime/Serialization/zzzz__ISurrogateSelector_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationMode_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerReadContextComplex_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlReaderDelegator_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__RuntimeTypeHandle_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::*)(
    ::System::Reflection::Assembly*)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb8908;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver.ResolveType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::*)(::System::Reflection::Assembly*, ::StringW, bool)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::ResolveType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5fb8e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>::get(), "ResolveType",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::__cordl_internal_get_topLevelAssembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevelAssembly;
}
constexpr ::System::Reflection::Assembly* const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::__cordl_internal_get_topLevelAssembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___topLevelAssembly;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::__cordl_internal_set_topLevelAssembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___topLevelAssembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::_ctor(::System::Reflection::Assembly* topLevelAssembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, topLevelAssembly);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::ResolveType(::System::Reflection::Assembly* assembly,
                                                                                                                                       ::StringW simpleTypeName, bool ignoreCase) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>::get(), "ResolveType",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assembly, simpleTypeName, ignoreCase);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::New_ctor(::System::Reflection::Assembly* topLevelAssembly) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>(topLevelAssembly));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::*)(
    ::System::Reflection::Assembly*, ::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb8994;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo.get_Assembly
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Reflection::Assembly* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::*)()>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::get_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb8eac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>::get(), "get_Assembly",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo.get_Type
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::*)()>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb8eb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>::get(), "get_Type",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::Assembly*& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::__cordl_internal_get_assembly() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr ::System::Reflection::Assembly* const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::__cordl_internal_get_assembly() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assembly;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::__cordl_internal_set_assembly(::System::Reflection::Assembly* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assembly)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Type*& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::__cordl_internal_get_type() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr ::System::Type* const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::__cordl_internal_get_type() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___type;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::__cordl_internal_set_type(::System::Type* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___type)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::_ctor(::System::Reflection::Assembly* assembly, ::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>::get(),
                                  ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assembly, type);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::get_Assembly() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>::get(),
                                  "get_Assembly", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>::get(),
                                  "get_Type", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::New_ctor(::System::Reflection::Assembly* assembly, ::System::Type* type) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>(assembly, type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::*)(
    ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb87d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>::get(), ".ctor",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::*)(
    ::System::Object*)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5fb8ebc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5fb8f78;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>::get(),
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>::get(), 2));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::__cordl_internal_get_assemblyName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr ::StringW const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::__cordl_internal_get_assemblyName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyName;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::__cordl_internal_set_assemblyName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___assemblyName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::__cordl_internal_get_typeName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr ::StringW const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::__cordl_internal_get_typeName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___typeName;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::__cordl_internal_set_typeName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___typeName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::_ctor(::StringW assemblyName, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>::get(), ".ctor",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, assemblyName, typeName);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(
      il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::New_ctor(::StringW assemblyName, ::StringW typeName) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(assemblyName, typeName));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(
    ::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5fb2b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractSerializer*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractResolver*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.get_Mode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::SerializationMode (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)()>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5fb7510;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.GetDataContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(int32_t, ::System::RuntimeTypeHandle)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetDataContract)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5fb7518;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 9));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.GetDataContract
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::RuntimeTypeHandle, ::System::Type*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetDataContract)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5fb76c4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, int32_t, ::System::RuntimeTypeHandle, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5fb7870;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5fb8070;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserialize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*, ::System::Runtime::Serialization::DataContract*,
                                                                                ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x5fb813c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 15));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserializeInSharedTypeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, int32_t, ::System::Type*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserializeInSharedTypeMode)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x5fb7bf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "InternalDeserializeInSharedTypeMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserializeWithSurrogate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*,
                                                                                                               ::System::Runtime::Serialization::DataContract*, ::StringW, ::StringW)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserializeWithSurrogate)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x5fb796c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "InternalDeserializeWithSurrogate",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveDataContractTypeInSharedTypeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::StringW, ::StringW, ::ByRef<::System::Reflection::Assembly*>)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractTypeInSharedTypeMode)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x5fb81c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "ResolveDataContractTypeInSharedTypeMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Reflection::Assembly*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveDataContractInSharedTypeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::StringW, ::StringW, ::ByRef<::System::Reflection::Assembly*>, ::ByRef<::System::Type*>)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractInSharedTypeMode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fb816c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "ResolveDataContractInSharedTypeMode",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Reflection::Assembly*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Type*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveDataContractFromTypeName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)()>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractFromTypeName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5fb899c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.CheckIfTypeSerializableForSharedTypeMode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckIfTypeSerializableForSharedTypeMode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5fb89f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "CheckIfTypeSerializableForSharedTypeMode",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.CheckIfTypeSerializable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Type*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckIfTypeSerializable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x5fb8acc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 10));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.GetSurrogatedType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetSurrogatedType)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5fb8c0c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 11));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.GetArraySize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetArraySize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5fb8d2c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveSimpleAssemblyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::System::Reflection::AssemblyName*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveSimpleAssemblyName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5fb8d54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "ResolveSimpleAssemblyName",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveSimpleAssemblyName
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveSimpleAssemblyName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5fb87e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "ResolveSimpleAssemblyName",
                                   std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.CheckTypeForwardedTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckTypeForwardedTo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5fb8910;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                                 "CheckTypeForwardedTo", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
constexpr bool& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_preserveObjectReferences() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveObjectReferences;
}
constexpr bool const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_preserveObjectReferences() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___preserveObjectReferences;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_set_preserveObjectReferences(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___preserveObjectReferences = value;
}
constexpr ::System::Runtime::Serialization::IDataContractSurrogate*& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_dataContractSurrogate() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractSurrogate;
}
constexpr ::System::Runtime::Serialization::IDataContractSurrogate* const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_dataContractSurrogate() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dataContractSurrogate;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_set_dataContractSurrogate(::System::Runtime::Serialization::IDataContractSurrogate* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dataContractSurrogate)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::SerializationMode& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_mode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr ::System::Runtime::Serialization::SerializationMode const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_mode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___mode;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_set_mode(::System::Runtime::Serialization::SerializationMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___mode = value;
}
constexpr ::System::Runtime::Serialization::SerializationBinder*& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_binder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binder;
}
constexpr ::System::Runtime::Serialization::SerializationBinder* const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_binder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___binder;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_set_binder(::System::Runtime::Serialization::SerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___binder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector*& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_surrogateSelector() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateSelector;
}
constexpr ::System::Runtime::Serialization::ISurrogateSelector* const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_surrogateSelector() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateSelector;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_set_surrogateSelector(::System::Runtime::Serialization::ISurrogateSelector* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___surrogateSelector)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_assemblyFormat() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyFormat;
}
constexpr ::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle const&
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_assemblyFormat() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___assemblyFormat;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_set_assemblyFormat(::System::Runtime::Serialization::Formatters::FormatterAssemblyStyle value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___assemblyFormat = value;
}
constexpr ::System::Collections::Hashtable*& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_surrogateDataContracts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateDataContracts;
}
constexpr ::System::Collections::Hashtable* const& System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_get_surrogateDataContracts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___surrogateDataContracts;
}
constexpr void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::__cordl_internal_set_surrogateDataContracts(::System::Collections::Hashtable* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___surrogateDataContracts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::setStaticF_dataContractTypeCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "dataContractTypeCache",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::getStaticF_dataContractTypeCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "dataContractTypeCache",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get>();
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                         ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                         ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractSerializer*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContractResolver*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, serializer, rootTypeDataContract, dataContractResolver);
}
inline ::System::Runtime::Serialization::SerializationMode System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::get_Mode() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationMode, false>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 9)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*, false>(this, ___internal_method, id, typeHandle);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetDataContract(::System::RuntimeTypeHandle typeHandle,
                                                                                                                                              ::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*, false>(this, ___internal_method, typeHandle, type);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                    int32_t declaredTypeID, ::System::RuntimeTypeHandle declaredTypeHandle,
                                                                                                                    ::StringW name, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, declaredTypeID, declaredTypeHandle, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                    ::System::Type* declaredType, ::StringW name, ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, declaredType, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                    ::System::Type* declaredType,
                                                                                                                    ::System::Runtime::Serialization::DataContract* dataContract, ::StringW name,
                                                                                                                    ::StringW ns) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 15)));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, declaredType, dataContract, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserializeInSharedTypeMode(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                                    int32_t declaredTypeID, ::System::Type* declaredType,
                                                                                                                                    ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "InternalDeserializeInSharedTypeMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, declaredTypeID, declaredType, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserializeWithSurrogate(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                                 ::System::Type* declaredType,
                                                                                                                                 ::System::Runtime::Serialization::DataContract* surrogateDataContract,
                                                                                                                                 ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "InternalDeserializeWithSurrogate",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::XmlReaderDelegator*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::Serialization::DataContract*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method, xmlReader, declaredType, surrogateDataContract, name, ns);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractTypeInSharedTypeMode(::StringW assemblyName, ::StringW typeName,
                                                                                                                                      ::ByRef<::System::Reflection::Assembly*> assembly) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "ResolveDataContractTypeInSharedTypeMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Reflection::Assembly*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, assemblyName, typeName, assembly);
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractInSharedTypeMode(::StringW assemblyName, ::StringW typeName,
                                                                                                           ::ByRef<::System::Reflection::Assembly*> assembly, ::ByRef<::System::Type*> type) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "ResolveDataContractInSharedTypeMode",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Reflection::Assembly*>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Type*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*, false>(this, ___internal_method, assemblyName, typeName, assembly, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractFromTypeName() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*, false>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckIfTypeSerializableForSharedTypeMode(::System::Type* memberType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "CheckIfTypeSerializableForSharedTypeMode",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, memberType);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckIfTypeSerializable(::System::Type* memberType, bool isMemberTypeSerializable) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 10)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, memberType, isMemberTypeSerializable);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetSurrogatedType(::System::Type* type) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 11)));
  return ::cordl_internals::RunMethodRethrow<::System::Type*, false>(this, ___internal_method, type);
}
inline int32_t System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetArraySize() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* assemblyName) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "ResolveSimpleAssemblyName",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::AssemblyName*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, assemblyName);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveSimpleAssemblyName(::StringW assemblyName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(), "ResolveSimpleAssemblyName",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*, false>(nullptr, ___internal_method, assemblyName);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckTypeForwardedTo(::System::Reflection::Assembly* sourceAssembly,
                                                                                                        ::System::Reflection::Assembly* destinationAssembly, ::System::Type* resolvedType) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>::get(),
                                               "CheckTypeForwardedTo", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Reflection::Assembly*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, sourceAssembly, destinationAssembly, resolvedType);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(serializer, rootTypeDataContract, dataContractResolver));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::XmlObjectSerializerReadContextComplex() {}

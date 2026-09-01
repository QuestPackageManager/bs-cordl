#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\XmlObjectSerializerReadContextComplex.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::*)(::System::Reflection::Assembly*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616d460;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver.ResolveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::*)(::System::Reflection::Assembly*, ::StringW, bool)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::ResolveType)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x616d99c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>(),
                                                             { "ResolveType", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
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
  this->___topLevelAssembly = value;
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::_ctor(::System::Reflection::Assembly* topLevelAssembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, topLevelAssembly);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::ResolveType(::System::Reflection::Assembly* assembly,
                                                                                                                                       ::StringW simpleTypeName, bool ignoreCase) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>(),
                                                           { "ResolveType", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, assembly, simpleTypeName, ignoreCase);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::New_ctor(::System::Reflection::Assembly* topLevelAssembly) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver*>(topLevelAssembly));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver::XmlObjectSerializerReadContextComplex_TopLevelAssemblyTypeResolver() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::*)(
    ::System::Reflection::Assembly*, ::System::Type*)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616d4ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo.get_Assembly
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::get_Assembly)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616da04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>(), { "get_Assembly", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo.get_Type
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::get_Type)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616da0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>(), { "get_Type", {}, {} })));
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
  this->___assembly = value;
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
  this->___type = value;
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::_ctor(::System::Reflection::Assembly* assembly, ::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assembly, type);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::get_Assembly() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>(), { "get_Assembly", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(this, ___internal_method);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::get_Type() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>(), { "get_Type", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::New_ctor(::System::Reflection::Assembly* assembly, ::System::Type* type) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo*>(assembly, type));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeInfo() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616d330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::*)(::System::Object*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x616da14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(),
                                                            { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::GetHashCode)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x616dad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(),
                                                            { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(), 2 }));
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
  this->___assemblyName = value;
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
  this->___typeName = value;
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::_ctor(::StringW assemblyName, ::StringW typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, assemblyName, typeName);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, obj);
}
inline int32_t System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass,
                                                           { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::New_ctor(::StringW assemblyName, ::StringW typeName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey*>(assemblyName, typeName));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey::XmlObjectSerializerReadContextComplex_XmlObjectDataContractTypeKey() {}
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(
    ::System::Runtime::Serialization::DataContractSerializer*, ::System::Runtime::Serialization::DataContract*, ::System::Runtime::Serialization::DataContractResolver*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x61676d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                { ".ctor",
                                                  {},
                                                  { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                    ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.get_Mode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::SerializationMode (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::get_Mode)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x616c068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(int32_t, ::System::RuntimeTypeHandle)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetDataContract)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x616c070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 9 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.GetDataContract
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::RuntimeTypeHandle, ::System::Type*)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetDataContract)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x616c21c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, int32_t, ::System::RuntimeTypeHandle, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x616c3c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 13 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x616cbc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 14 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*, ::System::Runtime::Serialization::DataContract*,
                                                                                ::StringW, ::StringW)>(&::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x616cc94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 15 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserializeInSharedTypeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, int32_t, ::System::Type*, ::StringW, ::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserializeInSharedTypeMode)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x616c748;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                           { "InternalDeserializeInSharedTypeMode",
                                                                                             {},
                                                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<int32_t>(),
                                                                                               ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.InternalDeserializeWithSurrogate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Object* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Runtime::Serialization::XmlReaderDelegator*, ::System::Type*,
                                                                                                               ::System::Runtime::Serialization::DataContract*, ::StringW, ::StringW)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserializeWithSurrogate)> {
  constexpr static std::size_t size = 0x284;
  constexpr static std::size_t addrs = 0x616c4c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                             { "InternalDeserializeWithSurrogate",
                                                               {},
                                                               { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                                                 ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveDataContractTypeInSharedTypeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::StringW, ::StringW, ::by_ref<::System::Reflection::Assembly*>)>(
        &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractTypeInSharedTypeMode)> {
  constexpr static std::size_t size = 0x610;
  constexpr static std::size_t addrs = 0x616cd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
            { "ResolveDataContractTypeInSharedTypeMode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Reflection::Assembly*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveDataContractInSharedTypeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (
    ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::StringW, ::StringW, ::by_ref<::System::Reflection::Assembly*>, ::by_ref<::System::Type*>)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractInSharedTypeMode)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x616ccc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                             { "ResolveDataContractInSharedTypeMode",
                                                               {},
                                                               { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Reflection::Assembly*>>(),
                                                                 ::i2c::type_of<::by_ref<::System::Type*>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveDataContractFromTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Runtime::Serialization::DataContract* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractFromTypeName)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x616d4f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 18 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.CheckIfTypeSerializableForSharedTypeMode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckIfTypeSerializableForSharedTypeMode)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x616d550;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                           { "CheckIfTypeSerializableForSharedTypeMode", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.CheckIfTypeSerializable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Type*, bool)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckIfTypeSerializable)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x616d624;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 10 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.GetSurrogatedType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)(::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetSurrogatedType)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x616d764;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 11 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.GetArraySize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::*)()>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetArraySize)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x616d884;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 17 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveSimpleAssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::System::Reflection::AssemblyName*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveSimpleAssemblyName)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x616d8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                           { "ResolveSimpleAssemblyName", {}, { ::i2c::type_of<::System::Reflection::AssemblyName*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.ResolveSimpleAssemblyName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Reflection::Assembly* (*)(::StringW)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveSimpleAssemblyName)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x616d338;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                           { "ResolveSimpleAssemblyName", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex.CheckTypeForwardedTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::System::Reflection::Assembly*, ::System::Reflection::Assembly*, ::System::Type*)>(
    &::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckTypeForwardedTo)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x616d468;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                         { "CheckTypeForwardedTo", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
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
  this->___dataContractSurrogate = value;
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
  this->___binder = value;
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
  this->___surrogateSelector = value;
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
  this->___surrogateDataContracts = value;
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::setStaticF_dataContractTypeCache(::System::Collections::Hashtable* value) {
  ::cordl_internals::setStaticField<::System::Collections::Hashtable*, "dataContractTypeCache", ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(
      std::forward<::System::Collections::Hashtable*>(value));
}
inline ::System::Collections::Hashtable* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::getStaticF_dataContractTypeCache() {
  return ::cordl_internals::getStaticField<::System::Collections::Hashtable*, "dataContractTypeCache", ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>();
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                         ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                         ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                              { ".ctor",
                                                {},
                                                { ::i2c::type_of<::System::Runtime::Serialization::DataContractSerializer*>(), ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(),
                                                  ::i2c::type_of<::System::Runtime::Serialization::DataContractResolver*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializer, rootTypeDataContract, dataContractResolver);
}
inline ::System::Runtime::Serialization::SerializationMode System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::get_Mode() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::SerializationMode>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetDataContract(int32_t id, ::System::RuntimeTypeHandle typeHandle) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 9 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, id, typeHandle);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetDataContract(::System::RuntimeTypeHandle typeHandle,
                                                                                                                                              ::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, typeHandle, type);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                    int32_t declaredTypeID, ::System::RuntimeTypeHandle declaredTypeHandle,
                                                                                                                    ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 13 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, declaredTypeID, declaredTypeHandle, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                    ::System::Type* declaredType, ::StringW name, ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 14 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, declaredType, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserialize(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                    ::System::Type* declaredType,
                                                                                                                    ::System::Runtime::Serialization::DataContract* dataContract, ::StringW name,
                                                                                                                    ::StringW ns) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 15 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, declaredType, dataContract, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserializeInSharedTypeMode(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                                    int32_t declaredTypeID, ::System::Type* declaredType,
                                                                                                                                    ::StringW name, ::StringW ns) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                         { "InternalDeserializeInSharedTypeMode",
                                                                                           {},
                                                                                           { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<int32_t>(),
                                                                                             ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, declaredTypeID, declaredType, name, ns);
}
inline ::System::Object* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::InternalDeserializeWithSurrogate(::System::Runtime::Serialization::XmlReaderDelegator* xmlReader,
                                                                                                                                 ::System::Type* declaredType,
                                                                                                                                 ::System::Runtime::Serialization::DataContract* surrogateDataContract,
                                                                                                                                 ::StringW name, ::StringW ns) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                           { "InternalDeserializeWithSurrogate",
                                                             {},
                                                             { ::i2c::type_of<::System::Runtime::Serialization::XmlReaderDelegator*>(), ::i2c::type_of<::System::Type*>(),
                                                               ::i2c::type_of<::System::Runtime::Serialization::DataContract*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, xmlReader, declaredType, surrogateDataContract, name, ns);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractTypeInSharedTypeMode(::StringW assemblyName, ::StringW typeName,
                                                                                                                                      ::by_ref<::System::Reflection::Assembly*> assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                       { "ResolveDataContractTypeInSharedTypeMode", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Reflection::Assembly*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, assemblyName, typeName, assembly);
}
inline ::System::Runtime::Serialization::DataContract*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractInSharedTypeMode(::StringW assemblyName, ::StringW typeName,
                                                                                                           ::by_ref<::System::Reflection::Assembly*> assembly, ::by_ref<::System::Type*> type) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                          { "ResolveDataContractInSharedTypeMode",
                            {},
                            { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::by_ref<::System::Reflection::Assembly*>>(), ::i2c::type_of<::by_ref<::System::Type*>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method, assemblyName, typeName, assembly, type);
}
inline ::System::Runtime::Serialization::DataContract* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveDataContractFromTypeName() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 18 })));
  return ::cordl_internals::RunMethodRethrow<::System::Runtime::Serialization::DataContract*>(this, ___internal_method);
}
inline bool System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckIfTypeSerializableForSharedTypeMode(::System::Type* memberType) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                         { "CheckIfTypeSerializableForSharedTypeMode", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, memberType);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckIfTypeSerializable(::System::Type* memberType, bool isMemberTypeSerializable) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 10 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberType, isMemberTypeSerializable);
}
inline ::System::Type* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetSurrogatedType(::System::Type* type) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 11 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, type);
}
inline int32_t System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::GetArraySize() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(), 17 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveSimpleAssemblyName(::System::Reflection::AssemblyName* assemblyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                         { "ResolveSimpleAssemblyName", {}, { ::i2c::type_of<::System::Reflection::AssemblyName*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyName);
}
inline ::System::Reflection::Assembly* System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::ResolveSimpleAssemblyName(::StringW assemblyName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                                                                                         { "ResolveSimpleAssemblyName", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Reflection::Assembly*>(nullptr, ___internal_method, assemblyName);
}
inline void System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::CheckTypeForwardedTo(::System::Reflection::Assembly* sourceAssembly,
                                                                                                        ::System::Reflection::Assembly* destinationAssembly, ::System::Type* resolvedType) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(
                       ::i2c::class_of<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(),
                       { "CheckTypeForwardedTo", {}, { ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Reflection::Assembly*>(), ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, sourceAssembly, destinationAssembly, resolvedType);
}
inline ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*
System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::New_ctor(::System::Runtime::Serialization::DataContractSerializer* serializer,
                                                                                ::System::Runtime::Serialization::DataContract* rootTypeDataContract,
                                                                                ::System::Runtime::Serialization::DataContractResolver* dataContractResolver) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex*>(serializer, rootTypeDataContract, dataContractResolver));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::XmlObjectSerializerReadContextComplex::XmlObjectSerializerReadContextComplex() {}

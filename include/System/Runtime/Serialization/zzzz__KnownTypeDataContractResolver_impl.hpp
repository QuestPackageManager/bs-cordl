#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\KnownTypeDataContractResolver.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_impl.hpp"
#include "System/Runtime/Serialization/zzzz__KnownTypeDataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Runtime/Serialization/zzzz__XmlObjectSerializerContext_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::KnownTypeDataContractResolver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::KnownTypeDataContractResolver::*)(::System::Runtime::Serialization::XmlObjectSerializerContext*)>(
    &::System::Runtime::Serialization::KnownTypeDataContractResolver::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6157e74;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::KnownTypeDataContractResolver.TryResolveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::KnownTypeDataContractResolver::*)(
    ::System::Type*, ::System::Type*, ::System::Runtime::Serialization::DataContractResolver*, ::by_ref<::System::Xml::XmlDictionaryString*>, ::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::KnownTypeDataContractResolver::TryResolveType)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x6157e7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::KnownTypeDataContractResolver.ResolveName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::System::Runtime::Serialization::KnownTypeDataContractResolver::*)(::StringW, ::StringW, ::System::Type*, ::System::Runtime::Serialization::DataContractResolver*)>(
        &::System::Runtime::Serialization::KnownTypeDataContractResolver::ResolveName)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x6158000;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(), 5 }));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::XmlObjectSerializerContext*& System::Runtime::Serialization::KnownTypeDataContractResolver::__cordl_internal_get_context() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr ::System::Runtime::Serialization::XmlObjectSerializerContext* const& System::Runtime::Serialization::KnownTypeDataContractResolver::__cordl_internal_get_context() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___context;
}
constexpr void System::Runtime::Serialization::KnownTypeDataContractResolver::__cordl_internal_set_context(::System::Runtime::Serialization::XmlObjectSerializerContext* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___context = value;
}
inline void System::Runtime::Serialization::KnownTypeDataContractResolver::_ctor(::System::Runtime::Serialization::XmlObjectSerializerContext* context) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::XmlObjectSerializerContext*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, context);
}
inline bool System::Runtime::Serialization::KnownTypeDataContractResolver::TryResolveType(::System::Type* type, ::System::Type* declaredType,
                                                                                          ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver,
                                                                                          ::by_ref<::System::Xml::XmlDictionaryString*> typeName,
                                                                                          ::by_ref<::System::Xml::XmlDictionaryString*> typeNamespace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, declaredType, knownTypeResolver, typeName, typeNamespace);
}
inline ::System::Type* System::Runtime::Serialization::KnownTypeDataContractResolver::ResolveName(::StringW typeName, ::StringW typeNamespace, ::System::Type* declaredType,
                                                                                                  ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName, typeNamespace, declaredType, knownTypeResolver);
}
inline ::System::Runtime::Serialization::KnownTypeDataContractResolver*
System::Runtime::Serialization::KnownTypeDataContractResolver::New_ctor(::System::Runtime::Serialization::XmlObjectSerializerContext* context) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::KnownTypeDataContractResolver*>(context));
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::KnownTypeDataContractResolver::KnownTypeDataContractResolver() {}

#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\DataContractResolver.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__DataContractResolver_def.hpp"
#include "System/Xml/zzzz__XmlDictionaryString_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractResolver.TryResolveType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Runtime::Serialization::DataContractResolver::*)(
    ::System::Type*, ::System::Type*, ::System::Runtime::Serialization::DataContractResolver*, ::by_ref<::System::Xml::XmlDictionaryString*>, ::by_ref<::System::Xml::XmlDictionaryString*>)>(
    &::System::Runtime::Serialization::DataContractResolver::TryResolveType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractResolver*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractResolver*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractResolver.ResolveName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::System::Runtime::Serialization::DataContractResolver::*)(::StringW, ::StringW, ::System::Type*, ::System::Runtime::Serialization::DataContractResolver*)>(
        &::System::Runtime::Serialization::DataContractResolver::ResolveName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractResolver*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::DataContractResolver*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::DataContractResolver._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::DataContractResolver::*)()>(&::System::Runtime::Serialization::DataContractResolver::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x614b57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractResolver*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Runtime::Serialization::DataContractResolver::TryResolveType(::System::Type* type, ::System::Type* declaredType,
                                                                                 ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver,
                                                                                 ::by_ref<::System::Xml::XmlDictionaryString*> typeName, ::by_ref<::System::Xml::XmlDictionaryString*> typeNamespace) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractResolver*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, type, declaredType, knownTypeResolver, typeName, typeNamespace);
}
inline ::System::Type* System::Runtime::Serialization::DataContractResolver::ResolveName(::StringW typeName, ::StringW typeNamespace, ::System::Type* declaredType,
                                                                                         ::System::Runtime::Serialization::DataContractResolver* knownTypeResolver) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::DataContractResolver*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName, typeNamespace, declaredType, knownTypeResolver);
}
inline void System::Runtime::Serialization::DataContractResolver::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::DataContractResolver*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::DataContractResolver* System::Runtime::Serialization::DataContractResolver::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::DataContractResolver*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::DataContractResolver::DataContractResolver() {}

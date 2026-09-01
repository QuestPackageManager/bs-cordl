#pragma once
// IWYU pragma private; include "System\Runtime\Serialization\SerializationBinder.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationBinder.BindToName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationBinder::*)(::System::Type*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::System::Runtime::Serialization::SerializationBinder::BindToName)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5b4c620;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationBinder*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationBinder*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationBinder.BindToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::System::Runtime::Serialization::SerializationBinder::*)(::StringW, ::StringW)>(
    &::System::Runtime::Serialization::SerializationBinder::BindToType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationBinder*>(),
                                                                                          { ::i2c::class_of<::System::Runtime::Serialization::SerializationBinder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Runtime::Serialization::SerializationBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Runtime::Serialization::SerializationBinder::*)()>(&::System::Runtime::Serialization::SerializationBinder::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5b4c62c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Runtime::Serialization::SerializationBinder::BindToName(::System::Type* serializedType, ::by_ref<::StringW> assemblyName, ::by_ref<::StringW> typeName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializedType, assemblyName, typeName);
}
inline ::System::Type* System::Runtime::Serialization::SerializationBinder::BindToType(::StringW assemblyName, ::StringW typeName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Runtime::Serialization::SerializationBinder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, assemblyName, typeName);
}
inline void System::Runtime::Serialization::SerializationBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Runtime::Serialization::SerializationBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Runtime::Serialization::SerializationBinder* System::Runtime::Serialization::SerializationBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Runtime::Serialization::SerializationBinder*>());
}
// Ctor Parameters []
constexpr ::System::Runtime::Serialization::SerializationBinder::SerializationBinder() {}

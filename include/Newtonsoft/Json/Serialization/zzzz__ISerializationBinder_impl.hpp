#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\ISerializationBinder.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ISerializationBinder.BindToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::ISerializationBinder::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Serialization::ISerializationBinder::BindToType)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ISerializationBinder*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::ISerializationBinder*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ISerializationBinder.BindToName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ISerializationBinder::*)(::System::Type*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Serialization::ISerializationBinder::BindToName)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ISerializationBinder*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::ISerializationBinder*>(), 1 }));
    return ___internal_method;
  }
};
inline ::System::Type* Newtonsoft::Json::Serialization::ISerializationBinder::BindToType(::StringW assemblyName, ::StringW typeName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::ISerializationBinder*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, assemblyName, typeName);
}
inline void Newtonsoft::Json::Serialization::ISerializationBinder::BindToName(::System::Type* serializedType, ::by_ref<::StringW> assemblyName, ::by_ref<::StringW> typeName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::ISerializationBinder*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializedType, assemblyName, typeName);
}

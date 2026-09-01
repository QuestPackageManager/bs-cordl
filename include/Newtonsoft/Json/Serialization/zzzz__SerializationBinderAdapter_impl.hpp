#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\SerializationBinderAdapter.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__SerializationBinderAdapter_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationBinderAdapter._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::SerializationBinderAdapter::*)(::System::Runtime::Serialization::SerializationBinder*)>(
    &::Newtonsoft::Json::Serialization::SerializationBinderAdapter::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5d5a5e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationBinderAdapter.BindToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::SerializationBinderAdapter::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Serialization::SerializationBinderAdapter::BindToType)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d5a5e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>(),
                                                                                           { "BindToType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::SerializationBinderAdapter.BindToName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::SerializationBinderAdapter::*)(::System::Type*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Serialization::SerializationBinderAdapter::BindToName)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5d5a604;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>(),
                                                { "BindToName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Runtime::Serialization::SerializationBinder*& Newtonsoft::Json::Serialization::SerializationBinderAdapter::__cordl_internal_get_SerializationBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializationBinder;
}
constexpr ::System::Runtime::Serialization::SerializationBinder* const& Newtonsoft::Json::Serialization::SerializationBinderAdapter::__cordl_internal_get_SerializationBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___SerializationBinder;
}
constexpr void Newtonsoft::Json::Serialization::SerializationBinderAdapter::__cordl_internal_set_SerializationBinder(::System::Runtime::Serialization::SerializationBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___SerializationBinder = value;
}
inline void Newtonsoft::Json::Serialization::SerializationBinderAdapter::_ctor(::System::Runtime::Serialization::SerializationBinder* serializationBinder) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::System::Runtime::Serialization::SerializationBinder*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializationBinder);
}
inline ::System::Type* Newtonsoft::Json::Serialization::SerializationBinderAdapter::BindToType(::StringW assemblyName, ::StringW typeName) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>(),
                                                                                         { "BindToType", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, assemblyName, typeName);
}
inline void Newtonsoft::Json::Serialization::SerializationBinderAdapter::BindToName(::System::Type* serializedType, ::by_ref<::StringW> assemblyName, ::by_ref<::StringW> typeName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>(),
                                                           { "BindToName", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::by_ref<::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializedType, assemblyName, typeName);
}
inline ::Newtonsoft::Json::Serialization::SerializationBinderAdapter*
Newtonsoft::Json::Serialization::SerializationBinderAdapter::New_ctor(::System::Runtime::Serialization::SerializationBinder* serializationBinder) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::SerializationBinderAdapter*>(serializationBinder));
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr Newtonsoft::Json::Serialization::SerializationBinderAdapter::operator ::Newtonsoft::Json::Serialization::ISerializationBinder*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* Newtonsoft::Json::Serialization::SerializationBinderAdapter::i___Newtonsoft__Json__Serialization__ISerializationBinder() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::SerializationBinderAdapter::SerializationBinderAdapter() {}

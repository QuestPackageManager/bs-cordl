#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/DefaultSerializationBinder.hpp"
#include "System/Runtime/Serialization/zzzz__SerializationBinder_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__DefaultSerializationBinder_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ISerializationBinder_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__StructMultiKey_2_def.hpp"
#include "Newtonsoft/Json/Utilities/zzzz__ThreadSafeStore_2_def.hpp"
#include "System/Reflection/zzzz__Assembly_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)()>(
    &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5d3de3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.GetTypeFromTypeNameKey
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>)>(
        &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeFromTypeNameKey)> {
  constexpr static std::size_t size = 0x3c0;
  constexpr static std::size_t addrs = 0x5d3df00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(),
                                                             { "GetTypeFromTypeNameKey", {}, { ::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.GetGenericTypeFromTypeName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::StringW, ::System::Reflection::Assembly*)>(
    &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetGenericTypeFromTypeName)> {
  constexpr static std::size_t size = 0x2e8;
  constexpr static std::size_t addrs = 0x5d3e2c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(),
                                                             { "GetGenericTypeFromTypeName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.GetTypeByName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::System::Type* (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>)>(
        &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeByName)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5d3e5a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(),
                                                             { "GetTypeByName", {}, { ::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.BindToType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Type* (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::StringW, ::StringW)>(
    &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToType)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x5d3e614;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::DefaultSerializationBinder.BindToName
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::DefaultSerializationBinder::*)(::System::Type*, ::by_ref<::StringW>, ::by_ref<::StringW>)>(
    &::Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToName)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x5d3e670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(),
                                                                                          { ::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(), 4 }));
    return ___internal_method;
  }
};
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>, ::System::Type*>*&
Newtonsoft::Json::Serialization::DefaultSerializationBinder::__cordl_internal_get__typeCache() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeCache;
}
constexpr ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>, ::System::Type*>* const&
Newtonsoft::Json::Serialization::DefaultSerializationBinder::__cordl_internal_get__typeCache() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____typeCache;
}
constexpr void Newtonsoft::Json::Serialization::DefaultSerializationBinder::__cordl_internal_set__typeCache(
    ::Newtonsoft::Json::Utilities::ThreadSafeStore_2<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>, ::System::Type*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____typeCache = value;
}
inline void Newtonsoft::Json::Serialization::DefaultSerializationBinder::setStaticF_Instance(::Newtonsoft::Json::Serialization::DefaultSerializationBinder* value) {
  ::cordl_internals::setStaticField<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*, "Instance", ::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(
      std::forward<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(value));
}
inline ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* Newtonsoft::Json::Serialization::DefaultSerializationBinder::getStaticF_Instance() {
  return ::cordl_internals::getStaticField<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*, "Instance", ::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>();
}
inline void Newtonsoft::Json::Serialization::DefaultSerializationBinder::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Type* Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeFromTypeNameKey(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW> typeNameKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(),
                                                           { "GetTypeFromTypeNameKey", {}, { ::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeNameKey);
}
inline ::System::Type* Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetGenericTypeFromTypeName(::StringW typeName, ::System::Reflection::Assembly* assembly) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(),
                                                           { "GetGenericTypeFromTypeName", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::System::Reflection::Assembly*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeName, assembly);
}
inline ::System::Type* Newtonsoft::Json::Serialization::DefaultSerializationBinder::GetTypeByName(::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW> typeNameKey) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(),
                                                           { "GetTypeByName", {}, { ::i2c::type_of<::Newtonsoft::Json::Utilities::StructMultiKey_2<::StringW, ::StringW>>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, typeNameKey);
}
inline ::System::Type* Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToType(::StringW assemblyName, ::StringW typeName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<::System::Type*>(this, ___internal_method, assemblyName, typeName);
}
inline void Newtonsoft::Json::Serialization::DefaultSerializationBinder::BindToName(::System::Type* serializedType, ::by_ref<::StringW> assemblyName, ::by_ref<::StringW> typeName) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, serializedType, assemblyName, typeName);
}
inline ::Newtonsoft::Json::Serialization::DefaultSerializationBinder* Newtonsoft::Json::Serialization::DefaultSerializationBinder::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::DefaultSerializationBinder*>());
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr Newtonsoft::Json::Serialization::DefaultSerializationBinder::operator ::Newtonsoft::Json::Serialization::ISerializationBinder*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::ISerializationBinder"
constexpr ::Newtonsoft::Json::Serialization::ISerializationBinder* Newtonsoft::Json::Serialization::DefaultSerializationBinder::i___Newtonsoft__Json__Serialization__ISerializationBinder() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::ISerializationBinder*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::DefaultSerializationBinder::DefaultSerializationBinder() {}

#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\ReflectionAttributeProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ReflectionAttributeProvider_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IAttributeProvider_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__Type_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d59fc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Attribute*>* (::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::*)(bool)>(
    &::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x5d5a024;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(), { "GetAttributes", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider.GetAttributes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::IList_1<::System::Attribute*>* (
    ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::*)(::System::Type*, bool)>(&::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::GetAttributes)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x5d5a098;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(),
                                                                                           { "GetAttributes", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Object*& Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_get__attributeProvider() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeProvider;
}
constexpr ::System::Object* const& Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_get__attributeProvider() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____attributeProvider;
}
constexpr void Newtonsoft::Json::Serialization::ReflectionAttributeProvider::__cordl_internal_set__attributeProvider(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____attributeProvider = value;
}
inline void Newtonsoft::Json::Serialization::ReflectionAttributeProvider::_ctor(::System::Object* attributeProvider) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, attributeProvider);
}
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* Newtonsoft::Json::Serialization::ReflectionAttributeProvider::GetAttributes(bool inherit) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(), { "GetAttributes", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Attribute*>*>(this, ___internal_method, inherit);
}
inline ::System::Collections::Generic::IList_1<::System::Attribute*>* Newtonsoft::Json::Serialization::ReflectionAttributeProvider::GetAttributes(::System::Type* attributeType, bool inherit) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(),
                                                                                         { "GetAttributes", {}, { ::i2c::type_of<::System::Type*>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IList_1<::System::Attribute*>*>(this, ___internal_method, attributeType, inherit);
}
inline ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider* Newtonsoft::Json::Serialization::ReflectionAttributeProvider::New_ctor(::System::Object* attributeProvider) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::ReflectionAttributeProvider*>(attributeProvider));
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr Newtonsoft::Json::Serialization::ReflectionAttributeProvider::operator ::Newtonsoft::Json::Serialization::IAttributeProvider*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::IAttributeProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::IAttributeProvider"
constexpr ::Newtonsoft::Json::Serialization::IAttributeProvider* Newtonsoft::Json::Serialization::ReflectionAttributeProvider::i___Newtonsoft__Json__Serialization__IAttributeProvider() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::IAttributeProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ReflectionAttributeProvider::ReflectionAttributeProvider() {}

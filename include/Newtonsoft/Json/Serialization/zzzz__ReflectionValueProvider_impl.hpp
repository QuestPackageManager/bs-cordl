#pragma once
// IWYU pragma private; include "Newtonsoft/Json/Serialization/ReflectionValueProvider.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__ReflectionValueProvider_def.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IValueProvider_def.hpp"
#include "System/Reflection/zzzz__MemberInfo_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionValueProvider._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(::System::Reflection::MemberInfo*)>(
    &::Newtonsoft::Json::Serialization::ReflectionValueProvider::_ctor)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x5d57ee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionValueProvider.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::ReflectionValueProvider::SetValue)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5d57f4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>(),
                                                                                           { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::ReflectionValueProvider.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::ReflectionValueProvider::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::ReflectionValueProvider::GetValue)> {
  constexpr static std::size_t size = 0x2c8;
  constexpr static std::size_t addrs = 0x5d580f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
    return ___internal_method;
  }
};
constexpr ::System::Reflection::MemberInfo*& Newtonsoft::Json::Serialization::ReflectionValueProvider::__cordl_internal_get__memberInfo() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberInfo;
}
constexpr ::System::Reflection::MemberInfo* const& Newtonsoft::Json::Serialization::ReflectionValueProvider::__cordl_internal_get__memberInfo() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____memberInfo;
}
constexpr void Newtonsoft::Json::Serialization::ReflectionValueProvider::__cordl_internal_set__memberInfo(::System::Reflection::MemberInfo* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____memberInfo = value;
}
inline void Newtonsoft::Json::Serialization::ReflectionValueProvider::_ctor(::System::Reflection::MemberInfo* memberInfo) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>(), { ".ctor", {}, { ::i2c::type_of<::System::Reflection::MemberInfo*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, memberInfo);
}
inline void Newtonsoft::Json::Serialization::ReflectionValueProvider::SetValue(::System::Object* target, ::System::Object* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>(),
                                                                                         { "SetValue", {}, { ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, value);
}
inline ::System::Object* Newtonsoft::Json::Serialization::ReflectionValueProvider::GetValue(::System::Object* target) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>(), { "GetValue", {}, { ::i2c::type_of<::System::Object*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, target);
}
inline ::Newtonsoft::Json::Serialization::ReflectionValueProvider* Newtonsoft::Json::Serialization::ReflectionValueProvider::New_ctor(::System::Reflection::MemberInfo* memberInfo) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Newtonsoft::Json::Serialization::ReflectionValueProvider*>(memberInfo));
}
/// @brief Convert operator to "::Newtonsoft::Json::Serialization::IValueProvider"
constexpr Newtonsoft::Json::Serialization::ReflectionValueProvider::operator ::Newtonsoft::Json::Serialization::IValueProvider*() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::IValueProvider*>(static_cast<void*>(this));
}
/// @brief Convert to "::Newtonsoft::Json::Serialization::IValueProvider"
constexpr ::Newtonsoft::Json::Serialization::IValueProvider* Newtonsoft::Json::Serialization::ReflectionValueProvider::i___Newtonsoft__Json__Serialization__IValueProvider() noexcept {
  return static_cast<::Newtonsoft::Json::Serialization::IValueProvider*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::Newtonsoft::Json::Serialization::ReflectionValueProvider::ReflectionValueProvider() {}

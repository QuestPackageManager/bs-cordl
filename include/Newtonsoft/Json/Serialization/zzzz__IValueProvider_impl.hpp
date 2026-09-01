#pragma once
// IWYU pragma private; include "Newtonsoft\Json\Serialization\IValueProvider.hpp"
#include "Newtonsoft/Json/Serialization/zzzz__IValueProvider_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IValueProvider.SetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Newtonsoft::Json::Serialization::IValueProvider::*)(::System::Object*, ::System::Object*)>(
    &::Newtonsoft::Json::Serialization::IValueProvider::SetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IValueProvider*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::IValueProvider*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Newtonsoft::Json::Serialization::IValueProvider.GetValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::Newtonsoft::Json::Serialization::IValueProvider::*)(::System::Object*)>(
    &::Newtonsoft::Json::Serialization::IValueProvider::GetValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Newtonsoft::Json::Serialization::IValueProvider*>(), { ::i2c::class_of<::Newtonsoft::Json::Serialization::IValueProvider*>(), 1 }));
    return ___internal_method;
  }
};
inline void Newtonsoft::Json::Serialization::IValueProvider::SetValue(::System::Object* target, ::System::Object* value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IValueProvider*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, target, value);
}
inline ::System::Object* Newtonsoft::Json::Serialization::IValueProvider::GetValue(::System::Object* target) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Newtonsoft::Json::Serialization::IValueProvider*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method, target);
}

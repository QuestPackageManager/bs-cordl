#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\NativeHeaderAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeHeaderAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeHeaderAttribute.set_Header
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeHeaderAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NativeHeaderAttribute::set_Header)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb5fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeHeaderAttribute*>(), { "set_Header", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeHeaderAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeHeaderAttribute::*)(::StringW)>(&::UnityEngine::Bindings::NativeHeaderAttribute::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6bb5fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeHeaderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Bindings::NativeHeaderAttribute::__cordl_internal_get__Header_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Header_k__BackingField;
}
constexpr ::StringW const& UnityEngine::Bindings::NativeHeaderAttribute::__cordl_internal_get__Header_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Header_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeHeaderAttribute::__cordl_internal_set__Header_k__BackingField(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Header_k__BackingField = value;
}
inline void UnityEngine::Bindings::NativeHeaderAttribute::set_Header(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeHeaderAttribute*>(), { "set_Header", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NativeHeaderAttribute::_ctor(::StringW header) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeHeaderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline ::UnityEngine::Bindings::NativeHeaderAttribute* UnityEngine::Bindings::NativeHeaderAttribute::New_ctor(::StringW header) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativeHeaderAttribute*>(header));
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NativeHeaderAttribute::NativeHeaderAttribute() {}

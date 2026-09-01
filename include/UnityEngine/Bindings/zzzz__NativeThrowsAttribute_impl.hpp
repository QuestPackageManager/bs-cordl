#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\NativeThrowsAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__NativeThrowsAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::NativeThrowsAttribute.set_ThrowsException
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeThrowsAttribute::*)(bool)>(&::UnityEngine::Bindings::NativeThrowsAttribute::set_ThrowsException)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb6558;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeThrowsAttribute*>(), { "set_ThrowsException", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::NativeThrowsAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::NativeThrowsAttribute::*)()>(&::UnityEngine::Bindings::NativeThrowsAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6bb6560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeThrowsAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Bindings::NativeThrowsAttribute::__cordl_internal_get__ThrowsException_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ThrowsException_k__BackingField;
}
constexpr bool const& UnityEngine::Bindings::NativeThrowsAttribute::__cordl_internal_get__ThrowsException_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ThrowsException_k__BackingField;
}
constexpr void UnityEngine::Bindings::NativeThrowsAttribute::__cordl_internal_set__ThrowsException_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____ThrowsException_k__BackingField = value;
}
inline void UnityEngine::Bindings::NativeThrowsAttribute::set_ThrowsException(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeThrowsAttribute*>(), { "set_ThrowsException", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::NativeThrowsAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::NativeThrowsAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::NativeThrowsAttribute* UnityEngine::Bindings::NativeThrowsAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::NativeThrowsAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::NativeThrowsAttribute::NativeThrowsAttribute() {}

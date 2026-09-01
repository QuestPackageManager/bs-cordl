#pragma once
// IWYU pragma private; include "UnityEngine\Bindings\IgnoreAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Bindings/zzzz__IgnoreAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Bindings::IgnoreAttribute.set_DoesNotContributeToSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::IgnoreAttribute::*)(bool)>(&::UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6bb656c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::IgnoreAttribute*>(), { "set_DoesNotContributeToSize", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::Bindings::IgnoreAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Bindings::IgnoreAttribute::*)()>(&::UnityEngine::Bindings::IgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6bb6574;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::IgnoreAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr bool& UnityEngine::Bindings::IgnoreAttribute::__cordl_internal_get__DoesNotContributeToSize_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DoesNotContributeToSize_k__BackingField;
}
constexpr bool const& UnityEngine::Bindings::IgnoreAttribute::__cordl_internal_get__DoesNotContributeToSize_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____DoesNotContributeToSize_k__BackingField;
}
constexpr void UnityEngine::Bindings::IgnoreAttribute::__cordl_internal_set__DoesNotContributeToSize_k__BackingField(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____DoesNotContributeToSize_k__BackingField = value;
}
inline void UnityEngine::Bindings::IgnoreAttribute::set_DoesNotContributeToSize(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::IgnoreAttribute*>(), { "set_DoesNotContributeToSize", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::Bindings::IgnoreAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Bindings::IgnoreAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Bindings::IgnoreAttribute* UnityEngine::Bindings::IgnoreAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Bindings::IgnoreAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Bindings::IgnoreAttribute::IgnoreAttribute() {}

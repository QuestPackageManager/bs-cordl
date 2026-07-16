#pragma once
// IWYU pragma private; include "UnityEngine/Timeline/CustomStyleAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/Timeline/zzzz__CustomStyleAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Timeline::CustomStyleAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Timeline::CustomStyleAttribute::*)(::StringW)>(&::UnityEngine::Timeline::CustomStyleAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x69c5c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::CustomStyleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::Timeline::CustomStyleAttribute::__cordl_internal_get_ussStyle() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ussStyle;
}
constexpr ::StringW const& UnityEngine::Timeline::CustomStyleAttribute::__cordl_internal_get_ussStyle() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ussStyle;
}
constexpr void UnityEngine::Timeline::CustomStyleAttribute::__cordl_internal_set_ussStyle(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___ussStyle = value;
}
inline void UnityEngine::Timeline::CustomStyleAttribute::_ctor(::StringW ussStyle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Timeline::CustomStyleAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, ussStyle);
}
inline ::UnityEngine::Timeline::CustomStyleAttribute* UnityEngine::Timeline::CustomStyleAttribute::New_ctor(::StringW ussStyle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Timeline::CustomStyleAttribute*>(ussStyle));
}
// Ctor Parameters []
constexpr ::UnityEngine::Timeline::CustomStyleAttribute::CustomStyleAttribute() {}

#pragma once
// IWYU pragma private; include "UnityEngine/MultilineAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__MultilineAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::MultilineAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::MultilineAttribute::*)()>(&::UnityEngine::MultilineAttribute::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6ad4d50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MultilineAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::MultilineAttribute::__cordl_internal_get_lines() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lines;
}
constexpr int32_t const& UnityEngine::MultilineAttribute::__cordl_internal_get_lines() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lines;
}
constexpr void UnityEngine::MultilineAttribute::__cordl_internal_set_lines(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lines = value;
}
inline void UnityEngine::MultilineAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::MultilineAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::MultilineAttribute* UnityEngine::MultilineAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::MultilineAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::MultilineAttribute::MultilineAttribute() {}

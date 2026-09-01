#pragma once
// IWYU pragma private; include "UnityEngine\Rendering\LogarithmicAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/Rendering/zzzz__LogarithmicAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::LogarithmicAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::LogarithmicAttribute::*)(int32_t, int32_t)>(&::UnityEngine::Rendering::LogarithmicAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6791e1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LogarithmicAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
constexpr int32_t& UnityEngine::Rendering::LogarithmicAttribute::__cordl_internal_get_min() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr int32_t const& UnityEngine::Rendering::LogarithmicAttribute::__cordl_internal_get_min() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___min;
}
constexpr void UnityEngine::Rendering::LogarithmicAttribute::__cordl_internal_set_min(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___min = value;
}
constexpr int32_t& UnityEngine::Rendering::LogarithmicAttribute::__cordl_internal_get_max() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr int32_t const& UnityEngine::Rendering::LogarithmicAttribute::__cordl_internal_get_max() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___max;
}
constexpr void UnityEngine::Rendering::LogarithmicAttribute::__cordl_internal_set_max(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___max = value;
}
inline void UnityEngine::Rendering::LogarithmicAttribute::_ctor(int32_t min, int32_t max) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::LogarithmicAttribute*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, min, max);
}
inline ::UnityEngine::Rendering::LogarithmicAttribute* UnityEngine::Rendering::LogarithmicAttribute::New_ctor(int32_t min, int32_t max) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::LogarithmicAttribute*>(min, max));
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::LogarithmicAttribute::LogarithmicAttribute() {}

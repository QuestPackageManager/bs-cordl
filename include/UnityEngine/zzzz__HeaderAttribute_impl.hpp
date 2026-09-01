#pragma once
// IWYU pragma private; include "UnityEngine\HeaderAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__HeaderAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::HeaderAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::HeaderAttribute::*)(::StringW)>(&::UnityEngine::HeaderAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ad803c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HeaderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::HeaderAttribute::__cordl_internal_get_header() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr ::StringW const& UnityEngine::HeaderAttribute::__cordl_internal_get_header() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___header;
}
constexpr void UnityEngine::HeaderAttribute::__cordl_internal_set_header(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___header = value;
}
inline void UnityEngine::HeaderAttribute::_ctor(::StringW header) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::HeaderAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, header);
}
inline ::UnityEngine::HeaderAttribute* UnityEngine::HeaderAttribute::New_ctor(::StringW header) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::HeaderAttribute*>(header));
}
// Ctor Parameters []
constexpr ::UnityEngine::HeaderAttribute::HeaderAttribute() {}

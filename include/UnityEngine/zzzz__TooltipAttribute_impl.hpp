#pragma once
// IWYU pragma private; include "UnityEngine\TooltipAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "UnityEngine/zzzz__TooltipAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::TooltipAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::TooltipAttribute::*)(::StringW)>(&::UnityEngine::TooltipAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6ad8014;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TooltipAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::TooltipAttribute::__cordl_internal_get_tooltip() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tooltip;
}
constexpr ::StringW const& UnityEngine::TooltipAttribute::__cordl_internal_get_tooltip() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___tooltip;
}
constexpr void UnityEngine::TooltipAttribute::__cordl_internal_set_tooltip(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___tooltip = value;
}
inline void UnityEngine::TooltipAttribute::_ctor(::StringW tooltip) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::TooltipAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, tooltip);
}
inline ::UnityEngine::TooltipAttribute* UnityEngine::TooltipAttribute::New_ctor(::StringW tooltip) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::TooltipAttribute*>(tooltip));
}
// Ctor Parameters []
constexpr ::UnityEngine::TooltipAttribute::TooltipAttribute() {}

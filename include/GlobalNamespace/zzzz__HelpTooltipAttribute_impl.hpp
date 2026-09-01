#pragma once
// IWYU pragma private; include "GlobalNamespace\HelpTooltipAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__HelpTooltipAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HelpTooltipAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpTooltipAttribute::*)(::StringW)>(&::GlobalNamespace::HelpTooltipAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x330b458;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpTooltipAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::HelpTooltipAttribute::__cordl_internal_get_hint() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hint;
}
constexpr ::StringW const& GlobalNamespace::HelpTooltipAttribute::__cordl_internal_get_hint() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___hint;
}
constexpr void GlobalNamespace::HelpTooltipAttribute::__cordl_internal_set_hint(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___hint = value;
}
inline void GlobalNamespace::HelpTooltipAttribute::_ctor(::StringW hint) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpTooltipAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, hint);
}
inline ::GlobalNamespace::HelpTooltipAttribute* GlobalNamespace::HelpTooltipAttribute::New_ctor(::StringW hint) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HelpTooltipAttribute*>(hint));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpTooltipAttribute::HelpTooltipAttribute() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace\ColorSchemeIdAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__ColorSchemeIdAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ColorSchemeIdAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::ColorSchemeIdAttribute::*)(::StringW)>(&::GlobalNamespace::ColorSchemeIdAttribute::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x36f7744;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeIdAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr bool& GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_get_emptyIsAllowed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyIsAllowed;
}
constexpr bool const& GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_get_emptyIsAllowed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyIsAllowed;
}
constexpr void GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_set_emptyIsAllowed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyIsAllowed = value;
}
constexpr ::StringW& GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_get_emptyExplanation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyExplanation;
}
constexpr ::StringW const& GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_get_emptyExplanation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___emptyExplanation;
}
constexpr void GlobalNamespace::ColorSchemeIdAttribute::__cordl_internal_set_emptyExplanation(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___emptyExplanation = value;
}
inline void GlobalNamespace::ColorSchemeIdAttribute::_ctor(::StringW emptyExplanation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::ColorSchemeIdAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, emptyExplanation);
}
inline ::GlobalNamespace::ColorSchemeIdAttribute* GlobalNamespace::ColorSchemeIdAttribute::New_ctor(::StringW emptyExplanation) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::ColorSchemeIdAttribute*>(emptyExplanation));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColorSchemeIdAttribute::ColorSchemeIdAttribute() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace\InlineLinkAttribute.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_impl.hpp"
#include "GlobalNamespace/zzzz__InlineLinkAttribute_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::InlineLinkAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::InlineLinkAttribute::*)(::StringW)>(&::GlobalNamespace::InlineLinkAttribute::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5df74b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InlineLinkAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::InlineLinkAttribute::__cordl_internal_get_DocumentationURL() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DocumentationURL;
}
constexpr ::StringW const& GlobalNamespace::InlineLinkAttribute::__cordl_internal_get_DocumentationURL() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___DocumentationURL;
}
constexpr void GlobalNamespace::InlineLinkAttribute::__cordl_internal_set_DocumentationURL(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___DocumentationURL = value;
}
inline void GlobalNamespace::InlineLinkAttribute::_ctor(::StringW documentationURL) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::InlineLinkAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, documentationURL);
}
inline ::GlobalNamespace::InlineLinkAttribute* GlobalNamespace::InlineLinkAttribute::New_ctor(::StringW documentationURL) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::InlineLinkAttribute*>(documentationURL));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::InlineLinkAttribute::InlineLinkAttribute() {}

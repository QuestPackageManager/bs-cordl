#pragma once
// IWYU pragma private; include "System/Xml/Linq/BaseUriAnnotation.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Xml/Linq/zzzz__BaseUriAnnotation_def.hpp"
//  Writing Method size for method: ::System::Xml::Linq::BaseUriAnnotation._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Xml::Linq::BaseUriAnnotation::*)(::StringW)>(&::System::Xml::Linq::BaseUriAnnotation::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x619d9a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::BaseUriAnnotation*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& System::Xml::Linq::BaseUriAnnotation::__cordl_internal_get_baseUri() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr ::StringW const& System::Xml::Linq::BaseUriAnnotation::__cordl_internal_get_baseUri() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___baseUri;
}
constexpr void System::Xml::Linq::BaseUriAnnotation::__cordl_internal_set_baseUri(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___baseUri = value;
}
inline void System::Xml::Linq::BaseUriAnnotation::_ctor(::StringW baseUri) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Xml::Linq::BaseUriAnnotation*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, baseUri);
}
inline ::System::Xml::Linq::BaseUriAnnotation* System::Xml::Linq::BaseUriAnnotation::New_ctor(::StringW baseUri) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Xml::Linq::BaseUriAnnotation*>(baseUri));
}
// Ctor Parameters []
constexpr ::System::Xml::Linq::BaseUriAnnotation::BaseUriAnnotation() {}

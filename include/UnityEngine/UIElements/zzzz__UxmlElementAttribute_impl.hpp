#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\UxmlElementAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlElementAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlElementAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlElementAttribute::*)(::StringW)>(&::UnityEngine::UIElements::UxmlElementAttribute::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6cbfd6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlElementAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
constexpr ::StringW& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_name() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr ::StringW const& UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_get_name() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___name;
}
constexpr void UnityEngine::UIElements::UxmlElementAttribute::__cordl_internal_set_name(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___name = value;
}
inline void UnityEngine::UIElements::UxmlElementAttribute::_ctor(::StringW uxmlName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlElementAttribute*>(), { ".ctor", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, uxmlName);
}
inline ::UnityEngine::UIElements::UxmlElementAttribute* UnityEngine::UIElements::UxmlElementAttribute::New_ctor(::StringW uxmlName) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlElementAttribute*>(uxmlName));
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlElementAttribute::UxmlElementAttribute() {}

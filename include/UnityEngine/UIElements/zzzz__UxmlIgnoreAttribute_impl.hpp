#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UxmlIgnoreAttribute.hpp"
#include "System/zzzz__Attribute_impl.hpp"
#include "UnityEngine/UIElements/zzzz__UxmlIgnoreAttribute_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::UxmlIgnoreAttribute._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::UxmlIgnoreAttribute::*)()>(&::UnityEngine::UIElements::UxmlIgnoreAttribute::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6cbc7ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlIgnoreAttribute*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::UxmlIgnoreAttribute::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::UxmlIgnoreAttribute*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::UxmlIgnoreAttribute* UnityEngine::UIElements::UxmlIgnoreAttribute::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::UxmlIgnoreAttribute*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::UxmlIgnoreAttribute::UxmlIgnoreAttribute() {}

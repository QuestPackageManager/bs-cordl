#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\IUxmlAttributes.hpp"
#include "UnityEngine/UIElements/zzzz__IUxmlAttributes_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::IUxmlAttributes.TryGetAttributeValue
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::UIElements::IUxmlAttributes::*)(::StringW, ::by_ref<::StringW>)>(
    &::UnityEngine::UIElements::IUxmlAttributes::TryGetAttributeValue)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::IUxmlAttributes*>(), { ::i2c::class_of<::UnityEngine::UIElements::IUxmlAttributes*>(), 0 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::UIElements::IUxmlAttributes::TryGetAttributeValue(::StringW attributeName, ::by_ref<::StringW> value) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::IUxmlAttributes*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, attributeName, value);
}

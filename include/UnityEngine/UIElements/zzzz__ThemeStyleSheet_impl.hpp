#pragma once
// IWYU pragma private; include "UnityEngine\UIElements\ThemeStyleSheet.hpp"
#include "UnityEngine/UIElements/zzzz__StyleSheet_impl.hpp"
#include "UnityEngine/UIElements/zzzz__ThemeStyleSheet_def.hpp"
//  Writing Method size for method: ::UnityEngine::UIElements::ThemeStyleSheet.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ThemeStyleSheet::*)()>(&::UnityEngine::UIElements::ThemeStyleSheet::OnEnable)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6c9ed20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ThemeStyleSheet*>(), { ::i2c::class_of<::UnityEngine::UIElements::ThemeStyleSheet*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::UIElements::ThemeStyleSheet._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::UIElements::ThemeStyleSheet::*)()>(&::UnityEngine::UIElements::ThemeStyleSheet::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6c9ed3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ThemeStyleSheet*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::UIElements::ThemeStyleSheet::OnEnable() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::UIElements::ThemeStyleSheet*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void UnityEngine::UIElements::ThemeStyleSheet::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::UIElements::ThemeStyleSheet*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::UIElements::ThemeStyleSheet* UnityEngine::UIElements::ThemeStyleSheet::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::UIElements::ThemeStyleSheet*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::UIElements::ThemeStyleSheet::ThemeStyleSheet() {}

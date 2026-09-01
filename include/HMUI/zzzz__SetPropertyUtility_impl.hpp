#pragma once
// IWYU pragma private; include "HMUI\SetPropertyUtility.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "HMUI/zzzz__SetPropertyUtility_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
//  Writing Method size for method: ::HMUI::SetPropertyUtility.SetColor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::UnityEngine::Color>, ::UnityEngine::Color)>(&::HMUI::SetPropertyUtility::SetColor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x588b5c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::SetPropertyUtility*>(), { "SetColor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::Color>() } })));
    return ___internal_method;
  }
};
inline bool HMUI::SetPropertyUtility::SetColor(::by_ref<::UnityEngine::Color> currentValue, ::UnityEngine::Color newValue) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::SetPropertyUtility*>(), { "SetColor", {}, { ::i2c::type_of<::by_ref<::UnityEngine::Color>>(), ::i2c::type_of<::UnityEngine::Color>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentValue, newValue);
}
template <typename T> inline bool HMUI::SetPropertyUtility::SetStruct(::by_ref<T> currentValue, T newValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SetPropertyUtility*>(), { "SetStruct", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentValue, newValue);
}
template <typename T> inline bool HMUI::SetPropertyUtility::SetClass(::by_ref<T> currentValue, T newValue) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::SetPropertyUtility*>(), { "SetClass", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, currentValue, newValue);
}
// Ctor Parameters []
constexpr ::HMUI::SetPropertyUtility::SetPropertyUtility() {}

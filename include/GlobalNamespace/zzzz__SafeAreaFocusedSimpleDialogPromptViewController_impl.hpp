#pragma once
// IWYU pragma private; include "GlobalNamespace\SafeAreaFocusedSimpleDialogPromptViewController.hpp"
#include "GlobalNamespace/zzzz__SimpleDialogPromptViewController_impl.hpp"
#include "GlobalNamespace/zzzz__SafeAreaFocusedSimpleDialogPromptViewController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController::*)()>(
    &::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5a1d988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController* GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::SafeAreaFocusedSimpleDialogPromptViewController::SafeAreaFocusedSimpleDialogPromptViewController() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace\HelpNavigationController.hpp"
#include "HMUI/zzzz__NavigationController_impl.hpp"
#include "GlobalNamespace/zzzz__HelpNavigationController_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::HelpNavigationController._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::HelpNavigationController::*)()>(&::GlobalNamespace::HelpNavigationController::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a1a6c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpNavigationController*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::HelpNavigationController::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::HelpNavigationController*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::HelpNavigationController* GlobalNamespace::HelpNavigationController::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::HelpNavigationController*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::HelpNavigationController::HelpNavigationController() {}

#pragma once
// IWYU pragma private; include "HMUI\ScreenBase.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__ScreenBase_def.hpp"
//  Writing Method size for method: ::HMUI::ScreenBase._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::ScreenBase::*)()>(&::HMUI::ScreenBase::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5881084;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenBase*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void HMUI::ScreenBase::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::ScreenBase*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::ScreenBase* HMUI::ScreenBase::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::ScreenBase*>());
}
// Ctor Parameters []
constexpr ::HMUI::ScreenBase::ScreenBase() {}

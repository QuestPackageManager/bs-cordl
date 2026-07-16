#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/SplashScreen.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__SplashScreen_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::SplashScreen.get_isFinished
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::UnityEngine::Rendering::SplashScreen::get_isFinished)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6b190e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SplashScreen*>(), { "get_isFinished", {}, {} })));
    return ___internal_method;
  }
};
inline bool UnityEngine::Rendering::SplashScreen::get_isFinished() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::SplashScreen*>(), { "get_isFinished", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::SplashScreen::SplashScreen() {}

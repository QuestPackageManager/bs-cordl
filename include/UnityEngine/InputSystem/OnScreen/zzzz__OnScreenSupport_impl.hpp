#pragma once
// IWYU pragma private; include "UnityEngine\InputSystem\OnScreen\OnScreenSupport.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/InputSystem/OnScreen/zzzz__OnScreenSupport_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::OnScreen::OnScreenSupport.Initialize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::UnityEngine::InputSystem::OnScreen::OnScreenSupport::Initialize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x659f888;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenSupport*>(), { "Initialize", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::OnScreen::OnScreenSupport::Initialize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputSystem::OnScreen::OnScreenSupport*>(), { "Initialize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::OnScreen::OnScreenSupport::OnScreenSupport() {}

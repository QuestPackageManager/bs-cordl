#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionDesc.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionRepeatMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionDesc_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionDesc._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::Rendering::DebugActionDesc::*)()>(&::UnityEngine::Rendering::DebugActionDesc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x675db54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugActionDesc*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::InputAction*& UnityEngine::Rendering::DebugActionDesc::__cordl_internal_get_buttonAction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonAction;
}
constexpr ::UnityEngine::InputSystem::InputAction* const& UnityEngine::Rendering::DebugActionDesc::__cordl_internal_get_buttonAction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonAction;
}
constexpr void UnityEngine::Rendering::DebugActionDesc::__cordl_internal_set_buttonAction(::UnityEngine::InputSystem::InputAction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonAction = value;
}
constexpr ::UnityEngine::Rendering::DebugActionRepeatMode& UnityEngine::Rendering::DebugActionDesc::__cordl_internal_get_repeatMode() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___repeatMode;
}
constexpr ::UnityEngine::Rendering::DebugActionRepeatMode const& UnityEngine::Rendering::DebugActionDesc::__cordl_internal_get_repeatMode() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___repeatMode;
}
constexpr void UnityEngine::Rendering::DebugActionDesc::__cordl_internal_set_repeatMode(::UnityEngine::Rendering::DebugActionRepeatMode value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___repeatMode = value;
}
constexpr float_t& UnityEngine::Rendering::DebugActionDesc::__cordl_internal_get_repeatDelay() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___repeatDelay;
}
constexpr float_t const& UnityEngine::Rendering::DebugActionDesc::__cordl_internal_get_repeatDelay() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___repeatDelay;
}
constexpr void UnityEngine::Rendering::DebugActionDesc::__cordl_internal_set_repeatDelay(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___repeatDelay = value;
}
inline void UnityEngine::Rendering::DebugActionDesc::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::Rendering::DebugActionDesc*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugActionDesc* UnityEngine::Rendering::DebugActionDesc::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::Rendering::DebugActionDesc*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugActionDesc::DebugActionDesc() {}

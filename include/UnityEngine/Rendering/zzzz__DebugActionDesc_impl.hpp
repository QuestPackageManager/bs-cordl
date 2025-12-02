#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/DebugActionDesc.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionRepeatMode_impl.hpp"
#include "UnityEngine/Rendering/zzzz__DebugActionDesc_def.hpp"
#include "UnityEngine/InputSystem/zzzz__InputAction_def.hpp"
//  Writing Method size for method: ::UnityEngine::Rendering::DebugActionDesc._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::Rendering::DebugActionDesc::*)()>(&::UnityEngine::Rendering::DebugActionDesc::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6544678;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionDesc*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonAction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::Rendering::DebugActionDesc*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::Rendering::DebugActionDesc* UnityEngine::Rendering::DebugActionDesc::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::Rendering::DebugActionDesc*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::Rendering::DebugActionDesc::DebugActionDesc() {}

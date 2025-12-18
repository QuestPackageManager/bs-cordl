#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/LowLevel/DeviceResetEvent.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeviceResetEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x63f8aac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent>::get(),
                                                                               "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent (*)(int32_t, bool, double_t)>(
    &::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::Create)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x63f8ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__cordl_internal_get_baseEvent() {
  return this->___baseEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__cordl_internal_get_baseEvent() const {
  return this->___baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) {
  this->___baseEvent = value;
}
constexpr bool& UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__cordl_internal_get_hardReset() {
  return this->___hardReset;
}
constexpr bool const& UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__cordl_internal_get_hardReset() const {
  return this->___hardReset;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeviceResetEvent::__cordl_internal_set_hardReset(bool value) {
  this->___hardReset = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DeviceResetEvent::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent>::get(),
                                                                             "get_typeStatic", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent UnityEngine::InputSystem::LowLevel::DeviceResetEvent::Create(int32_t deviceId, bool hardReset, double_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::DeviceResetEvent, false>(nullptr, ___internal_method, deviceId, hardReset, time);
}
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::DeviceResetEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* UnityEngine::InputSystem::LowLevel::DeviceResetEvent::i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "hardReset", ty: "bool", modifiers:
// "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::DeviceResetEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent, bool hardReset) noexcept {
  this->baseEvent = baseEvent;
  this->hardReset = hardReset;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::DeviceResetEvent::DeviceResetEvent() {}

#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__DeviceConfigurationEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEventPtr_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2bd0748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(), "get_typeStatic",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.ToEventPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::InputEventPtr (
    ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::*)()>(&::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::ToEventPtr)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x2bd0768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(), "ToEventPtr",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent (*)(int32_t, double_t)>(
    &::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::Create)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2bd076c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo* UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::i___UnityEngine__InputSystem__LowLevel__IInputEventTypeInfo() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::__cordl_internal_get_baseEvent() {
  return this->___baseEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::__cordl_internal_get_baseEvent() const {
  return this->___baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::__cordl_internal_set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) {
  this->___baseEvent = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::get_typeStatic() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(), "get_typeStatic",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::InputEventPtr UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::ToEventPtr() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(), "ToEventPtr",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::InputEventPtr, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::Create(int32_t deviceId, double_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent>::get(), "Create", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent, false>(nullptr, ___internal_method, deviceId, time);
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::DeviceConfigurationEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent) noexcept {
  this->baseEvent = baseEvent;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::DeviceConfigurationEvent::DeviceConfigurationEvent() {}

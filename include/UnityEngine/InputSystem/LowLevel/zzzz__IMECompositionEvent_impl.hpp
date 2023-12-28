#pragma once
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionEvent_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IInputEventTypeInfo_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__InputEvent_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__FourCC_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent.get_typeStatic
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::FourCC (::UnityEngine::InputSystem::LowLevel::IMECompositionEvent::*)()>(
    &::UnityEngine::InputSystem::LowLevel::IMECompositionEvent::get_typeStatic)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2ae9d4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent>::get(),
                                                                               "get_typeStatic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent.Create
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent (*)(int32_t, ::StringW, double_t)>(
    &::UnityEngine::InputSystem::LowLevel::IMECompositionEvent::Create)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x2ae9d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent>::get(), "Create", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo"
constexpr UnityEngine::InputSystem::LowLevel::IMECompositionEvent::operator ::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*() {
  return static_cast<::UnityEngine::InputSystem::LowLevel::IInputEventTypeInfo*>(static_cast<void*>(::cordl_internals::Box(this)));
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent& UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__get_baseEvent() {
  return this->___baseEvent;
}
constexpr ::UnityEngine::InputSystem::LowLevel::InputEvent const& UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__get_baseEvent() const {
  return this->___baseEvent;
}
constexpr void UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__set_baseEvent(::UnityEngine::InputSystem::LowLevel::InputEvent value) {
  this->___baseEvent = value;
}
constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString& UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__get_compositionString() {
  return this->___compositionString;
}
constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionString const& UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__get_compositionString() const {
  return this->___compositionString;
}
constexpr void UnityEngine::InputSystem::LowLevel::IMECompositionEvent::__set_compositionString(::UnityEngine::InputSystem::LowLevel::IMECompositionString value) {
  this->___compositionString = value;
}
inline ::UnityEngine::InputSystem::Utilities::FourCC UnityEngine::InputSystem::LowLevel::IMECompositionEvent::get_typeStatic() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent>::get(),
                                                                             "get_typeStatic", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::FourCC, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent UnityEngine::InputSystem::LowLevel::IMECompositionEvent::Create(int32_t deviceId, ::StringW compositionString, double_t time) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent>::get(), "Create", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::LowLevel::IMECompositionEvent, false>(nullptr, ___internal_method, deviceId, compositionString, time);
}
// Ctor Parameters [CppParam { name: "baseEvent", ty: "::UnityEngine::InputSystem::LowLevel::InputEvent", modifiers: "", def_value: Some("{}") }, CppParam { name: "compositionString", ty:
// "::UnityEngine::InputSystem::LowLevel::IMECompositionString", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent::IMECompositionEvent(::UnityEngine::InputSystem::LowLevel::InputEvent baseEvent,
                                                                                         ::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) noexcept {
  this->baseEvent = baseEvent;
  this->compositionString = compositionString;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::LowLevel::IMECompositionEvent::IMECompositionEvent() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

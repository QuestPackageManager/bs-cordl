#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/AnyKeyControl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AnyKeyControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AnyKeyControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::AnyKeyControl::*)()>(
    &::UnityEngine::InputSystem::Controls::AnyKeyControl::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6343664;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::AnyKeyControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputSystem::Controls::AnyKeyControl::*)(void*)>(
    &::UnityEngine::InputSystem::Controls::AnyKeyControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x634376c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(), 17));
    return ___internal_method;
  }
};
inline void UnityEngine::InputSystem::Controls::AnyKeyControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputSystem::Controls::AnyKeyControl::ReadUnprocessedValueFromState(void* statePtr) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method, statePtr);
}
inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* UnityEngine::InputSystem::Controls::AnyKeyControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Controls::AnyKeyControl*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::AnyKeyControl::AnyKeyControl() {}

#pragma once
// IWYU pragma private; include "UnityEngine/InputSystem/Controls/TouchPhaseControl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__TouchPhaseControl_def.hpp"
#include "UnityEngine/InputSystem/zzzz__TouchPhase_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)()>(
    &::UnityEngine::InputSystem::Controls::TouchPhaseControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x44ece14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::TouchPhase (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)(
    ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x44ece9c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(), 17));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::TouchPhaseControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::TouchPhaseControl::*)(
    ::UnityEngine::InputSystem::TouchPhase, ::cordl_internals::Ptr<void>)>(&::UnityEngine::InputSystem::Controls::TouchPhaseControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x44ecf18;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(), 18));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Controls::TouchPhaseControl* UnityEngine::InputSystem::Controls::TouchPhaseControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>());
}
inline void UnityEngine::InputSystem::Controls::TouchPhaseControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::TouchPhase UnityEngine::InputSystem::Controls::TouchPhaseControl::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::TouchPhase, false>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::TouchPhaseControl::WriteValueIntoState(::UnityEngine::InputSystem::TouchPhase value, ::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::TouchPhaseControl*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::TouchPhaseControl::TouchPhaseControl() {}

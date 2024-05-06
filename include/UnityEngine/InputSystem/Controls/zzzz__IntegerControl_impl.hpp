#pragma once
#include "UnityEngine/InputSystem/zzzz__InputControl_1_impl.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__IntegerControl_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::IntegerControl._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::IntegerControl::*)()>(
    &::UnityEngine::InputSystem::Controls::IntegerControl::_ctor)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x31786b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::IntegerControl*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::IntegerControl.ReadUnprocessedValueFromState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::UnityEngine::InputSystem::Controls::IntegerControl::*)(::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::Controls::IntegerControl::ReadUnprocessedValueFromState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x3178740;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::IntegerControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::IntegerControl*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Controls::IntegerControl.WriteValueIntoState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Controls::IntegerControl::*)(int32_t, ::cordl_internals::Ptr<void>)>(
    &::UnityEngine::InputSystem::Controls::IntegerControl::WriteValueIntoState)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x317874c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::IntegerControl*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::IntegerControl*>::get(), 17));
    return ___internal_method;
  }
};
inline ::UnityEngine::InputSystem::Controls::IntegerControl* UnityEngine::InputSystem::Controls::IntegerControl::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Controls::IntegerControl*>());
}
inline void UnityEngine::InputSystem::Controls::IntegerControl::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::IntegerControl*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t UnityEngine::InputSystem::Controls::IntegerControl::ReadUnprocessedValueFromState(::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::IntegerControl*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, statePtr);
}
inline void UnityEngine::InputSystem::Controls::IntegerControl::WriteValueIntoState(int32_t value, ::cordl_internals::Ptr<void> statePtr) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Controls::IntegerControl*>::get(), 17)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value, statePtr);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Controls::IntegerControl::IntegerControl() {}

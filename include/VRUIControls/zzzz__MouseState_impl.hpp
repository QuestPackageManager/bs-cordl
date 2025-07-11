#pragma once
// IWYU pragma private; include "VRUIControls/MouseState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VRUIControls/zzzz__MouseState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "VRUIControls/zzzz__ButtonState_def.hpp"
//  Writing Method size for method: ::VRUIControls::MouseState.AnyPressesThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::AnyPressesThisFrame)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x4aecd28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), "AnyPressesThisFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.AnyReleasesThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::AnyReleasesThisFrame)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x4aecdd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), "AnyReleasesThisFrame",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.GetButtonState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::VRUIControls::ButtonState* (::VRUIControls::MouseState::*)(::UnityEngine::EventSystems::PointerEventData_InputButton)>(&::VRUIControls::MouseState::GetButtonState)> {
  constexpr static std::size_t size = 0x194;
  constexpr static std::size_t addrs = 0x4aece7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), "GetButtonState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData_InputButton>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.SetButtonState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::MouseState::*)(
    ::UnityEngine::EventSystems::PointerEventData_InputButton, ::UnityEngine::EventSystems::PointerEventData_FramePressState, ::UnityEngine::EventSystems::PointerEventData*)>(
    &::VRUIControls::MouseState::SetButtonState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x4aed010;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), "SetButtonState", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData_InputButton>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData_FramePressState>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x4aed048;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>*& VRUIControls::MouseState::__cordl_internal_get__trackedButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedButtons;
}
constexpr ::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* const& VRUIControls::MouseState::__cordl_internal_get__trackedButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____trackedButtons;
}
constexpr void VRUIControls::MouseState::__cordl_internal_set__trackedButtons(::System::Collections::Generic::List_1<::VRUIControls::ButtonState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____trackedButtons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool VRUIControls::MouseState::AnyPressesThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), "AnyPressesThisFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool VRUIControls::MouseState::AnyReleasesThisFrame() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), "AnyReleasesThisFrame",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::VRUIControls::ButtonState* VRUIControls::MouseState::GetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), "GetButtonState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData_InputButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<::VRUIControls::ButtonState*, false>(this, ___internal_method, button);
}
inline void VRUIControls::MouseState::SetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button,
                                                     ::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton, ::UnityEngine::EventSystems::PointerEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), "SetButtonState", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData_InputButton>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData_FramePressState>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button, stateForMouseButton, data);
}
inline void VRUIControls::MouseState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::VRUIControls::MouseState*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::VRUIControls::MouseState* VRUIControls::MouseState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::VRUIControls::MouseState*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::MouseState::MouseState() {}

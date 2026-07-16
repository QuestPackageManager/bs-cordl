#pragma once
// IWYU pragma private; include "VRUIControls/MouseState.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "VRUIControls/zzzz__MouseState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "VRUIControls/zzzz__ButtonState_def.hpp"
//  Writing Method size for method: ::VRUIControls::MouseState.AnyPressesThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::AnyPressesThisFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x6e37074;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { "AnyPressesThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.AnyReleasesThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::AnyReleasesThisFrame)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x6e37128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { "AnyReleasesThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.GetButtonState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::VRUIControls::ButtonState* (::VRUIControls::MouseState::*)(::UnityEngine::EventSystems::PointerEventData_InputButton)>(
    &::VRUIControls::MouseState::GetButtonState)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x6e371e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { "GetButtonState", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState.SetButtonState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::MouseState::*)(
    ::UnityEngine::EventSystems::PointerEventData_InputButton, ::UnityEngine::EventSystems::PointerEventData_FramePressState, ::UnityEngine::EventSystems::PointerEventData*)>(
    &::VRUIControls::MouseState::SetButtonState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e37370;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { "SetButtonState",
                                                                                                               {},
                                                                                                               { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_FramePressState>(),
                                                                                                                 ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::VRUIControls::MouseState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::VRUIControls::MouseState::*)()>(&::VRUIControls::MouseState::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e373a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { ".ctor", {}, {} })));
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
  this->____trackedButtons = value;
}
inline bool VRUIControls::MouseState::AnyPressesThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { "AnyPressesThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool VRUIControls::MouseState::AnyReleasesThisFrame() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { "AnyReleasesThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::VRUIControls::ButtonState* VRUIControls::MouseState::GetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { "GetButtonState", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
  return ::cordl_internals::RunMethodRethrow<::VRUIControls::ButtonState*>(this, ___internal_method, button);
}
inline void VRUIControls::MouseState::SetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button,
                                                     ::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton, ::UnityEngine::EventSystems::PointerEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { "SetButtonState",
                                                                                                             {},
                                                                                                             { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>(),
                                                                                                               ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_FramePressState>(),
                                                                                                               ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, stateForMouseButton, data);
}
inline void VRUIControls::MouseState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::VRUIControls::MouseState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::VRUIControls::MouseState* VRUIControls::MouseState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::VRUIControls::MouseState*>());
}
// Ctor Parameters []
constexpr ::VRUIControls::MouseState::MouseState() {}

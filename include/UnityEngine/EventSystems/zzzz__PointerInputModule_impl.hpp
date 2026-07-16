#pragma once
// IWYU pragma private; include "UnityEngine/EventSystems/PointerInputModule.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseInputModule_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_impl.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "UnityEngine/EventSystems/zzzz__BaseEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerEventData_def.hpp"
#include "UnityEngine/EventSystems/zzzz__PointerInputModule_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Touch_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_ButtonState.get_eventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* (::UnityEngine::EventSystems::PointerInputModule_ButtonState::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule_ButtonState::get_eventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1c7f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(), { "get_eventData", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_ButtonState.set_eventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule_ButtonState::*)(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule_ButtonState::set_eventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1c7f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(),
                                                             { "set_eventData", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_ButtonState.get_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData_InputButton (::UnityEngine::EventSystems::PointerInputModule_ButtonState::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule_ButtonState::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1c800;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(), { "get_button", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_ButtonState.set_button
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule_ButtonState::*)(::UnityEngine::EventSystems::PointerEventData_InputButton)>(
    &::UnityEngine::EventSystems::PointerInputModule_ButtonState::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6e1c808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(),
                                                                                           { "set_button", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_ButtonState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule_ButtonState::*)()>(&::UnityEngine::EventSystems::PointerInputModule_ButtonState::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e1c810;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton& UnityEngine::EventSystems::PointerInputModule_ButtonState::__cordl_internal_get_m_Button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Button;
}
constexpr ::UnityEngine::EventSystems::PointerEventData_InputButton const& UnityEngine::EventSystems::PointerInputModule_ButtonState::__cordl_internal_get_m_Button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Button;
}
constexpr void UnityEngine::EventSystems::PointerInputModule_ButtonState::__cordl_internal_set_m_Button(::UnityEngine::EventSystems::PointerEventData_InputButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Button = value;
}
constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*& UnityEngine::EventSystems::PointerInputModule_ButtonState::__cordl_internal_get_m_EventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventData;
}
constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* const& UnityEngine::EventSystems::PointerInputModule_ButtonState::__cordl_internal_get_m_EventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventData;
}
constexpr void UnityEngine::EventSystems::PointerInputModule_ButtonState::__cordl_internal_set_m_EventData(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_EventData = value;
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* UnityEngine::EventSystems::PointerInputModule_ButtonState::get_eventData() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(), { "get_eventData", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerInputModule_ButtonState::set_eventData(::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(),
                                                           { "set_eventData", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::PointerEventData_InputButton UnityEngine::EventSystems::PointerInputModule_ButtonState::get_button() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(), { "get_button", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData_InputButton>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerInputModule_ButtonState::set_button(::UnityEngine::EventSystems::PointerEventData_InputButton value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(),
                                                                                         { "set_button", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void UnityEngine::EventSystems::PointerInputModule_ButtonState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerInputModule_ButtonState* UnityEngine::EventSystems::PointerInputModule_ButtonState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerInputModule_ButtonState::PointerInputModule_ButtonState() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_MouseState.AnyPressesThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerInputModule_MouseState::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule_MouseState::AnyPressesThisFrame)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x6e1c814;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(), { "AnyPressesThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_MouseState.AnyReleasesThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerInputModule_MouseState::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule_MouseState::AnyReleasesThisFrame)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x6e1c8f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(), { "AnyReleasesThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_MouseState.GetButtonState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerInputModule_ButtonState* (
    ::UnityEngine::EventSystems::PointerInputModule_MouseState::*)(::UnityEngine::EventSystems::PointerEventData_InputButton)>(
    &::UnityEngine::EventSystems::PointerInputModule_MouseState::GetButtonState)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x6e1c9d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(),
                                                                                           { "GetButtonState", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_MouseState.SetButtonState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule_MouseState::*)(
    ::UnityEngine::EventSystems::PointerEventData_InputButton, ::UnityEngine::EventSystems::PointerEventData_FramePressState, ::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule_MouseState::SetButtonState)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x6e1bd3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(),
                                         { "SetButtonState",
                                           {},
                                           { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>(),
                                             ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_FramePressState>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_MouseState._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule_MouseState::*)()>(&::UnityEngine::EventSystems::PointerInputModule_MouseState::_ctor)> {
  constexpr static std::size_t size = 0x74;
  constexpr static std::size_t addrs = 0x6e1c77c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>*&
UnityEngine::EventSystems::PointerInputModule_MouseState::__cordl_internal_get_m_TrackedButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedButtons;
}
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>* const&
UnityEngine::EventSystems::PointerInputModule_MouseState::__cordl_internal_get_m_TrackedButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedButtons;
}
constexpr void UnityEngine::EventSystems::PointerInputModule_MouseState::__cordl_internal_set_m_TrackedButtons(
    ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TrackedButtons = value;
}
inline bool UnityEngine::EventSystems::PointerInputModule_MouseState::AnyPressesThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(), { "AnyPressesThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::PointerInputModule_MouseState::AnyReleasesThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(), { "AnyReleasesThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerInputModule_ButtonState*
UnityEngine::EventSystems::PointerInputModule_MouseState::GetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(),
                                                                                         { "GetButtonState", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_ButtonState*>(this, ___internal_method, button);
}
inline void UnityEngine::EventSystems::PointerInputModule_MouseState::SetButtonState(::UnityEngine::EventSystems::PointerEventData_InputButton button,
                                                                                     ::UnityEngine::EventSystems::PointerEventData_FramePressState stateForMouseButton,
                                                                                     ::UnityEngine::EventSystems::PointerEventData* data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(),
                                       { "SetButtonState",
                                         {},
                                         { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_InputButton>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData_FramePressState>(),
                                           ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, button, stateForMouseButton, data);
}
inline void UnityEngine::EventSystems::PointerInputModule_MouseState::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* UnityEngine::EventSystems::PointerInputModule_MouseState::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::PointerInputModule_MouseState*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseState::PointerInputModule_MouseState() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData.PressedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::PressedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6e1c8e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>(), { "PressedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData.ReleasedThisFrame
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::ReleasedThisFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e1c9c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>(), { "ReleasedThisFrame", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6e1cb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState& UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::__cordl_internal_get_buttonState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonState;
}
constexpr ::UnityEngine::EventSystems::PointerEventData_FramePressState const& UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::__cordl_internal_get_buttonState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonState;
}
constexpr void UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::__cordl_internal_set_buttonState(::UnityEngine::EventSystems::PointerEventData_FramePressState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonState = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::__cordl_internal_get_buttonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonData;
}
constexpr ::UnityEngine::EventSystems::PointerEventData* const& UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::__cordl_internal_get_buttonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonData;
}
constexpr void UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::__cordl_internal_set_buttonData(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonData = value;
}
inline bool UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::PressedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>(), { "PressedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::ReleasedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>(), { "ReleasedThisFrame", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData* UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseButtonEventData::PointerInputModule_MouseButtonEventData() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetPointerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerInputModule::*)(int32_t, ::by_ref<::UnityEngine::EventSystems::PointerEventData*>, bool)>(
    &::UnityEngine::EventSystems::PointerInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x6e1b4f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                         { "GetPointerData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::EventSystems::PointerEventData*>>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.RemovePointerData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule::RemovePointerData)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6e1b600;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                                                                           { "RemovePointerData", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetTouchPointerEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (
    ::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::Touch, ::by_ref<bool>, ::by_ref<bool>)>(&::UnityEngine::EventSystems::PointerInputModule::GetTouchPointerEventData)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x6e1b668;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                                { "GetTouchPointerEventData", {}, { ::i2c::type_of<::UnityEngine::Touch>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.CopyFromTo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::PointerInputModule::CopyFromTo)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x6e1b8cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                            { "CopyFromTo", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.StateForMouseButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData_FramePressState (::UnityEngine::EventSystems::PointerInputModule::*)(int32_t)>(
    &::UnityEngine::EventSystems::PointerInputModule::StateForMouseButton)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x6e1b974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { "StateForMouseButton", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetMousePointerEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerInputModule_MouseState* (::UnityEngine::EventSystems::PointerInputModule::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6e1b9f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 28 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetMousePointerEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerInputModule_MouseState* (::UnityEngine::EventSystems::PointerInputModule::*)(int32_t)>(
    &::UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x338;
  constexpr static std::size_t addrs = 0x6e1ba04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 29 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetLastPointerEventData
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::UnityEngine::EventSystems::PointerInputModule::*)(int32_t)>(
    &::UnityEngine::EventSystems::PointerInputModule::GetLastPointerEventData)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6e1bd70;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { "GetLastPointerEventData", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ShouldStartDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, bool)>(&::UnityEngine::EventSystems::PointerInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x6e1bd8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                            { "ShouldStartDrag", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ProcessMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule::ProcessMove)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6e1bdbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 30 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ProcessDrag
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x6e1be20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 31 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::EventSystems::PointerInputModule::*)(int32_t)>(&::UnityEngine::EventSystems::PointerInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6e1c120;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 20 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ClearSelection
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)()>(&::UnityEngine::EventSystems::PointerInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x6e1c1c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { "ClearSelection", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::EventSystems::PointerInputModule::*)()>(&::UnityEngine::EventSystems::PointerInputModule::ToString)> {
  constexpr static std::size_t size = 0x278;
  constexpr static std::size_t addrs = 0x6e1c344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.DeselectIfSelectionChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule::DeselectIfSelectionChanged)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6e1c5bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                         { "DeselectIfSelectionChanged", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)()>(&::UnityEngine::EventSystems::PointerInputModule::_ctor)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x6e1c6b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::EventSystems::PointerInputModule::__cordl_internal_get_m_PointerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerData;
}
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* const&
UnityEngine::EventSystems::PointerInputModule::__cordl_internal_get_m_PointerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerData;
}
constexpr void
UnityEngine::EventSystems::PointerInputModule::__cordl_internal_set_m_PointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_PointerData = value;
}
constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseState*& UnityEngine::EventSystems::PointerInputModule::__cordl_internal_get_m_MouseState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr ::UnityEngine::EventSystems::PointerInputModule_MouseState* const& UnityEngine::EventSystems::PointerInputModule::__cordl_internal_get_m_MouseState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr void UnityEngine::EventSystems::PointerInputModule::__cordl_internal_set_m_MouseState(::UnityEngine::EventSystems::PointerInputModule_MouseState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_MouseState = value;
}
inline bool UnityEngine::EventSystems::PointerInputModule::GetPointerData(int32_t id, ::by_ref<::UnityEngine::EventSystems::PointerEventData*> data, bool create) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                       { "GetPointerData", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::UnityEngine::EventSystems::PointerEventData*>>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, id, data, create);
}
inline void UnityEngine::EventSystems::PointerInputModule::RemovePointerData(::UnityEngine::EventSystems::PointerEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                                                                         { "RemovePointerData", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, data);
}
inline ::UnityEngine::EventSystems::PointerEventData* UnityEngine::EventSystems::PointerInputModule::GetTouchPointerEventData(::UnityEngine::Touch input, ::by_ref<bool> pressed,
                                                                                                                              ::by_ref<bool> released) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                              { "GetTouchPointerEventData", {}, { ::i2c::type_of<::UnityEngine::Touch>(), ::i2c::type_of<::by_ref<bool>>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, input, pressed, released);
}
inline void UnityEngine::EventSystems::PointerInputModule::CopyFromTo(::UnityEngine::EventSystems::PointerEventData* from, ::UnityEngine::EventSystems::PointerEventData* to) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                       { "CopyFromTo", {}, { ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>(), ::i2c::type_of<::UnityEngine::EventSystems::PointerEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, from, to);
}
inline ::UnityEngine::EventSystems::PointerEventData_FramePressState UnityEngine::EventSystems::PointerInputModule::StateForMouseButton(int32_t buttonId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { "StateForMouseButton", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData_FramePressState>(this, ___internal_method, buttonId);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 28 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerInputModule_MouseState* UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData(int32_t id) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 29 })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerInputModule_MouseState*>(this, ___internal_method, id);
}
inline ::UnityEngine::EventSystems::PointerEventData* UnityEngine::EventSystems::PointerInputModule::GetLastPointerEventData(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { "GetLastPointerEventData", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*>(this, ___internal_method, id);
}
inline bool UnityEngine::EventSystems::PointerInputModule::ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                          { "ShouldStartDrag", {}, { ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<float_t>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, pressPos, currentPos, threshold, useDragThreshold);
}
inline void UnityEngine::EventSystems::PointerInputModule::ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 30 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline void UnityEngine::EventSystems::PointerInputModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 31 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, pointerEvent);
}
inline bool UnityEngine::EventSystems::PointerInputModule::IsPointerOverGameObject(int32_t pointerId) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 20 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, pointerId);
}
inline void UnityEngine::EventSystems::PointerInputModule::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { "ClearSelection", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::StringW UnityEngine::EventSystems::PointerInputModule::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerInputModule::DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(),
                                              { "DeselectIfSelectionChanged", {}, { ::i2c::type_of<::UnityEngine::GameObject*>(), ::i2c::type_of<::UnityEngine::EventSystems::BaseEventData*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, currentOverGo, pointerEvent);
}
inline void UnityEngine::EventSystems::PointerInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::EventSystems::PointerInputModule*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::PointerInputModule* UnityEngine::EventSystems::PointerInputModule::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::UnityEngine::EventSystems::PointerInputModule*>());
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerInputModule::PointerInputModule() {}

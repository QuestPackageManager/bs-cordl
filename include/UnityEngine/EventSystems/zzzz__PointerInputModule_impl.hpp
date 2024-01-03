#pragma once
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
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__ButtonState.get_eventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* (
    ::UnityEngine::EventSystems::__PointerInputModule__ButtonState::*)()>(&::UnityEngine::EventSystems::__PointerInputModule__ButtonState::get_eventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9ce84;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), "get_eventData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__ButtonState.set_eventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__PointerInputModule__ButtonState::*)(
    ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*)>(&::UnityEngine::EventSystems::__PointerInputModule__ButtonState::set_eventData)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9ce8c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), "set_eventData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__ButtonState.get_button
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerEventData__InputButton (
    ::UnityEngine::EventSystems::__PointerInputModule__ButtonState::*)()>(&::UnityEngine::EventSystems::__PointerInputModule__ButtonState::get_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9ce94;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), "get_button",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__ButtonState.set_button
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__PointerInputModule__ButtonState::*)(
    ::UnityEngine::EventSystems::__PointerEventData__InputButton)>(&::UnityEngine::EventSystems::__PointerInputModule__ButtonState::set_button)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9ce9c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), "set_button", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerEventData__InputButton>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__ButtonState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__PointerInputModule__ButtonState::*)()>(
    &::UnityEngine::EventSystems::__PointerInputModule__ButtonState::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9cea4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton& UnityEngine::EventSystems::__PointerInputModule__ButtonState::__get_m_Button() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Button;
}
constexpr ::UnityEngine::EventSystems::__PointerEventData__InputButton const& UnityEngine::EventSystems::__PointerInputModule__ButtonState::__get_m_Button() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Button;
}
constexpr void UnityEngine::EventSystems::__PointerInputModule__ButtonState::__set_m_Button(::UnityEngine::EventSystems::__PointerEventData__InputButton value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_Button = value;
}
constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*& UnityEngine::EventSystems::__PointerInputModule__ButtonState::__get_m_EventData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*> const&
UnityEngine::EventSystems::__PointerInputModule__ButtonState::__get_m_EventData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_EventData;
}
constexpr void UnityEngine::EventSystems::__PointerInputModule__ButtonState::__set_m_EventData(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_EventData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* UnityEngine::EventSystems::__PointerInputModule__ButtonState::get_eventData() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), "get_eventData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::__PointerInputModule__ButtonState::set_eventData(::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), "set_eventData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::__PointerEventData__InputButton UnityEngine::EventSystems::__PointerInputModule__ButtonState::get_button() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), "get_button",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerEventData__InputButton, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::__PointerInputModule__ButtonState::set_button(::UnityEngine::EventSystems::__PointerEventData__InputButton value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), "set_button", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerEventData__InputButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::EventSystems::__PointerInputModule__ButtonState* UnityEngine::EventSystems::__PointerInputModule__ButtonState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>());
}
inline void UnityEngine::EventSystems::__PointerInputModule__ButtonState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::__PointerInputModule__ButtonState::__PointerInputModule__ButtonState() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__MouseState.AnyPressesThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::__PointerInputModule__MouseState::*)()>(
    &::UnityEngine::EventSystems::__PointerInputModule__MouseState::AnyPressesThisFrame)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2d9ceac;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), "AnyPressesThisFrame",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__MouseState.AnyReleasesThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::__PointerInputModule__MouseState::*)()>(
    &::UnityEngine::EventSystems::__PointerInputModule__MouseState::AnyReleasesThisFrame)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x2d9cf70;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), "AnyReleasesThisFrame",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__MouseState.GetButtonState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerInputModule__ButtonState* (
    ::UnityEngine::EventSystems::__PointerInputModule__MouseState::*)(::UnityEngine::EventSystems::__PointerEventData__InputButton)>(
    &::UnityEngine::EventSystems::__PointerInputModule__MouseState::GetButtonState)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x2d9d03c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), "GetButtonState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerEventData__InputButton>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__MouseState.SetButtonState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__PointerInputModule__MouseState::*)(
    ::UnityEngine::EventSystems::__PointerEventData__InputButton, ::UnityEngine::EventSystems::__PointerEventData__FramePressState, ::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::__PointerInputModule__MouseState::SetButtonState)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2d9c438;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), "SetButtonState", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerEventData__InputButton>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerEventData__FramePressState>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__MouseState._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__PointerInputModule__MouseState::*)()>(
    &::UnityEngine::EventSystems::__PointerInputModule__MouseState::_ctor)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d9ce08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>*&
UnityEngine::EventSystems::__PointerInputModule__MouseState::__get_m_TrackedButtons() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedButtons;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>*> const&
UnityEngine::EventSystems::__PointerInputModule__MouseState::__get_m_TrackedButtons() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TrackedButtons;
}
constexpr void
UnityEngine::EventSystems::__PointerInputModule__MouseState::__set_m_TrackedButtons(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_TrackedButtons)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::EventSystems::__PointerInputModule__MouseState::AnyPressesThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), "AnyPressesThisFrame",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::__PointerInputModule__MouseState::AnyReleasesThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), "AnyReleasesThisFrame",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::__PointerInputModule__ButtonState*
UnityEngine::EventSystems::__PointerInputModule__MouseState::GetButtonState(::UnityEngine::EventSystems::__PointerEventData__InputButton button) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), "GetButtonState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerEventData__InputButton>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerInputModule__ButtonState*, false>(this, ___internal_method, button);
}
inline void UnityEngine::EventSystems::__PointerInputModule__MouseState::SetButtonState(::UnityEngine::EventSystems::__PointerEventData__InputButton button,
                                                                                        ::UnityEngine::EventSystems::__PointerEventData__FramePressState stateForMouseButton,
                                                                                        ::UnityEngine::EventSystems::PointerEventData* data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), "SetButtonState", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerEventData__InputButton>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::__PointerEventData__FramePressState>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button, stateForMouseButton, data);
}
inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* UnityEngine::EventSystems::__PointerInputModule__MouseState::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>());
}
inline void UnityEngine::EventSystems::__PointerInputModule__MouseState::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseState*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseState::__PointerInputModule__MouseState() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData.PressedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::*)()>(
    &::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::PressedThisFrame)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2d9cf60;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get(),
                                                 "PressedThisFrame", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData.ReleasedThisFrame
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::*)()>(
    &::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::ReleasedThisFrame)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d9d028;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get(),
                                                 "ReleasedThisFrame", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::*)()>(
    &::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2d9d1d4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get(), ".ctor",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState& UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::__get_buttonState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonState;
}
constexpr ::UnityEngine::EventSystems::__PointerEventData__FramePressState const& UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::__get_buttonState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonState;
}
constexpr void UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::__set_buttonState(::UnityEngine::EventSystems::__PointerEventData__FramePressState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___buttonState = value;
}
constexpr ::UnityEngine::EventSystems::PointerEventData*& UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::__get_buttonData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonData;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::PointerEventData*> const& UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::__get_buttonData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___buttonData;
}
constexpr void UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::__set_buttonData(::UnityEngine::EventSystems::PointerEventData* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___buttonData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::PressedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get(),
                                               "PressedThisFrame", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::ReleasedThisFrame() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get(),
                                               "ReleasedThisFrame", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData* UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>());
}
inline void UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData*>::get(), ".ctor",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseButtonEventData::__PointerInputModule__MouseButtonEventData() {}
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetPointerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::PointerInputModule::*)(
    int32_t, ByRef<::UnityEngine::EventSystems::PointerEventData*>, bool)>(&::UnityEngine::EventSystems::PointerInputModule::GetPointerData)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2d9bb64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "GetPointerData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::PointerEventData*>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.RemovePointerData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule::RemovePointerData)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x2d9bc4c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "RemovePointerData", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetTouchPointerEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData* (
    ::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::Touch, ByRef<bool>, ByRef<bool>)>(&::UnityEngine::EventSystems::PointerInputModule::GetTouchPointerEventData)> {
  constexpr static std::size_t size = 0x368;
  constexpr static std::size_t addrs = 0x2d9bca8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "GetTouchPointerEventData", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.CopyFromTo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(
    ::UnityEngine::EventSystems::PointerEventData*, ::UnityEngine::EventSystems::PointerEventData*)>(&::UnityEngine::EventSystems::PointerInputModule::CopyFromTo)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x2d9c010;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "CopyFromTo", std::vector<Il2CppClass*>{},
                                    ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.StateForMouseButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerEventData__FramePressState (::UnityEngine::EventSystems::PointerInputModule::*)(
    int32_t)>(&::UnityEngine::EventSystems::PointerInputModule::StateForMouseButton)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2d9c0a0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "StateForMouseButton",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetMousePointerEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerInputModule__MouseState* (
    ::UnityEngine::EventSystems::PointerInputModule::*)()>(&::UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x2d9c11c;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 27));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetMousePointerEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::__PointerInputModule__MouseState* (
    ::UnityEngine::EventSystems::PointerInputModule::*)(int32_t)>(&::UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData)> {
  constexpr static std::size_t size = 0x308;
  constexpr static std::size_t addrs = 0x2d9c130;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 28));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.GetLastPointerEventData
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::EventSystems::PointerEventData* (::UnityEngine::EventSystems::PointerInputModule::*)(int32_t)>(
    &::UnityEngine::EventSystems::PointerInputModule::GetLastPointerEventData)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x2d9c470;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "GetLastPointerEventData",
                                                 std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ShouldStartDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, float_t, bool)>(
    &::UnityEngine::EventSystems::PointerInputModule::ShouldStartDrag)> {
  constexpr static std::size_t size = 0x30;
  constexpr static std::size_t addrs = 0x2d9c490;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "ShouldStartDrag", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ProcessMove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule::ProcessMove)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2d9c4c0;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 29));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ProcessDrag
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(::UnityEngine::EventSystems::PointerEventData*)>(
    &::UnityEngine::EventSystems::PointerInputModule::ProcessDrag)> {
  constexpr static std::size_t size = 0x2a8;
  constexpr static std::size_t addrs = 0x2d9c504;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 30));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.IsPointerOverGameObject
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::EventSystems::PointerInputModule::*)(int32_t)>(
    &::UnityEngine::EventSystems::PointerInputModule::IsPointerOverGameObject)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x2d9c7ac;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 20));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ClearSelection
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule::ClearSelection)> {
  constexpr static std::size_t size = 0x1c0;
  constexpr static std::size_t addrs = 0x2d9c848;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(),
                                                                               "ClearSelection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::EventSystems::PointerInputModule::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule::ToString)> {
  constexpr static std::size_t size = 0x270;
  constexpr static std::size_t addrs = 0x2d9ca08;

  inline static const ::MethodInfo* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule.DeselectIfSelectionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::EventSystems::BaseEventData*)>(&::UnityEngine::EventSystems::PointerInputModule::DeselectIfSelectionChanged)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x2d9cc78;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "DeselectIfSelectionChanged", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::EventSystems::PointerInputModule._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::EventSystems::PointerInputModule::*)()>(
    &::UnityEngine::EventSystems::PointerInputModule::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2d9cd64;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), ".ctor",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*& UnityEngine::EventSystems::PointerInputModule::__get_m_PointerData() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerData;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>*> const&
UnityEngine::EventSystems::PointerInputModule::__get_m_PointerData() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_PointerData;
}
constexpr void UnityEngine::EventSystems::PointerInputModule::__set_m_PointerData(::System::Collections::Generic::Dictionary_2<int32_t, ::UnityEngine::EventSystems::PointerEventData*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_PointerData)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::EventSystems::__PointerInputModule__MouseState*& UnityEngine::EventSystems::PointerInputModule::__get_m_MouseState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::EventSystems::__PointerInputModule__MouseState*> const& UnityEngine::EventSystems::PointerInputModule::__get_m_MouseState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_MouseState;
}
constexpr void UnityEngine::EventSystems::PointerInputModule::__set_m_MouseState(::UnityEngine::EventSystems::__PointerInputModule__MouseState* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_MouseState)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline bool UnityEngine::EventSystems::PointerInputModule::GetPointerData(int32_t id, ByRef<::UnityEngine::EventSystems::PointerEventData*> data, bool create) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "GetPointerData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<::UnityEngine::EventSystems::PointerEventData*>>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, id, data, create);
}
inline void UnityEngine::EventSystems::PointerInputModule::RemovePointerData(::UnityEngine::EventSystems::PointerEventData* data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "RemovePointerData", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, data);
}
inline ::UnityEngine::EventSystems::PointerEventData* UnityEngine::EventSystems::PointerInputModule::GetTouchPointerEventData(::UnityEngine::Touch input, ByRef<bool> pressed, ByRef<bool> released) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "GetTouchPointerEventData", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Touch>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*, false>(this, ___internal_method, input, pressed, released);
}
inline void UnityEngine::EventSystems::PointerInputModule::CopyFromTo(::UnityEngine::EventSystems::PointerEventData* from, ::UnityEngine::EventSystems::PointerEventData* to) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "CopyFromTo", std::vector<Il2CppClass*>{},
                                  ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get(),
                                                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::PointerEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, from, to);
}
inline ::UnityEngine::EventSystems::__PointerEventData__FramePressState UnityEngine::EventSystems::PointerInputModule::StateForMouseButton(int32_t buttonId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "StateForMouseButton",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerEventData__FramePressState, false>(this, ___internal_method, buttonId);
}
inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 27)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerInputModule__MouseState*, false>(this, ___internal_method);
}
inline ::UnityEngine::EventSystems::__PointerInputModule__MouseState* UnityEngine::EventSystems::PointerInputModule::GetMousePointerEventData(int32_t id) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 28)));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::__PointerInputModule__MouseState*, false>(this, ___internal_method, id);
}
inline ::UnityEngine::EventSystems::PointerEventData* UnityEngine::EventSystems::PointerInputModule::GetLastPointerEventData(int32_t id) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "GetLastPointerEventData",
                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::EventSystems::PointerEventData*, false>(this, ___internal_method, id);
}
inline bool UnityEngine::EventSystems::PointerInputModule::ShouldStartDrag(::UnityEngine::Vector2 pressPos, ::UnityEngine::Vector2 currentPos, float_t threshold, bool useDragThreshold) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "ShouldStartDrag", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<float_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, pressPos, currentPos, threshold, useDragThreshold);
}
inline void UnityEngine::EventSystems::PointerInputModule::ProcessMove(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 29)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerEvent);
}
inline void UnityEngine::EventSystems::PointerInputModule::ProcessDrag(::UnityEngine::EventSystems::PointerEventData* pointerEvent) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 30)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, pointerEvent);
}
inline bool UnityEngine::EventSystems::PointerInputModule::IsPointerOverGameObject(int32_t pointerId) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 20)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, pointerId);
}
inline void UnityEngine::EventSystems::PointerInputModule::ClearSelection() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(),
                                                                             "ClearSelection", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::EventSystems::PointerInputModule::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::EventSystems::PointerInputModule::DeselectIfSelectionChanged(::UnityEngine::GameObject* currentOverGo, ::UnityEngine::EventSystems::BaseEventData* pointerEvent) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), "DeselectIfSelectionChanged", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::EventSystems::BaseEventData*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, currentOverGo, pointerEvent);
}
inline ::UnityEngine::EventSystems::PointerInputModule* UnityEngine::EventSystems::PointerInputModule::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::New<::UnityEngine::EventSystems::PointerInputModule*>());
}
inline void UnityEngine::EventSystems::PointerInputModule::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::EventSystems::PointerInputModule*>::get(), ".ctor",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::EventSystems::PointerInputModule::PointerInputModule() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

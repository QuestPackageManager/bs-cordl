#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/PointerEvent.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventSource_def.hpp"
#include "UnityEngine/InputForUI/zzzz__IEventProperties_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::PointerEvent_Type::PointerEvent_Type(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::PointerEvent_Type::PointerEvent_Type() {}
constexpr ::UnityEngine::InputForUI::PointerEvent_Type UnityEngine::InputForUI::PointerEvent_Type::PointerMoved{ static_cast<int32_t>(0x1) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Type UnityEngine::InputForUI::PointerEvent_Type::Scroll{ static_cast<int32_t>(0x2) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Type UnityEngine::InputForUI::PointerEvent_Type::ButtonPressed{ static_cast<int32_t>(0x3) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Type UnityEngine::InputForUI::PointerEvent_Type::ButtonReleased{ static_cast<int32_t>(0x4) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Type UnityEngine::InputForUI::PointerEvent_Type::State{ static_cast<int32_t>(0x5) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Type UnityEngine::InputForUI::PointerEvent_Type::TouchCanceled{ static_cast<int32_t>(0x6) };
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::PointerEvent_Button::PointerEvent_Button(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::PointerEvent_Button::PointerEvent_Button() {}
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::None{ static_cast<uint32_t>(0x0u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::Primary{ static_cast<uint32_t>(0x1u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::FingerInTouch{ static_cast<uint32_t>(0x1u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::PenTipInTouch{ static_cast<uint32_t>(0x1u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::PenEraserInTouch{ static_cast<uint32_t>(0x2u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::PenBarrelButton{ static_cast<uint32_t>(0x4u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::MouseLeft{ static_cast<uint32_t>(0x1u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::MouseRight{ static_cast<uint32_t>(0x2u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::MouseMiddle{ static_cast<uint32_t>(0x4u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::MouseForward{ static_cast<uint32_t>(0x8u) };
constexpr ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent_Button::MouseBack{ static_cast<uint32_t>(0x10u) };
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent_ButtonsState.Set
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::PointerEvent_ButtonsState::*)(::UnityEngine::InputForUI::PointerEvent_Button, bool)>(
    &::UnityEngine::InputForUI::PointerEvent_ButtonsState::Set)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x698f82c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::PointerEvent_Button>::get(),
                                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent_ButtonsState.Get
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::PointerEvent_ButtonsState::*)(::UnityEngine::InputForUI::PointerEvent_Button)>(
    &::UnityEngine::InputForUI::PointerEvent_ButtonsState::Get)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x698f848;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::PointerEvent_Button>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent_ButtonsState.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::PointerEvent_ButtonsState::*)()>(
    &::UnityEngine::InputForUI::PointerEvent_ButtonsState::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698f858;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(),
                                                                               "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent_ButtonsState.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputForUI::PointerEvent_ButtonsState::*)()>(
    &::UnityEngine::InputForUI::PointerEvent_ButtonsState::ToString)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x698f860;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(), 3));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::PointerEvent_ButtonsState::Set(::UnityEngine::InputForUI::PointerEvent_Button button, bool pressed) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(), "Set", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::PointerEvent_Button>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, button, pressed);
}
inline bool UnityEngine::InputForUI::PointerEvent_ButtonsState::Get(::UnityEngine::InputForUI::PointerEvent_Button button) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(), "Get", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::PointerEvent_Button>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, button);
}
inline void UnityEngine::InputForUI::PointerEvent_ButtonsState::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(),
                                                                             "Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::StringW UnityEngine::InputForUI::PointerEvent_ButtonsState::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent_ButtonsState>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::PointerEvent_ButtonsState::PointerEvent_ButtonsState(uint32_t _state) noexcept {
  this->_state = _state;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::PointerEvent_ButtonsState::PointerEvent_ButtonsState() {}
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_isPrimaryPointer
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::PointerEvent::*)()>(
    &::UnityEngine::InputForUI::PointerEvent::get_isPrimaryPointer)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x698eba4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(),
                                                                               "get_isPrimaryPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_azimuth
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_azimuth)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698ebb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "get_azimuth",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_altitude
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<float_t (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::get_altitude)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x698ec64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "get_altitude",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_timestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IntegerTime::DiscreteTime (::UnityEngine::InputForUI::PointerEvent::*)()>(
    &::UnityEngine::InputForUI::PointerEvent::get_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698ecdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "get_timestamp",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.set_timestamp
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::PointerEvent::*)(::Unity::IntegerTime::DiscreteTime)>(
    &::UnityEngine::InputForUI::PointerEvent::set_timestamp)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698ece4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "set_timestamp", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_eventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventSource (::UnityEngine::InputForUI::PointerEvent::*)()>(
    &::UnityEngine::InputForUI::PointerEvent::get_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698ecec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(),
                                                                               "get_eventSource", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.set_eventSource
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::PointerEvent::*)(::UnityEngine::InputForUI::EventSource)>(
    &::UnityEngine::InputForUI::PointerEvent::set_eventSource)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698ecf4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "set_eventSource", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.set_playerId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::PointerEvent::*)(uint32_t)>(
    &::UnityEngine::InputForUI::PointerEvent::set_playerId)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698ecfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "set_playerId", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.get_eventModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::EventModifiers (::UnityEngine::InputForUI::PointerEvent::*)()>(
    &::UnityEngine::InputForUI::PointerEvent::get_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698ed04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(),
                                                                               "get_eventModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.set_eventModifiers
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::PointerEvent::*)(::UnityEngine::InputForUI::EventModifiers)>(
    &::UnityEngine::InputForUI::PointerEvent::set_eventModifiers)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x698ed0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "set_eventModifiers", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventModifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputForUI::PointerEvent::*)()>(&::UnityEngine::InputForUI::PointerEvent::ToString)> {
  constexpr static std::size_t size = 0xb04;
  constexpr static std::size_t addrs = 0x698ed14;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerEvent.ButtonFromButtonIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputForUI::PointerEvent_Button (*)(int32_t)>(
    &::UnityEngine::InputForUI::PointerEvent::ButtonFromButtonIndex)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x698f818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "ButtonFromButtonIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputForUI::PointerEvent::get_isPrimaryPointer() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(),
                                                                             "get_isPrimaryPointer", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputForUI::PointerEvent::get_azimuth() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "get_azimuth",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline float_t UnityEngine::InputForUI::PointerEvent::get_altitude() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "get_altitude",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<float_t, false>(this, ___internal_method);
}
inline ::Unity::IntegerTime::DiscreteTime UnityEngine::InputForUI::PointerEvent::get_timestamp() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "get_timestamp",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerEvent::set_timestamp(::Unity::IntegerTime::DiscreteTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "set_timestamp", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IntegerTime::DiscreteTime>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventSource UnityEngine::InputForUI::PointerEvent::get_eventSource() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "get_eventSource",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventSource, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerEvent::set_eventSource(::UnityEngine::InputForUI::EventSource value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "set_eventSource", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventSource>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputForUI::PointerEvent::set_playerId(uint32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "set_playerId", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::EventModifiers UnityEngine::InputForUI::PointerEvent::get_eventModifiers() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(),
                                                                             "get_eventModifiers", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::EventModifiers, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerEvent::set_eventModifiers(::UnityEngine::InputForUI::EventModifiers value) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "set_eventModifiers", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventModifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::StringW UnityEngine::InputForUI::PointerEvent::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerEvent::ButtonFromButtonIndex(int32_t index) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::PointerEvent>::get(), "ButtonFromButtonIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::PointerEvent_Button, false>(nullptr, ___internal_method, index);
}
/// @brief Convert operator to "::UnityEngine::InputForUI::IEventProperties"
constexpr UnityEngine::InputForUI::PointerEvent::operator ::UnityEngine::InputForUI::IEventProperties*() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::UnityEngine::InputForUI::IEventProperties"
constexpr ::UnityEngine::InputForUI::IEventProperties* UnityEngine::InputForUI::PointerEvent::i___UnityEngine__InputForUI__IEventProperties() {
  return static_cast<::UnityEngine::InputForUI::IEventProperties*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "type", ty: "::UnityEngine::InputForUI::PointerEvent_Type", modifiers: "", def_value: Some("{}") }, CppParam { name: "pointerIndex", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "deltaPosition", ty: "::UnityEngine::Vector2",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "scroll", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "displayIndex", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "tilt", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "twist", ty: "float_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "pressure", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "isInverted", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "button", ty: "::UnityEngine::InputForUI::PointerEvent_Button", modifiers: "", def_value: Some("{}") }, CppParam { name: "buttonsState", ty: "::UnityEngine::InputForUI::PointerEvent_ButtonsState",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "clickCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_timestamp_k__BackingField", ty:
// "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_eventSource_k__BackingField", ty: "::UnityEngine::InputForUI::EventSource", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_playerId_k__BackingField", ty: "uint32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_eventModifiers_k__BackingField", ty:
// "::UnityEngine::InputForUI::EventModifiers", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::PointerEvent::PointerEvent(::UnityEngine::InputForUI::PointerEvent_Type type, int32_t pointerIndex, ::UnityEngine::Vector2 position,
                                                                ::UnityEngine::Vector2 deltaPosition, ::UnityEngine::Vector2 scroll, int32_t displayIndex, ::UnityEngine::Vector2 tilt, float_t twist,
                                                                float_t pressure, bool isInverted, ::UnityEngine::InputForUI::PointerEvent_Button button,
                                                                ::UnityEngine::InputForUI::PointerEvent_ButtonsState buttonsState, int32_t clickCount,
                                                                ::Unity::IntegerTime::DiscreteTime _timestamp_k__BackingField, ::UnityEngine::InputForUI::EventSource _eventSource_k__BackingField,
                                                                uint32_t _playerId_k__BackingField, ::UnityEngine::InputForUI::EventModifiers _eventModifiers_k__BackingField) noexcept {
  this->type = type;
  this->pointerIndex = pointerIndex;
  this->position = position;
  this->deltaPosition = deltaPosition;
  this->scroll = scroll;
  this->displayIndex = displayIndex;
  this->tilt = tilt;
  this->twist = twist;
  this->pressure = pressure;
  this->isInverted = isInverted;
  this->button = button;
  this->buttonsState = buttonsState;
  this->clickCount = clickCount;
  this->_timestamp_k__BackingField = _timestamp_k__BackingField;
  this->_eventSource_k__BackingField = _eventSource_k__BackingField;
  this->_playerId_k__BackingField = _playerId_k__BackingField;
  this->_eventModifiers_k__BackingField = _eventModifiers_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::PointerEvent::PointerEvent() {}

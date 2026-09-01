#pragma once
// IWYU pragma private; include "UnityEngine\InputForUI\PointerState.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_impl.hpp"
#include "UnityEngine/zzzz__Vector2_impl.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerState_def.hpp"
#include "Unity/IntegerTime/zzzz__DiscreteTime_def.hpp"
#include "UnityEngine/InputForUI/zzzz__PointerEvent_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.get_LastPressedButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::PointerEvent_Button (::UnityEngine::InputForUI::PointerState::*)()>(
    &::UnityEngine::InputForUI::PointerState::get_LastPressedButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_LastPressedButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.set_LastPressedButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(::UnityEngine::InputForUI::PointerEvent_Button)>(
    &::UnityEngine::InputForUI::PointerState::set_LastPressedButton)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                                                                           { "set_LastPressedButton", {}, { ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.get_ButtonsState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::InputForUI::PointerEvent_ButtonsState (::UnityEngine::InputForUI::PointerState::*)()>(
    &::UnityEngine::InputForUI::PointerState::get_ButtonsState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_ButtonsState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.get_NextPressTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IntegerTime::DiscreteTime (::UnityEngine::InputForUI::PointerState::*)()>(
    &::UnityEngine::InputForUI::PointerState::get_NextPressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_NextPressTime", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.set_NextPressTime
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(::Unity::IntegerTime::DiscreteTime)>(
    &::UnityEngine::InputForUI::PointerState::set_NextPressTime)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_NextPressTime", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.get_ClickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputForUI::PointerState::*)()>(&::UnityEngine::InputForUI::PointerState::get_ClickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_ClickCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.set_ClickCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(int32_t)>(&::UnityEngine::InputForUI::PointerState::set_ClickCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fdc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_ClickCount", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.get_LastPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector2 (::UnityEngine::InputForUI::PointerState::*)()>(&::UnityEngine::InputForUI::PointerState::get_LastPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fe4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_LastPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.set_LastPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(::UnityEngine::Vector2)>(&::UnityEngine::InputForUI::PointerState::set_LastPosition)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60fec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_LastPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.get_LastDisplayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::UnityEngine::InputForUI::PointerState::*)()>(&::UnityEngine::InputForUI::PointerState::get_LastDisplayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60ff4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_LastDisplayIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.set_LastDisplayIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(int32_t)>(&::UnityEngine::InputForUI::PointerState::set_LastDisplayIndex)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b60ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_LastDisplayIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.get_LastPositionValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::PointerState::*)()>(&::UnityEngine::InputForUI::PointerState::get_LastPositionValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b61004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_LastPositionValid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.set_LastPositionValid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(bool)>(&::UnityEngine::InputForUI::PointerState::set_LastPositionValid)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b6100c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_LastPositionValid", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.OnButtonDown
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(::Unity::IntegerTime::DiscreteTime, ::UnityEngine::InputForUI::PointerEvent_Button)>(
    &::UnityEngine::InputForUI::PointerState::OnButtonDown)> {
  constexpr static std::size_t size = 0x15c;
  constexpr static std::size_t addrs = 0x6b5fe1c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                                { "OnButtonDown", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.OnButtonUp
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(::Unity::IntegerTime::DiscreteTime, ::UnityEngine::InputForUI::PointerEvent_Button)>(
    &::UnityEngine::InputForUI::PointerState::OnButtonUp)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x6b5ff78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                                { "OnButtonUp", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.OnButtonChange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(::Unity::IntegerTime::DiscreteTime, ::UnityEngine::InputForUI::PointerEvent_Button, bool,
                                                                                                         bool)>(&::UnityEngine::InputForUI::PointerState::OnButtonChange)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b6014c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                                             { "OnButtonChange",
                                                               {},
                                                               { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>(),
                                                                 ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.OnMove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)(::Unity::IntegerTime::DiscreteTime, ::UnityEngine::Vector2, int32_t)>(
    &::UnityEngine::InputForUI::PointerState::OnMove)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x6b6009c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                                { "OnMove", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::PointerState.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::PointerState::*)()>(&::UnityEngine::InputForUI::PointerState::Reset)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x6b5dec0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
inline void UnityEngine::InputForUI::PointerState::setStaticF_kClickDelay(::Unity::IntegerTime::DiscreteTime value) {
  ::cordl_internals::setStaticField<::Unity::IntegerTime::DiscreteTime, "kClickDelay", ::UnityEngine::InputForUI::PointerState>(std::forward<::Unity::IntegerTime::DiscreteTime>(value));
}
inline ::Unity::IntegerTime::DiscreteTime UnityEngine::InputForUI::PointerState::getStaticF_kClickDelay() {
  return ::cordl_internals::getStaticField<::Unity::IntegerTime::DiscreteTime, "kClickDelay", ::UnityEngine::InputForUI::PointerState>();
}
inline ::UnityEngine::InputForUI::PointerEvent_Button UnityEngine::InputForUI::PointerState::get_LastPressedButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_LastPressedButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::PointerEvent_Button>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerState::set_LastPressedButton(::UnityEngine::InputForUI::PointerEvent_Button value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                                                                         { "set_LastPressedButton", {}, { ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::InputForUI::PointerEvent_ButtonsState UnityEngine::InputForUI::PointerState::get_ButtonsState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_ButtonsState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputForUI::PointerEvent_ButtonsState>(*this, ___internal_method);
}
inline ::Unity::IntegerTime::DiscreteTime UnityEngine::InputForUI::PointerState::get_NextPressTime() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_NextPressTime", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IntegerTime::DiscreteTime>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerState::set_NextPressTime(::Unity::IntegerTime::DiscreteTime value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_NextPressTime", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputForUI::PointerState::get_ClickCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_ClickCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerState::set_ClickCount(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_ClickCount", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline ::UnityEngine::Vector2 UnityEngine::InputForUI::PointerState::get_LastPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_LastPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector2>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerState::set_LastPosition(::UnityEngine::Vector2 value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_LastPosition", {}, { ::i2c::type_of<::UnityEngine::Vector2>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline int32_t UnityEngine::InputForUI::PointerState::get_LastDisplayIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_LastDisplayIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerState::set_LastDisplayIndex(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_LastDisplayIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool UnityEngine::InputForUI::PointerState::get_LastPositionValid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "get_LastPositionValid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::PointerState::set_LastPositionValid(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "set_LastPositionValid", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline void UnityEngine::InputForUI::PointerState::OnButtonDown(::Unity::IntegerTime::DiscreteTime currentTime, ::UnityEngine::InputForUI::PointerEvent_Button button) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                              { "OnButtonDown", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, currentTime, button);
}
inline void UnityEngine::InputForUI::PointerState::OnButtonUp(::Unity::IntegerTime::DiscreteTime currentTime, ::UnityEngine::InputForUI::PointerEvent_Button button) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                              { "OnButtonUp", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, currentTime, button);
}
inline void UnityEngine::InputForUI::PointerState::OnButtonChange(::Unity::IntegerTime::DiscreteTime currentTime, ::UnityEngine::InputForUI::PointerEvent_Button button, bool previousState,
                                                                  bool newState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                                           { "OnButtonChange",
                                                             {},
                                                             { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::InputForUI::PointerEvent_Button>(),
                                                               ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, currentTime, button, previousState, newState);
}
inline void UnityEngine::InputForUI::PointerState::OnMove(::Unity::IntegerTime::DiscreteTime currentTime, ::UnityEngine::Vector2 position, int32_t displayIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(),
                                              { "OnMove", {}, { ::i2c::type_of<::Unity::IntegerTime::DiscreteTime>(), ::i2c::type_of<::UnityEngine::Vector2>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, currentTime, position, displayIndex);
}
inline void UnityEngine::InputForUI::PointerState::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::PointerState>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_LastPressedButton_k__BackingField", ty: "::UnityEngine::InputForUI::PointerEvent_Button", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_buttonsState", ty: "::UnityEngine::InputForUI::PointerEvent_ButtonsState", modifiers: "", def_value: Some("{}") }, CppParam { name: "_NextPressTime_k__BackingField", ty:
// "::Unity::IntegerTime::DiscreteTime", modifiers: "", def_value: Some("{}") }, CppParam { name: "_ClickCount_k__BackingField", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_LastPosition_k__BackingField", ty: "::UnityEngine::Vector2", modifiers: "", def_value: Some("{}") }, CppParam { name: "_LastDisplayIndex_k__BackingField", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_LastPositionValid_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::PointerState::PointerState(::UnityEngine::InputForUI::PointerEvent_Button _LastPressedButton_k__BackingField,
                                                                ::UnityEngine::InputForUI::PointerEvent_ButtonsState _buttonsState, ::Unity::IntegerTime::DiscreteTime _NextPressTime_k__BackingField,
                                                                int32_t _ClickCount_k__BackingField, ::UnityEngine::Vector2 _LastPosition_k__BackingField, int32_t _LastDisplayIndex_k__BackingField,
                                                                bool _LastPositionValid_k__BackingField) noexcept {
  this->_LastPressedButton_k__BackingField = _LastPressedButton_k__BackingField;
  this->_buttonsState = _buttonsState;
  this->_NextPressTime_k__BackingField = _NextPressTime_k__BackingField;
  this->_ClickCount_k__BackingField = _ClickCount_k__BackingField;
  this->_LastPosition_k__BackingField = _LastPosition_k__BackingField;
  this->_LastDisplayIndex_k__BackingField = _LastDisplayIndex_k__BackingField;
  this->_LastPositionValid_k__BackingField = _LastPositionValid_k__BackingField;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::PointerState::PointerState() {}

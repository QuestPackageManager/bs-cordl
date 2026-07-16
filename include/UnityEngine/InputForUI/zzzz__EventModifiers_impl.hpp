#pragma once
// IWYU pragma private; include "UnityEngine/InputForUI/EventModifiers.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
#include "UnityEngine/InputForUI/zzzz__EventModifiers_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers::EventModifiers_Modifiers(uint32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers::EventModifiers_Modifiers() {}
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::LeftShift{ static_cast<uint32_t>(0x1u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::RightShift{ static_cast<uint32_t>(0x2u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::Shift{ static_cast<uint32_t>(0x3u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::LeftCtrl{ static_cast<uint32_t>(0x4u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::RightCtrl{ static_cast<uint32_t>(0x8u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::Ctrl{ static_cast<uint32_t>(0xcu) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::LeftAlt{ static_cast<uint32_t>(0x10u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::RightAlt{ static_cast<uint32_t>(0x20u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::Alt{ static_cast<uint32_t>(0x30u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::LeftMeta{ static_cast<uint32_t>(0x40u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::RightMeta{ static_cast<uint32_t>(0x80u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::Meta{ static_cast<uint32_t>(0xc0u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::CapsLock{ static_cast<uint32_t>(0x100u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::Numlock{ static_cast<uint32_t>(0x200u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::FunctionKey{ static_cast<uint32_t>(0x400u) };
constexpr ::UnityEngine::InputForUI::EventModifiers_Modifiers UnityEngine::InputForUI::EventModifiers_Modifiers::Numeric{ static_cast<uint32_t>(0x800u) };
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.IsPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)(::UnityEngine::InputForUI::EventModifiers_Modifiers)>(
    &::UnityEngine::InputForUI::EventModifiers::IsPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b55fa8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(),
                                                                                           { "IsPressed", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers_Modifiers>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isShiftPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::get_isShiftPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b55fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isShiftPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isCtrlPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::get_isCtrlPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b55fc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isCtrlPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isAltPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::get_isAltPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b55fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isAltPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isMetaPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::get_isMetaPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6b55fe8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isMetaPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isCapsLockEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::get_isCapsLockEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b55ff8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isCapsLockEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isFunctionKeyPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::get_isFunctionKeyPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b56004;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isFunctionKeyPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isNumericPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::get_isNumericPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6b56010;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isNumericPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.SetPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::EventModifiers::*)(::UnityEngine::InputForUI::EventModifiers_Modifiers, bool)>(
    &::UnityEngine::InputForUI::EventModifiers::SetPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x6b5601c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(),
                                                             { "SetPressed", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers_Modifiers>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6b56038;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.Append
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::StringW>, ::StringW)>(&::UnityEngine::InputForUI::EventModifiers::Append)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6b56040;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "Append", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::ToString)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x6b55694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { ::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), 3 }));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputForUI::EventModifiers::IsPressed(::UnityEngine::InputForUI::EventModifiers_Modifiers mod) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "IsPressed", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers_Modifiers>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, mod);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isShiftPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isShiftPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isCtrlPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isCtrlPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isAltPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isAltPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isMetaPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isMetaPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isCapsLockEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isCapsLockEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isFunctionKeyPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isFunctionKeyPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isNumericPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "get_isNumericPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::EventModifiers::SetPressed(::UnityEngine::InputForUI::EventModifiers_Modifiers modifier, bool pressed) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(),
                                                           { "SetPressed", {}, { ::i2c::type_of<::UnityEngine::InputForUI::EventModifiers_Modifiers>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, modifier, pressed);
}
inline void UnityEngine::InputForUI::EventModifiers::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void UnityEngine::InputForUI::EventModifiers::Append(::by_ref<::StringW> str, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), { "Append", {}, { ::i2c::type_of<::by_ref<::StringW>>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, str, value);
}
inline ::StringW UnityEngine::InputForUI::EventModifiers::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::UnityEngine::InputForUI::EventModifiers>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::EventModifiers::EventModifiers(uint32_t _state) noexcept {
  this->_state = _state;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventModifiers::EventModifiers() {}

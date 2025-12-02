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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)(::UnityEngine::InputForUI::EventModifiers_Modifiers)>(
    &::UnityEngine::InputForUI::EventModifiers::IsPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69251c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), "IsPressed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventModifiers_Modifiers>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isShiftPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(
    &::UnityEngine::InputForUI::EventModifiers::get_isShiftPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69251d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                               "get_isShiftPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isCtrlPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(
    &::UnityEngine::InputForUI::EventModifiers::get_isCtrlPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69251e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                               "get_isCtrlPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isAltPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(
    &::UnityEngine::InputForUI::EventModifiers::get_isAltPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x69251f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                               "get_isAltPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isMetaPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(
    &::UnityEngine::InputForUI::EventModifiers::get_isMetaPressed)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6925208;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                               "get_isMetaPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isCapsLockEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(
    &::UnityEngine::InputForUI::EventModifiers::get_isCapsLockEnabled)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6925218;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                               "get_isCapsLockEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isFunctionKeyPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(
    &::UnityEngine::InputForUI::EventModifiers::get_isFunctionKeyPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6925224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                               "get_isFunctionKeyPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.get_isNumericPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::UnityEngine::InputForUI::EventModifiers::*)()>(
    &::UnityEngine::InputForUI::EventModifiers::get_isNumericPressed)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6925230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                               "get_isNumericPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.SetPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::EventModifiers::*)(::UnityEngine::InputForUI::EventModifiers_Modifiers, bool)>(
    &::UnityEngine::InputForUI::EventModifiers::SetPressed)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x692523c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), "SetPressed", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventModifiers_Modifiers>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::Reset)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6925258;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), "Reset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.Append
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::StringW>, ::StringW)>(&::UnityEngine::InputForUI::EventModifiers::Append)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x6925260;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputForUI::EventModifiers.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputForUI::EventModifiers::*)()>(&::UnityEngine::InputForUI::EventModifiers::ToString)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x69248b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), 3));
    return ___internal_method;
  }
};
inline bool UnityEngine::InputForUI::EventModifiers::IsPressed(::UnityEngine::InputForUI::EventModifiers_Modifiers mod) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), "IsPressed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventModifiers_Modifiers>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, mod);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isShiftPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                             "get_isShiftPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isCtrlPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                             "get_isCtrlPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isAltPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                             "get_isAltPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isMetaPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                             "get_isMetaPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isCapsLockEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                             "get_isCapsLockEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isFunctionKeyPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                             "get_isFunctionKeyPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool UnityEngine::InputForUI::EventModifiers::get_isNumericPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(),
                                                                             "get_isNumericPressed", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::EventModifiers::SetPressed(::UnityEngine::InputForUI::EventModifiers_Modifiers modifier, bool pressed) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), "SetPressed", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputForUI::EventModifiers_Modifiers>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, modifier, pressed);
}
inline void UnityEngine::InputForUI::EventModifiers::Reset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), "Reset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputForUI::EventModifiers::Append(::ByRef<::StringW> str, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), "Append", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::StringW>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, str, value);
}
inline ::StringW UnityEngine::InputForUI::EventModifiers::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputForUI::EventModifiers>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "_state", ty: "uint32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::UnityEngine::InputForUI::EventModifiers::EventModifiers(uint32_t _state) noexcept {
  this->_state = _state;
}
// Ctor Parameters []
constexpr ::UnityEngine::InputForUI::EventModifiers::EventModifiers() {}

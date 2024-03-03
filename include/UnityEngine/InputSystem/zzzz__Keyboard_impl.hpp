#pragma once
#include "System/zzzz__Action_1_impl.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_impl.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__InlinedArray_1_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__InputDevice_impl.hpp"
#include "UnityEngine/InputSystem/zzzz__Keyboard_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__AnyKeyControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__ButtonControl_def.hpp"
#include "UnityEngine/InputSystem/Controls/zzzz__KeyControl_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__IMECompositionString_def.hpp"
#include "UnityEngine/InputSystem/LowLevel/zzzz__ITextInputReceiver_def.hpp"
#include "UnityEngine/InputSystem/Utilities/zzzz__ReadOnlyArray_1_def.hpp"
#include "UnityEngine/InputSystem/zzzz__Key_def.hpp"
#include "UnityEngine/zzzz__Vector2_def.hpp"
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.add_onTextInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::System::Action_1<char16_t>*)>(
    &::UnityEngine::InputSystem::Keyboard::add_onTextInput)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x2b54ce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "add_onTextInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.remove_onTextInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::System::Action_1<char16_t>*)>(
    &::UnityEngine::InputSystem::Keyboard::remove_onTextInput)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b54dcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "remove_onTextInput", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.add_onIMECompositionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(
    ::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*)>(&::UnityEngine::InputSystem::Keyboard::add_onIMECompositionChange)> {
  constexpr static std::size_t size = 0xe8;
  constexpr static std::size_t addrs = 0x2b54e24;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "add_onIMECompositionChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.remove_onIMECompositionChange
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(
    ::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*)>(&::UnityEngine::InputSystem::Keyboard::remove_onIMECompositionChange)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x2b54f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "remove_onIMECompositionChange", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.SetIMEEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(bool)>(&::UnityEngine::InputSystem::Keyboard::SetIMEEnabled)> {
  constexpr static std::size_t size = 0x78;
  constexpr static std::size_t addrs = 0x2b54f64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "SetIMEEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.SetIMECursorPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::UnityEngine::Vector2)>(
    &::UnityEngine::InputSystem::Keyboard::SetIMECursorPosition)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x2b54fdc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "SetIMECursorPosition", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_keyboardLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::UnityEngine::InputSystem::Keyboard::*)()>(&::UnityEngine::InputSystem::Keyboard::get_keyboardLayout)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x2b55080;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_keyboardLayout", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.set_keyboardLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::StringW)>(
    &::UnityEngine::InputSystem::Keyboard::set_keyboardLayout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b550bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_keyboardLayout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_anyKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::AnyKeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_anyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b550c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_anyKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.set_anyKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::UnityEngine::InputSystem::Controls::AnyKeyControl*)>(
    &::UnityEngine::InputSystem::Keyboard::set_anyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b550cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_anyKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_spaceKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_spaceKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b550d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_spaceKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_enterKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_enterKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55164;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_enterKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_tabKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_tabKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5516c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_tabKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_backquoteKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_backquoteKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55174;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_backquoteKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_quoteKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_quoteKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5517c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_quoteKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_semicolonKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_semicolonKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55184;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_semicolonKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_commaKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_commaKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5518c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_commaKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_periodKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_periodKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55194;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_periodKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_slashKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_slashKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5519c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_slashKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_backslashKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_backslashKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_backslashKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftBracketKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftBracketKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_leftBracketKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightBracketKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightBracketKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_rightBracketKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_minusKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_minusKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_minusKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_equalsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_equalsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_equalsKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_aKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_aKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_aKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_bKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_bKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_bKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_cKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_cKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_cKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_dKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_dKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_dKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_eKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_eKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_eKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_fKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_fKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_fKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_gKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_gKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b551fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_gKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_hKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_hKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_hKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_iKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_iKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5520c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_iKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_jKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_jKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55214;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_jKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_kKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_kKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5521c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_kKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_lKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_lKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_lKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_mKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_mKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5522c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_mKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_nKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_nKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_nKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_oKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_oKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5523c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_pKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_pKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55244;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_pKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_qKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_qKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5524c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_qKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55254;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_sKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_sKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5525c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_sKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_tKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_tKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_tKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_uKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_uKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5526c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_uKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_vKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_vKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_vKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_wKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_wKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5527c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_wKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_xKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_xKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_xKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_yKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_yKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5528c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_yKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_zKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_zKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_zKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit1Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit1Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5529c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit1Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit2Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit2Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit2Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit3Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit3Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit3Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit4Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit4Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit4Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit5Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit5Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit5Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit6Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit6Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit6Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit7Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit7Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit7Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit8Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit8Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit8Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit9Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit9Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit9Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_digit0Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_digit0Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit0Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftShiftKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftShiftKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftShiftKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightShiftKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightShiftKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_rightShiftKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftAltKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftAltKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b552fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftAltKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightAltKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightAltKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55304;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightAltKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftCtrlKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftCtrlKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5530c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftCtrlKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightCtrlKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightCtrlKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55314;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightCtrlKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftMetaKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftMetaKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5531c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftMetaKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightMetaKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightMetaKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightMetaKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftWindowsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftWindowsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5532c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_leftWindowsKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightWindowsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightWindowsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_rightWindowsKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftAppleKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftAppleKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5533c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftAppleKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightAppleKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightAppleKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55344;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_rightAppleKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftCommandKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftCommandKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5534c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_leftCommandKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightCommandKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightCommandKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55354;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_rightCommandKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_contextMenuKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_contextMenuKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5535c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_contextMenuKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_escapeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_escapeKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55364;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_escapeKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_leftArrowKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_leftArrowKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5536c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftArrowKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_rightArrowKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_rightArrowKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55374;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_rightArrowKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_upArrowKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_upArrowKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5537c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_upArrowKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_downArrowKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_downArrowKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_downArrowKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_backspaceKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_backspaceKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5538c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_backspaceKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_pageDownKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_pageDownKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55394;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_pageDownKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_pageUpKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_pageUpKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5539c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_pageUpKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_homeKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_homeKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_homeKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_endKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_endKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_endKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_insertKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_insertKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_insertKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_deleteKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_deleteKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_deleteKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_capsLockKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_capsLockKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_capsLockKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_scrollLockKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_scrollLockKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_scrollLockKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numLockKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numLockKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numLockKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_printScreenKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_printScreenKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_printScreenKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_pauseKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_pauseKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_pauseKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpadEnterKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpadEnterKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_numpadEnterKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpadDivideKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpadDivideKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_numpadDivideKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpadMultiplyKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpadMultiplyKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b553fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_numpadMultiplyKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpadMinusKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpadMinusKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55404;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_numpadMinusKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpadPlusKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpadPlusKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5540c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_numpadPlusKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpadPeriodKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpadPeriodKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55414;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_numpadPeriodKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpadEqualsKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpadEqualsKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5541c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                               "get_numpadEqualsKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad0Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad0Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad0Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad1Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad1Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5542c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad1Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad2Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad2Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55434;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad2Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad3Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad3Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5543c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad3Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad4Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad4Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad4Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad5Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad5Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5544c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad5Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad6Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad6Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55454;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad6Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad7Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad7Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5545c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad7Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad8Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad8Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55464;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad8Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_numpad9Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_numpad9Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5546c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad9Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f1Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f1Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55474;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f1Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f2Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f2Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5547c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f2Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f3Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f3Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f3Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f4Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f4Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5548c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f4Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f5Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f5Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55494;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f5Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f6Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f6Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5549c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f6Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f7Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f7Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f7Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f8Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f8Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f8Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f9Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f9Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f9Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f10Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f10Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f10Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f11Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f11Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f11Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_f12Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_f12Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f12Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_oem1Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_oem1Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem1Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_oem2Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_oem2Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem2Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_oem3Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_oem3Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem3Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_oem4Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_oem4Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem4Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_oem5Key
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_oem5Key)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem5Key",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_shiftKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_shiftKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b554fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_shiftKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.set_shiftKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Keyboard::set_shiftKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55504;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_shiftKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_ctrlKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_ctrlKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5550c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_ctrlKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.set_ctrlKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Keyboard::set_ctrlKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55514;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_ctrlKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_altKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_altKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5551c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_altKey",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.set_altKey
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Keyboard::set_altKey)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55524;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_altKey", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_imeSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::ButtonControl* (::UnityEngine::InputSystem::Keyboard::*)()>(
    &::UnityEngine::InputSystem::Keyboard::get_imeSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b5552c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_imeSelected",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.set_imeSelected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::UnityEngine::InputSystem::Controls::ButtonControl*)>(
    &::UnityEngine::InputSystem::Keyboard::set_imeSelected)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b55534;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_imeSelected", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_Item
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)(::UnityEngine::InputSystem::Key)>(&::UnityEngine::InputSystem::Keyboard::get_Item)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x2b550dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_allKeys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::KeyControl*> (
    ::UnityEngine::InputSystem::Keyboard::*)()>(&::UnityEngine::InputSystem::Keyboard::get_allKeys)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x2b5553c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_allKeys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Keyboard* (*)()>(&::UnityEngine::InputSystem::Keyboard::get_current)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x2b5559c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_current",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.set_current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::UnityEngine::InputSystem::Keyboard*)>(&::UnityEngine::InputSystem::Keyboard::set_current)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b555e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_current", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Keyboard*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.MakeCurrent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)()>(&::UnityEngine::InputSystem::Keyboard::MakeCurrent)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x2b55630;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), 16));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.OnRemoved
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)()>(&::UnityEngine::InputSystem::Keyboard::OnRemoved)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2b5567c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), 18));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.FinishSetup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)()>(&::UnityEngine::InputSystem::Keyboard::FinishSetup)> {
  constexpr static std::size_t size = 0x1dbc;
  constexpr static std::size_t addrs = 0x2b556f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), 13));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.RefreshConfiguration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)()>(&::UnityEngine::InputSystem::Keyboard::RefreshConfiguration)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x2b574b4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), 14));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.OnTextInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(char16_t)>(&::UnityEngine::InputSystem::Keyboard::OnTextInput)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2b57578;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "OnTextInput", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.FindKeyOnCurrentKeyboardLayout
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::InputSystem::Controls::KeyControl* (::UnityEngine::InputSystem::Keyboard::*)(::StringW)>(
    &::UnityEngine::InputSystem::Keyboard::FindKeyOnCurrentKeyboardLayout)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x2b57618;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "FindKeyOnCurrentKeyboardLayout",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.OnIMECompositionChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(::UnityEngine::InputSystem::LowLevel::IMECompositionString)>(
    &::UnityEngine::InputSystem::Keyboard::OnIMECompositionChanged)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x2b576e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "OnIMECompositionChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IMECompositionString>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.get_keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> (::UnityEngine::InputSystem::Keyboard::*)()>(
        &::UnityEngine::InputSystem::Keyboard::get_keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b577e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_keys",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard.set_keys
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)(
    ::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*>)>(&::UnityEngine::InputSystem::Keyboard::set_keys)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2b577e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_keys", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::InputSystem::Keyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::InputSystem::Keyboard::*)()>(&::UnityEngine::InputSystem::Keyboard::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x2b577f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::UnityEngine::InputSystem::LowLevel::ITextInputReceiver"
constexpr UnityEngine::InputSystem::Keyboard::operator ::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*>(static_cast<void*>(this));
}
/// @brief Convert to "::UnityEngine::InputSystem::LowLevel::ITextInputReceiver"
constexpr ::UnityEngine::InputSystem::LowLevel::ITextInputReceiver* UnityEngine::InputSystem::Keyboard::i___UnityEngine__InputSystem__LowLevel__ITextInputReceiver() noexcept {
  return static_cast<::UnityEngine::InputSystem::LowLevel::ITextInputReceiver*>(static_cast<void*>(this));
}
constexpr ::UnityEngine::InputSystem::Controls::AnyKeyControl*& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__anyKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anyKey_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::AnyKeyControl*> const& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__anyKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____anyKey_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Keyboard::__cordl_internal_set__anyKey_k__BackingField(::UnityEngine::InputSystem::Controls::AnyKeyControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____anyKey_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__shiftKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shiftKey_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__shiftKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shiftKey_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Keyboard::__cordl_internal_set__shiftKey_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____shiftKey_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__ctrlKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ctrlKey_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__ctrlKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ctrlKey_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Keyboard::__cordl_internal_set__ctrlKey_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ctrlKey_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__altKey_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____altKey_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__altKey_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____altKey_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Keyboard::__cordl_internal_set__altKey_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____altKey_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Controls::ButtonControl*& UnityEngine::InputSystem::Keyboard::__cordl_internal_get__imeSelected_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imeSelected_k__BackingField;
}
constexpr ::cordl_internals::to_const_pointer<::UnityEngine::InputSystem::Controls::ButtonControl*> const&
UnityEngine::InputSystem::Keyboard::__cordl_internal_get__imeSelected_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____imeSelected_k__BackingField;
}
constexpr void UnityEngine::InputSystem::Keyboard::__cordl_internal_set__imeSelected_k__BackingField(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____imeSelected_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<char16_t>*>& UnityEngine::InputSystem::Keyboard::__cordl_internal_get_m_TextInputListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextInputListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<char16_t>*> const& UnityEngine::InputSystem::Keyboard::__cordl_internal_get_m_TextInputListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_TextInputListeners;
}
constexpr void UnityEngine::InputSystem::Keyboard::__cordl_internal_set_m_TextInputListeners(::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<char16_t>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_TextInputListeners = value;
}
constexpr ::StringW& UnityEngine::InputSystem::Keyboard::__cordl_internal_get_m_KeyboardLayoutName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardLayoutName;
}
constexpr ::StringW const& UnityEngine::InputSystem::Keyboard::__cordl_internal_get_m_KeyboardLayoutName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_KeyboardLayoutName;
}
constexpr void UnityEngine::InputSystem::Keyboard::__cordl_internal_set_m_KeyboardLayoutName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_KeyboardLayoutName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*>& UnityEngine::InputSystem::Keyboard::__cordl_internal_get_m_Keys() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keys;
}
constexpr ::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> const&
UnityEngine::InputSystem::Keyboard::__cordl_internal_get_m_Keys() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_Keys;
}
constexpr void
UnityEngine::InputSystem::Keyboard::__cordl_internal_set_m_Keys(::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___m_Keys)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*>&
UnityEngine::InputSystem::Keyboard::__cordl_internal_get_m_ImeCompositionListeners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImeCompositionListeners;
}
constexpr ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*> const&
UnityEngine::InputSystem::Keyboard::__cordl_internal_get_m_ImeCompositionListeners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___m_ImeCompositionListeners;
}
constexpr void UnityEngine::InputSystem::Keyboard::__cordl_internal_set_m_ImeCompositionListeners(
    ::UnityEngine::InputSystem::Utilities::InlinedArray_1<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___m_ImeCompositionListeners = value;
}
inline void UnityEngine::InputSystem::Keyboard::setStaticF__current_k__BackingField(::UnityEngine::InputSystem::Keyboard* value) {
  ::cordl_internals::setStaticField<::UnityEngine::InputSystem::Keyboard*, "<current>k__BackingField",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get>(std::forward<::UnityEngine::InputSystem::Keyboard*>(value));
}
inline ::UnityEngine::InputSystem::Keyboard* UnityEngine::InputSystem::Keyboard::getStaticF__current_k__BackingField() {
  return ::cordl_internals::getStaticField<::UnityEngine::InputSystem::Keyboard*, "<current>k__BackingField",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get>();
}
inline void UnityEngine::InputSystem::Keyboard::add_onTextInput(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "add_onTextInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Keyboard::remove_onTextInput(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "remove_onTextInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Keyboard::add_onIMECompositionChange(::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "add_onIMECompositionChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Keyboard::remove_onIMECompositionChange(::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "remove_onIMECompositionChange", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::UnityEngine::InputSystem::LowLevel::IMECompositionString>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Keyboard::SetIMEEnabled(bool enabled) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "SetIMEEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enabled);
}
inline void UnityEngine::InputSystem::Keyboard::SetIMECursorPosition(::UnityEngine::Vector2 position) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "SetIMECursorPosition", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector2>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, position);
}
inline ::StringW UnityEngine::InputSystem::Keyboard::get_keyboardLayout() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_keyboardLayout",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::set_keyboardLayout(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_keyboardLayout", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::AnyKeyControl* UnityEngine::InputSystem::Keyboard::get_anyKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_anyKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::AnyKeyControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::set_anyKey(::UnityEngine::InputSystem::Controls::AnyKeyControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_anyKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::AnyKeyControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_spaceKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_spaceKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_enterKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_enterKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_tabKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_tabKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_backquoteKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_backquoteKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_quoteKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_quoteKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_semicolonKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_semicolonKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_commaKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_commaKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_periodKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_periodKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_slashKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_slashKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_backslashKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_backslashKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftBracketKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftBracketKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightBracketKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                             "get_rightBracketKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_minusKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_minusKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_equalsKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_equalsKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_aKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_aKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_bKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_bKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_cKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_cKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_dKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_dKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_eKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_eKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_fKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_fKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_gKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_gKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_hKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_hKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_iKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_iKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_jKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_jKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_kKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_kKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_lKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_lKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_mKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_mKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_nKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_nKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_oKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_pKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_pKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_qKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_qKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_sKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_sKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_tKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_tKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_uKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_uKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_vKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_vKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_wKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_wKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_xKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_xKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_yKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_yKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_zKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_zKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit1Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit1Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit2Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit2Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit3Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit3Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit4Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit4Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit5Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit5Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit6Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit6Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit7Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit7Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit8Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit8Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit9Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit9Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_digit0Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_digit0Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftShiftKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftShiftKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightShiftKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightShiftKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftAltKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftAltKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightAltKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightAltKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftCtrlKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftCtrlKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightCtrlKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightCtrlKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftMetaKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftMetaKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightMetaKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightMetaKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftWindowsKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftWindowsKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightWindowsKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                             "get_rightWindowsKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftAppleKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftAppleKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightAppleKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightAppleKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftCommandKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftCommandKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightCommandKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                             "get_rightCommandKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_contextMenuKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_contextMenuKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_escapeKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_escapeKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_leftArrowKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_leftArrowKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_rightArrowKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_rightArrowKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_upArrowKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_upArrowKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_downArrowKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_downArrowKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_backspaceKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_backspaceKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_pageDownKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_pageDownKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_pageUpKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_pageUpKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_homeKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_homeKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_endKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_endKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_insertKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_insertKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_deleteKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_deleteKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_capsLockKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_capsLockKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_scrollLockKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_scrollLockKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numLockKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numLockKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_printScreenKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_printScreenKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_pauseKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_pauseKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpadEnterKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpadEnterKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpadDivideKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                             "get_numpadDivideKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpadMultiplyKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                             "get_numpadMultiplyKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpadMinusKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpadMinusKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpadPlusKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpadPlusKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpadPeriodKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                             "get_numpadPeriodKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpadEqualsKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(),
                                                                             "get_numpadEqualsKey", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad0Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad0Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad1Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad1Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad2Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad2Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad3Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad3Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad4Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad4Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad5Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad5Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad6Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad6Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad7Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad7Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad8Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad8Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_numpad9Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_numpad9Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f1Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f1Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f2Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f2Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f3Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f3Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f4Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f4Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f5Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f5Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f6Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f6Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f7Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f7Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f8Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f8Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f9Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f9Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f10Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f10Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f11Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f11Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_f12Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_f12Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_oem1Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem1Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_oem2Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem2Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_oem3Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem3Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_oem4Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem4Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_oem5Key() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_oem5Key",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Keyboard::get_shiftKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_shiftKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::set_shiftKey(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_shiftKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Keyboard::get_ctrlKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_ctrlKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::set_ctrlKey(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_ctrlKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Keyboard::get_altKey() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_altKey",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::set_altKey(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_altKey", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::ButtonControl* UnityEngine::InputSystem::Keyboard::get_imeSelected() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_imeSelected",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::ButtonControl*, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::set_imeSelected(::UnityEngine::InputSystem::Controls::ButtonControl* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_imeSelected", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Controls::ButtonControl*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::get_Item(::UnityEngine::InputSystem::Key key) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_Item", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Key>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method, key);
}
inline ::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::KeyControl*> UnityEngine::InputSystem::Keyboard::get_allKeys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_allKeys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<::UnityEngine::InputSystem::Controls::KeyControl*>, false>(this, ___internal_method);
}
inline ::UnityEngine::InputSystem::Keyboard* UnityEngine::InputSystem::Keyboard::get_current() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_current",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Keyboard*, false>(nullptr, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::set_current(::UnityEngine::InputSystem::Keyboard* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_current", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::Keyboard*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, value);
}
inline void UnityEngine::InputSystem::Keyboard::MakeCurrent() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), 16)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::OnRemoved() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), 18)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::FinishSetup() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), 13)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::RefreshConfiguration() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), 14)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::OnTextInput(char16_t character) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "OnTextInput", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, character);
}
inline ::UnityEngine::InputSystem::Controls::KeyControl* UnityEngine::InputSystem::Keyboard::FindKeyOnCurrentKeyboardLayout(::StringW displayName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "FindKeyOnCurrentKeyboardLayout",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::InputSystem::Controls::KeyControl*, false>(this, ___internal_method, displayName);
}
inline void UnityEngine::InputSystem::Keyboard::OnIMECompositionChanged(::UnityEngine::InputSystem::LowLevel::IMECompositionString compositionString) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "OnIMECompositionChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::InputSystem::LowLevel::IMECompositionString>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, compositionString);
}
inline ::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> UnityEngine::InputSystem::Keyboard::get_keys() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "get_keys",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*>, false>(this, ___internal_method);
}
inline void UnityEngine::InputSystem::Keyboard::set_keys(::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*> value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), "set_keys", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::UnityEngine::InputSystem::Controls::KeyControl*, ::Array<::UnityEngine::InputSystem::Controls::KeyControl*>*>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::InputSystem::Keyboard* UnityEngine::InputSystem::Keyboard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::UnityEngine::InputSystem::Keyboard*>());
}
inline void UnityEngine::InputSystem::Keyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::InputSystem::Keyboard*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::UnityEngine::InputSystem::Keyboard::Keyboard() {}

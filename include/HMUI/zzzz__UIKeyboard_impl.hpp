#pragma once
// IWYU pragma private; include "HMUI/UIKeyboard.hpp"
#include "HMUI/zzzz__CapsLockState_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__CapsLockState_def.hpp"
#include "HMUI/zzzz__UIKeyboardKey_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "TMPro/zzzz__FontStyles_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
//  Writing Method size for method: ::HMUI::UIKeyboard___c__DisplayClass24_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard___c__DisplayClass24_0::*)()>(&::HMUI::UIKeyboard___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56c7078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard___c__DisplayClass24_0*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard___c__DisplayClass24_0._Awake_b__3
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard___c__DisplayClass24_0::*)()>(&::HMUI::UIKeyboard___c__DisplayClass24_0::_Awake_b__3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x56c76dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard___c__DisplayClass24_0*>::get(), "<Awake>b__3",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::HMUI::UIKeyboardKey>& HMUI::UIKeyboard___c__DisplayClass24_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::UnityW<::HMUI::UIKeyboardKey> const& HMUI::UIKeyboard___c__DisplayClass24_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void HMUI::UIKeyboard___c__DisplayClass24_0::__cordl_internal_set_key(::UnityW<::HMUI::UIKeyboardKey> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___key)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::HMUI::UIKeyboard>& HMUI::UIKeyboard___c__DisplayClass24_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::UIKeyboard> const& HMUI::UIKeyboard___c__DisplayClass24_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::UIKeyboard___c__DisplayClass24_0::__cordl_internal_set___4__this(::UnityW<::HMUI::UIKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::UIKeyboard___c__DisplayClass24_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard___c__DisplayClass24_0*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard___c__DisplayClass24_0::_Awake_b__3() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard___c__DisplayClass24_0*>::get(), "<Awake>b__3",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::UIKeyboard___c__DisplayClass24_0* HMUI::UIKeyboard___c__DisplayClass24_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::UIKeyboard___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::UIKeyboard___c__DisplayClass24_0::UIKeyboard___c__DisplayClass24_0() {}
//  Writing Method size for method: ::HMUI::UIKeyboard.add_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::add_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56c66a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_okButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::remove_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56c6750;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_okButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_keyWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::HMUI::UIKeyboard::add_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56c67fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_keyWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_keyWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::HMUI::UIKeyboard::remove_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56c68bc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_keyWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_deleteButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::add_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56c697c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_deleteButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_deleteButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x56c6a28;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_deleteButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_capsLockStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<::HMUI::CapsLockState>*)>(
    &::HMUI::UIKeyboard::add_capsLockStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56c6ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_capsLockStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::CapsLockState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_capsLockStateChangedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<::HMUI::CapsLockState>*)>(
    &::HMUI::UIKeyboard::remove_capsLockStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56c6b94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_capsLockStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::CapsLockState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.get_shouldCapitalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::get_shouldCapitalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56c6c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "get_shouldCapitalize",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.get_capsLockState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::CapsLockState (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::get_capsLockState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56c6c64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "get_capsLockState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::Awake)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x56c6c6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "Awake",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.Update
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::Update)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x56c707c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "Update",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleKeyPress
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::UnityEngine::KeyCode)>(&::HMUI::UIKeyboard::HandleKeyPress)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x56c71c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HandleKeyPress", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleCapsLockPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::HandleCapsLockPressed)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x56c742c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HandleCapsLockPressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.SetCapsLockState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(::HMUI::CapsLockState)>(&::HMUI::UIKeyboard::SetCapsLockState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x56c72e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "SetCapsLockState", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::CapsLockState>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.SetKeyboardCapitalization
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)(bool)>(&::HMUI::UIKeyboard::SetKeyboardCapitalization)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x56c7300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "SetKeyboardCapitalization",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HasFontStyle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::UIKeyboard::*)(::TMPro::TextMeshProUGUI*, ::TMPro::FontStyles)>(&::HMUI::UIKeyboard::HasFontStyle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56c75d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HasFontStyle", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshProUGUI*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.OnEnable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x56c75ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "OnEnable",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x56c762c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__24_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__24_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56c7688;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__24_0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__24_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__24_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56c76a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__24_1",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__24_2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__24_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x56c76c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__24_2",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& HMUI::UIKeyboard::__cordl_internal_get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& HMUI::UIKeyboard::__cordl_internal_get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____okButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CapsLockState& HMUI::UIKeyboard::__cordl_internal_get__startsCapsLockState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startsCapsLockState;
}
constexpr ::HMUI::CapsLockState const& HMUI::UIKeyboard::__cordl_internal_get__startsCapsLockState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____startsCapsLockState;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__startsCapsLockState(::HMUI::CapsLockState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____startsCapsLockState = value;
}
constexpr bool& HMUI::UIKeyboard::__cordl_internal_get__allowAtRuntime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowAtRuntime;
}
constexpr bool const& HMUI::UIKeyboard::__cordl_internal_get__allowAtRuntime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allowAtRuntime;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__allowAtRuntime(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____allowAtRuntime = value;
}
constexpr ::System::Action*& HMUI::UIKeyboard::__cordl_internal_get_okButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okButtonWasPressedEvent;
}
constexpr ::System::Action* const& HMUI::UIKeyboard::__cordl_internal_get_okButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okButtonWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set_okButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___okButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<char16_t>*& HMUI::UIKeyboard::__cordl_internal_get_keyWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyWasPressedEvent;
}
constexpr ::System::Action_1<char16_t>* const& HMUI::UIKeyboard::__cordl_internal_get_keyWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___keyWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set_keyWasPressedEvent(::System::Action_1<char16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___keyWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& HMUI::UIKeyboard::__cordl_internal_get_deleteButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deleteButtonWasPressedEvent;
}
constexpr ::System::Action* const& HMUI::UIKeyboard::__cordl_internal_get_deleteButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deleteButtonWasPressedEvent;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set_deleteButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___deleteButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_1<::HMUI::CapsLockState>*& HMUI::UIKeyboard::__cordl_internal_get_capsLockStateChangedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capsLockStateChangedEvent;
}
constexpr ::System::Action_1<::HMUI::CapsLockState>* const& HMUI::UIKeyboard::__cordl_internal_get_capsLockStateChangedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___capsLockStateChangedEvent;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set_capsLockStateChangedEvent(::System::Action_1<::HMUI::CapsLockState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___capsLockStateChangedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& HMUI::UIKeyboard::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& HMUI::UIKeyboard::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::CapsLockState& HMUI::UIKeyboard::__cordl_internal_get__capsLockState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsLockState;
}
constexpr ::HMUI::CapsLockState const& HMUI::UIKeyboard::__cordl_internal_get__capsLockState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsLockState;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__capsLockState(::HMUI::CapsLockState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capsLockState = value;
}
constexpr float_t& HMUI::UIKeyboard::__cordl_internal_get__capsLockUppercaseOnceTime() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsLockUppercaseOnceTime;
}
constexpr float_t const& HMUI::UIKeyboard::__cordl_internal_get__capsLockUppercaseOnceTime() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____capsLockUppercaseOnceTime;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__capsLockUppercaseOnceTime(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____capsLockUppercaseOnceTime = value;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>*& HMUI::UIKeyboard::__cordl_internal_get__letterBtnTexts() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____letterBtnTexts;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* const& HMUI::UIKeyboard::__cordl_internal_get__letterBtnTexts() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____letterBtnTexts;
}
constexpr void HMUI::UIKeyboard::__cordl_internal_set__letterBtnTexts(::System::Collections::Generic::List_1<::UnityW<::TMPro::TextMeshProUGUI>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____letterBtnTexts)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::UIKeyboard::add_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_okButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_okButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_keyWasPressedEvent(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_keyWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_keyWasPressedEvent(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_keyWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<char16_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_deleteButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_deleteButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_deleteButtonWasPressedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_capsLockStateChangedEvent(::System::Action_1<::HMUI::CapsLockState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "add_capsLockStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::CapsLockState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_capsLockStateChangedEvent(::System::Action_1<::HMUI::CapsLockState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "remove_capsLockStateChangedEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::CapsLockState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool HMUI::UIKeyboard::get_shouldCapitalize() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "get_shouldCapitalize",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::HMUI::CapsLockState HMUI::UIKeyboard::get_capsLockState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "get_capsLockState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::CapsLockState, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::Awake() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "Awake",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::Update() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "Update",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::HandleKeyPress(::UnityEngine::KeyCode keyCode) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HandleKeyPress", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::KeyCode>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyCode);
}
inline void HMUI::UIKeyboard::HandleCapsLockPressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HandleCapsLockPressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::SetCapsLockState(::HMUI::CapsLockState newState) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "SetCapsLockState", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::CapsLockState>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, newState);
}
inline void HMUI::UIKeyboard::SetKeyboardCapitalization(bool capitalize) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "SetKeyboardCapitalization",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, capitalize);
}
inline bool HMUI::UIKeyboard::HasFontStyle(::TMPro::TextMeshProUGUI* text, ::TMPro::FontStyles style) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "HasFontStyle", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::TextMeshProUGUI*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::TMPro::FontStyles>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, text, style);
}
inline void HMUI::UIKeyboard::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "OnEnable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__24_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__24_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__24_1() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__24_1",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__24_2() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::UIKeyboard*>::get(), "<Awake>b__24_2",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::UIKeyboard* HMUI::UIKeyboard::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::UIKeyboard*>());
}
// Ctor Parameters []
constexpr ::HMUI::UIKeyboard::UIKeyboard() {}

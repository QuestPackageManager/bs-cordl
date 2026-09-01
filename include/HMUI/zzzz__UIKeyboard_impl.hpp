#pragma once
// IWYU pragma private; include "HMUI\UIKeyboard.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard___c__DisplayClass24_0::*)()>(&::HMUI::UIKeyboard___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x587b55c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard___c__DisplayClass24_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard___c__DisplayClass24_0._Awake_b__3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard___c__DisplayClass24_0::*)()>(&::HMUI::UIKeyboard___c__DisplayClass24_0::_Awake_b__3)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x587bbc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard___c__DisplayClass24_0*>(), { "<Awake>b__3", {}, {} })));
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
  this->___key = value;
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
  this->_____4__this = value;
}
inline void HMUI::UIKeyboard___c__DisplayClass24_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard___c__DisplayClass24_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboard___c__DisplayClass24_0::_Awake_b__3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard___c__DisplayClass24_0*>(), { "<Awake>b__3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::UIKeyboard___c__DisplayClass24_0* HMUI::UIKeyboard___c__DisplayClass24_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::UIKeyboard___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::HMUI::UIKeyboard___c__DisplayClass24_0::UIKeyboard___c__DisplayClass24_0() {}
//  Writing Method size for method: ::HMUI::UIKeyboard.add_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::add_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x587ab88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "add_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::remove_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x587ac34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "remove_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_keyWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::HMUI::UIKeyboard::add_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587ace0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "add_keyWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<char16_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_keyWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::HMUI::UIKeyboard::remove_keyWasPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587ada0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "remove_keyWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<char16_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_deleteButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::add_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x587ae60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "add_deleteButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_deleteButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action*)>(&::HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x587af0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "remove_deleteButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.add_capsLockStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<::HMUI::CapsLockState>*)>(&::HMUI::UIKeyboard::add_capsLockStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587afb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "add_capsLockStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::CapsLockState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.remove_capsLockStateChangedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::System::Action_1<::HMUI::CapsLockState>*)>(&::HMUI::UIKeyboard::remove_capsLockStateChangedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x587b078;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "remove_capsLockStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::CapsLockState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.get_shouldCapitalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::get_shouldCapitalize)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x587b138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "get_shouldCapitalize", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.get_capsLockState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::CapsLockState (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::get_capsLockState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x587b148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "get_capsLockState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::Awake)> {
  constexpr static std::size_t size = 0x40c;
  constexpr static std::size_t addrs = 0x587b150;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::Update)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x587b560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleKeyPress
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::UnityEngine::KeyCode)>(&::HMUI::UIKeyboard::HandleKeyPress)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x587b6a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "HandleKeyPress", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HandleCapsLockPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::HandleCapsLockPressed)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x587b910;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "HandleCapsLockPressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.SetCapsLockState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(::HMUI::CapsLockState)>(&::HMUI::UIKeyboard::SetCapsLockState)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x587b7c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "SetCapsLockState", {}, { ::i2c::type_of<::HMUI::CapsLockState>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.SetKeyboardCapitalization
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)(bool)>(&::HMUI::UIKeyboard::SetKeyboardCapitalization)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x587b7e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "SetKeyboardCapitalization", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.HasFontStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::UIKeyboard::*)(::TMPro::TextMeshProUGUI*, ::TMPro::FontStyles)>(&::HMUI::UIKeyboard::HasFontStyle)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x587bab4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "HasFontStyle", {}, { ::i2c::type_of<::TMPro::TextMeshProUGUI*>(), ::i2c::type_of<::TMPro::FontStyles>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard.OnEnable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::OnEnable)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x587bad0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "OnEnable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x587bb10;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__24_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__24_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x587bb6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "<Awake>b__24_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__24_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__24_1)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x587bb88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "<Awake>b__24_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::UIKeyboard._Awake_b__24_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::UIKeyboard::*)()>(&::HMUI::UIKeyboard::_Awake_b__24_2)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x587bba4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "<Awake>b__24_2", {}, {} })));
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
  this->____okButton = value;
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
  this->___okButtonWasPressedEvent = value;
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
  this->___keyWasPressedEvent = value;
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
  this->___deleteButtonWasPressedEvent = value;
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
  this->___capsLockStateChangedEvent = value;
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
  this->____buttonBinder = value;
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
  this->____letterBtnTexts = value;
}
inline void HMUI::UIKeyboard::add_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "add_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "remove_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_keyWasPressedEvent(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "add_keyWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<char16_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_keyWasPressedEvent(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "remove_keyWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<char16_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_deleteButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "add_deleteButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_deleteButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "remove_deleteButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::add_capsLockStateChangedEvent(::System::Action_1<::HMUI::CapsLockState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "add_capsLockStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::CapsLockState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::UIKeyboard::remove_capsLockStateChangedEvent(::System::Action_1<::HMUI::CapsLockState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "remove_capsLockStateChangedEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::CapsLockState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline bool HMUI::UIKeyboard::get_shouldCapitalize() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "get_shouldCapitalize", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::HMUI::CapsLockState HMUI::UIKeyboard::get_capsLockState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "get_capsLockState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::CapsLockState>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::HandleKeyPress(::UnityEngine::KeyCode keyCode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "HandleKeyPress", {}, { ::i2c::type_of<::UnityEngine::KeyCode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyCode);
}
inline void HMUI::UIKeyboard::HandleCapsLockPressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "HandleCapsLockPressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::SetCapsLockState(::HMUI::CapsLockState newState) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "SetCapsLockState", {}, { ::i2c::type_of<::HMUI::CapsLockState>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, newState);
}
inline void HMUI::UIKeyboard::SetKeyboardCapitalization(bool capitalize) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "SetKeyboardCapitalization", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, capitalize);
}
inline bool HMUI::UIKeyboard::HasFontStyle(::TMPro::TextMeshProUGUI* text, ::TMPro::FontStyles style) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "HasFontStyle", {}, { ::i2c::type_of<::TMPro::TextMeshProUGUI*>(), ::i2c::type_of<::TMPro::FontStyles>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method, text, style);
}
inline void HMUI::UIKeyboard::OnEnable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "OnEnable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__24_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "<Awake>b__24_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__24_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "<Awake>b__24_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::UIKeyboard::_Awake_b__24_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::UIKeyboard*>(), { "<Awake>b__24_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::UIKeyboard* HMUI::UIKeyboard::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::UIKeyboard*>());
}
// Ctor Parameters []
constexpr ::HMUI::UIKeyboard::UIKeyboard() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace/UIKeyboard.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "GlobalNamespace/zzzz__UIKeyboard_def.hpp"
#include "GlobalNamespace/zzzz__TextMeshProButton_def.hpp"
#include "GlobalNamespace/zzzz__UIKeyboard_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard___c__DisplayClass23_0::*)()>(&::GlobalNamespace::UIKeyboard___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fe9a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard___c__DisplayClass23_0._Awake_b__4
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard___c__DisplayClass23_0::*)()>(&::GlobalNamespace::UIKeyboard___c__DisplayClass23_0::_Awake_b__4)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x59fea2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard___c__DisplayClass23_0*>(), { "<Awake>b__4", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::UIKeyboard___c__DisplayClass23_0::__cordl_internal_get_key() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr ::StringW const& GlobalNamespace::UIKeyboard___c__DisplayClass23_0::__cordl_internal_get_key() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___key;
}
constexpr void GlobalNamespace::UIKeyboard___c__DisplayClass23_0::__cordl_internal_set_key(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___key = value;
}
constexpr ::UnityW<::GlobalNamespace::UIKeyboard>& GlobalNamespace::UIKeyboard___c__DisplayClass23_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::GlobalNamespace::UIKeyboard> const& GlobalNamespace::UIKeyboard___c__DisplayClass23_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::UIKeyboard___c__DisplayClass23_0::__cordl_internal_set___4__this(::UnityW<::GlobalNamespace::UIKeyboard> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void GlobalNamespace::UIKeyboard___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard___c__DisplayClass23_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UIKeyboard___c__DisplayClass23_0::_Awake_b__4() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard___c__DisplayClass23_0*>(), { "<Awake>b__4", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UIKeyboard___c__DisplayClass23_0* GlobalNamespace::UIKeyboard___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UIKeyboard___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIKeyboard___c__DisplayClass23_0::UIKeyboard___c__DisplayClass23_0() {}
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.add_textKeyWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::GlobalNamespace::UIKeyboard::add_textKeyWasPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59fd808;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "add_textKeyWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<char16_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.remove_textKeyWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(::System::Action_1<char16_t>*)>(&::GlobalNamespace::UIKeyboard::remove_textKeyWasPressedEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x59fd8c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "remove_textKeyWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<char16_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.add_deleteButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(::System::Action*)>(&::GlobalNamespace::UIKeyboard::add_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59fd988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "add_deleteButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.remove_deleteButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(::System::Action*)>(&::GlobalNamespace::UIKeyboard::remove_deleteButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59fda34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "remove_deleteButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.add_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(::System::Action*)>(&::GlobalNamespace::UIKeyboard::add_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59fdae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "add_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.remove_okButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(::System::Action*)>(&::GlobalNamespace::UIKeyboard::remove_okButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59fdb8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "remove_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.add_cancelButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(::System::Action*)>(&::GlobalNamespace::UIKeyboard::add_cancelButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59fdc38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "add_cancelButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.remove_cancelButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(::System::Action*)>(&::GlobalNamespace::UIKeyboard::remove_cancelButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x59fdce4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "remove_cancelButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.set_enableOkButtonInteractivity
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(bool)>(&::GlobalNamespace::UIKeyboard::set_enableOkButtonInteractivity)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x59fdd90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "set_enableOkButtonInteractivity", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.set_hideCancelButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)(bool)>(&::GlobalNamespace::UIKeyboard::set_hideCancelButton)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x59fde34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "set_hideCancelButton", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)()>(&::GlobalNamespace::UIKeyboard::Awake)> {
  constexpr static std::size_t size = 0xac0;
  constexpr static std::size_t addrs = 0x59fdee8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "Awake", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)()>(&::GlobalNamespace::UIKeyboard::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x59fe9ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard._Awake_b__23_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)()>(&::GlobalNamespace::UIKeyboard::_Awake_b__23_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x59fe9b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "<Awake>b__23_0", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard._Awake_b__23_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)()>(&::GlobalNamespace::UIKeyboard::_Awake_b__23_1)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59fe9cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "<Awake>b__23_1", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard._Awake_b__23_2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)()>(&::GlobalNamespace::UIKeyboard::_Awake_b__23_2)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59fe9ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "<Awake>b__23_2", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::UIKeyboard._Awake_b__23_3
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::UIKeyboard::*)()>(&::GlobalNamespace::UIKeyboard::_Awake_b__23_3)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x59fea0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "<Awake>b__23_3", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::GlobalNamespace::TextMeshProButton>& GlobalNamespace::UIKeyboard::__cordl_internal_get__keyButtonPrefab() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyButtonPrefab;
}
constexpr ::UnityW<::GlobalNamespace::TextMeshProButton> const& GlobalNamespace::UIKeyboard::__cordl_internal_get__keyButtonPrefab() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyButtonPrefab;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set__keyButtonPrefab(::UnityW<::GlobalNamespace::TextMeshProButton> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyButtonPrefab = value;
}
constexpr ::System::Action_1<char16_t>*& GlobalNamespace::UIKeyboard::__cordl_internal_get_textKeyWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textKeyWasPressedEvent;
}
constexpr ::System::Action_1<char16_t>* const& GlobalNamespace::UIKeyboard::__cordl_internal_get_textKeyWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___textKeyWasPressedEvent;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set_textKeyWasPressedEvent(::System::Action_1<char16_t>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___textKeyWasPressedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UIKeyboard::__cordl_internal_get_deleteButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deleteButtonWasPressedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UIKeyboard::__cordl_internal_get_deleteButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___deleteButtonWasPressedEvent;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set_deleteButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___deleteButtonWasPressedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UIKeyboard::__cordl_internal_get_okButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okButtonWasPressedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UIKeyboard::__cordl_internal_get_okButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___okButtonWasPressedEvent;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set_okButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___okButtonWasPressedEvent = value;
}
constexpr ::System::Action*& GlobalNamespace::UIKeyboard::__cordl_internal_get_cancelButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelButtonWasPressedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::UIKeyboard::__cordl_internal_get_cancelButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___cancelButtonWasPressedEvent;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set_cancelButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___cancelButtonWasPressedEvent = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::UIKeyboard::__cordl_internal_get__okButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::UIKeyboard::__cordl_internal_get__okButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButton;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set__okButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____okButton = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::UIKeyboard::__cordl_internal_get__cancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::UIKeyboard::__cordl_internal_get__cancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____cancelButton;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set__cancelButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____cancelButton = value;
}
constexpr bool& GlobalNamespace::UIKeyboard::__cordl_internal_get__okButtonInteractivity() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButtonInteractivity;
}
constexpr bool const& GlobalNamespace::UIKeyboard::__cordl_internal_get__okButtonInteractivity() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____okButtonInteractivity;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set__okButtonInteractivity(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____okButtonInteractivity = value;
}
constexpr bool& GlobalNamespace::UIKeyboard::__cordl_internal_get__hideCancelButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideCancelButton;
}
constexpr bool const& GlobalNamespace::UIKeyboard::__cordl_internal_get__hideCancelButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hideCancelButton;
}
constexpr void GlobalNamespace::UIKeyboard::__cordl_internal_set__hideCancelButton(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hideCancelButton = value;
}
inline void GlobalNamespace::UIKeyboard::add_textKeyWasPressedEvent(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "add_textKeyWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<char16_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::remove_textKeyWasPressedEvent(::System::Action_1<char16_t>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "remove_textKeyWasPressedEvent", {}, { ::i2c::type_of<::System::Action_1<char16_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::add_deleteButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "add_deleteButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::remove_deleteButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "remove_deleteButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::add_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "add_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::remove_okButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "remove_okButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::add_cancelButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "add_cancelButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::remove_cancelButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "remove_cancelButtonWasPressedEvent", {}, { ::i2c::type_of<::System::Action*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::set_enableOkButtonInteractivity(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "set_enableOkButtonInteractivity", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::set_hideCancelButton(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "set_hideCancelButton", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void GlobalNamespace::UIKeyboard::Awake() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "Awake", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UIKeyboard::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UIKeyboard::_Awake_b__23_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "<Awake>b__23_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UIKeyboard::_Awake_b__23_1() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "<Awake>b__23_1", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UIKeyboard::_Awake_b__23_2() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "<Awake>b__23_2", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::UIKeyboard::_Awake_b__23_3() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::UIKeyboard*>(), { "<Awake>b__23_3", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::UIKeyboard* GlobalNamespace::UIKeyboard::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::UIKeyboard*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::UIKeyboard::UIKeyboard() {}

#pragma once
// IWYU pragma private; include "HMUI\InputFieldView.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_impl.hpp"
#include "UnityEngine/UI/zzzz__Selectable_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "HMUI/zzzz__ImageViewBase_def.hpp"
#include "HMUI/zzzz__InputFieldView_def.hpp"
#include "HMUI/zzzz__UIKeyboard_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "TMPro/zzzz__TextMeshProUGUI_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/zzzz__CanvasGroup_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
#include "UnityEngine/zzzz__YieldInstruction_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::InputFieldView_SelectionState::InputFieldView_SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldView_SelectionState::InputFieldView_SelectionState() {}
constexpr ::HMUI::InputFieldView_SelectionState HMUI::InputFieldView_SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::InputFieldView_SelectionState HMUI::InputFieldView_SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::InputFieldView_SelectionState HMUI::InputFieldView_SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::InputFieldView_SelectionState HMUI::InputFieldView_SelectionState::Disabled{ static_cast<int32_t>(0x3) };
constexpr ::HMUI::InputFieldView_SelectionState HMUI::InputFieldView_SelectionState::Selected{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::HMUI::InputFieldView_InputFieldChanged._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView_InputFieldChanged::*)()>(&::HMUI::InputFieldView_InputFieldChanged::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x5886f8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView_InputFieldChanged*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline void HMUI::InputFieldView_InputFieldChanged::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView_InputFieldChanged*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::InputFieldView_InputFieldChanged* HMUI::InputFieldView_InputFieldChanged::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InputFieldView_InputFieldChanged*>());
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldView_InputFieldChanged::InputFieldView_InputFieldChanged() {}
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)(int32_t)>(&::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5886e58;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5887068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "System.IDisposable.Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(&::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x588706c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58870f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5887100;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Object* (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5887138;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
    return ___internal_method;
  }
};
constexpr int32_t& HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::System::Object*& HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::System::Object* const& HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_set___2__current(::System::Object* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____2__current = value;
}
constexpr ::UnityW<::HMUI::InputFieldView>& HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::UnityW<::HMUI::InputFieldView> const& HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::__cordl_internal_set___4__this(::UnityW<::HMUI::InputFieldView> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____4__this = value;
}
inline void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { ".ctor", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, __1__state);
}
inline void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "System.IDisposable.Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Object* HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "System.Collections.Generic.IEnumerator<System.Object>.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "System.Collections.IEnumerator.Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Object* HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(), { "System.Collections.IEnumerator.get_Current", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Object*>(this, ___internal_method);
}
inline ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46* HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(__1__state));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::operator ::System::Collections::Generic::IEnumerator_1<::System::Object*>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::System::Object*>"
constexpr ::System::Collections::Generic::IEnumerator_1<::System::Object*>*
HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::i___System__Collections__Generic__IEnumerator_1___System__Object__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::System::Object*>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::InputFieldView__BlinkingCaretCoroutine_d__46() {}
//  Writing Method size for method: ::HMUI::InputFieldView.get_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::InputFieldView_InputFieldChanged* (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5886220;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_onValueChanged", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.set_onValueChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::InputFieldView_InputFieldChanged*)>(&::HMUI::InputFieldView::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5886228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::HMUI::InputFieldView_InputFieldChanged*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.add_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(::System::Action_1<::HMUI::InputFieldView_SelectionState>*)>(
    &::HMUI::InputFieldView::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5886230;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::InputFieldView_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.remove_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(::System::Action_1<::HMUI::InputFieldView_SelectionState>*)>(
    &::HMUI::InputFieldView::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58862f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(),
                                                             { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::InputFieldView_SelectionState>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_selectionState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::HMUI::InputFieldView_SelectionState (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58863b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_selectionState", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_useGlobalKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_useGlobalKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58863b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_useGlobalKeyboard", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_useSystemKeyboardIfAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_useSystemKeyboardIfAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58863c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_useSystemKeyboardIfAvailable", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_keyboardPositionOffset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityEngine::Vector3 (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_keyboardPositionOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x58863c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_keyboardPositionOffset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58863d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_text", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.set_text
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(::StringW)>(&::HMUI::InputFieldView::set_text)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x58863e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.Awake
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x5886568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { ::i2c::class_of<::HMUI::InputFieldView*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.OnDestroy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5886684;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { ::i2c::class_of<::HMUI::InputFieldView*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.DoStateTransition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(&::HMUI::InputFieldView::DoStateTransition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5886698;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { ::i2c::class_of<::HMUI::InputFieldView*>(), 26 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.ActivateKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::UIKeyboard*)>(&::HMUI::InputFieldView::ActivateKeyboard)> {
  constexpr static std::size_t size = 0x238;
  constexpr static std::size_t addrs = 0x58866f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "ActivateKeyboard", {}, { ::i2c::type_of<::HMUI::UIKeyboard*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.DeactivateKeyboard
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::UIKeyboard*)>(&::HMUI::InputFieldView::DeactivateKeyboard)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x58869bc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "DeactivateKeyboard", {}, { ::i2c::type_of<::HMUI::UIKeyboard*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.SetText
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(::StringW)>(&::HMUI::InputFieldView::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5886bd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "SetText", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.ClearInput
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::ClearInput)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5886bec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "ClearInput", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.KeyboardKeyPressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)(char16_t)>(&::HMUI::InputFieldView::KeyboardKeyPressed)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5886c40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "KeyboardKeyPressed", {}, { ::i2c::type_of<char16_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.KeyboardDeletePressed
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::KeyboardDeletePressed)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x5886d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "KeyboardDeletePressed", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.BlinkingCaretCoroutine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::IEnumerator* (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::BlinkingCaretCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x5886930;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "BlinkingCaretCoroutine", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdateCaretPosition
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdateCaretPosition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5886434;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "UpdateCaretPosition", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdatePlaceholder
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdatePlaceholder)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5886530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "UpdatePlaceholder", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdateClearButton
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdateClearButton)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x5886984;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "UpdateClearButton", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x5886e60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView._Awake_b__37_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::_Awake_b__37_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5886fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "<Awake>b__37_0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::UnityW<::TMPro::TextMeshProUGUI>& HMUI::InputFieldView::__cordl_internal_get__textView() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textView;
}
constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& HMUI::InputFieldView::__cordl_internal_get__textView() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textView;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__textView(::UnityW<::TMPro::TextMeshProUGUI> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textView = value;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup>& HMUI::InputFieldView::__cordl_internal_get__textViewCanvasGroup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textViewCanvasGroup;
}
constexpr ::UnityW<::UnityEngine::CanvasGroup> const& HMUI::InputFieldView::__cordl_internal_get__textViewCanvasGroup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textViewCanvasGroup;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__textViewCanvasGroup(::UnityW<::UnityEngine::CanvasGroup> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textViewCanvasGroup = value;
}
constexpr ::UnityW<::HMUI::ImageViewBase>& HMUI::InputFieldView::__cordl_internal_get__blinkingCaret() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blinkingCaret;
}
constexpr ::UnityW<::HMUI::ImageViewBase> const& HMUI::InputFieldView::__cordl_internal_get__blinkingCaret() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blinkingCaret;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__blinkingCaret(::UnityW<::HMUI::ImageViewBase> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blinkingCaret = value;
}
constexpr ::UnityW<::UnityEngine::GameObject>& HMUI::InputFieldView::__cordl_internal_get__placeholderText() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____placeholderText;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& HMUI::InputFieldView::__cordl_internal_get__placeholderText() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____placeholderText;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__placeholderText(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____placeholderText = value;
}
constexpr ::UnityW<::UnityEngine::UI::Button>& HMUI::InputFieldView::__cordl_internal_get__clearSearchButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearSearchButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& HMUI::InputFieldView::__cordl_internal_get__clearSearchButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____clearSearchButton;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__clearSearchButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____clearSearchButton = value;
}
constexpr bool& HMUI::InputFieldView::__cordl_internal_get__useGlobalKeyboard() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGlobalKeyboard;
}
constexpr bool const& HMUI::InputFieldView::__cordl_internal_get__useGlobalKeyboard() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useGlobalKeyboard;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__useGlobalKeyboard(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useGlobalKeyboard = value;
}
constexpr bool& HMUI::InputFieldView::__cordl_internal_get__useSystemKeyboardIfAvailable() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useSystemKeyboardIfAvailable;
}
constexpr bool const& HMUI::InputFieldView::__cordl_internal_get__useSystemKeyboardIfAvailable() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useSystemKeyboardIfAvailable;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__useSystemKeyboardIfAvailable(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useSystemKeyboardIfAvailable = value;
}
constexpr ::UnityEngine::Vector3& HMUI::InputFieldView::__cordl_internal_get__keyboardPositionOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardPositionOffset;
}
constexpr ::UnityEngine::Vector3 const& HMUI::InputFieldView::__cordl_internal_get__keyboardPositionOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____keyboardPositionOffset;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__keyboardPositionOffset(::UnityEngine::Vector3 value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____keyboardPositionOffset = value;
}
constexpr bool& HMUI::InputFieldView::__cordl_internal_get__useUppercase() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useUppercase;
}
constexpr bool const& HMUI::InputFieldView::__cordl_internal_get__useUppercase() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____useUppercase;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__useUppercase(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____useUppercase = value;
}
constexpr int32_t& HMUI::InputFieldView::__cordl_internal_get__textLengthLimit() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textLengthLimit;
}
constexpr int32_t const& HMUI::InputFieldView::__cordl_internal_get__textLengthLimit() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____textLengthLimit;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__textLengthLimit(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____textLengthLimit = value;
}
constexpr float_t& HMUI::InputFieldView::__cordl_internal_get__caretOffset() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caretOffset;
}
constexpr float_t const& HMUI::InputFieldView::__cordl_internal_get__caretOffset() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____caretOffset;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__caretOffset(float_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____caretOffset = value;
}
constexpr ::System::Action_1<::HMUI::InputFieldView_SelectionState>*& HMUI::InputFieldView::__cordl_internal_get_selectionStateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr ::System::Action_1<::HMUI::InputFieldView_SelectionState>* const& HMUI::InputFieldView::__cordl_internal_get_selectionStateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::InputFieldView_SelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___selectionStateDidChangeEvent = value;
}
constexpr ::HMUI::InputFieldView_SelectionState& HMUI::InputFieldView::__cordl_internal_get__selectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr ::HMUI::InputFieldView_SelectionState const& HMUI::InputFieldView::__cordl_internal_get__selectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__selectionState(::HMUI::InputFieldView_SelectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionState = value;
}
constexpr ::StringW& HMUI::InputFieldView::__cordl_internal_get__text() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr ::StringW const& HMUI::InputFieldView::__cordl_internal_get__text() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____text;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__text(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____text = value;
}
constexpr bool& HMUI::InputFieldView::__cordl_internal_get__hasKeyboardAssigned() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKeyboardAssigned;
}
constexpr bool const& HMUI::InputFieldView::__cordl_internal_get__hasKeyboardAssigned() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____hasKeyboardAssigned;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__hasKeyboardAssigned(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____hasKeyboardAssigned = value;
}
constexpr ::HMUI::ButtonBinder*& HMUI::InputFieldView::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& HMUI::InputFieldView::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____buttonBinder = value;
}
constexpr ::HMUI::InputFieldView_InputFieldChanged*& HMUI::InputFieldView::__cordl_internal_get__onValueChanged() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onValueChanged;
}
constexpr ::HMUI::InputFieldView_InputFieldChanged* const& HMUI::InputFieldView::__cordl_internal_get__onValueChanged() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onValueChanged;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__onValueChanged(::HMUI::InputFieldView_InputFieldChanged* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____onValueChanged = value;
}
constexpr ::UnityEngine::YieldInstruction*& HMUI::InputFieldView::__cordl_internal_get__blinkWaitYieldInstruction() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blinkWaitYieldInstruction;
}
constexpr ::UnityEngine::YieldInstruction* const& HMUI::InputFieldView::__cordl_internal_get__blinkWaitYieldInstruction() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____blinkWaitYieldInstruction;
}
constexpr void HMUI::InputFieldView::__cordl_internal_set__blinkWaitYieldInstruction(::UnityEngine::YieldInstruction* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____blinkWaitYieldInstruction = value;
}
inline ::HMUI::InputFieldView_InputFieldChanged* HMUI::InputFieldView::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_onValueChanged", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::InputFieldView_InputFieldChanged*>(this, ___internal_method);
}
inline void HMUI::InputFieldView::set_onValueChanged(::HMUI::InputFieldView_InputFieldChanged* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "set_onValueChanged", {}, { ::i2c::type_of<::HMUI::InputFieldView_InputFieldChanged*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::InputFieldView_SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "add_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::InputFieldView_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::InputFieldView_SelectionState>* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(),
                                                           { "remove_selectionStateDidChangeEvent", {}, { ::i2c::type_of<::System::Action_1<::HMUI::InputFieldView_SelectionState>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::HMUI::InputFieldView_SelectionState HMUI::InputFieldView::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_selectionState", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::HMUI::InputFieldView_SelectionState>(this, ___internal_method);
}
inline bool HMUI::InputFieldView::get_useGlobalKeyboard() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_useGlobalKeyboard", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool HMUI::InputFieldView::get_useSystemKeyboardIfAvailable() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_useSystemKeyboardIfAvailable", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 HMUI::InputFieldView::get_keyboardPositionOffset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_keyboardPositionOffset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3>(this, ___internal_method);
}
inline ::StringW HMUI::InputFieldView::get_text() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "get_text", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(this, ___internal_method);
}
inline void HMUI::InputFieldView::set_text(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "set_text", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::Awake() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::InputFieldView*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldView::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::InputFieldView*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldView::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::HMUI::InputFieldView*>(), 26 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, instant);
}
inline void HMUI::InputFieldView::ActivateKeyboard(::HMUI::UIKeyboard* keyboard) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "ActivateKeyboard", {}, { ::i2c::type_of<::HMUI::UIKeyboard*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyboard);
}
inline void HMUI::InputFieldView::DeactivateKeyboard(::HMUI::UIKeyboard* keyboard) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "DeactivateKeyboard", {}, { ::i2c::type_of<::HMUI::UIKeyboard*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, keyboard);
}
inline void HMUI::InputFieldView::SetText(::StringW value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "SetText", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::ClearInput() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "ClearInput", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldView::KeyboardKeyPressed(char16_t letter) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "KeyboardKeyPressed", {}, { ::i2c::type_of<char16_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, letter);
}
inline void HMUI::InputFieldView::KeyboardDeletePressed() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "KeyboardDeletePressed", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* HMUI::InputFieldView::BlinkingCaretCoroutine() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "BlinkingCaretCoroutine", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdateCaretPosition() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "UpdateCaretPosition", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdatePlaceholder() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "UpdatePlaceholder", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdateClearButton() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "UpdateClearButton", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void HMUI::InputFieldView::_Awake_b__37_0() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::HMUI::InputFieldView*>(), { "<Awake>b__37_0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::HMUI::InputFieldView* HMUI::InputFieldView::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::HMUI::InputFieldView*>());
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldView::InputFieldView() {}

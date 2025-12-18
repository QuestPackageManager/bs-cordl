#pragma once
// IWYU pragma private; include "HMUI/InputFieldView.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView_InputFieldChanged::*)()>(&::HMUI::InputFieldView_InputFieldChanged::_ctor)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x56d2a1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView_InputFieldChanged*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void HMUI::InputFieldView_InputFieldChanged::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView_InputFieldChanged*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::InputFieldView_InputFieldChanged* HMUI::InputFieldView_InputFieldChanged::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::InputFieldView_InputFieldChanged*>());
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldView_InputFieldChanged::InputFieldView_InputFieldChanged() {}
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)(int32_t)>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d28e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x56d2af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::MoveNext)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x56d2afc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.System_Collections_Generic_IEnumerator_System_Object__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d2b88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                    "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56d2b90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::*)()>(
    &::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d2bc8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_IDisposable_Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                                                             "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_Generic_IEnumerator_System_Object__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                  "System.Collections.Generic.IEnumerator<System.Object>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46* HMUI::InputFieldView__BlinkingCaretCoroutine_d__46::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::InputFieldView__BlinkingCaretCoroutine_d__46*>(__1__state));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::InputFieldView_InputFieldChanged* (::HMUI::InputFieldView::*)()>(
    &::HMUI::InputFieldView::get_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_onValueChanged",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.set_onValueChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::InputFieldView_InputFieldChanged*)>(
    &::HMUI::InputFieldView::set_onValueChanged)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1cbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "set_onValueChanged", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView_InputFieldChanged*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.add_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::System::Action_1<::HMUI::InputFieldView_SelectionState>*)>(
    &::HMUI::InputFieldView::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56d1cc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "add_selectionStateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::InputFieldView_SelectionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.remove_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::System::Action_1<::HMUI::InputFieldView_SelectionState>*)>(
    &::HMUI::InputFieldView::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x56d1d84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "remove_selectionStateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::InputFieldView_SelectionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_selectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::InputFieldView_SelectionState (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1e44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_selectionState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_useGlobalKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_useGlobalKeyboard)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1e4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_useGlobalKeyboard",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_useSystemKeyboardIfAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_useSystemKeyboardIfAvailable)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1e54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_useSystemKeyboardIfAvailable",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_keyboardPositionOffset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Vector3 (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_keyboardPositionOffset)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x56d1e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_keyboardPositionOffset",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.get_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::get_text)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x56d1e6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_text",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.set_text
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::StringW)>(&::HMUI::InputFieldView::set_text)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56d1e74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.Awake
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::Awake)> {
  constexpr static std::size_t size = 0x11c;
  constexpr static std::size_t addrs = 0x56d1ffc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::OnDestroy)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x56d2118;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.DoStateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(
    &::HMUI::InputFieldView::DoStateTransition)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x56d212c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.ActivateKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::UIKeyboard*)>(&::HMUI::InputFieldView::ActivateKeyboard)> {
  constexpr static std::size_t size = 0x244;
  constexpr static std::size_t addrs = 0x56d218c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "ActivateKeyboard", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.DeactivateKeyboard
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::HMUI::UIKeyboard*)>(&::HMUI::InputFieldView::DeactivateKeyboard)> {
  constexpr static std::size_t size = 0x218;
  constexpr static std::size_t addrs = 0x56d2424;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "DeactivateKeyboard", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.SetText
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(::StringW)>(&::HMUI::InputFieldView::SetText)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x56d2674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "SetText", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.ClearInput
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::ClearInput)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56d268c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "ClearInput",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.KeyboardKeyPressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)(char16_t)>(&::HMUI::InputFieldView::KeyboardKeyPressed)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x56d26e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "KeyboardKeyPressed", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.KeyboardDeletePressed
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::KeyboardDeletePressed)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x56d2804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "KeyboardDeletePressed",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.BlinkingCaretCoroutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::BlinkingCaretCoroutine)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x56d23d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "BlinkingCaretCoroutine",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdateCaretPosition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdateCaretPosition)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x56d1ec8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdateCaretPosition",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdatePlaceholder
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdatePlaceholder)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56d1fc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdatePlaceholder",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView.UpdateClearButton
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::UpdateClearButton)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x56d263c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdateClearButton",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::_ctor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x56d28f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::InputFieldView._Awake_b__37_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::InputFieldView::*)()>(&::HMUI::InputFieldView::_Awake_b__37_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x56d2a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "<Awake>b__37_0",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textView)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____textViewCanvasGroup)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blinkingCaret)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____placeholderText)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____clearSearchButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectionStateDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____text)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onValueChanged)), cordl_internals::convert(std::forward<decltype(value)>(value)));
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
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____blinkWaitYieldInstruction)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::HMUI::InputFieldView_InputFieldChanged* HMUI::InputFieldView::get_onValueChanged() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_onValueChanged",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::InputFieldView_InputFieldChanged*, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::set_onValueChanged(::HMUI::InputFieldView_InputFieldChanged* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "set_onValueChanged", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::InputFieldView_InputFieldChanged*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::InputFieldView_SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "add_selectionStateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::InputFieldView_SelectionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::InputFieldView_SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "remove_selectionStateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::InputFieldView_SelectionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::InputFieldView_SelectionState HMUI::InputFieldView::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_selectionState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::InputFieldView_SelectionState, false>(this, ___internal_method);
}
inline bool HMUI::InputFieldView::get_useGlobalKeyboard() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_useGlobalKeyboard",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool HMUI::InputFieldView::get_useSystemKeyboardIfAvailable() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_useSystemKeyboardIfAvailable",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityEngine::Vector3 HMUI::InputFieldView::get_keyboardPositionOffset() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_keyboardPositionOffset",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Vector3, false>(this, ___internal_method);
}
inline ::StringW HMUI::InputFieldView::get_text() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "get_text",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::set_text(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "set_text", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::Awake() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::OnDestroy() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, instant);
}
inline void HMUI::InputFieldView::ActivateKeyboard(::HMUI::UIKeyboard* keyboard) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "ActivateKeyboard", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline void HMUI::InputFieldView::DeactivateKeyboard(::HMUI::UIKeyboard* keyboard) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "DeactivateKeyboard", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::HMUI::UIKeyboard*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, keyboard);
}
inline void HMUI::InputFieldView::SetText(::StringW value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "SetText", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::InputFieldView::ClearInput() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "ClearInput",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::KeyboardKeyPressed(char16_t letter) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "KeyboardKeyPressed", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<char16_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, letter);
}
inline void HMUI::InputFieldView::KeyboardDeletePressed() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "KeyboardDeletePressed",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* HMUI::InputFieldView::BlinkingCaretCoroutine() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "BlinkingCaretCoroutine",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdateCaretPosition() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdateCaretPosition",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdatePlaceholder() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdatePlaceholder",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::UpdateClearButton() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "UpdateClearButton",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void HMUI::InputFieldView::_Awake_b__37_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::InputFieldView*>::get(), "<Awake>b__37_0",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::InputFieldView* HMUI::InputFieldView::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::InputFieldView*>());
}
// Ctor Parameters []
constexpr ::HMUI::InputFieldView::InputFieldView() {}

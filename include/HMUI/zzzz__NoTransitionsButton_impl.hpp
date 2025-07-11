#pragma once
// IWYU pragma private; include "HMUI/NoTransitionsButton.hpp"
#include "UnityEngine/UI/zzzz__Button_impl.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "HMUI/zzzz__NoTransitionsButton_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::NoTransitionsButton_SelectionState::NoTransitionsButton_SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionsButton_SelectionState::NoTransitionsButton_SelectionState() {}
constexpr ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton_SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton_SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton_SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton_SelectionState::Disabled{ static_cast<int32_t>(0x3) };
//  Writing Method size for method: ::HMUI::NoTransitionsButton.get_selectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::NoTransitionsButton_SelectionState (::HMUI::NoTransitionsButton::*)()>(
    &::HMUI::NoTransitionsButton::get_selectionState)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f4a5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), "get_selectionState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.add_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*)>(
    &::HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x39f4100;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), "add_selectionStateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.remove_selectionStateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*)>(
    &::HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x39f42e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), "remove_selectionStateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton.DoStateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)(::UnityEngine::UI::Selectable_SelectionState, bool)>(
    &::HMUI::NoTransitionsButton::DoStateTransition)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x39f4a64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::NoTransitionsButton._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::NoTransitionsButton::*)()>(&::HMUI::NoTransitionsButton::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39f4aa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*& HMUI::NoTransitionsButton::__cordl_internal_get_selectionStateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr ::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* const& HMUI::NoTransitionsButton::__cordl_internal_get_selectionStateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___selectionStateDidChangeEvent;
}
constexpr void HMUI::NoTransitionsButton::__cordl_internal_set_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___selectionStateDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::NoTransitionsButton_SelectionState& HMUI::NoTransitionsButton::__cordl_internal_get__selectionState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr ::HMUI::NoTransitionsButton_SelectionState const& HMUI::NoTransitionsButton::__cordl_internal_get__selectionState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____selectionState;
}
constexpr void HMUI::NoTransitionsButton::__cordl_internal_set__selectionState(::HMUI::NoTransitionsButton_SelectionState value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____selectionState = value;
}
inline ::HMUI::NoTransitionsButton_SelectionState HMUI::NoTransitionsButton::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), "get_selectionState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::NoTransitionsButton_SelectionState, false>(this, ___internal_method);
}
inline void HMUI::NoTransitionsButton::add_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), "add_selectionStateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionsButton::remove_selectionStateDidChangeEvent(::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), "remove_selectionStateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::NoTransitionsButton_SelectionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::NoTransitionsButton::DoStateTransition(::UnityEngine::UI::Selectable_SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, instant);
}
inline void HMUI::NoTransitionsButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::NoTransitionsButton*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::HMUI::NoTransitionsButton* HMUI::NoTransitionsButton::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::NoTransitionsButton*>());
}
// Ctor Parameters []
constexpr ::HMUI::NoTransitionsButton::NoTransitionsButton() {}

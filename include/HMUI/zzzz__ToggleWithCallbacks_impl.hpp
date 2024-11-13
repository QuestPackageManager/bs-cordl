#pragma once
// IWYU pragma private; include "HMUI/ToggleWithCallbacks.hpp"
#include "UnityEngine/UI/zzzz__Toggle_impl.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "HMUI/zzzz__ToggleWithCallbacks_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState::__ToggleWithCallbacks__SelectionState(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState::__ToggleWithCallbacks__SelectionState() {}
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState HMUI::__ToggleWithCallbacks__SelectionState::Normal{ static_cast<int32_t>(0x0) };
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState HMUI::__ToggleWithCallbacks__SelectionState::Highlighted{ static_cast<int32_t>(0x1) };
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState HMUI::__ToggleWithCallbacks__SelectionState::Pressed{ static_cast<int32_t>(0x2) };
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState HMUI::__ToggleWithCallbacks__SelectionState::Selected{ static_cast<int32_t>(0x3) };
constexpr ::HMUI::__ToggleWithCallbacks__SelectionState HMUI::__ToggleWithCallbacks__SelectionState::Disabled{ static_cast<int32_t>(0x4) };
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.add_stateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*)>(
    &::HMUI::ToggleWithCallbacks::add_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x39a787c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), "add_stateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.remove_stateDidChangeEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*)>(
    &::HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x39a7b58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), "remove_stateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.get_selectionState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::HMUI::__ToggleWithCallbacks__SelectionState (::HMUI::ToggleWithCallbacks::*)()>(
    &::HMUI::ToggleWithCallbacks::get_selectionState)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x39a7c14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), "get_selectionState",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks.DoStateTransition
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ToggleWithCallbacks::*)(::UnityEngine::UI::__Selectable__SelectionState, bool)>(
    &::HMUI::ToggleWithCallbacks::DoStateTransition)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x39ac190;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), 26));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::HMUI::ToggleWithCallbacks._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::HMUI::ToggleWithCallbacks::*)()>(&::HMUI::ToggleWithCallbacks::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x39ac1dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*& HMUI::ToggleWithCallbacks::__cordl_internal_get_stateDidChangeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateDidChangeEvent;
}
constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*> const& HMUI::ToggleWithCallbacks::__cordl_internal_get_stateDidChangeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___stateDidChangeEvent;
}
constexpr void HMUI::ToggleWithCallbacks::__cordl_internal_set_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___stateDidChangeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void HMUI::ToggleWithCallbacks::add_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), "add_stateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void HMUI::ToggleWithCallbacks::remove_stateDidChangeEvent(::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), "remove_stateDidChangeEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_1<::HMUI::__ToggleWithCallbacks__SelectionState>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::HMUI::__ToggleWithCallbacks__SelectionState HMUI::ToggleWithCallbacks::get_selectionState() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), "get_selectionState",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::HMUI::__ToggleWithCallbacks__SelectionState, false>(this, ___internal_method);
}
inline void HMUI::ToggleWithCallbacks::DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), 26)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, state, instant);
}
inline ::HMUI::ToggleWithCallbacks* HMUI::ToggleWithCallbacks::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::HMUI::ToggleWithCallbacks*>());
}
inline void HMUI::ToggleWithCallbacks::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::HMUI::ToggleWithCallbacks*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::HMUI::ToggleWithCallbacks::ToggleWithCallbacks() {}

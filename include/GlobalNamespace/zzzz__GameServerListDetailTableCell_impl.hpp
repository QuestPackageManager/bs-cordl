#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServerListDetailTableCell.hpp"
#include "HMUI/zzzz__TableCell_impl.hpp"
#include "GlobalNamespace/zzzz__GameServerListDetailTableCell_def.hpp"
#include "HMUI/zzzz__ButtonBinder_def.hpp"
#include "System/zzzz__Action_def.hpp"
#include "UnityEngine/UI/zzzz__Button_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell.add_joinServerButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerListDetailTableCell::add_joinServerButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3bf78a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(), "add_joinServerButtonWasPressedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell.remove_joinServerButtonWasPressedEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)(::System::Action*)>(
    &::GlobalNamespace::GameServerListDetailTableCell::remove_joinServerButtonWasPressedEvent)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x3bf7940;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(), "remove_joinServerButtonWasPressedEvent",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)()>(
    &::GlobalNamespace::GameServerListDetailTableCell::Start)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x3bf79dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(), 6));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)()>(
    &::GlobalNamespace::GameServerListDetailTableCell::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x3bf7a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::GameServerListDetailTableCell._Start_b__5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::GameServerListDetailTableCell::*)()>(
    &::GlobalNamespace::GameServerListDetailTableCell::_Start_b__5_0)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x3bf7ae0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(),
                                                                               "<Start>b__5_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::UnityEngine::UI::Button>& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get__joinServerButton() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joinServerButton;
}
constexpr ::UnityW<::UnityEngine::UI::Button> const& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get__joinServerButton() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____joinServerButton;
}
constexpr void GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_set__joinServerButton(::UnityW<::UnityEngine::UI::Button> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____joinServerButton)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action*& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get_joinServerButtonWasPressedEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinServerButtonWasPressedEvent;
}
constexpr ::System::Action* const& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get_joinServerButtonWasPressedEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___joinServerButtonWasPressedEvent;
}
constexpr void GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_set_joinServerButtonWasPressedEvent(::System::Action* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___joinServerButtonWasPressedEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::HMUI::ButtonBinder*& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get__buttonBinder() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr ::HMUI::ButtonBinder* const& GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_get__buttonBinder() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____buttonBinder;
}
constexpr void GlobalNamespace::GameServerListDetailTableCell::__cordl_internal_set__buttonBinder(::HMUI::ButtonBinder* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____buttonBinder)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::GameServerListDetailTableCell::add_joinServerButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(), "add_joinServerButtonWasPressedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerListDetailTableCell::remove_joinServerButtonWasPressedEvent(::System::Action* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(), "remove_joinServerButtonWasPressedEvent",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void GlobalNamespace::GameServerListDetailTableCell::Start() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(), 6)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerListDetailTableCell::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::GameServerListDetailTableCell::_Start_b__5_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::GameServerListDetailTableCell*>::get(),
                                                                             "<Start>b__5_0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::GameServerListDetailTableCell* GlobalNamespace::GameServerListDetailTableCell::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::GameServerListDetailTableCell*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::GameServerListDetailTableCell::GameServerListDetailTableCell() {}

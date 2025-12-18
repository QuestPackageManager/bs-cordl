#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/DropdownMenuItem.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithLabel_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__DropdownMenuItem_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Dropdown_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem.Setup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::Setup)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x58abeec;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(), 5));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem.RegisterDropdownSourceMenu
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::RegisterDropdownSourceMenu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ac014;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(), "RegisterDropdownSourceMenu",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem.OnPointerClick
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::OnPointerClick)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x58ac01c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(), 8));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x58ac044;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown>& Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::__cordl_internal_get__dropdown() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdown;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> const&
Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::__cordl_internal_get__dropdown() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dropdown;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::__cordl_internal_set__dropdown(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____dropdown)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::RegisterDropdownSourceMenu(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown* dropdown) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(), "RegisterDropdownSourceMenu",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, dropdown);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::OnPointerClick() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(), 8)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem* Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::DropdownMenuItem() {}

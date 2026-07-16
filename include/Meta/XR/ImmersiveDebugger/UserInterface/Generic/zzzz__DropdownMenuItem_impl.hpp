#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/DropdownMenuItem.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ButtonWithLabel_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__DropdownMenuItem_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Dropdown_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::Setup)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x5a59438;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem.RegisterDropdownSourceMenu
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::*)(
    ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown*)>(&::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::RegisterDropdownSourceMenu)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a59560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(),
                                                             { "RegisterDropdownSourceMenu", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem.OnPointerClick
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::OnPointerClick)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x5a59568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(), 8 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a59590;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(), { ".ctor", {}, {} })));
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
  this->____dropdown = value;
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::RegisterDropdownSourceMenu(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown* dropdown) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(),
                                                           { "RegisterDropdownSourceMenu", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Dropdown*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, dropdown);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::OnPointerClick() {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(), 8 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem* Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Generic::DropdownMenuItem::DropdownMenuItem() {}

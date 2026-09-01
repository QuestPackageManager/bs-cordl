#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\HierarchyItemButton.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__HierarchyItemButton_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Hierarchy/zzzz__Item_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ToggleWithLabel_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Toggle_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.get_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Hierarchy::Item* (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::get_Item)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4f4b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "get_Item", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.set_Item
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)(::Meta::XR::ImmersiveDebugger::Hierarchy::Item*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::set_Item)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x5a4f4c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(),
                                                                                           { "set_Item", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.get_Counter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::get_Counter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4f670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "get_Counter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.set_Counter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::set_Counter)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5a4f678;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "set_Counter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.get_Foldout
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::get_Foldout)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4f6e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "get_Foldout", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.get_Label
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> (
    ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::get_Label)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4f6ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "get_Label", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::Setup)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5a4f6f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.OnStateChanged
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::OnStateChanged)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x5a4fc84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "OnStateChanged", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::Update)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5a4fd80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.UpdateGameObjectState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)(bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::UpdateGameObjectState)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a4f5d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "UpdateGameObjectState", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton.UpdateGameObjectState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)(bool, bool)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::UpdateGameObjectState)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5a4fe3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(),
                                                                                           { "UpdateGameObjectState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a4ff18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item*& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__item() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____item;
}
constexpr ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* const& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__item() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____item;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_set__item(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____item = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counter;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counter;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_set__counter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____counter = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel>& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> const& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_set__label(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____label = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__foldout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foldout;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> const& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__foldout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____foldout;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_set__foldout(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____foldout = value;
}
constexpr bool& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__previousEnabledState() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousEnabledState;
}
constexpr bool const& Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_get__previousEnabledState() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____previousEnabledState;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::__cordl_internal_set__previousEnabledState(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____previousEnabledState = value;
}
inline ::Meta::XR::ImmersiveDebugger::Hierarchy::Item* Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::get_Item() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "get_Item", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::set_Item(::Meta::XR::ImmersiveDebugger::Hierarchy::Item* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(),
                                                                                         { "set_Item", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Hierarchy::Item*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::get_Counter() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "get_Counter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::set_Counter(int32_t value) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "set_Counter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle> Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::get_Foldout() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "get_Foldout", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Toggle>>(this, ___internal_method);
}
inline ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel> Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::get_Label() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "get_Label", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ToggleWithLabel>>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::OnStateChanged(bool state) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "OnStateChanged", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::UpdateGameObjectState(bool force) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { "UpdateGameObjectState", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, force);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::UpdateGameObjectState(bool state, bool force) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(),
                                                                                         { "UpdateGameObjectState", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, state, force);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton* Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::HierarchyItemButton::HierarchyItemButton() {}

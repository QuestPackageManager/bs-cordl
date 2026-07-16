#pragma once
// IWYU pragma private; include "Meta/XR/ImmersiveDebugger/UserInterface/CategoryButton.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Toggle_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__CategoryButton_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Category_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Flex_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Label_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton.get_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::Category (::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::get_Category)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a46c18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), { "get_Category", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton.set_Category
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::*)(::Meta::XR::ImmersiveDebugger::Manager::Category)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::set_Category)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x5a46c24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(),
                                                                                           { "set_Category", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Category>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton.get_Counter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::get_Counter)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a46cbc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), { "get_Counter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton.set_Counter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::*)(int32_t)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::set_Counter)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x5a46cc4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), { "set_Counter", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::Setup)> {
  constexpr static std::size_t size = 0x2d8;
  constexpr static std::size_t addrs = 0x5a46e0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), 5 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5a471c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Category& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__category() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____category;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Category const& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__category() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____category;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_set__category(::Meta::XR::ImmersiveDebugger::Manager::Category value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____category = value;
}
constexpr int32_t& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__counter() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counter;
}
constexpr int32_t const& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__counter() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____counter;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_set__counter(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____counter = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__label() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__label() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____label;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_set__label(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____label = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label>& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__subLabel() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subLabel;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> const& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__subLabel() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____subLabel;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_set__subLabel(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Label> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____subLabel = value;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex>& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__flex() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr ::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> const& Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_get__flex() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____flex;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::__cordl_internal_set__flex(::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Flex> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____flex = value;
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Category Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::get_Category() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), { "get_Category", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Category>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::set_Category(::Meta::XR::ImmersiveDebugger::Manager::Category value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(),
                                                                                         { "set_Category", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Category>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline int32_t Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::get_Counter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), { "get_Counter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::set_Counter(int32_t value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), { "set_Counter", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::Setup(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::Controller* owner) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), 5 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, owner);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton* Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::CategoryButton::CategoryButton() {}

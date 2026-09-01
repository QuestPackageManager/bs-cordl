#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\Values.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__Controller_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Values_def.hpp"
#include "Meta/XR/ImmersiveDebugger/Manager/zzzz__Watch_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ImageStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__TextStyle_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__Value_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Values.get_GetValues
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* (
    ::Meta::XR::ImmersiveDebugger::UserInterface::Values::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Values::get_GetValues)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a57b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(), { "get_GetValues", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Values.get_Watch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::Manager::Watch* (::Meta::XR::ImmersiveDebugger::UserInterface::Values::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Values::get_Watch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a57b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(), { "get_Watch", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Values.set_Watch
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Values::*)(::Meta::XR::ImmersiveDebugger::Manager::Watch*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Values::set_Watch)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a57b90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(),
                                                                                           { "set_Watch", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Values.set_BackgroundStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Values::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Values::set_BackgroundStyle)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5a57b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(),
                                                             { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Values.set_TextStyle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Values::*)(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Values::set_TextStyle)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5a57cac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(),
                                                             { "set_TextStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Values.Setup
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Values::*)(::Meta::XR::ImmersiveDebugger::Manager::Watch*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::Values::Setup)> {
  constexpr static std::size_t size = 0x3d8;
  constexpr static std::size_t addrs = 0x5a54f50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(),
                                                                                           { "Setup", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Values.Update
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Values::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Values::Update)> {
  constexpr static std::size_t size = 0x17c;
  constexpr static std::size_t addrs = 0x5a57dcc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(), { "Update", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::Values._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::Values::*)()>(&::Meta::XR::ImmersiveDebugger::UserInterface::Values::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5a57f48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>*& Meta::XR::ImmersiveDebugger::UserInterface::Values::__cordl_internal_get__values() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* const&
Meta::XR::ImmersiveDebugger::UserInterface::Values::__cordl_internal_get__values() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____values;
}
constexpr void
Meta::XR::ImmersiveDebugger::UserInterface::Values::__cordl_internal_set__values(::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____values = value;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch*& Meta::XR::ImmersiveDebugger::UserInterface::Values::__cordl_internal_get__Watch_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Watch_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::Manager::Watch* const& Meta::XR::ImmersiveDebugger::UserInterface::Values::__cordl_internal_get__Watch_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Watch_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::Values::__cordl_internal_set__Watch_k__BackingField(::Meta::XR::ImmersiveDebugger::Manager::Watch* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Watch_k__BackingField = value;
}
inline ::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>* Meta::XR::ImmersiveDebugger::UserInterface::Values::get_GetValues() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(), { "get_GetValues", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::List_1<::UnityW<::Meta::XR::ImmersiveDebugger::UserInterface::Value>>*>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::Manager::Watch* Meta::XR::ImmersiveDebugger::UserInterface::Values::get_Watch() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(), { "get_Watch", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::Manager::Watch*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Values::set_Watch(::Meta::XR::ImmersiveDebugger::Manager::Watch* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(),
                                                                                         { "set_Watch", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Values::set_BackgroundStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(),
                                                           { "set_BackgroundStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::ImageStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Values::set_TextStyle(::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle* value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(),
                                                           { "set_TextStyle", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::Generic::TextStyle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Values::Setup(::Meta::XR::ImmersiveDebugger::Manager::Watch* watch) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(),
                                                                                         { "Setup", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::Manager::Watch*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, watch);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Values::Update() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(), { "Update", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::Values::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::Values* Meta::XR::ImmersiveDebugger::UserInterface::Values::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::Values*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::Values::Values() {}

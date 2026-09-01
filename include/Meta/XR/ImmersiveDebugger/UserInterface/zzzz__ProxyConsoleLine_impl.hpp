#pragma once
// IWYU pragma private; include "Meta\XR\ImmersiveDebugger\UserInterface\ProxyConsoleLine.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/Generic/zzzz__ProxyController_1_impl.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ProxyConsoleLine_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__ConsoleLine_def.hpp"
#include "Meta/XR/ImmersiveDebugger/UserInterface/zzzz__LogEntry_def.hpp"
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine.get_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::get_Entry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4d560;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(), { "get_Entry", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine.set_Entry
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::*)(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*)>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::set_Entry)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5a4d568;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(),
                                                                                           { "set_Entry", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine.Fill
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::Fill)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5a4d570;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(),
                                                                                          { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(), 4 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::*)()>(
    &::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::_ctor)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5a4d5c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*& Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::__cordl_internal_get__Entry_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Entry_k__BackingField;
}
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* const& Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::__cordl_internal_get__Entry_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Entry_k__BackingField;
}
constexpr void Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::__cordl_internal_set__Entry_k__BackingField(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Entry_k__BackingField = value;
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::get_Entry() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(), { "get_Entry", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::set_Entry(::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry* value) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(),
                                                                                         { "set_Entry", {}, { ::i2c::type_of<::Meta::XR::ImmersiveDebugger::UserInterface::LogEntry*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, value);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::Fill() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(), 4 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine* Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::ImmersiveDebugger::UserInterface::ProxyConsoleLine::ProxyConsoleLine() {}

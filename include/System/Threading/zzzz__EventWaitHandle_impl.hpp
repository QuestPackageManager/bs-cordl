#pragma once
// IWYU pragma private; include "System/Threading/EventWaitHandle.hpp"
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
#include "System/Threading/zzzz__EventResetMode_def.hpp"
//  Writing Method size for method: ::System::Threading::EventWaitHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::EventWaitHandle::*)(bool, ::System::Threading::EventResetMode)>(&::System::Threading::EventWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5ca69c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::EventWaitHandle*>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::EventResetMode>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::EventWaitHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::EventWaitHandle::*)(bool, ::System::Threading::EventResetMode, ::StringW)>(
    &::System::Threading::EventWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x2f8;
  constexpr static std::size_t addrs = 0x5cae068;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::EventWaitHandle*>(),
                                                             { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::EventResetMode>(), ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::EventWaitHandle.Reset
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::EventWaitHandle::*)()>(&::System::Threading::EventWaitHandle::Reset)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ca8770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::EventWaitHandle*>(), { "Reset", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::EventWaitHandle.Set
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::EventWaitHandle::*)()>(&::System::Threading::EventWaitHandle::Set)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x5ca84d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::EventWaitHandle*>(), { "Set", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Threading::EventWaitHandle::_ctor(bool initialState, ::System::Threading::EventResetMode mode) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Threading::EventWaitHandle*>(), { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::EventResetMode>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState, mode);
}
inline void System::Threading::EventWaitHandle::_ctor(bool initialState, ::System::Threading::EventResetMode mode, ::StringW name) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::EventWaitHandle*>(),
                                                           { ".ctor", {}, { ::i2c::type_of<bool>(), ::i2c::type_of<::System::Threading::EventResetMode>(), ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState, mode, name);
}
inline bool System::Threading::EventWaitHandle::Reset() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::EventWaitHandle*>(), { "Reset", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline bool System::Threading::EventWaitHandle::Set() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::EventWaitHandle*>(), { "Set", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline ::System::Threading::EventWaitHandle* System::Threading::EventWaitHandle::New_ctor(bool initialState, ::System::Threading::EventResetMode mode) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::EventWaitHandle*>(initialState, mode));
}
inline ::System::Threading::EventWaitHandle* System::Threading::EventWaitHandle::New_ctor(bool initialState, ::System::Threading::EventResetMode mode, ::StringW name) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::EventWaitHandle*>(initialState, mode, name));
}
// Ctor Parameters []
constexpr ::System::Threading::EventWaitHandle::EventWaitHandle() {}

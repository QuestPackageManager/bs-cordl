#pragma once
// IWYU pragma private; include "System/Threading/ManualResetEvent.hpp"
#include "System/Threading/zzzz__EventWaitHandle_impl.hpp"
#include "System/Threading/zzzz__ManualResetEvent_def.hpp"
//  Writing Method size for method: ::System::Threading::ManualResetEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::ManualResetEvent::*)(bool)>(&::System::Threading::ManualResetEvent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca6b88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEvent*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::ManualResetEvent::_ctor(bool initialState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::ManualResetEvent*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState);
}
inline ::System::Threading::ManualResetEvent* System::Threading::ManualResetEvent::New_ctor(bool initialState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::ManualResetEvent*>(initialState));
}
// Ctor Parameters []
constexpr ::System::Threading::ManualResetEvent::ManualResetEvent() {}

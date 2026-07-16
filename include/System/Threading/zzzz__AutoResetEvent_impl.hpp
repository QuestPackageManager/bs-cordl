#pragma once
// IWYU pragma private; include "System/Threading/AutoResetEvent.hpp"
#include "System/Threading/zzzz__EventWaitHandle_impl.hpp"
#include "System/Threading/zzzz__AutoResetEvent_def.hpp"
//  Writing Method size for method: ::System::Threading::AutoResetEvent._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::AutoResetEvent::*)(bool)>(&::System::Threading::AutoResetEvent::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5ca69b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AutoResetEvent*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
inline void System::Threading::AutoResetEvent::_ctor(bool initialState) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::AutoResetEvent*>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, initialState);
}
inline ::System::Threading::AutoResetEvent* System::Threading::AutoResetEvent::New_ctor(bool initialState) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Threading::AutoResetEvent*>(initialState));
}
// Ctor Parameters []
constexpr ::System::Threading::AutoResetEvent::AutoResetEvent() {}

#pragma once
// IWYU pragma private; include "System/Threading/_ThreadPoolWaitCallback.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz___ThreadPoolWaitCallback_def.hpp"
//  Writing Method size for method: ::System::Threading::_ThreadPoolWaitCallback.PerformWaitCallback
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x5cb4330;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::_ThreadPoolWaitCallback*>(), { "PerformWaitCallback", {}, {} })));
    return ___internal_method;
  }
};
inline bool System::Threading::_ThreadPoolWaitCallback::PerformWaitCallback() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::_ThreadPoolWaitCallback*>(), { "PerformWaitCallback", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
// Ctor Parameters []
constexpr ::System::Threading::_ThreadPoolWaitCallback::_ThreadPoolWaitCallback() {}

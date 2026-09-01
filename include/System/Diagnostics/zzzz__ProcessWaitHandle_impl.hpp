#pragma once
// IWYU pragma private; include "System\Diagnostics\ProcessWaitHandle.hpp"
#include "System/Threading/zzzz__WaitHandle_impl.hpp"
#include "System/Diagnostics/zzzz__ProcessWaitHandle_def.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
//  Writing Method size for method: ::System::Diagnostics::ProcessWaitHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Diagnostics::ProcessWaitHandle::*)(::Microsoft::Win32::SafeHandles::SafeProcessHandle*)>(
    &::System::Diagnostics::ProcessWaitHandle::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x639c480;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::System::Diagnostics::ProcessWaitHandle*>(), { ".ctor", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>() } })));
    return ___internal_method;
  }
};
inline void System::Diagnostics::ProcessWaitHandle::_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::System::Diagnostics::ProcessWaitHandle*>(), { ".ctor", {}, { ::i2c::type_of<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, processHandle);
}
inline ::System::Diagnostics::ProcessWaitHandle* System::Diagnostics::ProcessWaitHandle::New_ctor(::Microsoft::Win32::SafeHandles::SafeProcessHandle* processHandle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Diagnostics::ProcessWaitHandle*>(processHandle));
}
// Ctor Parameters []
constexpr ::System::Diagnostics::ProcessWaitHandle::ProcessWaitHandle() {}

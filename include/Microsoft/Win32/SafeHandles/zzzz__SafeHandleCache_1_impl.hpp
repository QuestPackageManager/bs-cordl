#pragma once
// IWYU pragma private; include "Microsoft\Win32\SafeHandles\SafeHandleCache_1.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleCache_1_def.hpp"
#include "System/Runtime/InteropServices/zzzz__SafeHandle_def.hpp"
template <typename T> inline void Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>::setStaticF_s_invalidHandle(T value) {
  ::cordl_internals::setStaticField<T, "s_invalidHandle", ::Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>*>(std::forward<T>(value));
}
template <typename T> inline T Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>::getStaticF_s_invalidHandle() {
  return ::cordl_internals::getStaticField<T, "s_invalidHandle", ::Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>*>();
}
template <typename T> inline bool Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>::IsCachedInvalidHandle(::System::Runtime::InteropServices::SafeHandle* handle) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>*>(),
                                                                                         { "IsCachedInvalidHandle", {}, { ::i2c::type_of<::System::Runtime::InteropServices::SafeHandle*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, handle);
}
// Ctor Parameters []
template <typename T> constexpr ::Microsoft::Win32::SafeHandles::SafeHandleCache_1<T>::SafeHandleCache_1() {}

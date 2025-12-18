#pragma once
// IWYU pragma private; include "Microsoft/Win32/SafeHandles/SafeProcessHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleZeroOrMinusOneIsInvalid_impl.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeProcessHandle_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)(::System::IntPtr)>(
    &::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x5e2fa60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)(::System::IntPtr, bool)>(
    &::Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x5e2f870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Microsoft::Win32::SafeHandles::SafeProcessHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Microsoft::Win32::SafeHandles::SafeProcessHandle::*)()>(
    &::Microsoft::Win32::SafeHandles::SafeProcessHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e2fac0;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(), 7));
    return ___internal_method;
  }
};
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::setStaticF_InvalidHandle(::Microsoft::Win32::SafeHandles::SafeProcessHandle* value) {
  ::cordl_internals::setStaticField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "InvalidHandle",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get>(
      std::forward<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(value));
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::getStaticF_InvalidHandle() {
  return ::cordl_internals::getStaticField<::Microsoft::Win32::SafeHandles::SafeProcessHandle*, "InvalidHandle",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get>();
}
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor(::System::IntPtr handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle);
}
inline void Microsoft::Win32::SafeHandles::SafeProcessHandle::_ctor(::System::IntPtr existingHandle, bool ownsHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, existingHandle, ownsHandle);
}
inline bool Microsoft::Win32::SafeHandles::SafeProcessHandle::ReleaseHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::New_ctor(::System::IntPtr handle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(handle));
}
inline ::Microsoft::Win32::SafeHandles::SafeProcessHandle* Microsoft::Win32::SafeHandles::SafeProcessHandle::New_ctor(::System::IntPtr existingHandle, bool ownsHandle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Microsoft::Win32::SafeHandles::SafeProcessHandle*>(existingHandle, ownsHandle));
}
// Ctor Parameters []
constexpr ::Microsoft::Win32::SafeHandles::SafeProcessHandle::SafeProcessHandle() {}

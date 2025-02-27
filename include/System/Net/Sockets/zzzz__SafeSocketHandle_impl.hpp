#pragma once
// IWYU pragma private; include "System/Net/Sockets/SafeSocketHandle.hpp"
#include "Microsoft/Win32/SafeHandles/zzzz__SafeHandleMinusOneIsInvalid_impl.hpp"
#include "System/Net/Sockets/zzzz__SafeSocketHandle_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Diagnostics/zzzz__StackTrace_def.hpp"
#include "System/Threading/zzzz__Thread_def.hpp"
#include "System/zzzz__IntPtr_def.hpp"
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)(::System::IntPtr, bool)>(
    &::System::Net::Sockets::SafeSocketHandle::_ctor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x440f23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Net::Sockets::SafeSocketHandle::*)()>(&::System::Net::Sockets::SafeSocketHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x5b4;
  constexpr static std::size_t addrs = 0x440f300;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(), 7));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.RegisterForBlockingSyscall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)()>(
    &::System::Net::Sockets::SafeSocketHandle::RegisterForBlockingSyscall)> {
  constexpr static std::size_t size = 0x13c;
  constexpr static std::size_t addrs = 0x440f8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                               "RegisterForBlockingSyscall", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.UnRegisterForBlockingSyscall
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)()>(
    &::System::Net::Sockets::SafeSocketHandle::UnRegisterForBlockingSyscall)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x440f9f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                               "UnRegisterForBlockingSyscall", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::System::Threading::Thread*>*& System::Net::Sockets::SafeSocketHandle::__cordl_internal_get_blocking_threads() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocking_threads;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Thread*>* const& System::Net::Sockets::SafeSocketHandle::__cordl_internal_get_blocking_threads() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blocking_threads;
}
constexpr void System::Net::Sockets::SafeSocketHandle::__cordl_internal_set_blocking_threads(::System::Collections::Generic::List_1<::System::Threading::Thread*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blocking_threads)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>*&
System::Net::Sockets::SafeSocketHandle::__cordl_internal_get_threads_stacktraces() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threads_stacktraces;
}
constexpr ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>* const&
System::Net::Sockets::SafeSocketHandle::__cordl_internal_get_threads_stacktraces() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___threads_stacktraces;
}
constexpr void System::Net::Sockets::SafeSocketHandle::__cordl_internal_set_threads_stacktraces(
    ::System::Collections::Generic::Dictionary_2<::System::Threading::Thread*, ::System::Diagnostics::StackTrace*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___threads_stacktraces)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& System::Net::Sockets::SafeSocketHandle::__cordl_internal_get_in_cleanup() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___in_cleanup;
}
constexpr bool const& System::Net::Sockets::SafeSocketHandle::__cordl_internal_get_in_cleanup() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___in_cleanup;
}
constexpr void System::Net::Sockets::SafeSocketHandle::__cordl_internal_set_in_cleanup(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___in_cleanup = value;
}
inline void System::Net::Sockets::SafeSocketHandle::setStaticF_THROW_ON_ABORT_RETRIES(bool value) {
  ::cordl_internals::setStaticField<bool, "THROW_ON_ABORT_RETRIES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::SafeSocketHandle::getStaticF_THROW_ON_ABORT_RETRIES() {
  return ::cordl_internals::getStaticField<bool, "THROW_ON_ABORT_RETRIES", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get>();
}
inline void System::Net::Sockets::SafeSocketHandle::_ctor(::System::IntPtr preexistingHandle, bool ownsHandle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::IntPtr>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, preexistingHandle, ownsHandle);
}
inline bool System::Net::Sockets::SafeSocketHandle::ReleaseHandle() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(), 7)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SafeSocketHandle::RegisterForBlockingSyscall() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                             "RegisterForBlockingSyscall", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Net::Sockets::SafeSocketHandle::UnRegisterForBlockingSyscall() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Net::Sockets::SafeSocketHandle*>::get(),
                                                                             "UnRegisterForBlockingSyscall", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Net::Sockets::SafeSocketHandle* System::Net::Sockets::SafeSocketHandle::New_ctor(::System::IntPtr preexistingHandle, bool ownsHandle) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Net::Sockets::SafeSocketHandle*>(preexistingHandle, ownsHandle));
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SafeSocketHandle::SafeSocketHandle() {}

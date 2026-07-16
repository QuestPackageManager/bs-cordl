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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)(::System::IntPtr, bool)>(&::System::Net::Sockets::SafeSocketHandle::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x6366b80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)()>(&::System::Net::Sockets::SafeSocketHandle::_ctor)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x6366c78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.ReleaseHandle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Net::Sockets::SafeSocketHandle::*)()>(&::System::Net::Sockets::SafeSocketHandle::ReleaseHandle)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x6366cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { ::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), 7 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.RegisterForBlockingSyscall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)()>(&::System::Net::Sockets::SafeSocketHandle::RegisterForBlockingSyscall)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x63671dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { "RegisterForBlockingSyscall", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Net::Sockets::SafeSocketHandle.UnRegisterForBlockingSyscall
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Net::Sockets::SafeSocketHandle::*)()>(&::System::Net::Sockets::SafeSocketHandle::UnRegisterForBlockingSyscall)> {
  constexpr static std::size_t size = 0x210;
  constexpr static std::size_t addrs = 0x6367344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { "UnRegisterForBlockingSyscall", {}, {} })));
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
  this->___blocking_threads = value;
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
  this->___threads_stacktraces = value;
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
  ::cordl_internals::setStaticField<bool, "THROW_ON_ABORT_RETRIES", ::System::Net::Sockets::SafeSocketHandle*>(std::forward<bool>(value));
}
inline bool System::Net::Sockets::SafeSocketHandle::getStaticF_THROW_ON_ABORT_RETRIES() {
  return ::cordl_internals::getStaticField<bool, "THROW_ON_ABORT_RETRIES", ::System::Net::Sockets::SafeSocketHandle*>();
}
inline void System::Net::Sockets::SafeSocketHandle::_ctor(::System::IntPtr preexistingHandle, bool ownsHandle) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { ".ctor", {}, { ::i2c::type_of<::System::IntPtr>(), ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method, preexistingHandle, ownsHandle);
}
inline void System::Net::Sockets::SafeSocketHandle::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline bool System::Net::Sockets::SafeSocketHandle::ReleaseHandle() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), 7 })));
  return ::cordl_internals::RunMethodRethrow<bool>(this, ___internal_method);
}
inline void System::Net::Sockets::SafeSocketHandle::RegisterForBlockingSyscall() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { "RegisterForBlockingSyscall", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void System::Net::Sockets::SafeSocketHandle::UnRegisterForBlockingSyscall() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Net::Sockets::SafeSocketHandle*>(), { "UnRegisterForBlockingSyscall", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Net::Sockets::SafeSocketHandle* System::Net::Sockets::SafeSocketHandle::New_ctor(::System::IntPtr preexistingHandle, bool ownsHandle) {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SafeSocketHandle*>(preexistingHandle, ownsHandle));
}
inline ::System::Net::Sockets::SafeSocketHandle* System::Net::Sockets::SafeSocketHandle::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::System::Net::Sockets::SafeSocketHandle*>());
}
// Ctor Parameters []
constexpr ::System::Net::Sockets::SafeSocketHandle::SafeSocketHandle() {}

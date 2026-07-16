#pragma once
// IWYU pragma private; include "System/Threading/SpinLock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
// Ctor Parameters []
constexpr ::System::Threading::SpinLock_SystemThreading_SpinLockDebugView::SpinLock_SystemThreading_SpinLockDebugView() {}
//  Writing Method size for method: ::System::Threading::SpinLock._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5cad4c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.Enter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)(::by_ref<bool>)>(&::System::Threading::SpinLock::Enter)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5cad4e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "Enter", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.TryEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, ::by_ref<bool>)>(&::System::Threading::SpinLock::TryEnter)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5cada14;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "TryEnter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ContinueTryEnter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, ::by_ref<bool>)>(&::System::Threading::SpinLock::ContinueTryEnter)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x5cad5b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "ContinueTryEnter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.DecrementWaiters
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::DecrementWaiters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5cadc78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "DecrementWaiters", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ContinueTryEnterWithThreadTracking
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, uint32_t, ::by_ref<bool>)>(
    &::System::Threading::SpinLock::ContinueTryEnterWithThreadTracking)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5cadb04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(),
                                                { "ContinueTryEnterWithThreadTracking", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.Exit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::Exit)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5cadd20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "Exit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.Exit
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::Exit)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x5cadeb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "Exit", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ExitSlowPath
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::ExitSlowPath)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5cadda8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "ExitSlowPath", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.get_IsHeldByCurrentThread
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::get_IsHeldByCurrentThread)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5cadf44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "get_IsHeldByCurrentThread", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.get_IsThreadOwnerTrackingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5cadaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "get_IsThreadOwnerTrackingEnabled", {}, {} })));
    return ___internal_method;
  }
};
inline void System::Threading::SpinLock::setStaticF_MAXIMUM_WAITERS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAXIMUM_WAITERS", ::System::Threading::SpinLock>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::SpinLock::getStaticF_MAXIMUM_WAITERS() {
  return ::cordl_internals::getStaticField<int32_t, "MAXIMUM_WAITERS", ::System::Threading::SpinLock>();
}
inline void System::Threading::SpinLock::_ctor(bool enableThreadOwnerTracking) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { ".ctor", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, enableThreadOwnerTracking);
}
inline void System::Threading::SpinLock::Enter(::by_ref<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "Enter", {}, { ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, lockTaken);
}
inline void System::Threading::SpinLock::TryEnter(int32_t millisecondsTimeout, ::by_ref<bool> lockTaken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "TryEnter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, millisecondsTimeout, lockTaken);
}
inline void System::Threading::SpinLock::ContinueTryEnter(int32_t millisecondsTimeout, ::by_ref<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "ContinueTryEnter", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, millisecondsTimeout, lockTaken);
}
inline void System::Threading::SpinLock::DecrementWaiters() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "DecrementWaiters", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Threading::SpinLock::ContinueTryEnterWithThreadTracking(int32_t millisecondsTimeout, uint32_t startTime, ::by_ref<bool> lockTaken) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(),
                                                           { "ContinueTryEnterWithThreadTracking", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::by_ref<bool>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, millisecondsTimeout, startTime, lockTaken);
}
inline void System::Threading::SpinLock::Exit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "Exit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void System::Threading::SpinLock::Exit(bool useMemoryBarrier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "Exit", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useMemoryBarrier);
}
inline void System::Threading::SpinLock::ExitSlowPath(bool useMemoryBarrier) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "ExitSlowPath", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, useMemoryBarrier);
}
inline bool System::Threading::SpinLock::get_IsHeldByCurrentThread() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "get_IsHeldByCurrentThread", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::System::Threading::SpinLock>(), { "get_IsThreadOwnerTrackingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_owner", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::SpinLock::SpinLock(int32_t m_owner) noexcept {
  this->m_owner = m_owner;
}
// Ctor Parameters []
constexpr ::System::Threading::SpinLock::SpinLock() {}

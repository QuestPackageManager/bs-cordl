#pragma once
// IWYU pragma private; include "System/Threading/SpinLock.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
// Ctor Parameters []
constexpr ::System::Threading::SpinLock_SystemThreading_SpinLockDebugView::SpinLock_SystemThreading_SpinLockDebugView() {}
//  Writing Method size for method: ::System::Threading::SpinLock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::_ctor)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5aff390;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.Enter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(::ByRef<bool>)>(&::System::Threading::SpinLock::Enter)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5aff3ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Enter", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.TryEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, ::ByRef<bool>)>(&::System::Threading::SpinLock::TryEnter)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x5aff900;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "TryEnter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ContinueTryEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, ::ByRef<bool>)>(&::System::Threading::SpinLock::ContinueTryEnter)> {
  constexpr static std::size_t size = 0x448;
  constexpr static std::size_t addrs = 0x5aff4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ContinueTryEnter", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.DecrementWaiters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::DecrementWaiters)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x5affb94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "DecrementWaiters",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ContinueTryEnterWithThreadTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, uint32_t, ::ByRef<bool>)>(
    &::System::Threading::SpinLock::ContinueTryEnterWithThreadTracking)> {
  constexpr static std::size_t size = 0x164;
  constexpr static std::size_t addrs = 0x5affa30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ContinueTryEnterWithThreadTracking", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.Exit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::Exit)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5affd80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Exit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.Exit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::Exit)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x5afff0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Exit", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ExitSlowPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::ExitSlowPath)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5affe04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ExitSlowPath", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.get_IsHeldByCurrentThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::get_IsHeldByCurrentThread)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5afff9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(),
                                                                               "get_IsHeldByCurrentThread", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.get_IsThreadOwnerTrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x5affa1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "get_IsThreadOwnerTrackingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Threading::SpinLock::setStaticF_MAXIMUM_WAITERS(int32_t value) {
  ::cordl_internals::setStaticField<int32_t, "MAXIMUM_WAITERS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get>(std::forward<int32_t>(value));
}
inline int32_t System::Threading::SpinLock::getStaticF_MAXIMUM_WAITERS() {
  return ::cordl_internals::getStaticField<int32_t, "MAXIMUM_WAITERS", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get>();
}
inline void System::Threading::SpinLock::_ctor(bool enableThreadOwnerTracking) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enableThreadOwnerTracking);
}
inline void System::Threading::SpinLock::Enter(::ByRef<bool> lockTaken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Enter", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lockTaken);
}
inline void System::Threading::SpinLock::TryEnter(int32_t millisecondsTimeout, ::ByRef<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "TryEnter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout, lockTaken);
}
inline void System::Threading::SpinLock::ContinueTryEnter(int32_t millisecondsTimeout, ::ByRef<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ContinueTryEnter", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout, lockTaken);
}
inline void System::Threading::SpinLock::DecrementWaiters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "DecrementWaiters",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::SpinLock::ContinueTryEnterWithThreadTracking(int32_t millisecondsTimeout, uint32_t startTime, ::ByRef<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ContinueTryEnterWithThreadTracking", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout, startTime, lockTaken);
}
inline void System::Threading::SpinLock::Exit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Exit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::SpinLock::Exit(bool useMemoryBarrier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Exit", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useMemoryBarrier);
}
inline void System::Threading::SpinLock::ExitSlowPath(bool useMemoryBarrier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ExitSlowPath", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useMemoryBarrier);
}
inline bool System::Threading::SpinLock::get_IsHeldByCurrentThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "get_IsHeldByCurrentThread",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(),
                                                                             "get_IsThreadOwnerTrackingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_owner", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::SpinLock::SpinLock(int32_t m_owner) noexcept {
  this->m_owner = m_owner;
}
// Ctor Parameters []
constexpr ::System::Threading::SpinLock::SpinLock() {}

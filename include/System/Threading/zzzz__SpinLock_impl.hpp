#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
#include "System/Threading/zzzz__SpinLock_def.hpp"
// Ctor Parameters []
constexpr ::System::Threading::__SpinLock__SystemThreading_SpinLockDebugView::__SpinLock__SystemThreading_SpinLockDebugView() {}
//  Writing Method size for method: ::System::Threading::SpinLock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::_ctor)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x2615e10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.Enter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(ByRef<bool>)>(&::System::Threading::SpinLock::Enter)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x2615e48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Enter", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.TryEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, ByRef<bool>)>(&::System::Threading::SpinLock::TryEnter)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x261639c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "TryEnter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ContinueTryEnter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, ByRef<bool>)>(&::System::Threading::SpinLock::ContinueTryEnter)> {
  constexpr static std::size_t size = 0x488;
  constexpr static std::size_t addrs = 0x2615f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ContinueTryEnter", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.DecrementWaiters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::DecrementWaiters)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x26165c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "DecrementWaiters",
                                                                               std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ContinueTryEnterWithThreadTracking
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(int32_t, uint32_t, ByRef<bool>)>(
    &::System::Threading::SpinLock::ContinueTryEnterWithThreadTracking)> {
  constexpr static std::size_t size = 0x128;
  constexpr static std::size_t addrs = 0x26164a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ContinueTryEnterWithThreadTracking", std::vector<Il2CppClass*>{},
        ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.Exit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::Exit)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x2616758;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Exit", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.ExitSlowPath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::SpinLock::*)(bool)>(&::System::Threading::SpinLock::ExitSlowPath)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x26167a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ExitSlowPath", std::vector<Il2CppClass*>{},
                                                 ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.get_IsHeldByCurrentThread
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::get_IsHeldByCurrentThread)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x2616888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(),
                                                                               "get_IsHeldByCurrentThread", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::SpinLock.get_IsThreadOwnerTrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::SpinLock::*)()>(&::System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x2616484;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(),
                                                                               "get_IsThreadOwnerTrackingEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
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
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), ".ctor", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, enableThreadOwnerTracking);
}
inline void System::Threading::SpinLock::Enter(ByRef<bool> lockTaken) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Enter", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, lockTaken);
}
inline void System::Threading::SpinLock::TryEnter(int32_t millisecondsTimeout, ByRef<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "TryEnter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout, lockTaken);
}
inline void System::Threading::SpinLock::ContinueTryEnter(int32_t millisecondsTimeout, ByRef<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ContinueTryEnter", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout, lockTaken);
}
inline void System::Threading::SpinLock::DecrementWaiters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "DecrementWaiters",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::SpinLock::ContinueTryEnterWithThreadTracking(int32_t millisecondsTimeout, uint32_t startTime, ByRef<bool> lockTaken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ContinueTryEnterWithThreadTracking", std::vector<Il2CppClass*>{},
      ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<ByRef<bool>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout, startTime, lockTaken);
}
inline void System::Threading::SpinLock::Exit(bool useMemoryBarrier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "Exit", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useMemoryBarrier);
}
inline void System::Threading::SpinLock::ExitSlowPath(bool useMemoryBarrier) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "ExitSlowPath", std::vector<Il2CppClass*>{},
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, useMemoryBarrier);
}
inline bool System::Threading::SpinLock::get_IsHeldByCurrentThread() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(), "get_IsHeldByCurrentThread",
                                                                             std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::SpinLock::get_IsThreadOwnerTrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::SpinLock>::get(),
                                                                             "get_IsThreadOwnerTrackingEnabled", std::vector<Il2CppClass*>{}, ::std::vector<Il2CppType const*>{})));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_owner", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::SpinLock::SpinLock(int32_t m_owner) noexcept {
  this->m_owner = m_owner;
}
// Ctor Parameters []
constexpr ::System::Threading::SpinLock::SpinLock() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

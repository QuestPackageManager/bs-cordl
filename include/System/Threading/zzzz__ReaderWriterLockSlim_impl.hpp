#pragma once
// IWYU pragma private; include "System/Threading/ReaderWriterLockSlim.hpp"
#include "System/zzzz__IDisposable_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
#include "System/Threading/zzzz__LockRecursionPolicy_def.hpp"
#include "System/Threading/zzzz__ReaderWriterCount_def.hpp"
#include "System/Threading/zzzz__ReaderWriterLockSlim_def.hpp"
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim_TimeoutTracker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim_TimeoutTracker::*)(int32_t)>(
    &::System::Threading::ReaderWriterLockSlim_TimeoutTracker::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4107768;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim_TimeoutTracker.get_RemainingMilliseconds
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim_TimeoutTracker::*)()>(
    &::System::Threading::ReaderWriterLockSlim_TimeoutTracker::get_RemainingMilliseconds)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x4108ad4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get(),
                                                                               "get_RemainingMilliseconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim_TimeoutTracker.get_IsExpired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim_TimeoutTracker::*)()>(
    &::System::Threading::ReaderWriterLockSlim_TimeoutTracker::get_IsExpired)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4107b80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get(),
                                                                               "get_IsExpired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void System::Threading::ReaderWriterLockSlim_TimeoutTracker::_ctor(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, millisecondsTimeout);
}
inline int32_t System::Threading::ReaderWriterLockSlim_TimeoutTracker::get_RemainingMilliseconds() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get(),
                                                                             "get_RemainingMilliseconds", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim_TimeoutTracker::get_IsExpired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get(),
                                                                             "get_IsExpired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_total", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_start", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::System::Threading::ReaderWriterLockSlim_TimeoutTracker::ReaderWriterLockSlim_TimeoutTracker(int32_t m_total, int32_t m_start) noexcept {
  this->m_total = m_total;
  this->m_start = m_start;
}
// Ctor Parameters []
constexpr ::System::Threading::ReaderWriterLockSlim_TimeoutTracker::ReaderWriterLockSlim_TimeoutTracker() {}
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.InitializeThreadCounts
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::InitializeThreadCounts)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x410750c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "InitializeThreadCounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4107518;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::LockRecursionPolicy)>(
    &::System::Threading::ReaderWriterLockSlim::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4107520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LockRecursionPolicy>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.IsRWEntryEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::System::Threading::ReaderWriterCount*)>(&::System::Threading::ReaderWriterLockSlim::IsRWEntryEmpty)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x41075a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "IsRWEntryEmpty", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterCount*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.IsRwHashEntryChanged
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::ReaderWriterCount*)>(
    &::System::Threading::ReaderWriterLockSlim::IsRwHashEntryChanged)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x41075e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "IsRwHashEntryChanged", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterCount*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.GetThreadRWCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::ReaderWriterCount* (::System::Threading::ReaderWriterLockSlim::*)(bool)>(
    &::System::Threading::ReaderWriterLockSlim::GetThreadRWCount)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x4107608;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "GetThreadRWCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterReadLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterReadLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4107734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "EnterReadLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterReadLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(int32_t)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterReadLock)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x410773c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterReadLock",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterReadLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::ReaderWriterLockSlim_TimeoutTracker)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterReadLock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x41077ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterReadLock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterReadLockCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::ReaderWriterLockSlim_TimeoutTracker)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterReadLockCore)> {
  constexpr static std::size_t size = 0x378;
  constexpr static std::size_t addrs = 0x41077f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterReadLockCore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterWriteLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterWriteLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4107e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "EnterWriteLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterWriteLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(int32_t)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterWriteLock)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4107e58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterWriteLock",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterWriteLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::ReaderWriterLockSlim_TimeoutTracker)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterWriteLock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x4107e84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterWriteLock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterWriteLockCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::ReaderWriterLockSlim_TimeoutTracker)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterWriteLockCore)> {
  constexpr static std::size_t size = 0x3e0;
  constexpr static std::size_t addrs = 0x4107e88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterWriteLockCore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterUpgradeableReadLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::EnterUpgradeableReadLock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4108294;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "EnterUpgradeableReadLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterUpgradeableReadLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(int32_t)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLock)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x410829c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterUpgradeableReadLock",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterUpgradeableReadLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::ReaderWriterLockSlim_TimeoutTracker)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLock)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x41082c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterUpgradeableReadLock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.TryEnterUpgradeableReadLockCore
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(::System::Threading::ReaderWriterLockSlim_TimeoutTracker)>(
    &::System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLockCore)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x41082cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterUpgradeableReadLockCore", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitReadLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitReadLock)> {
  constexpr static std::size_t size = 0x16c;
  constexpr static std::size_t addrs = 0x410862c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "ExitReadLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitWriteLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitWriteLock)> {
  constexpr static std::size_t size = 0x148;
  constexpr static std::size_t addrs = 0x41087c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "ExitWriteLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitUpgradeableReadLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::ExitUpgradeableReadLock)> {
  constexpr static std::size_t size = 0x198;
  constexpr static std::size_t addrs = 0x410891c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "ExitUpgradeableReadLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.LazyCreateEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)(::ByRef<::System::Threading::EventWaitHandle*>, bool)>(
    &::System::Threading::ReaderWriterLockSlim::LazyCreateEvent)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x4107c30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "LazyCreateEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::EventWaitHandle*>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.WaitOnEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)(
    ::System::Threading::EventWaitHandle*, ::ByRef<uint32_t>, ::System::Threading::ReaderWriterLockSlim_TimeoutTracker, bool)>(&::System::Threading::ReaderWriterLockSlim::WaitOnEvent)> {
  constexpr static std::size_t size = 0x124;
  constexpr static std::size_t addrs = 0x4107d2c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "WaitOnEvent", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::EventWaitHandle*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitAndWakeUpAppropriateWaiters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x4108798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "ExitAndWakeUpAppropriateWaiters",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitAndWakeUpAppropriateWaitersPreferringWriters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaitersPreferringWriters)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x4108b1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                 "ExitAndWakeUpAppropriateWaitersPreferringWriters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitAndWakeUpAppropriateReadWaiters
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateReadWaiters)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x4108ba0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "ExitAndWakeUpAppropriateReadWaiters",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.IsWriterAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::IsWriterAcquired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4108268;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "IsWriterAcquired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.SetWriterAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::SetWriterAcquired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4108278;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "SetWriterAcquired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ClearWriterAcquired
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::ClearWriterAcquired)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x410890c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "ClearWriterAcquired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.SetWritersWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::SetWritersWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4108ab4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "SetWritersWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ClearWritersWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::ClearWritersWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4108c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "ClearWritersWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.SetUpgraderWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::SetUpgraderWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4108ac4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "SetUpgraderWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ClearUpgraderWaiting
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::ClearUpgraderWaiting)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x4108c44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "ClearUpgraderWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.GetNumReaders
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint32_t (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::GetNumReaders)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x4108288;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "GetNumReaders", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterMyLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterMyLock)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x4108c54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "EnterMyLock",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.EnterMyLockSpin
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::EnterMyLockSpin)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x4108c88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "EnterMyLockSpin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.ExitMyLock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::ExitMyLock)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4107b68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "ExitMyLock",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.SpinWait
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(int32_t)>(&::System::Threading::ReaderWriterLockSlim::SpinWait)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x4107b98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "SpinWait", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)()>(&::System::Threading::ReaderWriterLockSlim::Dispose)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x4108d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::System::Threading::ReaderWriterLockSlim::*)(bool)>(&::System::Threading::ReaderWriterLockSlim::Dispose)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x4108d68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "Dispose",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_IsReadLockHeld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_IsReadLockHeld)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4108ea8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_IsReadLockHeld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_IsUpgradeableReadLockHeld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4108ec0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_IsUpgradeableReadLockHeld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_IsWriteLockHeld
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_IsWriteLockHeld)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x4108ed8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_IsWriteLockHeld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_RecursiveReadCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_RecursiveReadCount)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x4108ef0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_RecursiveReadCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_RecursiveUpgradeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_RecursiveUpgradeCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4108f70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_RecursiveUpgradeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_RecursiveWriteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_RecursiveWriteCount)> {
  constexpr static std::size_t size = 0xb0;
  constexpr static std::size_t addrs = 0x4109020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_RecursiveWriteCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_WaitingReadCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_WaitingReadCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41090d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_WaitingReadCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_WaitingUpgradeCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_WaitingUpgradeCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x41090d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_WaitingUpgradeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::System::Threading::ReaderWriterLockSlim.get_WaitingWriteCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::System::Threading::ReaderWriterLockSlim::*)()>(
    &::System::Threading::ReaderWriterLockSlim::get_WaitingWriteCount)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x41090e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                               "get_WaitingWriteCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr bool& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_fIsReentrant() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fIsReentrant;
}
constexpr bool const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_fIsReentrant() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fIsReentrant;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_fIsReentrant(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fIsReentrant = value;
}
constexpr int32_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_myLock() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___myLock;
}
constexpr int32_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_myLock() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___myLock;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_myLock(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___myLock = value;
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_numWriteWaiters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numWriteWaiters;
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_numWriteWaiters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numWriteWaiters;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_numWriteWaiters(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numWriteWaiters = value;
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_numReadWaiters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numReadWaiters;
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_numReadWaiters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numReadWaiters;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_numReadWaiters(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numReadWaiters = value;
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_numWriteUpgradeWaiters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numWriteUpgradeWaiters;
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_numWriteUpgradeWaiters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numWriteUpgradeWaiters;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_numWriteUpgradeWaiters(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numWriteUpgradeWaiters = value;
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_numUpgradeWaiters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numUpgradeWaiters;
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_numUpgradeWaiters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___numUpgradeWaiters;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_numUpgradeWaiters(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___numUpgradeWaiters = value;
}
constexpr bool& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_fNoWaiters() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fNoWaiters;
}
constexpr bool const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_fNoWaiters() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fNoWaiters;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_fNoWaiters(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fNoWaiters = value;
}
constexpr int32_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_upgradeLockOwnerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upgradeLockOwnerId;
}
constexpr int32_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_upgradeLockOwnerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upgradeLockOwnerId;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_upgradeLockOwnerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___upgradeLockOwnerId = value;
}
constexpr int32_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_writeLockOwnerId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeLockOwnerId;
}
constexpr int32_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_writeLockOwnerId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeLockOwnerId;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_writeLockOwnerId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___writeLockOwnerId = value;
}
constexpr ::System::Threading::EventWaitHandle*& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_writeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeEvent;
}
constexpr ::System::Threading::EventWaitHandle* const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_writeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___writeEvent;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_writeEvent(::System::Threading::EventWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___writeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::EventWaitHandle*& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_readEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readEvent;
}
constexpr ::System::Threading::EventWaitHandle* const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_readEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___readEvent;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_readEvent(::System::Threading::EventWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___readEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::EventWaitHandle*& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_upgradeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upgradeEvent;
}
constexpr ::System::Threading::EventWaitHandle* const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_upgradeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___upgradeEvent;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_upgradeEvent(::System::Threading::EventWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___upgradeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::EventWaitHandle*& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_waitUpgradeEvent() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitUpgradeEvent;
}
constexpr ::System::Threading::EventWaitHandle* const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_waitUpgradeEvent() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___waitUpgradeEvent;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_waitUpgradeEvent(::System::Threading::EventWaitHandle* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___waitUpgradeEvent)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int64_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_lockID() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockID;
}
constexpr int64_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_lockID() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___lockID;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_lockID(int64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___lockID = value;
}
constexpr bool& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_fUpgradeThreadHoldingRead() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fUpgradeThreadHoldingRead;
}
constexpr bool const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_fUpgradeThreadHoldingRead() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fUpgradeThreadHoldingRead;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_fUpgradeThreadHoldingRead(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fUpgradeThreadHoldingRead = value;
}
constexpr uint32_t& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_owners() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owners;
}
constexpr uint32_t const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_owners() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___owners;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_owners(uint32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___owners = value;
}
constexpr bool& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_fDisposed() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fDisposed;
}
constexpr bool const& System::Threading::ReaderWriterLockSlim::__cordl_internal_get_fDisposed() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fDisposed;
}
constexpr void System::Threading::ReaderWriterLockSlim::__cordl_internal_set_fDisposed(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fDisposed = value;
}
inline void System::Threading::ReaderWriterLockSlim::setStaticF_s_nextLockID(int64_t value) {
  ::cordl_internals::setStaticField<int64_t, "s_nextLockID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get>(std::forward<int64_t>(value));
}
inline int64_t System::Threading::ReaderWriterLockSlim::getStaticF_s_nextLockID() {
  return ::cordl_internals::getStaticField<int64_t, "s_nextLockID", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get>();
}
inline void System::Threading::ReaderWriterLockSlim::setStaticF_t_rwc(::System::Threading::ReaderWriterCount* value) {
  ::cordl_internals::setStaticField<::System::Threading::ReaderWriterCount*, "t_rwc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get>(
      std::forward<::System::Threading::ReaderWriterCount*>(value));
}
inline ::System::Threading::ReaderWriterCount* System::Threading::ReaderWriterLockSlim::getStaticF_t_rwc() {
  return ::cordl_internals::getStaticField<::System::Threading::ReaderWriterCount*, "t_rwc", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get>();
}
inline void System::Threading::ReaderWriterLockSlim::InitializeThreadCounts() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "InitializeThreadCounts", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::_ctor(::System::Threading::LockRecursionPolicy recursionPolicy) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::LockRecursionPolicy>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, recursionPolicy);
}
inline bool System::Threading::ReaderWriterLockSlim::IsRWEntryEmpty(::System::Threading::ReaderWriterCount* rwc) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "IsRWEntryEmpty", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterCount*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, rwc);
}
inline bool System::Threading::ReaderWriterLockSlim::IsRwHashEntryChanged(::System::Threading::ReaderWriterCount* lrwc) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "IsRwHashEntryChanged", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterCount*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, lrwc);
}
inline ::System::Threading::ReaderWriterCount* System::Threading::ReaderWriterLockSlim::GetThreadRWCount(bool dontAllocate) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "GetThreadRWCount",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::ReaderWriterCount*, false>(this, ___internal_method, dontAllocate);
}
inline void System::Threading::ReaderWriterLockSlim::EnterReadLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "EnterReadLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterReadLock(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterReadLock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterReadLock(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterReadLock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterReadLockCore(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterReadLockCore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timeout);
}
inline void System::Threading::ReaderWriterLockSlim::EnterWriteLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "EnterWriteLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterWriteLock(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterWriteLock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterWriteLock(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterWriteLock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterWriteLockCore(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterWriteLockCore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timeout);
}
inline void System::Threading::ReaderWriterLockSlim::EnterUpgradeableReadLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "EnterUpgradeableReadLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLock(int32_t millisecondsTimeout) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterUpgradeableReadLock",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, millisecondsTimeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLock(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterUpgradeableReadLock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timeout);
}
inline bool System::Threading::ReaderWriterLockSlim::TryEnterUpgradeableReadLockCore(::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "TryEnterUpgradeableReadLockCore", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, timeout);
}
inline void System::Threading::ReaderWriterLockSlim::ExitReadLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "ExitReadLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitWriteLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "ExitWriteLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitUpgradeableReadLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "ExitUpgradeableReadLock", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::LazyCreateEvent(::ByRef<::System::Threading::EventWaitHandle*> waitEvent, bool makeAutoResetEvent) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "LazyCreateEvent", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::System::Threading::EventWaitHandle*>>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, waitEvent, makeAutoResetEvent);
}
inline bool System::Threading::ReaderWriterLockSlim::WaitOnEvent(::System::Threading::EventWaitHandle* waitEvent, ::ByRef<uint32_t> numWaiters,
                                                                 ::System::Threading::ReaderWriterLockSlim_TimeoutTracker timeout, bool isWriteWaiter) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "WaitOnEvent", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::EventWaitHandle*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint32_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::ReaderWriterLockSlim_TimeoutTracker>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, waitEvent, numWaiters, timeout, isWriteWaiter);
}
inline void System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaiters() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "ExitAndWakeUpAppropriateWaiters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateWaitersPreferringWriters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                               "ExitAndWakeUpAppropriateWaitersPreferringWriters", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitAndWakeUpAppropriateReadWaiters() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "ExitAndWakeUpAppropriateReadWaiters",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::IsWriterAcquired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "IsWriterAcquired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::SetWriterAcquired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "SetWriterAcquired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ClearWriterAcquired() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "ClearWriterAcquired", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::SetWritersWaiting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "SetWritersWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ClearWritersWaiting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "ClearWritersWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::SetUpgraderWaiting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "SetUpgraderWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ClearUpgraderWaiting() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "ClearUpgraderWaiting", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline uint32_t System::Threading::ReaderWriterLockSlim::GetNumReaders() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "GetNumReaders",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint32_t, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::EnterMyLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "EnterMyLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::EnterMyLockSpin() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "EnterMyLockSpin", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::ExitMyLock() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "ExitMyLock",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::SpinWait(int32_t SpinCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "SpinWait",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, SpinCount);
}
inline void System::Threading::ReaderWriterLockSlim::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void System::Threading::ReaderWriterLockSlim::Dispose(bool disposing) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(), "Dispose",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, disposing);
}
inline bool System::Threading::ReaderWriterLockSlim::get_IsReadLockHeld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_IsReadLockHeld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::get_IsUpgradeableReadLockHeld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_IsUpgradeableReadLockHeld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool System::Threading::ReaderWriterLockSlim::get_IsWriteLockHeld() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_IsWriteLockHeld", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_RecursiveReadCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_RecursiveReadCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_RecursiveUpgradeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_RecursiveUpgradeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_RecursiveWriteCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_RecursiveWriteCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_WaitingReadCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_WaitingReadCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_WaitingUpgradeCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_WaitingUpgradeCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t System::Threading::ReaderWriterLockSlim::get_WaitingWriteCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::System::Threading::ReaderWriterLockSlim*>::get(),
                                                                             "get_WaitingWriteCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::System::Threading::ReaderWriterLockSlim* System::Threading::ReaderWriterLockSlim::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ReaderWriterLockSlim*>());
}
inline ::System::Threading::ReaderWriterLockSlim* System::Threading::ReaderWriterLockSlim::New_ctor(::System::Threading::LockRecursionPolicy recursionPolicy) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::System::Threading::ReaderWriterLockSlim*>(recursionPolicy));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr System::Threading::ReaderWriterLockSlim::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* System::Threading::ReaderWriterLockSlim::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::System::Threading::ReaderWriterLockSlim::ReaderWriterLockSlim() {}

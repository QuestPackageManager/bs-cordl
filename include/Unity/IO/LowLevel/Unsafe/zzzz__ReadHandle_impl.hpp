#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/ReadHandle.hpp"
#include "System/zzzz__IntPtr_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadHandle_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadStatus_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.IsValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::IsValid)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x682a72c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "IsValid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::Dispose)> {
  constexpr static std::size_t size = 0xfc;
  constexpr static std::size_t addrs = 0x682a7b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.Cancel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::Cancel)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x682a9c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "Cancel",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.CancelInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::CancelInternal)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x682aa8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "CancelInternal", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.get_JobHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::get_JobHandle)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x682ab08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(),
                                                                               "get_JobHandle", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.get_Status
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadStatus (::Unity::IO::LowLevel::Unsafe::ReadHandle::*)()>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::get_Status)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x682a8b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "get_Status",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.GetReadStatus
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadStatus (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::GetReadStatus)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x682abf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "GetReadStatus", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.ReleaseReadHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::ReleaseReadHandle)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x682a980;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "ReleaseReadHandle", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.IsReadHandleValid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(&::Unity::IO::LowLevel::Unsafe::ReadHandle::IsReadHandleValid)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x682a774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "IsReadHandleValid", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.GetJobHandle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::IO::LowLevel::Unsafe::ReadHandle)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::GetJobHandle)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x682abac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "GetJobHandle", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.CancelInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::CancelInternal_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x682aacc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "CancelInternal_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.GetReadStatus_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadStatus (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::GetReadStatus_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x682ac38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "GetReadStatus_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.ReleaseReadHandle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::ReleaseReadHandle_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x682ac74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "ReleaseReadHandle_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.IsReadHandleValid_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::IsReadHandleValid_Injected)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x682acb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "IsReadHandleValid_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::ReadHandle.GetJobHandle_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>, ::ByRef<::Unity::Jobs::JobHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::ReadHandle::GetJobHandle_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x682acec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "GetJobHandle_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
inline bool Unity::IO::LowLevel::Unsafe::ReadHandle::IsValid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "IsValid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::Cancel() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "Cancel",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::CancelInternal(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "CancelInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::ReadHandle::get_JobHandle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "get_JobHandle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadHandle::get_Status() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "get_Status",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadStatus, false>(this, ___internal_method);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadHandle::GetReadStatus(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "GetReadStatus", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadStatus, false>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::ReleaseReadHandle(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "ReleaseReadHandle", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
inline bool Unity::IO::LowLevel::Unsafe::ReadHandle::IsReadHandleValid(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "IsReadHandleValid", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::ReadHandle::GetJobHandle(::Unity::IO::LowLevel::Unsafe::ReadHandle handle) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "GetJobHandle", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::CancelInternal_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "CancelInternal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadStatus Unity::IO::LowLevel::Unsafe::ReadHandle::GetReadStatus_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "GetReadStatus_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadStatus, false>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::ReleaseReadHandle_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "ReleaseReadHandle_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle);
}
inline bool Unity::IO::LowLevel::Unsafe::ReadHandle::IsReadHandleValid_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "IsReadHandleValid_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, handle);
}
inline void Unity::IO::LowLevel::Unsafe::ReadHandle::GetJobHandle_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> handle, ::ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::ReadHandle>::get(), "GetJobHandle_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, handle, ret);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::IO::LowLevel::Unsafe::ReadHandle::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::IO::LowLevel::Unsafe::ReadHandle::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "ptr", ty: "::System::IntPtr", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::IO::LowLevel::Unsafe::ReadHandle::ReadHandle(::System::IntPtr ptr, int32_t version) noexcept {
  this->ptr = ptr;
  this->version = version;
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::ReadHandle::ReadHandle() {}

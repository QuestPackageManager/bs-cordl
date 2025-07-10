#pragma once
// IWYU pragma private; include "Unity/Jobs/JobHandle.hpp"
#include "System/zzzz__IEquatable_1_impl.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::JobHandle.Complete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Jobs::JobHandle::*)()>(&::Unity::Jobs::JobHandle::Complete)> {
  constexpr static std::size_t size = 0x50;
  constexpr static std::size_t addrs = 0x485fb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "Complete",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.get_IsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Jobs::JobHandle::*)()>(&::Unity::Jobs::JobHandle::get_IsCompleted)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x485fbc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "get_IsCompleted",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobs
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobs)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x485fc3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobs",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobsAndComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobsAndComplete)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x485fb88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndComplete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobsAndIsCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::ByRef<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobsAndIsCompleted)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x485fc00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndIsCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Jobs::JobHandle, ::Unity::Jobs::JobHandle)>(
    &::Unity::Jobs::JobHandle::CombineDependencies)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x485fc64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependencies", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependencies)> {
  constexpr static std::size_t size = 0x60;
  constexpr static std::size_t addrs = 0x485fce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependencies", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependencies
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependencies)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x485fda4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependencies", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternal2
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::ByRef<::Unity::Jobs::JobHandle>, ::ByRef<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependenciesInternal2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x485fc8c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternal2", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternalPtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::cordl_internals::Ptr<void>, int32_t)>(
    &::Unity::Jobs::JobHandle::CombineDependenciesInternalPtr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x485fd48;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternalPtr", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Jobs::JobHandle::*)(::Unity::Jobs::JobHandle)>(&::Unity::Jobs::JobHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x485fee4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternal2_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::Unity::Jobs::JobHandle>, ::ByRef<::Unity::Jobs::JobHandle>, ::ByRef<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependenciesInternal2_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x485fe3c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternal2_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternalPtr_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::cordl_internals::Ptr<void>, int32_t, ::ByRef<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependenciesInternalPtr_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x485fe90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternalPtr_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::JobHandle::Complete() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "Complete",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Unity::Jobs::JobHandle::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "get_IsCompleted",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void Unity::Jobs::JobHandle::ScheduleBatchedJobs() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobs",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void Unity::Jobs::JobHandle::ScheduleBatchedJobsAndComplete(::ByRef<::Unity::Jobs::JobHandle> job) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, job);
}
inline bool Unity::Jobs::JobHandle::ScheduleBatchedJobsAndIsCompleted(::ByRef<::Unity::Jobs::JobHandle> job) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "ScheduleBatchedJobsAndIsCompleted", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, job);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependencies(::Unity::Jobs::JobHandle job0, ::Unity::Jobs::JobHandle job1) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependencies", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, job0, job1);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependencies(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> jobs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependencies", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobs);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependencies(::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle> jobs) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependencies", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobs);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependenciesInternal2(::ByRef<::Unity::Jobs::JobHandle> job0, ::ByRef<::Unity::Jobs::JobHandle> job1) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternal2", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, job0, job1);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependenciesInternalPtr(::cordl_internals::Ptr<void> jobs, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternalPtr", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, jobs, count);
}
inline bool Unity::Jobs::JobHandle::Equals(::Unity::Jobs::JobHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline void Unity::Jobs::JobHandle::CombineDependenciesInternal2_Injected(::ByRef<::Unity::Jobs::JobHandle> job0, ::ByRef<::Unity::Jobs::JobHandle> job1, ::ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternal2_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, job0, job1, ret);
}
inline void Unity::Jobs::JobHandle::CombineDependenciesInternalPtr_Injected(::cordl_internals::Ptr<void> jobs, int32_t count, ::ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Jobs::JobHandle>::get(), "CombineDependenciesInternalPtr_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::cordl_internals::Ptr<void>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, jobs, count, ret);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Jobs::JobHandle>"
constexpr Unity::Jobs::JobHandle::operator ::System::IEquatable_1<::Unity::Jobs::JobHandle>*() {
  return static_cast<::System::IEquatable_1<::Unity::Jobs::JobHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Jobs::JobHandle>"
constexpr ::System::IEquatable_1<::Unity::Jobs::JobHandle>* Unity::Jobs::JobHandle::i___System__IEquatable_1___Unity__Jobs__JobHandle_() {
  return static_cast<::System::IEquatable_1<::Unity::Jobs::JobHandle>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "jobGroup", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::JobHandle::JobHandle(uint64_t jobGroup, int32_t version) noexcept {
  this->jobGroup = jobGroup;
  this->version = version;
}
// Ctor Parameters []
constexpr ::Unity::Jobs::JobHandle::JobHandle() {}

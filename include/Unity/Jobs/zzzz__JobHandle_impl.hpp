#pragma once
// IWYU pragma private; include "Unity/Jobs/JobHandle.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeSlice_1_def.hpp"
//  Writing Method size for method: ::Unity::Jobs::JobHandle.Complete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Jobs::JobHandle::*)()>(&::Unity::Jobs::JobHandle::Complete)> {
  constexpr static std::size_t size = 0x48;
  constexpr static std::size_t addrs = 0x6a56128;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "Complete", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.get_IsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Jobs::JobHandle::*)()>(&::Unity::Jobs::JobHandle::get_IsCompleted)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a561ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "get_IsCompleted", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobs
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobs)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a56224;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "ScheduleBatchedJobs", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobsAndComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobsAndComplete)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a56170;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "ScheduleBatchedJobsAndComplete", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.ScheduleBatchedJobsAndIsCompleted
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::by_ref<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::ScheduleBatchedJobsAndIsCompleted)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x6a561e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "ScheduleBatchedJobsAndIsCompleted", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Jobs::JobHandle, ::Unity::Jobs::JobHandle)>(&::Unity::Jobs::JobHandle::CombineDependencies)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6a5624c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "CombineDependencies", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::CombineDependencies)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a562d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "CombineDependencies", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependencies
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::CombineDependencies)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x6a56380;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "CombineDependencies", {}, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternal2
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Jobs::JobHandle>, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependenciesInternal2)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a56274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(),
                                         { "CombineDependenciesInternal2", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternalPtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(void*, int32_t)>(&::Unity::Jobs::JobHandle::CombineDependenciesInternalPtr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a56324;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "CombineDependenciesInternalPtr", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Jobs::JobHandle::*)(::Unity::Jobs::JobHandle)>(&::Unity::Jobs::JobHandle::Equals)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6a56490;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "Equals", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternal2_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Jobs::JobHandle>, ::by_ref<::Unity::Jobs::JobHandle>, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::Unity::Jobs::JobHandle::CombineDependenciesInternal2_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a563e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(),
                            { "CombineDependenciesInternal2_Injected",
                              {},
                              { ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Jobs::JobHandle.CombineDependenciesInternalPtr_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, int32_t, ::by_ref<::Unity::Jobs::JobHandle>)>(&::Unity::Jobs::JobHandle::CombineDependenciesInternalPtr_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5643c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(),
                            { "CombineDependenciesInternalPtr_Injected", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline void Unity::Jobs::JobHandle::Complete() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "Complete", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline bool Unity::Jobs::JobHandle::get_IsCompleted() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "get_IsCompleted", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void Unity::Jobs::JobHandle::ScheduleBatchedJobs() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "ScheduleBatchedJobs", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void Unity::Jobs::JobHandle::ScheduleBatchedJobsAndComplete(::by_ref<::Unity::Jobs::JobHandle> job) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "ScheduleBatchedJobsAndComplete", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, job);
}
inline bool Unity::Jobs::JobHandle::ScheduleBatchedJobsAndIsCompleted(::by_ref<::Unity::Jobs::JobHandle> job) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "ScheduleBatchedJobsAndIsCompleted", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, job);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependencies(::Unity::Jobs::JobHandle job0, ::Unity::Jobs::JobHandle job1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "CombineDependencies", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, job0, job1);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependencies(::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle> jobs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "CombineDependencies", {}, { ::i2c::type_of<::Unity::Collections::NativeArray_1<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobs);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependencies(::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle> jobs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "CombineDependencies", {}, { ::i2c::type_of<::Unity::Collections::NativeSlice_1<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobs);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependenciesInternal2(::by_ref<::Unity::Jobs::JobHandle> job0, ::by_ref<::Unity::Jobs::JobHandle> job1) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(),
                                              { "CombineDependenciesInternal2", {}, { ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, job0, job1);
}
inline ::Unity::Jobs::JobHandle Unity::Jobs::JobHandle::CombineDependenciesInternalPtr(void* jobs, int32_t count) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "CombineDependenciesInternalPtr", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, jobs, count);
}
inline bool Unity::Jobs::JobHandle::Equals(::Unity::Jobs::JobHandle other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(), { "Equals", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline void Unity::Jobs::JobHandle::CombineDependenciesInternal2_Injected(::by_ref<::Unity::Jobs::JobHandle> job0, ::by_ref<::Unity::Jobs::JobHandle> job1, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(),
                          { "CombineDependenciesInternal2_Injected",
                            {},
                            { ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, job0, job1, ret);
}
inline void Unity::Jobs::JobHandle::CombineDependenciesInternalPtr_Injected(void* jobs, int32_t count, ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Jobs::JobHandle>(),
                          { "CombineDependenciesInternalPtr_Injected", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, jobs, count, ret);
}
/// @brief Convert operator to "::System::IEquatable_1<::Unity::Jobs::JobHandle>"
constexpr Unity::Jobs::JobHandle::operator ::System::IEquatable_1<::Unity::Jobs::JobHandle>*() {
  return static_cast<::System::IEquatable_1<::Unity::Jobs::JobHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::Unity::Jobs::JobHandle>"
constexpr ::System::IEquatable_1<::Unity::Jobs::JobHandle>* Unity::Jobs::JobHandle::i___System__IEquatable_1___Unity__Jobs__JobHandle_() {
  return static_cast<::System::IEquatable_1<::Unity::Jobs::JobHandle>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "jobGroup", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "version", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Jobs::JobHandle::JobHandle(uint64_t jobGroup, int32_t version) noexcept {
  this->jobGroup = jobGroup;
  this->version = version;
}
// Ctor Parameters []
constexpr ::Unity::Jobs::JobHandle::JobHandle() {}

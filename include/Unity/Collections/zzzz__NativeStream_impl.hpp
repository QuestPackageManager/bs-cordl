#pragma once
// IWYU pragma private; include "Unity/Collections/NativeStream.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/zzzz__NativeStream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeList_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Collections/zzzz__NativeStream_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::Collections::NativeStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::NativeStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64bdac4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.ScheduleConstruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Collections::NativeStream>, ::Unity::Collections::NativeArray_1<int32_t>,
                                                                                    ::Unity::Jobs::JobHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::NativeStream::ScheduleConstruct)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64bdbec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(),
                                                             { "ScheduleConstruct",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                                 ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::IsEmpty)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64bdc90;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64bdcf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.get_ForEachCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64bdd00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "get_ForEachCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.AsReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeStream_Reader (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::AsReader)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64bdd30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "AsReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.AsWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::NativeStream_Writer (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::AsWriter)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x64bdd78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "AsWriter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64bddf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64bde48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::Collections::NativeStream::*)(::Unity::Jobs::JobHandle)>(&::Unity::Collections::NativeStream::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64bde68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.AllocateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::NativeStream>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::NativeStream::AllocateBlock)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64bdaf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(),
                            { "AllocateBlock", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.AllocateForEach
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream::*)(int32_t)>(&::Unity::Collections::NativeStream::AllocateForEach)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be04c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "AllocateForEach", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.CheckForEachCountGreaterThanZero
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int32_t)>(&::Unity::Collections::NativeStream::CheckForEachCountGreaterThanZero)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x64be050;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "CheckForEachCountGreaterThanZero", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream.CheckRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream::*)()>(&::Unity::Collections::NativeStream::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be0c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "CheckRead", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeStream::_ctor(int32_t bufferCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferCount, allocator);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Collections::NativeStream::ScheduleConstruct(::by_ref<::Unity::Collections::NativeStream> stream, ::Unity::Collections::NativeList_1<T> bufferCount,
                                                                                    ::Unity::Jobs::JobHandle dependency, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(),
                                                           { "ScheduleConstruct",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(),
                                                               ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, stream, bufferCount, dependency, allocator);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::NativeStream::ScheduleConstruct(::by_ref<::Unity::Collections::NativeStream> stream, ::Unity::Collections::NativeArray_1<int32_t> bufferCount,
                                                                                    ::Unity::Jobs::JobHandle dependency, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(),
                                                           { "ScheduleConstruct",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                               ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, stream, bufferCount, dependency, allocator);
}
inline bool Unity::Collections::NativeStream::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::NativeStream::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeStream::get_ForEachCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "get_ForEachCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeStream_Reader Unity::Collections::NativeStream::AsReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "AsReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeStream_Reader>(*this, ___internal_method);
}
inline ::Unity::Collections::NativeStream_Writer Unity::Collections::NativeStream::AsWriter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "AsWriter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeStream_Writer>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeStream::Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T> inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::NativeStream::ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(),
                                                           { "ToNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
inline void Unity::Collections::NativeStream::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::NativeStream::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
inline void Unity::Collections::NativeStream::AllocateBlock(::by_ref<::Unity::Collections::NativeStream> stream, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(),
                          { "AllocateBlock", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, allocator);
}
inline void Unity::Collections::NativeStream::AllocateForEach(int32_t forEachCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "AllocateForEach", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, forEachCount);
}
inline void Unity::Collections::NativeStream::CheckForEachCountGreaterThanZero(int32_t forEachCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "CheckForEachCountGreaterThanZero", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, forEachCount);
}
inline void Unity::Collections::NativeStream::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr Unity::Collections::NativeStream::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::NativeStream::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::NativeStream::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::NativeStream::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_Stream", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeStream::NativeStream(::Unity::Collections::LowLevel::Unsafe::UnsafeStream m_Stream) noexcept {
  this->m_Stream = m_Stream;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeStream::NativeStream() {}
//  Writing Method size for method: ::Unity::Collections::NativeStream_ConstructJobList.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_ConstructJobList::*)()>(&::Unity::Collections::NativeStream_ConstructJobList::Execute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64be0c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_ConstructJobList>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeStream_ConstructJobList::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_ConstructJobList>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::NativeStream_ConstructJobList::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::NativeStream_ConstructJobList::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::NativeStream", modifiers: "", def_value: Some("{}") }, CppParam { name: "List", ty:
// "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeStream_ConstructJobList::NativeStream_ConstructJobList(::Unity::Collections::NativeStream Container,
                                                                                             ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* List) noexcept {
  this->Container = Container;
  this->List = List;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeStream_ConstructJobList::NativeStream_ConstructJobList() {}
//  Writing Method size for method: ::Unity::Collections::NativeStream_ConstructJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_ConstructJob::*)()>(&::Unity::Collections::NativeStream_ConstructJob::Execute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64be0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_ConstructJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeStream_ConstructJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_ConstructJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::NativeStream_ConstructJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::NativeStream_ConstructJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::NativeStream", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeStream_ConstructJob::NativeStream_ConstructJob(::Unity::Collections::NativeStream Container, ::Unity::Collections::NativeArray_1<int32_t> Length) noexcept {
  this->Container = Container;
  this->Length = Length;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeStream_ConstructJob::NativeStream_ConstructJob() {}
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Writer::*)(::by_ref<::Unity::Collections::NativeStream>)>(
    &::Unity::Collections::NativeStream_Writer::_ctor)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x64bddb0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer.get_ForEachCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeStream_Writer::*)()>(&::Unity::Collections::NativeStream_Writer::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64be114;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "get_ForEachCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer.PatchMinMaxRange
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Writer::*)(int32_t)>(&::Unity::Collections::NativeStream_Writer::PatchMinMaxRange)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be144;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "PatchMinMaxRange", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer.BeginForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Writer::*)(int32_t)>(&::Unity::Collections::NativeStream_Writer::BeginForEachIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64be148;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "BeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer.EndForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Writer::*)()>(&::Unity::Collections::NativeStream_Writer::EndForEachIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be180;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "EndForEachIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::NativeStream_Writer::*)(int32_t)>(&::Unity::Collections::NativeStream_Writer::Allocate)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be1d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "Allocate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer.CheckBeginForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Writer::*)(int32_t)>(&::Unity::Collections::NativeStream_Writer::CheckBeginForEachIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be268;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "CheckBeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer.CheckEndForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Writer::*)()>(&::Unity::Collections::NativeStream_Writer::CheckEndForEachIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be26c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "CheckEndForEachIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Writer.CheckAllocateSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Writer::*)(int32_t)>(&::Unity::Collections::NativeStream_Writer::CheckAllocateSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be270;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "CheckAllocateSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeStream_Writer::_ctor(::by_ref<::Unity::Collections::NativeStream> stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline int32_t Unity::Collections::NativeStream_Writer::get_ForEachCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "get_ForEachCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::NativeStream_Writer::PatchMinMaxRange(int32_t foreEachIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "PatchMinMaxRange", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, foreEachIndex);
}
inline void Unity::Collections::NativeStream_Writer::BeginForEachIndex(int32_t foreachIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "BeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, foreachIndex);
}
inline void Unity::Collections::NativeStream_Writer::EndForEachIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "EndForEachIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::NativeStream_Writer::Write(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::by_ref<T> Unity::Collections::NativeStream_Writer::Allocate() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "Allocate", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::NativeStream_Writer::Allocate(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "Allocate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method, size);
}
inline void Unity::Collections::NativeStream_Writer::CheckBeginForEachIndex(int32_t foreachIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "CheckBeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, foreachIndex);
}
inline void Unity::Collections::NativeStream_Writer::CheckEndForEachIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "CheckEndForEachIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeStream_Writer::CheckAllocateSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Writer>(), { "CheckAllocateSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size);
}
// Ctor Parameters [CppParam { name: "m_Writer", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeStream_Writer::NativeStream_Writer(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer m_Writer) noexcept {
  this->m_Writer = m_Writer;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeStream_Writer::NativeStream_Writer() {}
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Reader::*)(::by_ref<::Unity::Collections::NativeStream>)>(
    &::Unity::Collections::NativeStream_Reader::_ctor)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x64bdd54;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.BeginForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeStream_Reader::*)(int32_t)>(&::Unity::Collections::NativeStream_Reader::BeginForEachIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "BeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.EndForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Reader::*)()>(&::Unity::Collections::NativeStream_Reader::EndForEachIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be2e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "EndForEachIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.get_ForEachCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeStream_Reader::*)()>(&::Unity::Collections::NativeStream_Reader::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64be2e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "get_ForEachCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.get_RemainingItemCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeStream_Reader::*)()>(&::Unity::Collections::NativeStream_Reader::get_RemainingItemCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64be318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "get_RemainingItemCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.ReadUnsafePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::NativeStream_Reader::*)(int32_t)>(&::Unity::Collections::NativeStream_Reader::ReadUnsafePtr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64be320;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "ReadUnsafePtr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::NativeStream_Reader::*)()>(&::Unity::Collections::NativeStream_Reader::Count)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be37c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.CheckNotReadingOutOfBounds
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Reader::*)(int32_t)>(&::Unity::Collections::NativeStream_Reader::CheckNotReadingOutOfBounds)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckNotReadingOutOfBounds", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.CheckRead
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Reader::*)()>(&::Unity::Collections::NativeStream_Reader::CheckRead)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckRead", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.CheckReadSize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Reader::*)(int32_t)>(&::Unity::Collections::NativeStream_Reader::CheckReadSize)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be3dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckReadSize", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.CheckBeginForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Reader::*)(int32_t)>(&::Unity::Collections::NativeStream_Reader::CheckBeginForEachIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64be3e0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckBeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::NativeStream_Reader.CheckEndForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::NativeStream_Reader::*)()>(&::Unity::Collections::NativeStream_Reader::CheckEndForEachIndex)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x64be3e4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckEndForEachIndex", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::NativeStream_Reader::_ctor(::by_ref<::Unity::Collections::NativeStream> stream) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::NativeStream>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline int32_t Unity::Collections::NativeStream_Reader::BeginForEachIndex(int32_t foreachIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "BeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, foreachIndex);
}
inline void Unity::Collections::NativeStream_Reader::EndForEachIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "EndForEachIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeStream_Reader::get_ForEachCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "get_ForEachCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeStream_Reader::get_RemainingItemCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "get_RemainingItemCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::NativeStream_Reader::ReadUnsafePtr(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "ReadUnsafePtr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method, size);
}
template <typename T> inline ::by_ref<T> Unity::Collections::NativeStream_Reader::Read() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "Read", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T> inline ::by_ref<T> Unity::Collections::NativeStream_Reader::Peek() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "Peek", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
inline int32_t Unity::Collections::NativeStream_Reader::Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::NativeStream_Reader::CheckNotReadingOutOfBounds(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckNotReadingOutOfBounds", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size);
}
inline void Unity::Collections::NativeStream_Reader::CheckRead() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckRead", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::NativeStream_Reader::CheckReadSize(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckReadSize", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, size);
}
inline void Unity::Collections::NativeStream_Reader::CheckBeginForEachIndex(int32_t forEachIndex) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckBeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, forEachIndex);
}
inline void Unity::Collections::NativeStream_Reader::CheckEndForEachIndex() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::NativeStream_Reader>(), { "CheckEndForEachIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_Reader", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::NativeStream_Reader::NativeStream_Reader(::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader m_Reader) noexcept {
  this->m_Reader = m_Reader;
}
// Ctor Parameters []
constexpr ::Unity::Collections::NativeStream_Reader::NativeStream_Reader() {}

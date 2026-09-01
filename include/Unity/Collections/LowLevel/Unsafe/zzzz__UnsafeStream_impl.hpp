#pragma once
// IWYU pragma private; include "Unity\Collections\LowLevel\Unsafe\UnsafeStream.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_impl.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_impl.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStreamBlock_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UnsafeStream_def.hpp"
#include "Unity/Collections/LowLevel/Unsafe/zzzz__UntypedUnsafeList_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__INativeDisposable_def.hpp"
#include "Unity/Collections/zzzz__NativeArray_1_def.hpp"
#include "Unity/Collections/zzzz__NativeList_1_def.hpp"
#include "Unity/Jobs/zzzz__IJob_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)(int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64cf194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                                                             { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.ScheduleConstruct
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>, ::Unity::Collections::NativeArray_1<int32_t>,
                                                                                    ::Unity::Jobs::JobHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::ScheduleConstruct)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x64cf1c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                                                { "ScheduleConstruct",
                                                  {},
                                                  { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                    ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AllocateBlock
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateBlock)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x64c3718;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
            { "AllocateBlock", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AllocateForEach
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateForEach)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x64c3310;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "AllocateForEach", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.IsEmpty
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::IsEmpty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64c34ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "IsEmpty", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.get_IsCreated
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64cf264;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "get_IsCreated", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.get_ForEachCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c3530;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "get_ForEachCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AsReader
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AsReader)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64c3a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "AsReader", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AsWriter
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AsWriter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x64c3900;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "AsWriter", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Count)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c360c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "Count", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Deallocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Deallocate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64cf2b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "Deallocate", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x64c3670;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)(::Unity::Jobs::JobHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x64cf33c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::_ctor(int32_t bufferCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                                                           { ".ctor", {}, { ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, bufferCount, allocator);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeStream::ScheduleConstruct(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream,
                                                                                                      ::Unity::Collections::NativeList_1<T> bufferCount, ::Unity::Jobs::JobHandle dependency,
                                                                                                      ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                                              { "ScheduleConstruct",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>(), ::i2c::type_of<::Unity::Collections::NativeList_1<T>>(),
                                                  ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, stream, bufferCount, dependency, allocator);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeStream::ScheduleConstruct(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream,
                                                                                                      ::Unity::Collections::NativeArray_1<int32_t> bufferCount, ::Unity::Jobs::JobHandle dependency,
                                                                                                      ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                                              { "ScheduleConstruct",
                                                {},
                                                { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>(), ::i2c::type_of<::Unity::Collections::NativeArray_1<int32_t>>(),
                                                  ::i2c::type_of<::Unity::Jobs::JobHandle>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, stream, bufferCount, dependency, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateBlock(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream,
                                                                              ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
          { "AllocateBlock", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, stream, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateForEach(int32_t forEachCount) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "AllocateForEach", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, forEachCount);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeStream::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "IsEmpty", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "get_IsCreated", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_ForEachCount() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "get_ForEachCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader Unity::Collections::LowLevel::Unsafe::UnsafeStream::AsReader() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "AsReader", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(*this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer Unity::Collections::LowLevel::Unsafe::UnsafeStream::AsWriter() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "AsWriter", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(*this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream::Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::LowLevel::Unsafe::UnsafeStream::ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(),
                                                           { "ToNativeArray", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>>(*this, ___internal_method, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::Deallocate() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "Deallocate", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>(), { "Dispose", {}, { ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(*this, ___internal_method, inputDeps);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeStream::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeStream::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "m_BlockData", ty: "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream::UnsafeStream(::Unity::Collections::AllocatorManager_Block m_BlockData) noexcept {
  this->m_BlockData = m_BlockData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream::UnsafeStream() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64cf3d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::UnsafeStream_DisposeJob(::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container) noexcept {
  this->Container = Container;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::UnsafeStream_DisposeJob() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::Execute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64cf3d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: Some("{}") }, CppParam { name: "List", ty:
// "::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList*", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::UnsafeStream_ConstructJobList(::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container,
                                                                                                               ::Unity::Collections::LowLevel::Unsafe::UntypedUnsafeList* List) noexcept {
  this->Container = Container;
  this->List = List;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::UnsafeStream_ConstructJobList() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob.Execute
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::Execute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64cf3f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob>(), { "Execute", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::Execute() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob>(), { "Execute", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: Some("{}") }, CppParam { name: "Length", ty:
// "::Unity::Collections::NativeArray_1<int32_t>", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::UnsafeStream_ConstructJob(::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container,
                                                                                                       ::Unity::Collections::NativeArray_1<int32_t> Length) noexcept {
  this->Container = Container;
  this->Length = Length;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::UnsafeStream_ConstructJob() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x64cf288;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer.get_ForEachCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c3944;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "get_ForEachCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer.BeginForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::BeginForEachIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64c397c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "BeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer.EndForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::EndForEachIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c399c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "EndForEachIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::Allocate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x64c39f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "Allocate", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::_ctor(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::get_ForEachCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "get_ForEachCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::BeginForEachIndex(int32_t foreachIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "BeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, foreachIndex);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::EndForEachIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "EndForEachIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::Write(T value) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "Write", { ::i2c::class_of<T>() }, { ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
template <typename T> inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::Allocate() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "Allocate", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::Allocate(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>(), { "Allocate", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method, size);
}
// Ctor Parameters [CppParam { name: "m_BlockData", ty: "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentBlock", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentPtr", ty: "uint8_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_CurrentBlockEnd", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_ForeachIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "m_ElementCount", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_FirstBlock", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "m_FirstOffset", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_NumberOfBlocks", ty: "int32_t", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "m_ThreadIndex", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::UnsafeStream_Writer(::Unity::Collections::AllocatorManager_Block m_BlockData,
                                                                                           ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_CurrentBlock, uint8_t* m_CurrentPtr,
                                                                                           uint8_t* m_CurrentBlockEnd, int32_t m_ForeachIndex, int32_t m_ElementCount,
                                                                                           ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_FirstBlock, int32_t m_FirstOffset,
                                                                                           int32_t m_NumberOfBlocks, int32_t m_ThreadIndex) noexcept {
  this->m_BlockData = m_BlockData;
  this->m_CurrentBlock = m_CurrentBlock;
  this->m_CurrentPtr = m_CurrentPtr;
  this->m_CurrentBlockEnd = m_CurrentBlockEnd;
  this->m_ForeachIndex = m_ForeachIndex;
  this->m_ElementCount = m_ElementCount;
  this->m_FirstBlock = m_FirstBlock;
  this->m_FirstOffset = m_FirstOffset;
  this->m_NumberOfBlocks = m_NumberOfBlocks;
  this->m_ThreadIndex = m_ThreadIndex;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::UnsafeStream_Writer() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x64cf274;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.BeginForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::BeginForEachIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c3aa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "BeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.EndForEachIndex
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::EndForEachIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x64c3afc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "EndForEachIndex", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.get_ForEachCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x64c3b18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "get_ForEachCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.get_RemainingItemCount
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::get_RemainingItemCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x64cf3fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "get_RemainingItemCount", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.ReadUnsafePtr
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint8_t* (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::ReadUnsafePtr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x64cf404;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "ReadUnsafePtr", {}, { ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.Count
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::Count)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x64c3b98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "Count", {}, {} })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::_ctor(::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::by_ref<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stream);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::BeginForEachIndex(int32_t foreachIndex) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "BeginForEachIndex", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method, foreachIndex);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::EndForEachIndex() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "EndForEachIndex", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::get_ForEachCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "get_ForEachCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::get_RemainingItemCount() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "get_RemainingItemCount", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline uint8_t* Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::ReadUnsafePtr(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "ReadUnsafePtr", {}, { ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*>(*this, ___internal_method, size);
}
template <typename T> inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::Read() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "Read", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
template <typename T> inline ::by_ref<T> Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::Peek() {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "Peek", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::by_ref<T>>(*this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::Count() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>(), { "Count", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
// Ctor Parameters [CppParam { name: "m_BlockData", ty: "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentBlock", ty:
// "::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_CurrentPtr", ty: "uint8_t*", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_CurrentBlockEnd", ty: "uint8_t*", modifiers: "", def_value: Some("{}") }, CppParam { name: "m_RemainingItemCount", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "m_LastBlockSize", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::UnsafeStream_Reader(::Unity::Collections::AllocatorManager_Block m_BlockData,
                                                                                           ::Unity::Collections::LowLevel::Unsafe::UnsafeStreamBlock* m_CurrentBlock, uint8_t* m_CurrentPtr,
                                                                                           uint8_t* m_CurrentBlockEnd, int32_t m_RemainingItemCount, int32_t m_LastBlockSize) noexcept {
  this->m_BlockData = m_BlockData;
  this->m_CurrentBlock = m_CurrentBlock;
  this->m_CurrentPtr = m_CurrentPtr;
  this->m_CurrentBlockEnd = m_CurrentBlockEnd;
  this->m_RemainingItemCount = m_RemainingItemCount;
  this->m_LastBlockSize = m_LastBlockSize;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::UnsafeStream_Reader() {}

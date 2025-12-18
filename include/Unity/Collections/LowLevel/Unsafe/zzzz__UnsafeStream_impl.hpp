#pragma once
// IWYU pragma private; include "Unity/Collections/LowLevel/Unsafe/UnsafeStream.hpp"
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)(
    int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x6318b18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.ScheduleConstruct
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(
    ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>, ::Unity::Collections::NativeArray_1<int32_t>, ::Unity::Jobs::JobHandle, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::ScheduleConstruct)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6318b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "ScheduleConstruct", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AllocateBlock
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateBlock)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x630d09c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "AllocateBlock", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AllocateForEach
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateForEach)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x630cc94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "AllocateForEach",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.IsEmpty
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::IsEmpty)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x630ce30;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                               "IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.get_IsCreated
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_IsCreated)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x6318be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                               "get_IsCreated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.get_ForEachCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630ceb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                               "get_ForEachCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AsReader
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader (
    ::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AsReader)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x630d410;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                               "AsReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.AsWriter
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer (
    ::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream::AsWriter)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x630d284;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                               "AsWriter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Count)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630cf90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                               "Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Deallocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Deallocate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x6318c34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                               "Deallocate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x630cff4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                               "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (::Unity::Collections::LowLevel::Unsafe::UnsafeStream::*)(::Unity::Jobs::JobHandle)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose)> {
  constexpr static std::size_t size = 0x98;
  constexpr static std::size_t addrs = 0x6318cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::_ctor(int32_t bufferCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((
      ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(),
                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, bufferCount, allocator);
}
template <typename T>
inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeStream::ScheduleConstruct(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream,
                                                                                                      ::Unity::Collections::NativeList_1<T> bufferCount, ::Unity::Jobs::JobHandle dependency,
                                                                                                      ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "ScheduleConstruct",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeList_1<T>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, stream, bufferCount, dependency, allocator);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeStream::ScheduleConstruct(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream,
                                                                                                      ::Unity::Collections::NativeArray_1<int32_t> bufferCount, ::Unity::Jobs::JobHandle dependency,
                                                                                                      ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "ScheduleConstruct", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::NativeArray_1<int32_t>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, stream, bufferCount, dependency, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateBlock(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream,
                                                                              ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "AllocateBlock", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, stream, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::AllocateForEach(int32_t forEachCount) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "AllocateForEach",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, forEachCount);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeStream::IsEmpty() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                             "IsEmpty", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_IsCreated() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                             "get_IsCreated", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream::get_ForEachCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                             "get_ForEachCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader Unity::Collections::LowLevel::Unsafe::UnsafeStream::AsReader() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                             "AsReader", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader, false>(this, ___internal_method);
}
inline ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer Unity::Collections::LowLevel::Unsafe::UnsafeStream::AsWriter() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                             "AsWriter", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream::Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                             "Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
template <typename T>
inline ::Unity::Collections::NativeArray_1<T> Unity::Collections::LowLevel::Unsafe::UnsafeStream::ToNativeArray(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "ToNativeArray",
                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::AllocatorManager_AllocatorHandle>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::Unity::Collections::NativeArray_1<T>, false>(this, ___internal_method, allocator);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::Deallocate() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                             "Deallocate", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(),
                                                                             "Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Unity::Jobs::JobHandle Unity::Collections::LowLevel::Unsafe::UnsafeStream::Dispose(::Unity::Jobs::JobHandle inputDeps) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>::get(), "Dispose", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(this, ___internal_method, inputDeps);
}
/// @brief Convert operator to "::Unity::Collections::INativeDisposable"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream::operator ::Unity::Collections::INativeDisposable*() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Collections::INativeDisposable"
constexpr ::Unity::Collections::INativeDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeStream::i___Unity__Collections__INativeDisposable() {
  return static_cast<::Unity::Collections::INativeDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* Unity::Collections::LowLevel::Unsafe::UnsafeStream::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "m_BlockData", ty: "::Unity::Collections::AllocatorManager_Block", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream::UnsafeStream(::Unity::Collections::AllocatorManager_Block m_BlockData) noexcept {
  this->m_BlockData = m_BlockData;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream::UnsafeStream() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::Execute)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x6318d58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Container", ty: "::Unity::Collections::LowLevel::Unsafe::UnsafeStream", modifiers: "", def_value: Some("{}") }]
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::UnsafeStream_DisposeJob(::Unity::Collections::LowLevel::Unsafe::UnsafeStream Container) noexcept {
  this->Container = Container;
}
// Ctor Parameters []
constexpr ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_DisposeJob::UnsafeStream_DisposeJob() {}
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList.Execute
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::Execute)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x6318d5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJobList::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::Execute)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x6318d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob>::get(), "Execute",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::Execute() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob>::get(), "Execute",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
/// @brief Convert operator to "::Unity::Jobs::IJob"
constexpr Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::operator ::Unity::Jobs::IJob*() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::Unity::Jobs::IJob"
constexpr ::Unity::Jobs::IJob* Unity::Collections::LowLevel::Unsafe::UnsafeStream_ConstructJob::i___Unity__Jobs__IJob() {
  return static_cast<::Unity::Jobs::IJob*>(static_cast<void*>(::il2cpp_utils::Box(this)));
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)(
    ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x6318c0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer.get_ForEachCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630d2c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), "get_ForEachCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer.BeginForEachIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::BeginForEachIndex)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x630d300;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), "BeginForEachIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer.EndForEachIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::EndForEachIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630d320;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), "EndForEachIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer.Allocate
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::Allocate)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x630d378;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), "Allocate",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::_ctor(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::get_ForEachCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(),
                                                                             "get_ForEachCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::BeginForEachIndex(int32_t foreachIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), "BeginForEachIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, foreachIndex);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::EndForEachIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(),
                                                                             "EndForEachIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::Write(T value) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), "Write",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<T>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
template <typename T> inline ::ByRef<T> Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::Allocate() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), "Allocate",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method);
}
inline uint8_t* Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer::Allocate(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Writer>::get(), "Allocate",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(this, ___internal_method, size);
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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)(
    ::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>)>(&::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::_ctor)> {
  constexpr static std::size_t size = 0x14;
  constexpr static std::size_t addrs = 0x6318bf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.BeginForEachIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::BeginForEachIndex)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630d428;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "BeginForEachIndex",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.EndForEachIndex
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::EndForEachIndex)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x630d480;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "EndForEachIndex",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.get_ForEachCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::get_ForEachCount)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x630d49c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "get_ForEachCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.get_RemainingItemCount
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::get_RemainingItemCount)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x6318d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "get_RemainingItemCount",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.ReadUnsafePtr
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint8_t* (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)(int32_t)>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::ReadUnsafePtr)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6318d88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "ReadUnsafePtr",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader.Count
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::*)()>(
    &::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::Count)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x630d51c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "Count",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::_ctor(::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream> stream) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Collections::LowLevel::Unsafe::UnsafeStream>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stream);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::BeginForEachIndex(int32_t foreachIndex) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "BeginForEachIndex",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method, foreachIndex);
}
inline void Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::EndForEachIndex() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(),
                                                                             "EndForEachIndex", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::get_ForEachCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(),
                                                                             "get_ForEachCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::get_RemainingItemCount() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(),
                                                                             "get_RemainingItemCount", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline uint8_t* Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::ReadUnsafePtr(int32_t size) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "ReadUnsafePtr",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<uint8_t*, false>(this, ___internal_method, size);
}
template <typename T> inline ::ByRef<T> Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::Read() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "Read",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method);
}
template <typename T> inline ::ByRef<T> Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::Peek() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(), "Peek",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::ByRef<T>, false>(this, ___internal_method);
}
inline int32_t Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader::Count() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::Collections::LowLevel::Unsafe::UnsafeStream_Reader>::get(),
                                                                             "Count", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
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

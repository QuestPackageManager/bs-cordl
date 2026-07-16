#pragma once
// IWYU pragma private; include "Unity/Collections/Memory.hpp"
#include "Unity/Collections/zzzz__Memory_def.hpp"
#include "Unity/Collections/zzzz__AllocatorManager_def.hpp"
#include "Unity/Collections/zzzz__Memory_def.hpp"
//  Writing Method size for method: ::Unity::Collections::Unmanaged_Memory_Array.IsCustom
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::Unmanaged_Memory_Array::IsCustom)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x64bcaa4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                                                                                           { "IsCustom", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unmanaged_Memory_Array.CustomResize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, int64_t, int64_t, ::Unity::Collections::AllocatorManager_AllocatorHandle, int64_t, int32_t)>(
    &::Unity::Collections::Unmanaged_Memory_Array::CustomResize)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x64bcab0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                                                             { "CustomResize",
                                                               {},
                                                               { ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Unmanaged_Memory_Array.Resize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(void*, int64_t, int64_t, ::Unity::Collections::AllocatorManager_AllocatorHandle, int64_t, int32_t)>(
    &::Unity::Collections::Unmanaged_Memory_Array::Resize)> {
  constexpr static std::size_t size = 0x14c;
  constexpr static std::size_t addrs = 0x64bc938;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                                                             { "Resize",
                                                               {},
                                                               { ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                                 ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
    return ___internal_method;
  }
};
inline bool Unity::Collections::Unmanaged_Memory_Array::IsCustom(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                                                                                         { "IsCustom", {}, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, allocator);
}
inline void* Unity::Collections::Unmanaged_Memory_Array::CustomResize(void* oldPointer, int64_t oldCount, int64_t newCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator,
                                                                      int64_t size, int32_t align) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                                                           { "CustomResize",
                                                             {},
                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, oldPointer, oldCount, newCount, allocator, size, align);
}
inline void* Unity::Collections::Unmanaged_Memory_Array::Resize(void* oldPointer, int64_t oldCount, int64_t newCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator, int64_t size,
                                                                int32_t align) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                                                           { "Resize",
                                                             {},
                                                             { ::i2c::type_of<void*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(),
                                                               ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, oldPointer, oldCount, newCount, allocator, size, align);
}
template <typename T>
inline T* Unity::Collections::Unmanaged_Memory_Array::Resize(T* oldPointer, int64_t oldCount, int64_t newCount, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                                       { "Resize",
                                         { ::i2c::class_of<T>() },
                                         { ::i2c::type_of<T*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, oldPointer, oldCount, newCount, allocator);
}
template <typename T> inline T* Unity::Collections::Unmanaged_Memory_Array::Allocate(int64_t count, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                                              { "Allocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<int64_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, count, allocator);
}
template <typename T> inline void Unity::Collections::Unmanaged_Memory_Array::Free(T* pointer, int64_t count, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::Unmanaged_Memory_Array>(),
                          { "Free", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer, count, allocator);
}
// Ctor Parameters []
constexpr ::Unity::Collections::Unmanaged_Memory_Array::Unmanaged_Memory_Array() {}
//  Writing Method size for method: ::Unity::Collections::Memory_Unmanaged.Allocate
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void* (*)(int64_t, int32_t, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::Memory_Unmanaged::Allocate)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x64bc91c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Unmanaged>(),
                                         { "Allocate", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::Collections::Memory_Unmanaged.Free
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(void*, ::Unity::Collections::AllocatorManager_AllocatorHandle)>(&::Unity::Collections::Memory_Unmanaged::Free)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x64bca84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Unmanaged>(),
                                                             { "Free", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
    return ___internal_method;
  }
};
inline void* Unity::Collections::Memory_Unmanaged::Allocate(int64_t size, int32_t align, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Unmanaged>(),
                                              { "Allocate", {}, { ::i2c::type_of<int64_t>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void*>(nullptr, ___internal_method, size, align, allocator);
}
inline void Unity::Collections::Memory_Unmanaged::Free(void* pointer, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Unmanaged>(),
                                                           { "Free", {}, { ::i2c::type_of<void*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer, allocator);
}
template <typename T> inline T* Unity::Collections::Memory_Unmanaged::Allocate(::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Unmanaged>(),
                                                           { "Allocate", { ::i2c::class_of<T>() }, { ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T*>(nullptr, ___internal_method, allocator);
}
template <typename T> inline void Unity::Collections::Memory_Unmanaged::Free(T* pointer, ::Unity::Collections::AllocatorManager_AllocatorHandle allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Unmanaged>(),
                                                           { "Free", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<::Unity::Collections::AllocatorManager_AllocatorHandle>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer, allocator);
}
// Ctor Parameters []
constexpr ::Unity::Collections::Memory_Unmanaged::Memory_Unmanaged() {}
template <typename T> inline void Unity::Collections::Memory_Array::Set(T* pointer, int64_t count, T t) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Array>(), { "Set", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int64_t>(), ::i2c::type_of<T>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer, count, t);
}
template <typename T> inline void Unity::Collections::Memory_Array::Clear(T* pointer, int64_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Array>(), { "Clear", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<int64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, pointer, count);
}
template <typename T> inline void Unity::Collections::Memory_Array::Copy(T* dest, T* src, int64_t count) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory_Array>(), { "Copy", { ::i2c::class_of<T>() }, { ::i2c::type_of<T*>(), ::i2c::type_of<T*>(), ::i2c::type_of<int64_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, dest, src, count);
}
// Ctor Parameters []
constexpr ::Unity::Collections::Memory_Array::Memory_Array() {}
//  Writing Method size for method: ::Unity::Collections::Memory.CheckByteCountIsReasonable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(int64_t)>(&::Unity::Collections::Memory::CheckByteCountIsReasonable)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x64bc85c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory>(), { "CheckByteCountIsReasonable", {}, { ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
inline void Unity::Collections::Memory::CheckByteCountIsReasonable(int64_t size) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::Collections::Memory>(), { "CheckByteCountIsReasonable", {}, { ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, size);
}
// Ctor Parameters []
constexpr ::Unity::Collections::Memory::Memory() {}

#pragma once
// IWYU pragma private; include "Unity/IO/LowLevel/Unsafe/AsyncReadManager.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__AsyncReadManager_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileHandle_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__FileInfoResult_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadCommandArray_def.hpp"
#include "Unity/IO/LowLevel/Unsafe/zzzz__ReadHandle_def.hpp"
#include "Unity/Jobs/zzzz__JobHandle_def.hpp"
#include "UnityEngine/Bindings/zzzz__ManagedSpanWrapper_def.hpp"
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.GetFileInfoInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadHandle (*)(::StringW, void*)>(&::Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfoInternal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x6a59e94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                                                           { "GetFileInfoInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.GetFileInfo
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadHandle (*)(::StringW, ::Unity::IO::LowLevel::Unsafe::FileInfoResult*)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5a02c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                             { "GetFileInfo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::FileInfoResult*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.ReadWithHandlesInternal_NativeCopy
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadHandle (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>, void*)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::ReadWithHandlesInternal_NativeCopy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a5a080;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                { "ReadWithHandlesInternal_NativeCopy", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<void*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.Read
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadHandle (*)(
    ::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>, ::Unity::IO::LowLevel::Unsafe::ReadCommandArray)>(&::Unity::IO::LowLevel::Unsafe::AsyncReadManager::Read)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6a5a130;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                            { "Read", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadCommandArray>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.OpenFileAsync_Internal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::FileHandle (*)(::StringW)>(&::Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync_Internal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6a5a1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(), { "OpenFileAsync_Internal", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.OpenFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::IO::LowLevel::Unsafe::FileHandle (*)(::StringW)>(&::Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6a5a34c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(), { "OpenFileAsync", {}, { ::i2c::type_of<::StringW>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.CloseFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::Unity::Jobs::JobHandle (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>, ::Unity::Jobs::JobHandle)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::CloseFileAsync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6a597f0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                { "CloseFileAsync", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.GetFileInfoInternal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, void*, ::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfoInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a59fd8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                                                           { "GetFileInfoInternal_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<void*>(),
                                                                                               ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.ReadWithHandlesInternal_NativeCopy_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>, void*, ::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::ReadWithHandlesInternal_NativeCopy_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5a0dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                                                           { "ReadWithHandlesInternal_NativeCopy_Injected",
                                                                                             {},
                                                                                             { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<void*>(),
                                                                                               ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.OpenFileAsync_Internal_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>, ::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6a5a308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                         { "OpenFileAsync_Internal_Injected",
                                           {},
                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.CloseFileAsync_Injected
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>, ::by_ref<::Unity::Jobs::JobHandle>, ::by_ref<::Unity::Jobs::JobHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::CloseFileAsync_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6a5a3b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                             { "CloseFileAsync_Injected",
                                                               {},
                                                               { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(),
                                                                 ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
    return ___internal_method;
  }
};
inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfoInternal(::StringW filename, void* cmd) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(), { "GetFileInfoInternal", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadHandle>(nullptr, ___internal_method, filename, cmd);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfo(::StringW filename, ::Unity::IO::LowLevel::Unsafe::FileInfoResult* result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                           { "GetFileInfo", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::FileInfoResult*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadHandle>(nullptr, ___internal_method, filename, result);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::ReadWithHandlesInternal_NativeCopy(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle,
                                                                                                                                   void* readCmdArray) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                              { "ReadWithHandlesInternal_NativeCopy", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<void*>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadHandle>(nullptr, ___internal_method, fileHandle, readCmdArray);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::Read(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle,
                                                                                                     ::Unity::IO::LowLevel::Unsafe::ReadCommandArray readCmdArray) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                       { "Read", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<::Unity::IO::LowLevel::Unsafe::ReadCommandArray>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadHandle>(nullptr, ___internal_method, fileHandle, readCmdArray);
}
inline ::Unity::IO::LowLevel::Unsafe::FileHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync_Internal(::StringW fileName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(), { "OpenFileAsync_Internal", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::FileHandle>(nullptr, ___internal_method, fileName);
}
inline ::Unity::IO::LowLevel::Unsafe::FileHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync(::StringW fileName) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(), { "OpenFileAsync", {}, { ::i2c::type_of<::StringW>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::FileHandle>(nullptr, ___internal_method, fileName);
}
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::CloseFileAsync(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, ::Unity::Jobs::JobHandle dependency) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                              { "CloseFileAsync", {}, { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<::Unity::Jobs::JobHandle>() } })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle>(nullptr, ___internal_method, fileHandle, dependency);
}
inline void Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfoInternal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> filename, void* cmd,
                                                                                        ::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                                                         { "GetFileInfoInternal_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<void*>(),
                                                                                             ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, filename, cmd, ret);
}
inline void Unity::IO::LowLevel::Unsafe::AsyncReadManager::ReadWithHandlesInternal_NativeCopy_Injected(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, void* readCmdArray,
                                                                                                       ::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                                                         { "ReadWithHandlesInternal_NativeCopy_Injected",
                                                                                           {},
                                                                                           { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<void*>(),
                                                                                             ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::ReadHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fileHandle, readCmdArray, ret);
}
inline void Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync_Internal_Injected(::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper> fileName,
                                                                                           ::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                              { "OpenFileAsync_Internal_Injected",
                                                {},
                                                { ::i2c::type_of<::by_ref<::UnityEngine::Bindings::ManagedSpanWrapper>>(), ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fileName, ret);
}
inline void Unity::IO::LowLevel::Unsafe::AsyncReadManager::CloseFileAsync_Injected(::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, ::by_ref<::Unity::Jobs::JobHandle> dependency,
                                                                                   ::by_ref<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>(),
                                                           { "CloseFileAsync_Injected",
                                                             {},
                                                             { ::i2c::type_of<::by_ref<::Unity::IO::LowLevel::Unsafe::FileHandle>>(), ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>(),
                                                               ::i2c::type_of<::by_ref<::Unity::Jobs::JobHandle>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fileHandle, dependency, ret);
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::AsyncReadManager::AsyncReadManager() {}

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

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadHandle (*)(::StringW, void*)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfoInternal)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x68928a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "GetFileInfoInternal", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.GetFileInfo
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadHandle (*)(::StringW, ::Unity::IO::LowLevel::Unsafe::FileInfoResult*)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfo)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6892a40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "GetFileInfo", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::FileInfoResult*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.ReadWithHandlesInternal_NativeCopy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadHandle (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>, void*)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::ReadWithHandlesInternal_NativeCopy)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6892a94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "ReadWithHandlesInternal_NativeCopy", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.Read
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::ReadHandle (*)(
    ::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>, ::Unity::IO::LowLevel::Unsafe::ReadCommandArray)>(&::Unity::IO::LowLevel::Unsafe::AsyncReadManager::Read)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x6892b44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadCommandArray>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.OpenFileAsync_Internal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::FileHandle (*)(::StringW)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync_Internal)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x6892be8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "OpenFileAsync_Internal",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.OpenFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::IO::LowLevel::Unsafe::FileHandle (*)(::StringW)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync)> {
  constexpr static std::size_t size = 0x64;
  constexpr static std::size_t addrs = 0x6892d60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "OpenFileAsync",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.CloseFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::Unity::Jobs::JobHandle (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>, ::Unity::Jobs::JobHandle)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::CloseFileAsync)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x6892204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "CloseFileAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.GetFileInfoInternal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, void*, ::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(&::Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfoInternal_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x68929ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "GetFileInfoInternal_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.ReadWithHandlesInternal_NativeCopy_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>, void*, ::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>)>(
        &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::ReadWithHandlesInternal_NativeCopy_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6892af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "ReadWithHandlesInternal_NativeCopy_Injected",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.OpenFileAsync_Internal_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>, ::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>)>(
    &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync_Internal_Injected)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x6892d1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "OpenFileAsync_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Unity::IO::LowLevel::Unsafe::AsyncReadManager.CloseFileAsync_Injected
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<void (*)(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>, ::ByRef<::Unity::Jobs::JobHandle>, ::ByRef<::Unity::Jobs::JobHandle>)>(
        &::Unity::IO::LowLevel::Unsafe::AsyncReadManager::CloseFileAsync_Injected)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x6892dc4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "CloseFileAsync_Injected", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
    return ___internal_method;
  }
};
inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfoInternal(::StringW filename, void* cmd) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "GetFileInfoInternal", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadHandle, false>(nullptr, ___internal_method, filename, cmd);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfo(::StringW filename, ::Unity::IO::LowLevel::Unsafe::FileInfoResult* result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "GetFileInfo", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::FileInfoResult*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadHandle, false>(nullptr, ___internal_method, filename, result);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::ReadWithHandlesInternal_NativeCopy(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle,
                                                                                                                                   void* readCmdArray) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "ReadWithHandlesInternal_NativeCopy", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadHandle, false>(nullptr, ___internal_method, fileHandle, readCmdArray);
}
inline ::Unity::IO::LowLevel::Unsafe::ReadHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::Read(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle,
                                                                                                     ::Unity::IO::LowLevel::Unsafe::ReadCommandArray readCmdArray) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "Read", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::IO::LowLevel::Unsafe::ReadCommandArray>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::ReadHandle, false>(nullptr, ___internal_method, fileHandle, readCmdArray);
}
inline ::Unity::IO::LowLevel::Unsafe::FileHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync_Internal(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "OpenFileAsync_Internal",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::FileHandle, false>(nullptr, ___internal_method, fileName);
}
inline ::Unity::IO::LowLevel::Unsafe::FileHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "OpenFileAsync",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::IO::LowLevel::Unsafe::FileHandle, false>(nullptr, ___internal_method, fileName);
}
inline ::Unity::Jobs::JobHandle Unity::IO::LowLevel::Unsafe::AsyncReadManager::CloseFileAsync(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, ::Unity::Jobs::JobHandle dependency) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "CloseFileAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Jobs::JobHandle>::get() })));
  return ::cordl_internals::RunMethodRethrow<::Unity::Jobs::JobHandle, false>(nullptr, ___internal_method, fileHandle, dependency);
}
inline void Unity::IO::LowLevel::Unsafe::AsyncReadManager::GetFileInfoInternal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> filename, void* cmd,
                                                                                        ::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "GetFileInfoInternal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, filename, cmd, ret);
}
inline void Unity::IO::LowLevel::Unsafe::AsyncReadManager::ReadWithHandlesInternal_NativeCopy_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, void* readCmdArray,
                                                                                                       ::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "ReadWithHandlesInternal_NativeCopy_Injected",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<void*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::ReadHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileHandle, readCmdArray, ret);
}
inline void Unity::IO::LowLevel::Unsafe::AsyncReadManager::OpenFileAsync_Internal_Injected(::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper> fileName,
                                                                                           ::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "OpenFileAsync_Internal_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::UnityEngine::Bindings::ManagedSpanWrapper>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileName, ret);
}
inline void Unity::IO::LowLevel::Unsafe::AsyncReadManager::CloseFileAsync_Injected(::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle> fileHandle, ::ByRef<::Unity::Jobs::JobHandle> dependency,
                                                                                   ::ByRef<::Unity::Jobs::JobHandle> ret) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Unity::IO::LowLevel::Unsafe::AsyncReadManager*>::get(), "CloseFileAsync_Injected", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::IO::LowLevel::Unsafe::FileHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::Unity::Jobs::JobHandle>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileHandle, dependency, ret);
}
// Ctor Parameters []
constexpr ::Unity::IO::LowLevel::Unsafe::AsyncReadManager::AsyncReadManager() {}

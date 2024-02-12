#pragma once
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage.SaveFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::NoFileStorage::*)(::StringW, ::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::NoFileStorage::SaveFileAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe49bfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), "SaveFileAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage.LoadFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::NoFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::NoFileStorage::LoadFileAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe49c84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), "LoadFileAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage.DeleteFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NoFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::NoFileStorage::DeleteFileAsync)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe49cec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), "DeleteFileAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage.FileExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NoFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::NoFileStorage::FileExistsAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0xe49d74;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), "FileExistsAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::NoFileStorage::*)()>(&::GlobalNamespace::NoFileStorage::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe49ddc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IFileStorage"
constexpr GlobalNamespace::NoFileStorage::operator ::GlobalNamespace::IFileStorage*() noexcept {
  return static_cast<::GlobalNamespace::IFileStorage*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFileStorage"
constexpr ::GlobalNamespace::IFileStorage* GlobalNamespace::NoFileStorage::i___GlobalNamespace__IFileStorage() noexcept {
  return static_cast<::GlobalNamespace::IFileStorage*>(static_cast<void*>(this));
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NoFileStorage::SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), "SaveFileAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, fileName, value, storageLocation);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::NoFileStorage::LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), "LoadFileAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NoFileStorage::DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), "DeleteFileAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NoFileStorage::FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), "FileExistsAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, fileName, storageLocation);
}
inline ::GlobalNamespace::NoFileStorage* GlobalNamespace::NoFileStorage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::NoFileStorage*>());
}
inline void GlobalNamespace::NoFileStorage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::NoFileStorage*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoFileStorage::NoFileStorage() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

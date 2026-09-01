#pragma once
// IWYU pragma private; include "GlobalNamespace\IFileStorage.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::IFileStorage.SaveFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::IFileStorage::*)(::StringW, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::IFileStorage::SaveFileAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IFileStorage*>(), { ::i2c::class_of<::GlobalNamespace::IFileStorage*>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IFileStorage.LoadFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::IFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::IFileStorage::LoadFileAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IFileStorage*>(), { ::i2c::class_of<::GlobalNamespace::IFileStorage*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IFileStorage.DeleteFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::IFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::IFileStorage::DeleteFileAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IFileStorage*>(), { ::i2c::class_of<::GlobalNamespace::IFileStorage*>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::IFileStorage.FileExistsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::IFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::IFileStorage::FileExistsAsync)> {
  constexpr static std::size_t size = 0xffffffffffffffff;
  constexpr static std::size_t addrs = 0xffffffffffffffff;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::IFileStorage*>(), { ::i2c::class_of<::GlobalNamespace::IFileStorage*>(), 3 }));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* GlobalNamespace::IFileStorage::SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IFileStorage*>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, fileName, value, storageLocation);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::IFileStorage::LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IFileStorage*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::IFileStorage::DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IFileStorage*>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::IFileStorage::FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::IFileStorage*>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, fileName, storageLocation);
}

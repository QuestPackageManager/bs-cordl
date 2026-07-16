#pragma once
// IWYU pragma private; include "GlobalNamespace/NoFileStorage.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__NoFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage.SaveFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NoFileStorage::*)(::StringW, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::NoFileStorage::SaveFileAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3313c3c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(),
                                                { "SaveFileAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage.LoadFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::NoFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::NoFileStorage::LoadFileAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3313cd0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(), { "LoadFileAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage.DeleteFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::NoFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::NoFileStorage::DeleteFileAsync)> {
  constexpr static std::size_t size = 0x94;
  constexpr static std::size_t addrs = 0x3313d40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(), { "DeleteFileAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage.FileExistsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::NoFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::NoFileStorage::FileExistsAsync)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x3313dd4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(), { "FileExistsAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::NoFileStorage._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::NoFileStorage::*)()>(&::GlobalNamespace::NoFileStorage::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3313e44;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
inline ::System::Threading::Tasks::Task* GlobalNamespace::NoFileStorage::SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(),
                                              { "SaveFileAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, fileName, value, storageLocation);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::NoFileStorage::LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(), { "LoadFileAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::NoFileStorage::DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(), { "DeleteFileAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::NoFileStorage::FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(), { "FileExistsAsync", {}, { ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method, fileName, storageLocation);
}
inline void GlobalNamespace::NoFileStorage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::NoFileStorage*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::NoFileStorage* GlobalNamespace::NoFileStorage::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::NoFileStorage*>());
}
/// @brief Convert operator to "::GlobalNamespace::IFileStorage"
constexpr GlobalNamespace::NoFileStorage::operator ::GlobalNamespace::IFileStorage*() noexcept {
  return static_cast<::GlobalNamespace::IFileStorage*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFileStorage"
constexpr ::GlobalNamespace::IFileStorage* GlobalNamespace::NoFileStorage::i___GlobalNamespace__IFileStorage() noexcept {
  return static_cast<::GlobalNamespace::IFileStorage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::NoFileStorage::NoFileStorage() {}

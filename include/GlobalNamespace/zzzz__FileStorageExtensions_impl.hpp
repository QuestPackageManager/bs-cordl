#pragma once
// IWYU pragma private; include "GlobalNamespace/FileStorageExtensions.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileStorageExtensions_def.hpp"
#include "GlobalNamespace/zzzz__FileStorageExtensions_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "Newtonsoft/Json/zzzz__JsonSerializerSettings_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::*)()>(
    &::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3312860;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0._SaveFile_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::*)()>(
    &::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::_SaveFile_b__0)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x3312e40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0*>(), { "<SaveFile>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileStorage = value;
}
constexpr ::StringW& GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileName = value;
}
constexpr ::StringW& GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___value = value;
}
constexpr ::GlobalNamespace::StoragePreference& GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_get_storageLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr ::GlobalNamespace::StoragePreference const& GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_get_storageLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::__cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storageLocation = value;
}
inline void GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::_SaveFile_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0*>(), { "<SaveFile>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0* GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileStorageExtensions___c__DisplayClass1_0::FileStorageExtensions___c__DisplayClass1_0() {}
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3312970;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0._LoadFile_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::_LoadFile_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3312f00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0*>(), { "<LoadFile>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileStorage = value;
}
constexpr ::StringW& GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileName = value;
}
constexpr ::GlobalNamespace::StoragePreference& GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_get_storageLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr ::GlobalNamespace::StoragePreference const& GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_get_storageLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::__cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storageLocation = value;
}
inline void GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::_LoadFile_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0*>(), { "<LoadFile>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*>(this, ___internal_method);
}
inline ::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0* GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileStorageExtensions___c__DisplayClass2_0::FileStorageExtensions___c__DisplayClass2_0() {}
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3312a80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0._FileExists_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::_FileExists_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3312fb8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0*>(), { "<FileExists>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileStorage = value;
}
constexpr ::StringW& GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileName = value;
}
constexpr ::GlobalNamespace::StoragePreference& GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_get_storageLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr ::GlobalNamespace::StoragePreference const& GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_get_storageLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::__cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storageLocation = value;
}
inline void GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::_FileExists_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0*>(), { "<FileExists>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*>(this, ___internal_method);
}
inline ::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0* GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileStorageExtensions___c__DisplayClass3_0::FileStorageExtensions___c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x3312b78;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0._DeleteFile_b__0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::_DeleteFile_b__0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x3313070;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0*>(), { "<DeleteFile>b__0", {}, {} })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::GlobalNamespace::IFileStorage* const& GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileStorage = value;
}
constexpr ::StringW& GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___fileName = value;
}
constexpr ::GlobalNamespace::StoragePreference& GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_get_storageLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr ::GlobalNamespace::StoragePreference const& GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_get_storageLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr void GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::__cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storageLocation = value;
}
inline void GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::_DeleteFile_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0*>(), { "<DeleteFile>b__0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(this, ___internal_method);
}
inline ::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0* GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileStorageExtensions___c__DisplayClass4_0::FileStorageExtensions___c__DisplayClass4_0() {}
template <typename T> inline void GlobalNamespace::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1<T>>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1<T>>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: Some("{}") }, CppParam { name: "storageLocation", ty: "::GlobalNamespace::StoragePreference",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "", def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1<T>::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T> __t__builder, ::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName,
    ::GlobalNamespace::StoragePreference storageLocation, ::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->fileStorage = fileStorage;
  this->fileName = fileName;
  this->storageLocation = storageLocation;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
template <typename T> constexpr ::GlobalNamespace::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1<T>::FileStorageExtensions__LoadFromJSONFileAsync_d__8_1() {}
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.SaveFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IFileStorage*, ::StringW, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileStorageExtensions::SaveFile)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x331275c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(), { "SaveFile",
                                                                                                         {},
                                                                                                         { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(),
                                                                                                           ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.LoadFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (*)(::GlobalNamespace::IFileStorage*, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileStorageExtensions::LoadFile)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3312864;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                            { "LoadFile", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.FileExists
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::IFileStorage*, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileStorageExtensions::FileExists)> {
  constexpr static std::size_t size = 0x10c;
  constexpr static std::size_t addrs = 0x3312974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                            { "FileExists", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.DeleteFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IFileStorage*, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileStorageExtensions::DeleteFile)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x3312a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                            { "DeleteFile", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.SaveToJSONFile
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::IFileStorage*, ::System::Object*, ::StringW, ::GlobalNamespace::StoragePreference,
                                                                ::Newtonsoft::Json::JsonSerializerSettings*)>(&::GlobalNamespace::FileStorageExtensions::SaveToJSONFile)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x3312b7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                                                             { "SaveToJSONFile",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::StoragePreference>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.SaveToJSONFileAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Threading::Tasks::Task* (*)(::GlobalNamespace::IFileStorage*, ::System::Object*, ::StringW, ::GlobalNamespace::StoragePreference,
                                                                                             ::Newtonsoft::Json::JsonSerializerSettings*)>(
    &::GlobalNamespace::FileStorageExtensions::SaveToJSONFileAsync)> {
  constexpr static std::size_t size = 0x140;
  constexpr static std::size_t addrs = 0x3312d00;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                                                             { "SaveToJSONFileAsync",
                                                               {},
                                                               { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(),
                                                                 ::i2c::type_of<::GlobalNamespace::StoragePreference>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FileStorageExtensions::SaveFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(), { "SaveFile",
                                                                                                       {},
                                                                                                       { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(),
                                                                                                         ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fileStorage, fileName, value, storageLocation);
}
inline ::StringW GlobalNamespace::FileStorageExtensions::LoadFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                          { "LoadFile", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
inline bool GlobalNamespace::FileStorageExtensions::FileExists(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                          { "FileExists", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
inline void GlobalNamespace::FileStorageExtensions::DeleteFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                          { "DeleteFile", {}, { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
inline void GlobalNamespace::FileStorageExtensions::SaveToJSONFile(::GlobalNamespace::IFileStorage* fileStorage, ::System::Object* obj, ::StringW fileName,
                                                                   ::GlobalNamespace::StoragePreference storageLocation, ::Newtonsoft::Json::JsonSerializerSettings* overrideSerializerSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                                                           { "SaveToJSONFile",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::StoragePreference>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, fileStorage, obj, fileName, storageLocation, overrideSerializerSettings);
}
template <typename T>
inline T GlobalNamespace::FileStorageExtensions::LoadFromJSONFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                                              { "LoadFromJSONFile",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::FileStorageExtensions::SaveToJSONFileAsync(::GlobalNamespace::IFileStorage* fileStorage, ::System::Object* obj, ::StringW fileName,
                                                                                                     ::GlobalNamespace::StoragePreference storageLocation,
                                                                                                     ::Newtonsoft::Json::JsonSerializerSettings* overrideSerializerSettings) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                                                           { "SaveToJSONFileAsync",
                                                             {},
                                                             { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::System::Object*>(), ::i2c::type_of<::StringW>(),
                                                               ::i2c::type_of<::GlobalNamespace::StoragePreference>(), ::i2c::type_of<::Newtonsoft::Json::JsonSerializerSettings*>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*>(nullptr, ___internal_method, fileStorage, obj, fileName, storageLocation, overrideSerializerSettings);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::FileStorageExtensions::LoadFromJSONFileAsync(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName,
                                                                                                            ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method_base = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::FileStorageExtensions*>(),
                                              { "LoadFromJSONFileAsync",
                                                { ::i2c::class_of<T>() },
                                                { ::i2c::type_of<::GlobalNamespace::IFileStorage*>(), ::i2c::type_of<::StringW>(), ::i2c::type_of<::GlobalNamespace::StoragePreference>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileStorageExtensions::FileStorageExtensions() {}

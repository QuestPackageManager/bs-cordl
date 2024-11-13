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
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::*)()>(
    &::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22700a4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0._SaveFile_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::*)()>(
    &::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::_SaveFile_b__0)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22705d4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0*>::get(), "<SaveFile>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_get_value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr ::StringW const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_get_value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___value;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_set_value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StoragePreference& GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_get_storageLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr ::GlobalNamespace::StoragePreference const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_get_storageLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storageLocation = value;
}
inline ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0* GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0*>());
}
inline void GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::_SaveFile_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0*>::get(), "<SaveFile>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass1_0::__FileStorageExtensions____c__DisplayClass1_0() {}
//  Writing Method size for method: ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::*)()>(
    &::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2270180;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0._LoadFile_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::*)()>(&::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::_LoadFile_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2270690;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0*>::get(), "<LoadFile>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StoragePreference& GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_get_storageLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr ::GlobalNamespace::StoragePreference const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_get_storageLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storageLocation = value;
}
inline ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0* GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0*>());
}
inline void GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::_LoadFile_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0*>::get(), "<LoadFile>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass2_0::__FileStorageExtensions____c__DisplayClass2_0() {}
//  Writing Method size for method: ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x227025c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0._FileExists_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::*)()>(
    &::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::_FileExists_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x2270744;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0*>::get(), "<FileExists>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StoragePreference& GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_get_storageLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr ::GlobalNamespace::StoragePreference const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_get_storageLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storageLocation = value;
}
inline ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0* GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0*>());
}
inline void GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::_FileExists_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0*>::get(), "<FileExists>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass3_0::__FileStorageExtensions____c__DisplayClass3_0() {}
//  Writing Method size for method: ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2270324;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0._DeleteFile_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::*)()>(
    &::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::_DeleteFile_b__0)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22707f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0*>::get(), "<DeleteFile>b__0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::IFileStorage*& GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_get_fileStorage() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IFileStorage*> const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_get_fileStorage() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileStorage;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_set_fileStorage(::GlobalNamespace::IFileStorage* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileStorage)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_get_fileName() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr ::StringW const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_get_fileName() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___fileName;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_set_fileName(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___fileName)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::StoragePreference& GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_get_storageLocation() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr ::GlobalNamespace::StoragePreference const& GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_get_storageLocation() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___storageLocation;
}
constexpr void GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__cordl_internal_set_storageLocation(::GlobalNamespace::StoragePreference value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___storageLocation = value;
}
inline ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0* GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0*>());
}
inline void GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::_DeleteFile_b__0() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0*>::get(), "<DeleteFile>b__0",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileStorageExtensions____c__DisplayClass4_0::__FileStorageExtensions____c__DisplayClass4_0() {}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T> constexpr GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
template <typename T>
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
template <typename T> inline void GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
template <typename T> inline void GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<T>", modifiers: "", def_value: Some("{}") }, CppParam { name: "fileStorage", ty: "::GlobalNamespace::IFileStorage*", modifiers: "",
// def_value: Some("nullptr") }, CppParam { name: "fileName", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "storageLocation", ty:
// "::GlobalNamespace::StoragePreference", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::StringW>", modifiers: "",
// def_value: Some("{}") }]
template <typename T>
constexpr ::GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1(
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
template <typename T> constexpr ::GlobalNamespace::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1<T>::__FileStorageExtensions___LoadFromJSONFileAsync_d__8_1() {}
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.SaveFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IFileStorage*, ::StringW, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileStorageExtensions::SaveFile)> {
  constexpr static std::size_t size = 0xd0;
  constexpr static std::size_t addrs = 0x226ffd4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "SaveFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.LoadFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::GlobalNamespace::IFileStorage*, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileStorageExtensions::LoadFile)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x22700ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "LoadFile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.FileExists
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::IFileStorage*, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileStorageExtensions::FileExists)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x2270188;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "FileExists", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.DeleteFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IFileStorage*, ::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileStorageExtensions::DeleteFile)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x2270264;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "DeleteFile", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.SaveToJSONFile
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::IFileStorage*, ::System::Object*, ::StringW, ::GlobalNamespace::StoragePreference,
                                                                                           ::Newtonsoft::Json::JsonSerializerSettings*)>(&::GlobalNamespace::FileStorageExtensions::SaveToJSONFile)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x227032c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "SaveToJSONFile", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileStorageExtensions.SaveToJSONFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task* (*)(::GlobalNamespace::IFileStorage*, ::System::Object*, ::StringW, ::GlobalNamespace::StoragePreference,
                                                      ::Newtonsoft::Json::JsonSerializerSettings*)>(&::GlobalNamespace::FileStorageExtensions::SaveToJSONFileAsync)> {
  constexpr static std::size_t size = 0x134;
  constexpr static std::size_t addrs = 0x22704a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "SaveToJSONFileAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FileStorageExtensions::SaveFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "SaveFile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileStorage, fileName, value, storageLocation);
}
inline ::StringW GlobalNamespace::FileStorageExtensions::LoadFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "LoadFile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
inline bool GlobalNamespace::FileStorageExtensions::FileExists(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "FileExists", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
inline void GlobalNamespace::FileStorageExtensions::DeleteFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "DeleteFile", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
/// @param overrideSerializerSettings: ::Newtonsoft::Json::JsonSerializerSettings* (default: nullptr)
inline void GlobalNamespace::FileStorageExtensions::SaveToJSONFile(::GlobalNamespace::IFileStorage* fileStorage, ::System::Object* obj, ::StringW fileName,
                                                                   ::GlobalNamespace::StoragePreference storageLocation, ::Newtonsoft::Json::JsonSerializerSettings* overrideSerializerSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "SaveToJSONFile", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, fileStorage, obj, fileName, storageLocation, overrideSerializerSettings);
}
template <typename T>
inline T GlobalNamespace::FileStorageExtensions::LoadFromJSONFile(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "LoadFromJSONFile",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
/// @param overrideSerializerSettings: ::Newtonsoft::Json::JsonSerializerSettings* (default: nullptr)
inline ::System::Threading::Tasks::Task* GlobalNamespace::FileStorageExtensions::SaveToJSONFileAsync(::GlobalNamespace::IFileStorage* fileStorage, ::System::Object* obj, ::StringW fileName,
                                                                                                     ::GlobalNamespace::StoragePreference storageLocation,
                                                                                                     ::Newtonsoft::Json::JsonSerializerSettings* overrideSerializerSettings) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "SaveToJSONFileAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Object*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Newtonsoft::Json::JsonSerializerSettings*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(nullptr, ___internal_method, fileStorage, obj, fileName, storageLocation, overrideSerializerSettings);
}
template <typename T>
inline ::System::Threading::Tasks::Task_1<T>* GlobalNamespace::FileStorageExtensions::LoadFromJSONFileAsync(::GlobalNamespace::IFileStorage* fileStorage, ::StringW fileName,
                                                                                                            ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileStorageExtensions*>::get(), "LoadFromJSONFileAsync",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IFileStorage*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<T>*, false>(nullptr, ___internal_method, fileStorage, fileName, storageLocation);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileStorageExtensions::FileStorageExtensions() {}

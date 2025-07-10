#pragma once
// IWYU pragma private; include "GlobalNamespace/FileSystemFileStorage.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_impl.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_1_impl.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileSystemFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__BackgroundCommandQueue_def.hpp"
#include "GlobalNamespace/zzzz__FileSystemFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage_SaveFileCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemFileStorage_SaveFileCommand::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::FileSystemFileStorage_SaveFileCommand::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0x22a531c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_SaveFileCommand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage_SaveFileCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemFileStorage_SaveFileCommand::*)()>(
    &::GlobalNamespace::FileSystemFileStorage_SaveFileCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x22a5888;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_SaveFileCommand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_SaveFileCommand*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileSystemFileStorage_SaveFileCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemFileStorage_SaveFileCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::FileSystemFileStorage_SaveFileCommand::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::FileSystemFileStorage_SaveFileCommand::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::StringW const& GlobalNamespace::FileSystemFileStorage_SaveFileCommand::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::FileSystemFileStorage_SaveFileCommand::__cordl_internal_set__value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FileSystemFileStorage_SaveFileCommand::_ctor(::StringW filePath, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_SaveFileCommand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath, value);
}
inline void GlobalNamespace::FileSystemFileStorage_SaveFileCommand::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_SaveFileCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FileSystemFileStorage_SaveFileCommand* GlobalNamespace::FileSystemFileStorage_SaveFileCommand::New_ctor(::StringW filePath, ::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemFileStorage_SaveFileCommand*>(filePath, value));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemFileStorage_SaveFileCommand::FileSystemFileStorage_SaveFileCommand() {}
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage_LoadFileCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemFileStorage_LoadFileCommand::*)(::StringW)>(
    &::GlobalNamespace::FileSystemFileStorage_LoadFileCommand::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22a5508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_LoadFileCommand*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage_LoadFileCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemFileStorage_LoadFileCommand::*)()>(
    &::GlobalNamespace::FileSystemFileStorage_LoadFileCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x22a596c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_LoadFileCommand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_LoadFileCommand*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileSystemFileStorage_LoadFileCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemFileStorage_LoadFileCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::FileSystemFileStorage_LoadFileCommand::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FileSystemFileStorage_LoadFileCommand::_ctor(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_LoadFileCommand*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline ::StringW GlobalNamespace::FileSystemFileStorage_LoadFileCommand::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_LoadFileCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FileSystemFileStorage_LoadFileCommand* GlobalNamespace::FileSystemFileStorage_LoadFileCommand::New_ctor(::StringW filePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemFileStorage_LoadFileCommand*>(filePath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemFileStorage_LoadFileCommand::FileSystemFileStorage_LoadFileCommand() {}
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::*)(::StringW)>(
    &::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0x22a560c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::*)()>(
    &::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22a5a24;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::_ctor(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline void GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand* GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::New_ctor(::StringW filePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand*>(filePath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemFileStorage_DeleteFileCommand::FileSystemFileStorage_DeleteFileCommand() {}
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage_FileExistsCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemFileStorage_FileExistsCommand::*)(::StringW)>(
    &::GlobalNamespace::FileSystemFileStorage_FileExistsCommand::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0x22a56f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_FileExistsCommand*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage_FileExistsCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::FileSystemFileStorage_FileExistsCommand::*)()>(
    &::GlobalNamespace::FileSystemFileStorage_FileExistsCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0x22a5a5c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_FileExistsCommand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_FileExistsCommand*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileSystemFileStorage_FileExistsCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemFileStorage_FileExistsCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::FileSystemFileStorage_FileExistsCommand::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::FileSystemFileStorage_FileExistsCommand::_ctor(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_FileExistsCommand*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline bool GlobalNamespace::FileSystemFileStorage_FileExistsCommand::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage_FileExistsCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FileSystemFileStorage_FileExistsCommand* GlobalNamespace::FileSystemFileStorage_FileExistsCommand::New_ctor(::StringW filePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemFileStorage_FileExistsCommand*>(filePath));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemFileStorage_FileExistsCommand::FileSystemFileStorage_FileExistsCommand() {}
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage___c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemFileStorage___c::*)()>(&::GlobalNamespace::FileSystemFileStorage___c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x22a5af0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage___c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage___c._GetCommandQueue_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BackgroundCommandQueue* (::GlobalNamespace::FileSystemFileStorage___c::*)(::StringW)>(
    &::GlobalNamespace::FileSystemFileStorage___c::_GetCommandQueue_b__6_0)> {
  constexpr static std::size_t size = 0x54;
  constexpr static std::size_t addrs = 0x22a5af8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage___c*>::get(), "<GetCommandQueue>b__6_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::FileSystemFileStorage___c::setStaticF___9(::GlobalNamespace::FileSystemFileStorage___c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::FileSystemFileStorage___c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage___c*>::get>(
      std::forward<::GlobalNamespace::FileSystemFileStorage___c*>(value));
}
inline ::GlobalNamespace::FileSystemFileStorage___c* GlobalNamespace::FileSystemFileStorage___c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::FileSystemFileStorage___c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage___c*>::get>();
}
inline void GlobalNamespace::FileSystemFileStorage___c::setStaticF___9__6_0(::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage___c*>::get>(
      std::forward<::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*>(value));
}
inline ::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* GlobalNamespace::FileSystemFileStorage___c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage___c*>::get>();
}
inline void GlobalNamespace::FileSystemFileStorage___c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage___c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BackgroundCommandQueue* GlobalNamespace::FileSystemFileStorage___c::_GetCommandQueue_b__6_0(::StringW _) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage___c*>::get(), "<GetCommandQueue>b__6_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BackgroundCommandQueue*, false>(this, ___internal_method, _);
}
inline ::GlobalNamespace::FileSystemFileStorage___c* GlobalNamespace::FileSystemFileStorage___c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemFileStorage___c*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemFileStorage___c::FileSystemFileStorage___c() {}
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.SaveFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::FileSystemFileStorage::*)(::StringW, ::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::FileSystemFileStorage::SaveFileAsync)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x22a5150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "SaveFileAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.LoadFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::StringW>* (
    ::GlobalNamespace::FileSystemFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::FileSystemFileStorage::LoadFileAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22a544c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "LoadFileAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.DeleteFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::FileSystemFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::FileSystemFileStorage::DeleteFileAsync)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x22a5564;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "DeleteFileAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.FileExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::FileSystemFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::FileSystemFileStorage::FileExistsAsync)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x22a5634;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "FileExistsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.GetCommandQueue
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BackgroundCommandQueue* (::GlobalNamespace::FileSystemFileStorage::*)(::StringW)>(
    &::GlobalNamespace::FileSystemFileStorage::GetCommandQueue)> {
  constexpr static std::size_t size = 0x104;
  constexpr static std::size_t addrs = 0x22a5348;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "GetCommandQueue",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.GetFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::FileSystemFileStorage::*)(::StringW, ::GlobalNamespace::StoragePreference)>(
    &::GlobalNamespace::FileSystemFileStorage::GetFilePath)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x22a5204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "GetFilePath", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.GetBackupFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::FileSystemFileStorage::GetBackupFilePath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22a574c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "GetBackupFilePath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.GetTempFilePath
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (*)(::StringW)>(&::GlobalNamespace::FileSystemFileStorage::GetTempFilePath)> {
  constexpr static std::size_t size = 0x4c;
  constexpr static std::size_t addrs = 0x22a5798;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "GetTempFilePath",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::FileSystemFileStorage::*)()>(&::GlobalNamespace::FileSystemFileStorage::_ctor)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x22a57e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::FileSystemFileStorage::__cordl_internal_get__persistentDataPath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____persistentDataPath;
}
constexpr ::StringW const& GlobalNamespace::FileSystemFileStorage::__cordl_internal_get__persistentDataPath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____persistentDataPath;
}
constexpr void GlobalNamespace::FileSystemFileStorage::__cordl_internal_set__persistentDataPath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____persistentDataPath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*&
GlobalNamespace::FileSystemFileStorage::__cordl_internal_get__commandQueueMap() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandQueueMap;
}
constexpr ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* const&
GlobalNamespace::FileSystemFileStorage::__cordl_internal_get__commandQueueMap() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____commandQueueMap;
}
constexpr void
GlobalNamespace::FileSystemFileStorage::__cordl_internal_set__commandQueueMap(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____commandQueueMap)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::FileSystemFileStorage::SaveFileAsync(::StringW fileName, ::StringW value, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "SaveFileAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, fileName, value, storageLocation);
}
inline ::System::Threading::Tasks::Task_1<::StringW>* GlobalNamespace::FileSystemFileStorage::LoadFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "LoadFileAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::StringW>*, false>(this, ___internal_method, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task* GlobalNamespace::FileSystemFileStorage::DeleteFileAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "DeleteFileAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, fileName, storageLocation);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::FileSystemFileStorage::FileExistsAsync(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "FileExistsAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, fileName, storageLocation);
}
inline ::GlobalNamespace::BackgroundCommandQueue* GlobalNamespace::FileSystemFileStorage::GetCommandQueue(::StringW fileName) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "GetCommandQueue", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BackgroundCommandQueue*, false>(this, ___internal_method, fileName);
}
inline ::StringW GlobalNamespace::FileSystemFileStorage::GetFilePath(::StringW fileName, ::GlobalNamespace::StoragePreference storageLocation) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "GetFilePath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::StoragePreference>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method, fileName, storageLocation);
}
inline ::StringW GlobalNamespace::FileSystemFileStorage::GetBackupFilePath(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "GetBackupFilePath",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, filePath);
}
inline ::StringW GlobalNamespace::FileSystemFileStorage::GetTempFilePath(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), "GetTempFilePath", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(nullptr, ___internal_method, filePath);
}
inline void GlobalNamespace::FileSystemFileStorage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::FileSystemFileStorage* GlobalNamespace::FileSystemFileStorage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemFileStorage*>());
}
/// @brief Convert operator to "::GlobalNamespace::IFileStorage"
constexpr GlobalNamespace::FileSystemFileStorage::operator ::GlobalNamespace::IFileStorage*() noexcept {
  return static_cast<::GlobalNamespace::IFileStorage*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFileStorage"
constexpr ::GlobalNamespace::IFileStorage* GlobalNamespace::FileSystemFileStorage::i___GlobalNamespace__IFileStorage() noexcept {
  return static_cast<::GlobalNamespace::IFileStorage*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemFileStorage::FileSystemFileStorage() {}

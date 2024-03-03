#pragma once
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_1_impl.hpp"
#include "GlobalNamespace/zzzz__SyncBackgroundCommand_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__FileSystemFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__BackgroundCommandQueue_def.hpp"
#include "GlobalNamespace/zzzz__FileSystemFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__IFileStorage_def.hpp"
#include "GlobalNamespace/zzzz__StoragePreference_def.hpp"
#include "System/Collections/Concurrent/zzzz__ConcurrentDictionary_2_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::*)(::StringW, ::StringW)>(
    &::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::_ctor)> {
  constexpr static std::size_t size = 0x2c;
  constexpr static std::size_t addrs = 0xe8f3a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::*)()>(
    &::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0xe8f8f8;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::StringW& GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::__cordl_internal_get__value() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr ::StringW const& GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::__cordl_internal_get__value() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____value;
}
constexpr void GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::__cordl_internal_set__value(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____value)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand* GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::New_ctor(::StringW filePath, ::StringW value) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand*>(filePath, value));
}
inline void GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::_ctor(::StringW filePath, ::StringW value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath, value);
}
inline void GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileSystemFileStorage__SaveFileCommand::__FileSystemFileStorage__SaveFileCommand() {}
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::*)(::StringW)>(
    &::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe8f590;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::*)()>(
    &::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe8f9dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand* GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::New_ctor(::StringW filePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand*>(filePath));
}
inline void GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::_ctor(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline ::StringW GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileSystemFileStorage__LoadFileCommand::__FileSystemFileStorage__LoadFileCommand() {}
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::*)(::StringW)>(
    &::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::_ctor)> {
  constexpr static std::size_t size = 0x28;
  constexpr static std::size_t addrs = 0xe8f698;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::*)()>(
    &::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe8fa94;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand* GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::New_ctor(::StringW filePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand*>(filePath));
}
inline void GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::_ctor(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline void GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileSystemFileStorage__DeleteFileCommand::__FileSystemFileStorage__DeleteFileCommand() {}
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::*)(::StringW)>(
    &::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::_ctor)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe8f77c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand.ExecuteInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::*)()>(
    &::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::ExecuteInternal)> {
  constexpr static std::size_t size = 0x38;
  constexpr static std::size_t addrs = 0xe8facc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand*>::get(), 5));
    return ___internal_method;
  }
};
constexpr ::StringW& GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::__cordl_internal_get__filePath() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr ::StringW const& GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::__cordl_internal_get__filePath() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____filePath;
}
constexpr void GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::__cordl_internal_set__filePath(::StringW value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____filePath)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand* GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::New_ctor(::StringW filePath) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand*>(filePath));
}
inline void GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::_ctor(::StringW filePath) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand*>::get(), ".ctor",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, filePath);
}
inline bool GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::ExecuteInternal() {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand*>::get(), 5)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileSystemFileStorage__FileExistsCommand::__FileSystemFileStorage__FileExistsCommand() {}
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__FileSystemFileStorage____c::*)()>(
    &::GlobalNamespace::__FileSystemFileStorage____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0xe8fb68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__FileSystemFileStorage____c._GetCommandQueue_b__6_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BackgroundCommandQueue* (::GlobalNamespace::__FileSystemFileStorage____c::*)(::StringW)>(
    &::GlobalNamespace::__FileSystemFileStorage____c::_GetCommandQueue_b__6_0)> {
  constexpr static std::size_t size = 0x5c;
  constexpr static std::size_t addrs = 0xe8fb70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage____c*>::get(), "<GetCommandQueue>b__6_0",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__FileSystemFileStorage____c::setStaticF___9(::GlobalNamespace::__FileSystemFileStorage____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__FileSystemFileStorage____c*, "<>9",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage____c*>::get>(
      std::forward<::GlobalNamespace::__FileSystemFileStorage____c*>(value));
}
inline ::GlobalNamespace::__FileSystemFileStorage____c* GlobalNamespace::__FileSystemFileStorage____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__FileSystemFileStorage____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage____c*>::get>();
}
inline void GlobalNamespace::__FileSystemFileStorage____c::setStaticF___9__6_0(::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*, "<>9__6_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage____c*>::get>(
      std::forward<::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*>(value));
}
inline ::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>* GlobalNamespace::__FileSystemFileStorage____c::getStaticF___9__6_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*, "<>9__6_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage____c*>::get>();
}
inline ::GlobalNamespace::__FileSystemFileStorage____c* GlobalNamespace::__FileSystemFileStorage____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__FileSystemFileStorage____c*>());
}
inline void GlobalNamespace::__FileSystemFileStorage____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BackgroundCommandQueue* GlobalNamespace::__FileSystemFileStorage____c::_GetCommandQueue_b__6_0(::StringW _) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__FileSystemFileStorage____c*>::get(), "<GetCommandQueue>b__6_0",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BackgroundCommandQueue*, false>(this, ___internal_method, _);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__FileSystemFileStorage____c::__FileSystemFileStorage____c() {}
//  Writing Method size for method: ::GlobalNamespace::FileSystemFileStorage.SaveFileAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::GlobalNamespace::FileSystemFileStorage::*)(::StringW, ::StringW, ::GlobalNamespace::StoragePreference)>(&::GlobalNamespace::FileSystemFileStorage::SaveFileAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0xe8f1d0;

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
  constexpr static std::size_t addrs = 0xe8f4d4;

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
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0xe8f5ec;

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
  constexpr static std::size_t addrs = 0xe8f6c0;

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
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0xe8f3cc;

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
  constexpr static std::size_t addrs = 0xe8f288;

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
  constexpr static std::size_t addrs = 0xe8f7d8;

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
  constexpr static std::size_t addrs = 0xe8f824;

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
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0xe8f870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::GlobalNamespace::IFileStorage"
constexpr GlobalNamespace::FileSystemFileStorage::operator ::GlobalNamespace::IFileStorage*() noexcept {
  return static_cast<::GlobalNamespace::IFileStorage*>(static_cast<void*>(this));
}
/// @brief Convert to "::GlobalNamespace::IFileStorage"
constexpr ::GlobalNamespace::IFileStorage* GlobalNamespace::FileSystemFileStorage::i___GlobalNamespace__IFileStorage() noexcept {
  return static_cast<::GlobalNamespace::IFileStorage*>(static_cast<void*>(this));
}
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
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW, ::GlobalNamespace::BackgroundCommandQueue*>*> const&
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
inline ::GlobalNamespace::FileSystemFileStorage* GlobalNamespace::FileSystemFileStorage::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::FileSystemFileStorage*>());
}
inline void GlobalNamespace::FileSystemFileStorage::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::FileSystemFileStorage*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::FileSystemFileStorage::FileSystemFileStorage() {}

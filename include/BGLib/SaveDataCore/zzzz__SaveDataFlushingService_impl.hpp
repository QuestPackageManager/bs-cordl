#pragma once
// IWYU pragma private; include "BGLib/SaveDataCore/SaveDataFlushingService.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataFlushingService_def.hpp"
#include "BGLib/SaveDataCore/zzzz__ISaveDataHandler_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataFlushingService_def.hpp"
#include "BGLib/SaveDataCore/zzzz__SaveDataResult_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
//  Writing Method size for method: ::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::*)()>(
    &::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x640;
  constexpr static std::size_t addrs = 0x109460c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1094c58;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::SaveDataCore::SaveDataFlushingService*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_allSavesSucceeded_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handler_5__4", ty:
// "::BGLib::SaveDataCore::ISaveDataHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::__SaveDataFlushingService___FlushSaveFilesAsync_d__3(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BGLib::SaveDataCore::SaveDataFlushingService* __4__this, bool _allSavesSucceeded_5__2,
    ::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*> __7__wrap2, ::BGLib::SaveDataCore::ISaveDataHandler* _handler_5__4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_allSavesSucceeded_5__2 = _allSavesSucceeded_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->_handler_5__4 = _handler_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::SaveDataCore::__SaveDataFlushingService___FlushSaveFilesAsync_d__3::__SaveDataFlushingService___FlushSaveFilesAsync_d__3() {}
//  Writing Method size for method: ::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::*)()>(
    &::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::MoveNext)> {
  constexpr static std::size_t size = 0x590;
  constexpr static std::size_t addrs = 0x1094cb0;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x1095240;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::BGLib::SaveDataCore::SaveDataFlushingService*",
// modifiers: "", def_value: Some("nullptr") }, CppParam { name: "_success_5__2", ty: "bool", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_handler_5__4", ty:
// "::BGLib::SaveDataCore::ISaveDataHandler*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::__SaveDataFlushingService___ResetChangesAsync_d__4(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::BGLib::SaveDataCore::SaveDataFlushingService* __4__this, bool _success_5__2,
    ::System::Collections::Generic::__List_1__Enumerator<::BGLib::SaveDataCore::ISaveDataHandler*> __7__wrap2, ::BGLib::SaveDataCore::ISaveDataHandler* _handler_5__4,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::BGLib::SaveDataCore::SaveDataResult> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->_success_5__2 = _success_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->_handler_5__4 = _handler_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::BGLib::SaveDataCore::__SaveDataFlushingService___ResetChangesAsync_d__4::__SaveDataFlushingService___ResetChangesAsync_d__4() {}
//  Writing Method size for method: ::BGLib::SaveDataCore::SaveDataFlushingService.Register
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::SaveDataCore::SaveDataFlushingService::*)(::BGLib::SaveDataCore::ISaveDataHandler*)>(
    &::BGLib::SaveDataCore::SaveDataFlushingService::Register)> {
  constexpr static std::size_t size = 0xa8;
  constexpr static std::size_t addrs = 0x10941f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::SaveDataCore::ISaveDataHandler*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::SaveDataFlushingService.FlushSaveFilesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::SaveDataCore::SaveDataFlushingService::*)()>(
    &::BGLib::SaveDataCore::SaveDataFlushingService::FlushSaveFilesAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x109429c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(),
                                                                               "FlushSaveFilesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::SaveDataFlushingService.ResetChangesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (::BGLib::SaveDataCore::SaveDataFlushingService::*)()>(
    &::BGLib::SaveDataCore::SaveDataFlushingService::ResetChangesAsync)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x109439c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(),
                                                                               "ResetChangesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::SaveDataFlushingService.TrackSaveBlocker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::SaveDataCore::SaveDataFlushingService::*)(::UnityEngine::Object*)>(
    &::BGLib::SaveDataCore::SaveDataFlushingService::TrackSaveBlocker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x109449c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(), "TrackSaveBlocker", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::SaveDataFlushingService.ReleaseSaveBlocker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::BGLib::SaveDataCore::SaveDataFlushingService::*)(::UnityEngine::Object*)>(
    &::BGLib::SaveDataCore::SaveDataFlushingService::ReleaseSaveBlocker)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x10944f4;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(), "ReleaseSaveBlocker", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::BGLib::SaveDataCore::SaveDataFlushingService._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::BGLib::SaveDataCore::SaveDataFlushingService::*)()>(&::BGLib::SaveDataCore::SaveDataFlushingService::_ctor)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x109454c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*& BGLib::SaveDataCore::SaveDataFlushingService::__cordl_internal_get_blockingObjects() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockingObjects;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>*> const&
BGLib::SaveDataCore::SaveDataFlushingService::__cordl_internal_get_blockingObjects() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___blockingObjects;
}
constexpr void BGLib::SaveDataCore::SaveDataFlushingService::__cordl_internal_set_blockingObjects(::System::Collections::Generic::HashSet_1<::UnityW<::UnityEngine::Object>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___blockingObjects)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::BGLib::SaveDataCore::ISaveDataHandler*>*& BGLib::SaveDataCore::SaveDataFlushingService::__cordl_internal_get__handlers() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::BGLib::SaveDataCore::ISaveDataHandler*>*> const&
BGLib::SaveDataCore::SaveDataFlushingService::__cordl_internal_get__handlers() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____handlers;
}
constexpr void BGLib::SaveDataCore::SaveDataFlushingService::__cordl_internal_set__handlers(::System::Collections::Generic::List_1<::BGLib::SaveDataCore::ISaveDataHandler*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____handlers)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void BGLib::SaveDataCore::SaveDataFlushingService::Register(::BGLib::SaveDataCore::ISaveDataHandler* handler) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(), "Register", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::BGLib::SaveDataCore::ISaveDataHandler*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handler);
}
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::SaveDataCore::SaveDataFlushingService::FlushSaveFilesAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(),
                                                                             "FlushSaveFilesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* BGLib::SaveDataCore::SaveDataFlushingService::ResetChangesAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(),
                                                                             "ResetChangesAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method);
}
inline bool BGLib::SaveDataCore::SaveDataFlushingService::TrackSaveBlocker(::UnityEngine::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(), "TrackSaveBlocker", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline bool BGLib::SaveDataCore::SaveDataFlushingService::ReleaseSaveBlocker(::UnityEngine::Object* o) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(), "ReleaseSaveBlocker", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Object*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, o);
}
inline ::BGLib::SaveDataCore::SaveDataFlushingService* BGLib::SaveDataCore::SaveDataFlushingService::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::BGLib::SaveDataCore::SaveDataFlushingService*>());
}
inline void BGLib::SaveDataCore::SaveDataFlushingService::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::BGLib::SaveDataCore::SaveDataFlushingService*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::BGLib::SaveDataCore::SaveDataFlushingService::SaveDataFlushingService() {}

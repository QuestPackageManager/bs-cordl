#pragma once
#include "GlobalNamespace/zzzz__EntitlementStatus_impl.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_impl.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Threading/zzzz__CancellationToken_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelPack_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelSO_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsModel_def.hpp"
#include "GlobalNamespace/zzzz__BeatmapLevelsRepository_def.hpp"
#include "GlobalNamespace/zzzz__EntitlementStatus_def.hpp"
#include "GlobalNamespace/zzzz__IBeatmapLevelLoader_def.hpp"
#include "GlobalNamespace/zzzz__IEntitlementModel_def.hpp"
#include "GlobalNamespace/zzzz__LoadBeatmapLevelDataResult_def.hpp"
#include "GlobalNamespace/zzzz__PackDefinitionSO_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerator_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/zzzz__IEnumerable_def.hpp"
#include "System/Collections/zzzz__IEnumerator_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/zzzz__CancellationToken_def.hpp"
#include "System/zzzz__Func_2_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__Object_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::*)()>(
    &::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x3f8;
  constexpr static std::size_t addrs = 0x12f1db4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12f21ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::BeatmapLevelsModel*", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name:
// "cancellationToken", ty: "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __t__builder, ::GlobalNamespace::BeatmapLevelsModel* __4__this,
    ::StringW levelID, ::System::Threading::CancellationToken cancellationToken, ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::LoadBeatmapLevelDataResult> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelID = levelID;
  this->cancellationToken = cancellationToken;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20::__BeatmapLevelsModel___LoadBeatmapLevelDataAsync_d__20() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::*)()>(
    &::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x12f2204;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x58;
  constexpr static std::size_t addrs = 0x12f25e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
inline void GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::BeatmapLevelsModel*", modifiers:
// "", def_value: Some("nullptr") }, CppParam { name: "levelID", ty: "::StringW", modifiers: "", def_value: Some("nullptr") }, CppParam { name: "cancellationToken", ty:
// "::System::Threading::CancellationToken", modifiers: "", def_value: Some("{}") }, CppParam { name: "_beatmapLevel_5__2", ty: "::GlobalNamespace::BeatmapLevel*", modifiers: "", def_value:
// Some("nullptr") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus>", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__2", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::GlobalNamespace::BeatmapLevelsModel* __4__this, ::StringW levelID,
    ::System::Threading::CancellationToken cancellationToken, ::GlobalNamespace::BeatmapLevel* _beatmapLevel_5__2,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::GlobalNamespace::EntitlementStatus> __u__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->levelID = levelID;
  this->cancellationToken = cancellationToken;
  this->_beatmapLevel_5__2 = _beatmapLevel_5__2;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21::__BeatmapLevelsModel___CheckBeatmapLevelDataExistsAsync_d__21() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::*)(int32_t)>(
    &::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::_ctor)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x12f1d80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(), ".ctor",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22.System_IDisposable_Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::*)()>(
    &::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_IDisposable_Dispose)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12f2638;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                                 "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::*)()>(
    &::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::MoveNext)> {
  constexpr static std::size_t size = 0xd8;
  constexpr static std::size_t addrs = 0x12f263c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22.System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::GlobalNamespace::PackDefinitionSO> (::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::*)()>(
    &::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f2714;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                    "System.Collections.Generic.IEnumerator<PackDefinitionSO>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22.System_Collections_IEnumerator_Reset
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::*)()>(
    &::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_IEnumerator_Reset)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x12f271c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                                 "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22.System_Collections_IEnumerator_get_Current
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Object* (::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::*)()>(
    &::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_IEnumerator_get_Current)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f275c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                                 "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22.System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* (::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::*)()>(
        &::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x12f2764;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                    "System.Collections.Generic.IEnumerable<PackDefinitionSO>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22.System_Collections_IEnumerable_GetEnumerator
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::IEnumerator* (::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::*)()>(
    &::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_IEnumerable_GetEnumerator)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x12f2818;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                                 "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
constexpr GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::operator ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
constexpr ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::i___System__Collections__Generic__IEnumerable_1___UnityW___GlobalNamespace__PackDefinitionSO__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerable"
constexpr GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::operator ::System::Collections::IEnumerable*() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerable"
constexpr ::System::Collections::IEnumerable* GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::i___System__Collections__IEnumerable() noexcept {
  return static_cast<::System::Collections::IEnumerable*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
constexpr GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::operator ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>"
constexpr ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::i___System__Collections__Generic__IEnumerator_1___UnityW___GlobalNamespace__PackDefinitionSO__() noexcept {
  return static_cast<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::Collections::IEnumerator"
constexpr GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::operator ::System::Collections::IEnumerator*() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::Collections::IEnumerator"
constexpr ::System::Collections::IEnumerator* GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::i___System__Collections__IEnumerator() noexcept {
  return static_cast<::System::Collections::IEnumerator*>(static_cast<void*>(this));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___1__state() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___1__state() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____1__state;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set___1__state(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____1__state = value;
}
constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO>& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___2__current() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr ::UnityW<::GlobalNamespace::PackDefinitionSO> const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___2__current() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____2__current;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set___2__current(::UnityW<::GlobalNamespace::PackDefinitionSO> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____2__current)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___l__initialThreadId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___l__initialThreadId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____l__initialThreadId;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set___l__initialThreadId(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____l__initialThreadId = value;
}
constexpr ::GlobalNamespace::BeatmapLevelsModel*& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsModel*> const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set___4__this(::GlobalNamespace::BeatmapLevelsModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get_include() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include;
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get_include() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___include;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set_include(::GlobalNamespace::__PackDefinitionSO__Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___include = value;
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___3__include() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__include;
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___3__include() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__include;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set___3__include(::GlobalNamespace::__PackDefinitionSO__Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__include = value;
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get_exclude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exclude;
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get_exclude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___exclude;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set_exclude(::GlobalNamespace::__PackDefinitionSO__Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___exclude = value;
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___3__exclude() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__exclude;
}
constexpr ::GlobalNamespace::__PackDefinitionSO__Tags const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___3__exclude() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____3__exclude;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set___3__exclude(::GlobalNamespace::__PackDefinitionSO__Tags value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____3__exclude = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>&
GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___7__wrap1() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const&
GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___7__wrap1() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap1;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set___7__wrap1(
    ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____7__wrap1)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___7__wrap2() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr int32_t const& GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_get___7__wrap2() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____7__wrap2;
}
constexpr void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__cordl_internal_set___7__wrap2(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->_____7__wrap2 = value;
}
inline ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22* GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::New_ctor(int32_t __1__state) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>(__1__state));
}
inline void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::_ctor(int32_t __1__state) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(), ".ctor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, __1__state);
}
inline void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_IDisposable_Dispose() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                               "System.IDisposable.Dispose", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::UnityW<::GlobalNamespace::PackDefinitionSO> GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_Generic_IEnumerator_PackDefinitionSO__get_Current() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                  "System.Collections.Generic.IEnumerator<PackDefinitionSO>.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::GlobalNamespace::PackDefinitionSO>, false>(this, ___internal_method);
}
inline void GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_IEnumerator_Reset() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                               "System.Collections.IEnumerator.Reset", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Object* GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_IEnumerator_get_Current() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                               "System.Collections.IEnumerator.get_Current", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Object*, false>(this, ___internal_method);
}
inline ::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_Generic_IEnumerable_PackDefinitionSO__GetEnumerator() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                  "System.Collections.Generic.IEnumerable<PackDefinitionSO>.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerator_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, false>(this, ___internal_method);
}
inline ::System::Collections::IEnumerator* GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::System_Collections_IEnumerable_GetEnumerator() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22*>::get(),
                                               "System.Collections.IEnumerable.GetEnumerator", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::IEnumerator*, false>(this, ___internal_method);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelsModel___SelectPacks_d__22::__BeatmapLevelsModel___SelectPacks_d__22() {}
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel____c._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__BeatmapLevelsModel____c::*)()>(&::GlobalNamespace::__BeatmapLevelsModel____c::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f2880;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__BeatmapLevelsModel____c._CreateBeatmapLevelPack_b__25_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevel* (
    ::GlobalNamespace::__BeatmapLevelsModel____c::*)(::GlobalNamespace::BeatmapLevelSO*)>(&::GlobalNamespace::__BeatmapLevelsModel____c::_CreateBeatmapLevelPack_b__25_0)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f2888;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get(), "<CreateBeatmapLevelPack>b__25_0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSO*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__BeatmapLevelsModel____c::setStaticF___9(::GlobalNamespace::__BeatmapLevelsModel____c* value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::__BeatmapLevelsModel____c*, "<>9", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get>(
      std::forward<::GlobalNamespace::__BeatmapLevelsModel____c*>(value));
}
inline ::GlobalNamespace::__BeatmapLevelsModel____c* GlobalNamespace::__BeatmapLevelsModel____c::getStaticF___9() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::__BeatmapLevelsModel____c*, "<>9",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get>();
}
inline void GlobalNamespace::__BeatmapLevelsModel____c::setStaticF___9__25_0(::System::Func_2<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::GlobalNamespace::BeatmapLevel*>* value) {
  ::cordl_internals::setStaticField<::System::Func_2<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::GlobalNamespace::BeatmapLevel*>*, "<>9__25_0",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get>(
      std::forward<::System::Func_2<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::GlobalNamespace::BeatmapLevel*>*>(value));
}
inline ::System::Func_2<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::GlobalNamespace::BeatmapLevel*>* GlobalNamespace::__BeatmapLevelsModel____c::getStaticF___9__25_0() {
  return ::cordl_internals::getStaticField<::System::Func_2<::UnityW<::GlobalNamespace::BeatmapLevelSO>, ::GlobalNamespace::BeatmapLevel*>*, "<>9__25_0",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get>();
}
inline ::GlobalNamespace::__BeatmapLevelsModel____c* GlobalNamespace::__BeatmapLevelsModel____c::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::__BeatmapLevelsModel____c*>());
}
inline void GlobalNamespace::__BeatmapLevelsModel____c::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::__BeatmapLevelsModel____c::_CreateBeatmapLevelPack_b__25_0(::GlobalNamespace::BeatmapLevelSO* l) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__BeatmapLevelsModel____c*>::get(), "<CreateBeatmapLevelPack>b__25_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*, false>(this, ___internal_method, l);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__BeatmapLevelsModel____c::__BeatmapLevelsModel____c() {}
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_packDefinitions
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::get_packDefinitions)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f0f0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                               "get_packDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.get_entitlements
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::IEntitlementModel* (::GlobalNamespace::BeatmapLevelsModel::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel::get_entitlements)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x12f0f14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                               "get_entitlements", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)(
    ::GlobalNamespace::BeatmapLevelsEntitlementModel*, ::GlobalNamespace::IBeatmapLevelLoader*, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*)>(
    &::GlobalNamespace::BeatmapLevelsModel::_ctor)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x12f0f1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 3>{
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelLoader*>::get(),
                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x12f18c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.ClearLoadedBeatmapLevelsCaches
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x12f1960;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                               "ClearLoadedBeatmapLevelsCaches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.ReloadCustomLevelPackCollectionAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)(::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync)> {
  constexpr static std::size_t size = 0x68;
  constexpr static std::size_t addrs = 0x12f1a04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "ReloadCustomLevelPackCollectionAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetLevelPackForLevelId
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(
    &::GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x12f1a6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "GetLevelPackForLevelId",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetLevelPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPack* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(
    &::GlobalNamespace::BeatmapLevelsModel::GetLevelPack)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x12f1a84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "GetLevelPack", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetAllPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)()>(&::GlobalNamespace::BeatmapLevelsModel::GetAllPacks)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x12f1a9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "GetAllPacks",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.GetBeatmapLevel
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevel* (::GlobalNamespace::BeatmapLevelsModel::*)(::StringW)>(
    &::GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevel)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x12f1ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "GetBeatmapLevel", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.LoadBeatmapLevelDataAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelsModel::LoadBeatmapLevelDataAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x12f1ad0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "LoadBeatmapLevelDataAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.CheckBeatmapLevelDataExistsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)(::StringW, ::System::Threading::CancellationToken)>(&::GlobalNamespace::BeatmapLevelsModel::CheckBeatmapLevelDataExistsAsync)> {
  constexpr static std::size_t size = 0x110;
  constexpr static std::size_t addrs = 0x12f1be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "CheckBeatmapLevelDataExistsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.SelectPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* (
    ::GlobalNamespace::BeatmapLevelsModel::*)(::GlobalNamespace::__PackDefinitionSO__Tags, ::GlobalNamespace::__PackDefinitionSO__Tags)>(&::GlobalNamespace::BeatmapLevelsModel::SelectPacks)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x12f1cf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "SelectPacks", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__Tags>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__Tags>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.UpdateLoadedPreviewLevels
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::BeatmapLevelsModel::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels)> {
  constexpr static std::size_t size = 0x370;
  constexpr static std::size_t addrs = 0x12f1550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                               "UpdateLoadedPreviewLevels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.CreateAllLoadedBeatmapLevelPacks
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelsRepository* (::GlobalNamespace::BeatmapLevelsModel::*)()>(
    &::GlobalNamespace::BeatmapLevelsModel::CreateAllLoadedBeatmapLevelPacks)> {
  constexpr static std::size_t size = 0x180;
  constexpr static std::size_t addrs = 0x12f13d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "CreateAllLoadedBeatmapLevelPacks",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::BeatmapLevelsModel.CreateBeatmapLevelPack
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::BeatmapLevelPack* (*)(::GlobalNamespace::PackDefinitionSO*)>(
    &::GlobalNamespace::BeatmapLevelsModel::CreateBeatmapLevelPack)> {
  constexpr static std::size_t size = 0x19c;
  constexpr static std::size_t addrs = 0x12f1234;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "CreateBeatmapLevelPack", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
    return ___internal_method;
  }
};
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::BeatmapLevelsModel::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::BeatmapLevelsModel::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_ostAndExtrasBeatmapLevelsRepository() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ostAndExtrasBeatmapLevelsRepository;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const&
GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_ostAndExtrasBeatmapLevelsRepository() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___ostAndExtrasBeatmapLevelsRepository;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_ostAndExtrasBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___ostAndExtrasBeatmapLevelsRepository)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_dlcBeatmapLevelsRepository() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcBeatmapLevelsRepository;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_dlcBeatmapLevelsRepository() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___dlcBeatmapLevelsRepository;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_dlcBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___dlcBeatmapLevelsRepository)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr int32_t& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_allPacksCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allPacksCount;
}
constexpr int32_t const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_allPacksCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___allPacksCount;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_allPacksCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___allPacksCount = value;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>&
GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__packDefinitions() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packDefinitions;
}
constexpr ::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> const&
GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__packDefinitions() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____packDefinitions;
}
constexpr void
GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__packDefinitions(::ArrayW<::UnityW<::GlobalNamespace::PackDefinitionSO>, ::Array<::UnityW<::GlobalNamespace::PackDefinitionSO>>*> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____packDefinitions)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsRepository*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__allLoadedBeatmapLevelsRepository() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLoadedBeatmapLevelsRepository;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsRepository*> const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__allLoadedBeatmapLevelsRepository() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____allLoadedBeatmapLevelsRepository;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__allLoadedBeatmapLevelsRepository(::GlobalNamespace::BeatmapLevelsRepository* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____allLoadedBeatmapLevelsRepository)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::BeatmapLevelsEntitlementModel*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__entitlements() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlements;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelsEntitlementModel*> const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__entitlements() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____entitlements;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__entitlements(::GlobalNamespace::BeatmapLevelsEntitlementModel* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____entitlements)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__loadedBeatmapLevels() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedBeatmapLevels;
}
constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>*> const&
GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get__loadedBeatmapLevels() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____loadedBeatmapLevels;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set__loadedBeatmapLevels(::System::Collections::Generic::Dictionary_2<::StringW, ::GlobalNamespace::BeatmapLevel*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____loadedBeatmapLevels)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::IBeatmapLevelLoader*& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_levelLoader() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoader;
}
constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelLoader*> const& GlobalNamespace::BeatmapLevelsModel::__cordl_internal_get_levelLoader() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___levelLoader;
}
constexpr void GlobalNamespace::BeatmapLevelsModel::__cordl_internal_set_levelLoader(::GlobalNamespace::IBeatmapLevelLoader* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___levelLoader)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* GlobalNamespace::BeatmapLevelsModel::get_packDefinitions() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                             "get_packDefinitions", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::IEntitlementModel* GlobalNamespace::BeatmapLevelsModel::get_entitlements() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "get_entitlements",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::IEntitlementModel*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelsModel*
GlobalNamespace::BeatmapLevelsModel::New_ctor(::GlobalNamespace::BeatmapLevelsEntitlementModel* entitlementChecker, ::GlobalNamespace::IBeatmapLevelLoader* beatmapLevelLoader,
                                              ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::BeatmapLevelsModel*>(entitlementChecker, beatmapLevelLoader, packDefinitions));
}
inline void GlobalNamespace::BeatmapLevelsModel::_ctor(::GlobalNamespace::BeatmapLevelsEntitlementModel* entitlementChecker, ::GlobalNamespace::IBeatmapLevelLoader* beatmapLevelLoader,
                                                       ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>* packDefinitions) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::BeatmapLevelsEntitlementModel*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::IBeatmapLevelLoader*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, entitlementChecker, beatmapLevelLoader, packDefinitions);
}
inline void GlobalNamespace::BeatmapLevelsModel::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::BeatmapLevelsModel::ClearLoadedBeatmapLevelsCaches() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                             "ClearLoadedBeatmapLevelsCaches", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>*
GlobalNamespace::BeatmapLevelsModel::ReloadCustomLevelPackCollectionAsync(::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "ReloadCustomLevelPackCollectionAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::BeatmapLevelsRepository*>*, false>(this, ___internal_method, cancellationToken);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::GetLevelPackForLevelId(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "GetLevelPackForLevelId",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*, false>(this, ___internal_method, levelId);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::GetLevelPack(::StringW levelPackId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "GetLevelPack", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*, false>(this, ___internal_method, levelPackId);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>* GlobalNamespace::BeatmapLevelsModel::GetAllPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "GetAllPacks",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::BeatmapLevelPack*>*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevel* GlobalNamespace::BeatmapLevelsModel::GetBeatmapLevel(::StringW levelId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "GetBeatmapLevel", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevel*, false>(this, ___internal_method, levelId);
}
inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*
GlobalNamespace::BeatmapLevelsModel::LoadBeatmapLevelDataAsync(::StringW levelID, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "LoadBeatmapLevelDataAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::GlobalNamespace::LoadBeatmapLevelDataResult>*, false>(this, ___internal_method, levelID, cancellationToken);
}
inline ::System::Threading::Tasks::Task_1<bool>* GlobalNamespace::BeatmapLevelsModel::CheckBeatmapLevelDataExistsAsync(::StringW levelID, ::System::Threading::CancellationToken cancellationToken) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "CheckBeatmapLevelDataExistsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Threading::CancellationToken>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, levelID, cancellationToken);
}
/// @param exclude: ::GlobalNamespace::__PackDefinitionSO__Tags (default: static_cast<int32_t>(0x0))
inline ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*
GlobalNamespace::BeatmapLevelsModel::SelectPacks(::GlobalNamespace::__PackDefinitionSO__Tags include, ::GlobalNamespace::__PackDefinitionSO__Tags exclude) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "SelectPacks", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__Tags>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::__PackDefinitionSO__Tags>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::PackDefinitionSO>>*, false>(this, ___internal_method, include, exclude);
}
inline void GlobalNamespace::BeatmapLevelsModel::UpdateLoadedPreviewLevels() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                             "UpdateLoadedPreviewLevels", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelsRepository* GlobalNamespace::BeatmapLevelsModel::CreateAllLoadedBeatmapLevelPacks() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(),
                                                                             "CreateAllLoadedBeatmapLevelPacks", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelsRepository*, false>(this, ___internal_method);
}
inline ::GlobalNamespace::BeatmapLevelPack* GlobalNamespace::BeatmapLevelsModel::CreateBeatmapLevelPack(::GlobalNamespace::PackDefinitionSO* pack) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::BeatmapLevelsModel*>::get(), "CreateBeatmapLevelPack", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::PackDefinitionSO*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::BeatmapLevelPack*, false>(nullptr, ___internal_method, pack);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::BeatmapLevelsModel::BeatmapLevelsModel() {}

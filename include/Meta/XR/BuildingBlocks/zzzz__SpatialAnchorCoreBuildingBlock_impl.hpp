#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SpatialAnchorCoreBuildingBlock.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/Collections/Generic/zzzz__List_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x320;
  constexpr static std::size_t addrs = 0x5889fcc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588a2ec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Guid uuid, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->uuid = uuid;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuid_d__26() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::MoveNext)> {
  constexpr static std::size_t size = 0x50c;
  constexpr static std::size_t addrs = 0x588a2f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29>::get(), "MoveNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x588a800;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor,
    ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> __u__1,
    ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->anchor = anchor;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29::SpatialAnchorCoreBuildingBlock__EraseAnchorByUuidAsync_d__29() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x584;
  constexpr static std::size_t addrs = 0x588a86c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588adf0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "___5__2", ty:
// "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_anchorsToErase_5__3", ty:
// "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__4", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
    ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__2,
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _anchorsToErase_5__3, int32_t _i_5__4, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->___5__2 = ___5__2;
  this->_anchorsToErase_5__3 = _anchorsToErase_5__3;
  this->_i_5__4 = _i_5__4;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28::SpatialAnchorCoreBuildingBlock__EraseAnchorsAsync_d__28() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x588adf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21>::get(), "MoveNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588b084;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
    ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->anchor = anchor;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21::SpatialAnchorCoreBuildingBlock__InitSpatialAnchorAsync_d__21() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::MoveNext)> {
  constexpr static std::size_t size = 0xbf0;
  constexpr static std::size_t addrs = 0x588b08c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x588bc7c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "uuids", ty:
// "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_unboundAnchorsPoolHandle_5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "_unboundAnchors_5__3", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "___5__4", ty:
// "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_loadedAnchors_5__5", ty:
// "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap5", ty: "::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_unboundAnchor_5__7", ty: "::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
    ::UnityW<::UnityEngine::GameObject> prefab, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
    ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* _unboundAnchors_5__3,
    ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__4,
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _loadedAnchors_5__5,
    ::GlobalNamespace::OVRTask_1_Awaiter<
        ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
        __u__1,
    ::System::Collections::Generic::List_1_Enumerator<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> __7__wrap5, ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor _unboundAnchor_5__7,
    ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->uuids = uuids;
  this->prefab = prefab;
  this->__4__this = __4__this;
  this->_unboundAnchorsPoolHandle_5__2 = _unboundAnchorsPoolHandle_5__2;
  this->_unboundAnchors_5__3 = _unboundAnchors_5__3;
  this->___5__4 = ___5__4;
  this->_loadedAnchors_5__5 = _loadedAnchors_5__5;
  this->__u__1 = __u__1;
  this->__7__wrap5 = __7__wrap5;
  this->_unboundAnchor_5__7 = _unboundAnchor_5__7;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27::SpatialAnchorCoreBuildingBlock__LoadAnchorsAsync_d__27() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x5f8;
  constexpr static std::size_t addrs = 0x588bc84;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x588c27c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "___5__2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor,
    ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this, ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> ___5__2,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->anchor = anchor;
  this->__4__this = __4__this;
  this->___5__2 = ___5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23::SpatialAnchorCoreBuildingBlock__SaveAsync_d__23() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x3a4;
  constexpr static std::size_t addrs = 0x588c2e8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x588c68c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "_timeoutThreshold_5__2", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_startTime_5__3", ty: "float_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> __4__this,
    ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor, float_t _timeoutThreshold_5__2, float_t _startTime_5__3, ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->anchor = anchor;
  this->_timeoutThreshold_5__2 = _timeoutThreshold_5__2;
  this->_startTime_5__3 = _startTime_5__3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22::SpatialAnchorCoreBuildingBlock__WaitForInit_d__22() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_OnAnchorCreateCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (
        ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorCreateCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a68;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                 "get_OnAnchorCreateCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_OnAnchorCreateCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(
    ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorCreateCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a70;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_OnAnchorCreateCompleted",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_OnAnchorsLoadCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<
    ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorsLoadCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a78;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                 "get_OnAnchorsLoadCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_OnAnchorsLoadCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(
    ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorsLoadCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a80;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                 "set_OnAnchorsLoadCompleted", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                     ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_OnAnchorsEraseAllCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (
    ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorsEraseAllCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                 "get_OnAnchorsEraseAllCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_OnAnchorsEraseAllCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(
    ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorsEraseAllCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a90;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_OnAnchorsEraseAllCompleted",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_OnAnchorEraseCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (
        ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorEraseCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a98;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                 "get_OnAnchorEraseCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_OnAnchorEraseCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(
    ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorEraseCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889aa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_OnAnchorEraseCompleted",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                        ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.get_Result
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRSpatialAnchor_OperationResult (
    ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889aa8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "get_Result",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.set_Result
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(
    ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_Result)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889ab0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_Result", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.InstantiateSpatialAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::InstantiateSpatialAnchor)> {
  constexpr static std::size_t size = 0x178;
  constexpr static std::size_t addrs = 0x5886e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "InstantiateSpatialAnchor",
                                                 std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.InitSpatialAnchorAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::InitSpatialAnchorAsync)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5889ab8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "InitSpatialAnchorAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.WaitForInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::WaitForInit)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x58882c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "WaitForInit", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::SaveAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5888380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.LoadAndInstantiateAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(
    ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Guid>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::LoadAndInstantiateAnchors)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5889b64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.EraseAllAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAllAnchors)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5889d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "EraseAllAnchors",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.EraseAnchorByUuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::System::Guid)>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorByUuid)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5889e50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "EraseAnchorByUuid",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.LoadAnchorsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(
    ::UnityEngine::GameObject*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::LoadAnchorsAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5889c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "LoadAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.EraseAnchorsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorsAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5889dac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "EraseAnchorsAsync",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.EraseAnchorByUuidAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorByUuidAsync)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5889f08;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "EraseAnchorByUuidAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock.GetFirstInstance
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> (*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::GetFirstInstance)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x588614c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "GetFirstInstance",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::*)()>(
    &::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5887fa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), ".ctor",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*&
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorCreateCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorCreateCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorCreateCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorCreateCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__onAnchorCreateCompleted(
    ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAnchorCreateCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*&
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorsLoadCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorsLoadCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorsLoadCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorsLoadCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__onAnchorsLoadCompleted(
    ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAnchorsLoadCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*&
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorsEraseAllCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorsEraseAllCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorsEraseAllCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorsEraseAllCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__onAnchorsEraseAllCompleted(
    ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAnchorsEraseAllCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*&
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorEraseCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorEraseCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__onAnchorEraseCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onAnchorEraseCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__onAnchorEraseCompleted(
    ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onAnchorEraseCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__Result_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Result_k__BackingField;
}
constexpr ::GlobalNamespace::OVRSpatialAnchor_OperationResult const& Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_get__Result_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____Result_k__BackingField;
}
constexpr void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::__cordl_internal_set__Result_k__BackingField(::GlobalNamespace::OVRSpatialAnchor_OperationResult value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____Result_k__BackingField = value;
}
inline ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorCreateCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             "get_OnAnchorCreateCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, false>(
      this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorCreateCompleted(
    ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_OnAnchorCreateCompleted",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorsLoadCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             "get_OnAnchorsLoadCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*, false>(this,
                                                                                                                                                                                  ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorsLoadCompleted(
    ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_OnAnchorsLoadCompleted",
                                               std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                                   ::UnityEngine::Events::UnityEvent_1<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorsEraseAllCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             "get_OnAnchorsEraseAllCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorsEraseAllCompleted(::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_OnAnchorsEraseAllCompleted",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent_1<::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_OnAnchorEraseCompleted() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             "get_OnAnchorEraseCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, false>(
      this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_OnAnchorEraseCompleted(
    ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_OnAnchorEraseCompleted",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
                                      ::UnityEngine::Events::UnityEvent_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::GlobalNamespace::OVRSpatialAnchor_OperationResult Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::get_Result() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             "get_Result", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRSpatialAnchor_OperationResult, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::set_Result(::GlobalNamespace::OVRSpatialAnchor_OperationResult value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "set_Result", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::InstantiateSpatialAnchor(::UnityEngine::GameObject* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "InstantiateSpatialAnchor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefab, position, rotation);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::InitSpatialAnchorAsync(::GlobalNamespace::OVRSpatialAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "InitSpatialAnchorAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor);
}
inline ::System::Threading::Tasks::Task* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::WaitForInit(::GlobalNamespace::OVRSpatialAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "WaitForInit", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, anchor);
}
inline ::System::Threading::Tasks::Task* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::SaveAsync(::GlobalNamespace::OVRSpatialAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, anchor);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::LoadAndInstantiateAnchors(::UnityEngine::GameObject* prefab, ::System::Collections::Generic::List_1<::System::Guid>* uuids) {
  auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefab, uuids);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAllAnchors() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             "EraseAllAnchors", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorByUuid(::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "EraseAnchorByUuid",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, uuid);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::LoadAnchorsAsync(::UnityEngine::GameObject* prefab, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "LoadAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefab, uuids);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorsAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             "EraseAnchorsAsync", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::EraseAnchorByUuidAsync(::GlobalNamespace::OVRSpatialAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(), "EraseAnchorByUuidAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, anchor);
}
inline ::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock> Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::GetFirstInstance() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             "GetFirstInstance", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock>, false>(nullptr, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock* Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SpatialAnchorCoreBuildingBlock::SpatialAnchorCoreBuildingBlock() {}

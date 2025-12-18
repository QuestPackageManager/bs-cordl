#pragma once
// IWYU pragma private; include "Meta/XR/BuildingBlocks/SharedSpatialAnchorCore.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SpatialAnchorCoreBuildingBlock_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::*)()>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::MoveNext)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5887fa4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::SetStateMachine)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5888444;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchor", ty: "::UnityW<::GlobalNamespace::OVRSpatialAnchor>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::SharedSpatialAnchorCore__InitSpatialAnchor_d__16(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this,
    ::UnityW<::GlobalNamespace::OVRSpatialAnchor> anchor, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->anchor = anchor;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InitSpatialAnchor_d__16::SharedSpatialAnchorCore__InitSpatialAnchor_d__16() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::*)()>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::MoveNext)> {
  constexpr static std::size_t size = 0x300;
  constexpr static std::size_t addrs = 0x58884b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58887b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "rotation", ty: "::UnityEngine::Quaternion", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1",
// ty: "::System::Runtime::CompilerServices::TaskAwaiter", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::UnityW<::UnityEngine::GameObject> prefab, ::UnityEngine::Vector3 position,
    ::UnityEngine::Quaternion rotation, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this, ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->prefab = prefab;
  this->position = position;
  this->rotation = rotation;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15::SharedSpatialAnchorCore__InstantiateSpatialAnchor_d__15() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::*)()>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::MoveNext)> {
  constexpr static std::size_t size = 0x498;
  constexpr static std::size_t addrs = 0x58887b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5888c50;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "uuids", ty: "::System::Collections::Generic::List_1<::System::Guid>*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "prefab", ty: "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty:
// "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Collections::Generic::List_1<::System::Guid>* uuids,
    ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this, ::UnityW<::UnityEngine::GameObject> prefab,
    ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2,
    ::GlobalNamespace::OVRTask_1_Awaiter<
        ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
        __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->uuids = uuids;
  this->__4__this = __4__this;
  this->prefab = prefab;
  this->_unboundAnchorsPoolHandle_5__2 = _unboundAnchorsPoolHandle_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17::SharedSpatialAnchorCore__LoadAndInstantiateAnchors_d__17() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::*)()>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::MoveNext)> {
  constexpr static std::size_t size = 0x3dc;
  constexpr static std::size_t addrs = 0x5888c58;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889034;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefab", ty:
// "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_unboundAnchorsPoolHandle_5__2", ty:
// "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::System::Guid groupUuid, ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this,
    ::UnityW<::UnityEngine::GameObject> prefab, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor> _unboundAnchorsPoolHandle_5__2,
    ::GlobalNamespace::OVRTask_1_Awaiter<
        ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
        __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->groupUuid = groupUuid;
  this->__4__this = __4__this;
  this->prefab = prefab;
  this->_unboundAnchorsPoolHandle_5__2 = _unboundAnchorsPoolHandle_5__2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18::SharedSpatialAnchorCore__LoadAndInstantiateAnchorsFromGroup_d__18() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::*)()>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::MoveNext)> {
  constexpr static std::size_t size = 0xa24;
  constexpr static std::size_t addrs = 0x588903c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5889a60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19>::get(), "MoveNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "result", ty:
// "::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,::GlobalNamespace::OVRSpatialAnchor_OperationResult>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>", modifiers: "", def_value: Some("{}") }, CppParam { name: "prefab", ty:
// "::UnityW<::UnityEngine::GameObject>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_unboundAnchors_5__2", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "_loadedAnchors_5__3", ty:
// "::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty:
// "::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_i_5__5", ty: "int32_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "_unboundAnchor_5__6", ty: "::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult> result,
    ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> __4__this, ::UnityW<::UnityEngine::GameObject> prefab,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>* _unboundAnchors_5__2,
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _loadedAnchors_5__3,
    ::GlobalNamespace::OVRObjectPool_ListScope_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __7__wrap3, int32_t _i_5__5, ::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor _unboundAnchor_5__6,
    ::GlobalNamespace::OVRTask_1_Awaiter<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->result = result;
  this->__4__this = __4__this;
  this->prefab = prefab;
  this->_unboundAnchors_5__2 = _unboundAnchors_5__2;
  this->_loadedAnchors_5__3 = _loadedAnchors_5__3;
  this->__7__wrap3 = __7__wrap3;
  this->_i_5__5 = _i_5__5;
  this->_unboundAnchor_5__6 = _unboundAnchor_5__6;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19::SharedSpatialAnchorCore__LoadSharedSpatialAnchorsRoutine_d__19() {}
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.get_OnSpatialAnchorsShareCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (
        ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSpatialAnchorsShareCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58870a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                 "get_OnSpatialAnchorsShareCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.set_OnSpatialAnchorsShareCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSpatialAnchorsShareCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58870b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "set_OnSpatialAnchorsShareCompleted",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent_2<
                                        ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.get_OnSpatialAnchorsShareToGroupCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>* (
        ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSpatialAnchorsShareToGroupCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58870b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                 "get_OnSpatialAnchorsShareToGroupCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.set_OnSpatialAnchorsShareToGroupCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*)>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSpatialAnchorsShareToGroupCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58870c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "set_OnSpatialAnchorsShareToGroupCompleted",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
            ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.get_OnSharedSpatialAnchorsLoadCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* (
        ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSharedSpatialAnchorsLoadCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58870c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                 "get_OnSharedSpatialAnchorsLoadCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.set_OnSharedSpatialAnchorsLoadCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*)>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSharedSpatialAnchorsLoadCompleted)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58870d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "set_OnSharedSpatialAnchorsLoadCompleted",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent_2<
                                        ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::Start)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x58870d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                                               "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.InstantiateSpatialAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::UnityEngine::GameObject*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::InstantiateSpatialAnchor)> {
  constexpr static std::size_t size = 0x100;
  constexpr static std::size_t addrs = 0x588727c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "InstantiateSpatialAnchor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.InitSpatialAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task* (
    ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::GlobalNamespace::OVRSpatialAnchor*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::InitSpatialAnchor)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x588737c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "InitSpatialAnchor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.LoadAndInstantiateAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::UnityEngine::GameObject*, ::System::Collections::Generic::List_1<::System::Guid>*)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadAndInstantiateAnchors)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5887440;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), 4));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.LoadAndInstantiateAnchorsFromGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(::UnityEngine::GameObject*, ::System::Guid)>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadAndInstantiateAnchorsFromGroup)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58874fc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                 "LoadAndInstantiateAnchorsFromGroup", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.LoadSharedSpatialAnchorsRoutine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::UnityEngine::GameObject*,
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>)>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadSharedSpatialAnchorsRoutine)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x58875c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "LoadSharedSpatialAnchorsRoutine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,
                                                                                                 ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.ShareSpatialAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*)>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::ShareSpatialAnchors)> {
  constexpr static std::size_t size = 0x184;
  constexpr static std::size_t addrs = 0x5887684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "ShareSpatialAnchors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.ShareSpatialAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::System::Guid)>(&::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::ShareSpatialAnchors)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5887808;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "ShareSpatialAnchors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.OnShareCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnShareCompleted)> {
  constexpr static std::size_t size = 0x1f0;
  constexpr static std::size_t addrs = 0x588797c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "OnShareCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.OnShareToGroupCompleted
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)(
    ::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*)>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnShareToGroupCompleted)> {
  constexpr static std::size_t size = 0x28c;
  constexpr static std::size_t addrs = 0x5887b6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "OnShareToGroupCompleted", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore.OnDestroy
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnDestroy)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5887df8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                                               "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::*)()>(
    &::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5887f9c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSpatialAnchorsShareCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpatialAnchorsShareCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSpatialAnchorsShareCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpatialAnchorsShareCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onSpatialAnchorsShareCompleted(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSpatialAnchorsShareCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSpatialAnchorsShareToGroupCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpatialAnchorsShareToGroupCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>* const&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSpatialAnchorsShareToGroupCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSpatialAnchorsShareToGroupCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onSpatialAnchorsShareToGroupCompleted(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSpatialAnchorsShareToGroupCompleted)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSharedSpatialAnchorsLoadCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSharedSpatialAnchorsLoadCompleted;
}
constexpr ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* const&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onSharedSpatialAnchorsLoadCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onSharedSpatialAnchorsLoadCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onSharedSpatialAnchorsLoadCompleted(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onSharedSpatialAnchorsLoadCompleted)),
                                          cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onShareCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onShareCompleted;
}
constexpr ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onShareCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onShareCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onShareCompleted(
    ::System::Action_2<::GlobalNamespace::OVRSpatialAnchor_OperationResult, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onShareCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onShareToGroupCompleted() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onShareToGroupCompleted;
}
constexpr ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>,
                             ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_get__onShareToGroupCompleted() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____onShareToGroupCompleted;
}
constexpr void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::__cordl_internal_set__onShareToGroupCompleted(
    ::System::Action_2<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>, ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
        value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____onShareToGroupCompleted)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSpatialAnchorsShareCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                               "get_OnSpatialAnchorsShareCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, false>(
      this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSpatialAnchorsShareCompleted(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "set_OnSpatialAnchorsShareCompleted",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent_2<
                                      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSpatialAnchorsShareToGroupCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                               "get_OnSpatialAnchorsShareToGroupCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*, false>(
      this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSpatialAnchorsShareToGroupCompleted(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "set_OnSpatialAnchorsShareToGroupCompleted",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<
          ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*
Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::get_OnSharedSpatialAnchorsLoadCompleted() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                               "get_OnSharedSpatialAnchorsLoadCompleted", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<
      ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*, false>(
      this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::set_OnSharedSpatialAnchorsLoadCompleted(
    ::UnityEngine::Events::UnityEvent_2<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>* value) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "set_OnSharedSpatialAnchorsLoadCompleted",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Events::UnityEvent_2<
                                      ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::Start() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                                             "Start", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::InstantiateSpatialAnchor(::UnityEngine::GameObject* prefab, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion rotation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "InstantiateSpatialAnchor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefab, position, rotation);
}
inline ::System::Threading::Tasks::Task* Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::InitSpatialAnchor(::GlobalNamespace::OVRSpatialAnchor* anchor) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "InitSpatialAnchor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task*, false>(this, ___internal_method, anchor);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadAndInstantiateAnchors(::UnityEngine::GameObject* prefab, ::System::Collections::Generic::List_1<::System::Guid>* uuids) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), 4)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefab, uuids);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadAndInstantiateAnchorsFromGroup(::UnityEngine::GameObject* prefab, ::System::Guid groupUuid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                               "LoadAndInstantiateAnchorsFromGroup", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefab, groupUuid);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::LoadSharedSpatialAnchorsRoutine(
    ::UnityEngine::GameObject* prefab,
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult> result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "LoadSharedSpatialAnchorsRoutine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpatialAnchor_UnboundAnchor>*,
                                                                                               ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, prefab, result);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::ShareSpatialAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors,
                                                                                   ::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "ShareSpatialAnchors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchors, users);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::ShareSpatialAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors,
                                                                                   ::System::Guid groupUuid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "ShareSpatialAnchors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchors, groupUuid);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnShareCompleted(::GlobalNamespace::OVRSpatialAnchor_OperationResult result,
                                                                                ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "OnShareCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, anchors);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnShareToGroupCompleted(::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult> result,
                                                                                       ::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(), "OnShareToGroupCompleted", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, result, anchors);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::OnDestroy() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                                             "OnDestroy", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore* Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore::SharedSpatialAnchorCore() {}

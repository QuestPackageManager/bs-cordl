#pragma once
// IWYU pragma private; include "Meta/XR/MultiplayerBlocks/Colocation/SharedAnchorManager.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncTaskMethodBuilder_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__TaskAwaiter_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "System/zzzz__ValueTuple_2_impl.hpp"
#include "UnityEngine/zzzz__Quaternion_impl.hpp"
#include "UnityEngine/zzzz__Vector3_impl.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__SharedAnchorManager_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpatialAnchor_def.hpp"
#include "Meta/XR/BuildingBlocks/zzzz__SharedSpatialAnchorCore_def.hpp"
#include "Meta/XR/MultiplayerBlocks/Colocation/zzzz__SharedAnchorManager_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IReadOnlyList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/Threading/Tasks/zzzz__TaskCompletionSource_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_1_def.hpp"
#include "System/Threading/Tasks/zzzz__Task_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__ValueTuple_2_def.hpp"
#include "UnityEngine/zzzz__GameObject_def.hpp"
#include "UnityEngine/zzzz__Quaternion_def.hpp"
#include "UnityEngine/zzzz__Vector3_def.hpp"
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cf220;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0._AnchorCreationTask_g__CreateCompletedCallback_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::*)(
    ::GlobalNamespace::OVRSpatialAnchor*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::_AnchorCreationTask_g__CreateCompletedCallback_0)> {
  constexpr static std::size_t size = 0x90;
  constexpr static std::size_t addrs = 0x58cf224;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*>::get(),
                                    "<AnchorCreationTask>g__CreateCompletedCallback|0", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::__cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::__cordl_internal_set_task(
    ::System::Threading::Tasks::TaskCompletionSource_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::_AnchorCreationTask_g__CreateCompletedCallback_0(::GlobalNamespace::OVRSpatialAnchor* anchor,
                                                                                                                                     ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*>::get(),
                                  "<AnchorCreationTask>g__CreateCompletedCallback|0", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, anchor, result);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0::SharedAnchorManager___c__DisplayClass21_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cf2b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0._RetrieveAnchorsFromGroup_g__LoadCompletedCallback_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::_RetrieveAnchorsFromGroup_g__LoadCompletedCallback_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58cf2b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*>::get(),
        "<RetrieveAnchorsFromGroup>g__LoadCompletedCallback|0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::__cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::__cordl_internal_set_task(
    ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::_RetrieveAnchorsFromGroup_g__LoadCompletedCallback_0(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* loadedAnchors, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*>::get(),
      "<RetrieveAnchorsFromGroup>g__LoadCompletedCallback|0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadedAnchors, result);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0::SharedAnchorManager___c__DisplayClass23_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cf380;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0._RetrieveAnchors_g__LoadCompletedCallback_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::_RetrieveAnchors_g__LoadCompletedCallback_0)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x58cf384;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*>::get(),
        "<RetrieveAnchors>g__LoadCompletedCallback|0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::__cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::__cordl_internal_set_task(
    ::System::Threading::Tasks::TaskCompletionSource_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::_RetrieveAnchors_g__LoadCompletedCallback_0(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* loadedAnchors, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*>::get(),
      "<RetrieveAnchors>g__LoadCompletedCallback|0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, loadedAnchors, result);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0::SharedAnchorManager___c__DisplayClass24_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cf44c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0._ShareAnchorsWithGroup_g__ShareToGroupCompletedCallback_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRAnchor_ShareResult)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::_ShareAnchorsWithGroup_g__ShareToGroupCompletedCallback_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58cf450;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*>::get(),
        "<ShareAnchorsWithGroup>g__ShareToGroupCompletedCallback|0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_ShareResult>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::__cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::__cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::_ShareAnchorsWithGroup_g__ShareToGroupCompletedCallback_0(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _, ::GlobalNamespace::OVRAnchor_ShareResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*>::get(),
      "<ShareAnchorsWithGroup>g__ShareToGroupCompletedCallback|0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_ShareResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _, result);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0::SharedAnchorManager___c__DisplayClass26_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cf568;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0._ShareAnchorsWithUser_g__ShareCompleteCallback_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::*)(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, ::GlobalNamespace::OVRSpatialAnchor_OperationResult)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::_ShareAnchorsWithUser_g__ShareCompleteCallback_0)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58cf56c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*>::get(),
        "<ShareAnchorsWithUser>g__ShareCompleteCallback|0", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::__cordl_internal_get_task() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr ::System::Threading::Tasks::TaskCompletionSource_1<bool>* const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::__cordl_internal_get_task() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___task;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::__cordl_internal_set_task(::System::Threading::Tasks::TaskCompletionSource_1<bool>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___task)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::__cordl_internal_get___4__this() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::__cordl_internal_get___4__this() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->_____4__this;
}
constexpr void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::__cordl_internal_set___4__this(::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->_____4__this)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::_ShareAnchorsWithUser_g__ShareCompleteCallback_0(
    ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* _, ::GlobalNamespace::OVRSpatialAnchor_OperationResult result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*>::get(),
      "<ShareAnchorsWithUser>g__ShareCompleteCallback|0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpatialAnchor_OperationResult>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, _, result);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0::SharedAnchorManager___c__DisplayClass27_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x58cf21c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0*>::get(),
                                                 ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0._StopSharingAnchorsWithUser_b__0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::*)(
    ::GlobalNamespace::OVRSpaceUser)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::_StopSharingAnchorsWithUser_b__0)> {
  constexpr static std::size_t size = 0x34;
  constexpr static std::size_t addrs = 0x58cf684;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0*>::get(), "<StopSharingAnchorsWithUser>b__0",
        std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
    return ___internal_method;
  }
};
constexpr uint64_t& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::__cordl_internal_get_userId() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr uint64_t const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::__cordl_internal_get_userId() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___userId;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::__cordl_internal_set_userId(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___userId = value;
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::_ctor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0*>::get(),
                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline bool Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::_StopSharingAnchorsWithUser_b__0(::GlobalNamespace::OVRSpaceUser el) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0*>::get(), "<StopSharingAnchorsWithUser>b__0",
      std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpaceUser>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, el);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0*>());
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass29_0::SharedAnchorManager___c__DisplayClass29_0() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::MoveNext)> {
  constexpr static std::size_t size = 0x480;
  constexpr static std::size_t addrs = 0x58cf6b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21>::get(), "MoveNext",
                                    std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58cfb38;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::SharedAnchorManager__AnchorCreationTask_d__21(
    int32_t __1__state,
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
        __t__builder,
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass21_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->position = position;
  this->orientation = orientation;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__AnchorCreationTask_d__21::SharedAnchorManager__AnchorCreationTask_d__21() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::MoveNext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x58cfbb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cfdf8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25>::get(), "SetStateMachine",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25::SharedAnchorManager__CheckIfRetrievingAnchorServiceHung_d__25() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::MoveNext)> {
  constexpr static std::size_t size = 0x224;
  constexpr static std::size_t addrs = 0x58cfe00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22>::get(),
                                   "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d0024;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22>::get(),
                                   "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22::SharedAnchorManager__CheckIfSavingAnchorsServiceHung_d__22() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::MoveNext)> {
  constexpr static std::size_t size = 0x240;
  constexpr static std::size_t addrs = 0x58d002c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28>::get(),
                                   "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58d026c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28>::get(),
                                   "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28::SharedAnchorManager__CheckIfSharingAnchorServiceHung_d__28() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::MoveNext)> {
  constexpr static std::size_t size = 0x4e8;
  constexpr static std::size_t addrs = 0x58d0274;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58d075c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>", modifiers: "",
// def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::SharedAnchorManager__CreateAlignmentAnchor_d__19(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>> __t__builder,
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAlignmentAnchor_d__19::SharedAnchorManager__CreateAlignmentAnchor_d__19() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::MoveNext)> {
  constexpr static std::size_t size = 0x4d8;
  constexpr static std::size_t addrs = 0x58d07dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58d0cb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20>::get(), "SetStateMachine",
                                  std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "position", ty: "::UnityEngine::Vector3", modifiers: "", def_value: Some("{}") }, CppParam { name: "orientation", ty: "::UnityEngine::Quaternion", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "__u__1", ty: "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>,::GlobalNamespace::OVRSpatialAnchor_OperationResult>>",
// modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::SharedAnchorManager__CreateAnchor_d__20(
    int32_t __1__state,
    ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>
        __t__builder,
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->position = position;
  this->orientation = orientation;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__CreateAnchor_d__20::SharedAnchorManager__CreateAnchor_d__20() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::MoveNext)> {
  constexpr static std::size_t size = 0x4dc;
  constexpr static std::size_t addrs = 0x58d0d34;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58d1210;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchorIds", ty:
// "::System::Collections::Generic::List_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::SharedAnchorManager__RetrieveAnchors_d__24(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __t__builder,
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::System::Collections::Generic::List_1<::System::Guid>* anchorIds,
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass24_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->anchorIds = anchorIds;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchors_d__24::SharedAnchorManager__RetrieveAnchors_d__24() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::MoveNext)> {
  constexpr static std::size_t size = 0x464;
  constexpr static std::size_t addrs = 0x58d1290;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58d16f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__4__this", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupUuid", ty:
// "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __t__builder,
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, ::System::Guid groupUuid, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass23_0* __8__1,
    ::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->groupUuid = groupUuid;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23::SharedAnchorManager__RetrieveAnchorsFromGroup_d__23() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::MoveNext)> {
  constexpr static std::size_t size = 0x46c;
  constexpr static std::size_t addrs = 0x58d1774;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58d1be0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26>::get(),
                                  "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}")
// }, CppParam { name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::SharedAnchorManager__ShareAnchorsWithGroup_d__26(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this,
    ::System::Guid groupUuid, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass26_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->groupUuid = groupUuid;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithGroup_d__26::SharedAnchorManager__ShareAnchorsWithGroup_d__26() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::MoveNext)> {
  constexpr static std::size_t size = 0x6d4;
  constexpr static std::size_t addrs = 0x58d1c60;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27>::get(),
                                    "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::SetStateMachine)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x58d2334;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27>::get(), "MoveNext",
                                  std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*", modifiers: "", def_value: Some("{}") }, CppParam { name: "userId", ty: "uint64_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "__8__1", ty: "::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::System::Runtime::CompilerServices::TaskAwaiter_1<bool>", modifiers: "", def_value: Some("{}") }]
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::SharedAnchorManager__ShareAnchorsWithUser_d__27(
    int32_t __1__state, ::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<bool> __t__builder, ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager* __4__this, uint64_t userId,
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager___c__DisplayClass27_0* __8__1, ::System::Runtime::CompilerServices::TaskAwaiter_1<bool> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->userId = userId;
  this->__8__1 = __8__1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager__ShareAnchorsWithUser_d__27::SharedAnchorManager__ShareAnchorsWithUser_d__27() {}
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.get_AnchorPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityW<::UnityEngine::GameObject> (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::get_AnchorPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58ceca4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "get_AnchorPrefab",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.set_AnchorPrefab
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(::UnityEngine::GameObject*)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::set_AnchorPrefab)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cecac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "set_AnchorPrefab", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.get_LocalAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* (
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::get_LocalAnchors)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x58cecb4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "get_LocalAnchors",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(
    ::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::_ctor)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x58c1f00;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.CreateAlignmentAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* (
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)()>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CreateAlignmentAnchor)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x58c25c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(),
                                                 "CreateAlignmentAnchor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.CreateAnchor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* (
        ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
        &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CreateAnchor)> {
  constexpr static std::size_t size = 0x12c;
  constexpr static std::size_t addrs = 0x58cecbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "CreateAnchor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.AnchorCreationTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>* (
        ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(::UnityEngine::Vector3, ::UnityEngine::Quaternion)>(
        &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::AnchorCreationTask)> {
  constexpr static std::size_t size = 0x130;
  constexpr static std::size_t addrs = 0x58cede8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "AnchorCreationTask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.CheckIfSavingAnchorsServiceHung
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CheckIfSavingAnchorsServiceHung)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58cef18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(),
                                                 "CheckIfSavingAnchorsServiceHung", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.RetrieveAnchorsFromGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* (
        ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(::System::Guid)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::RetrieveAnchorsFromGroup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58c2c18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "RetrieveAnchorsFromGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.RetrieveAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>* (
        ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(::System::Collections::Generic::List_1<::System::Guid>*)>(
        &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::RetrieveAnchors)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58cd778;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "RetrieveAnchors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.CheckIfRetrievingAnchorServiceHung
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CheckIfRetrievingAnchorServiceHung)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58cefbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(),
                                                 "CheckIfRetrievingAnchorServiceHung", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.ShareAnchorsWithGroup
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(::System::Guid)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::ShareAnchorsWithGroup)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x58c269c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "ShareAnchorsWithGroup",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.ShareAnchorsWithUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Threading::Tasks::Task_1<bool>* (
    ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(uint64_t)>(&::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::ShareAnchorsWithUser)> {
  constexpr static std::size_t size = 0xec;
  constexpr static std::size_t addrs = 0x58cddb8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "ShareAnchorsWithUser",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.CheckIfSharingAnchorServiceHung
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)()>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CheckIfSharingAnchorServiceHung)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x58cf060;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(),
                                                 "CheckIfSharingAnchorServiceHung", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager.StopSharingAnchorsWithUser
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::*)(uint64_t)>(
    &::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::StopSharingAnchorsWithUser)> {
  constexpr static std::size_t size = 0x118;
  constexpr static std::size_t addrs = 0x58cf104;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "StopSharingAnchorsWithUser",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__localAnchors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localAnchors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__localAnchors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localAnchors;
}
constexpr void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__localAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localAnchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__sharedAnchors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedAnchors;
}
constexpr ::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__sharedAnchors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____sharedAnchors;
}
constexpr void
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__sharedAnchors(::System::Collections::Generic::List_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____sharedAnchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__userShareList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userShareList;
}
constexpr ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>* const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__userShareList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____userShareList;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__userShareList(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRSpaceUser>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____userShareList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr bool& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__saveAnchorSaveToCloudIsSuccessful() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveAnchorSaveToCloudIsSuccessful;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__saveAnchorSaveToCloudIsSuccessful() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____saveAnchorSaveToCloudIsSuccessful;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__saveAnchorSaveToCloudIsSuccessful(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____saveAnchorSaveToCloudIsSuccessful = value;
}
constexpr bool& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__shareAnchorIsSuccessful() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shareAnchorIsSuccessful;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__shareAnchorIsSuccessful() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____shareAnchorIsSuccessful;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__shareAnchorIsSuccessful(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____shareAnchorIsSuccessful = value;
}
constexpr bool& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__retrieveAnchorIsSuccessful() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____retrieveAnchorIsSuccessful;
}
constexpr bool const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__retrieveAnchorIsSuccessful() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____retrieveAnchorIsSuccessful;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__retrieveAnchorIsSuccessful(bool value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____retrieveAnchorIsSuccessful = value;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>*& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__localizationTasks() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationTasks;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__localizationTasks() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationTasks;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__localizationTasks(::System::Collections::Generic::List_1<::System::Threading::Tasks::Task*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizationTasks)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>*&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__localizationTcsList() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationTcsList;
}
constexpr ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>* const&
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__localizationTcsList() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____localizationTcsList;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__localizationTcsList(
    ::System::Collections::Generic::List_1<::System::Threading::Tasks::TaskCompletionSource_1<bool>*>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____localizationTcsList)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::UnityEngine::GameObject>& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__AnchorPrefab_k__BackingField() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AnchorPrefab_k__BackingField;
}
constexpr ::UnityW<::UnityEngine::GameObject> const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__AnchorPrefab_k__BackingField() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____AnchorPrefab_k__BackingField;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__AnchorPrefab_k__BackingField(::UnityW<::UnityEngine::GameObject> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____AnchorPrefab_k__BackingField)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore>& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__ssaCore() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ssaCore;
}
constexpr ::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> const& Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_get__ssaCore() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____ssaCore;
}
constexpr void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::__cordl_internal_set__ssaCore(::UnityW<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore> value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->____ssaCore)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline ::UnityW<::UnityEngine::GameObject> Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::get_AnchorPrefab() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "get_AnchorPrefab",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::UnityW<::UnityEngine::GameObject>, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::set_AnchorPrefab(::UnityEngine::GameObject* value) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "set_AnchorPrefab", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::GameObject*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline ::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::get_LocalAnchors() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "get_LocalAnchors",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::_ctor(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore* ssaCore) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, ssaCore);
}
inline ::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CreateAlignmentAnchor() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "CreateAlignmentAnchor",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CreateAnchor(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "CreateAnchor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*, false>(this, ___internal_method,
                                                                                                                                                                              position, orientation);
}
inline ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::AnchorCreationTask(::UnityEngine::Vector3 position, ::UnityEngine::Quaternion orientation) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "AnchorCreationTask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Vector3>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Quaternion>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::System::Threading::Tasks::Task_1<::System::ValueTuple_2<::UnityW<::GlobalNamespace::OVRSpatialAnchor>, ::GlobalNamespace::OVRSpatialAnchor_OperationResult>>*, false>(this, ___internal_method,
                                                                                                                                                                              position, orientation);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CheckIfSavingAnchorsServiceHung() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(),
                                               "CheckIfSavingAnchorsServiceHung", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::RetrieveAnchorsFromGroup(::System::Guid groupUuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "RetrieveAnchorsFromGroup",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*, false>(
      this, ___internal_method, groupUuid);
}
inline ::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::RetrieveAnchors(::System::Collections::Generic::List_1<::System::Guid>* anchorIds) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "RetrieveAnchors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<::System::Collections::Generic::IReadOnlyList_1<::UnityW<::GlobalNamespace::OVRSpatialAnchor>>*>*, false>(
      this, ___internal_method, anchorIds);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CheckIfRetrievingAnchorServiceHung() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(),
                                               "CheckIfRetrievingAnchorServiceHung", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::System::Threading::Tasks::Task_1<bool>* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::ShareAnchorsWithGroup(::System::Guid groupUuid) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "ShareAnchorsWithGroup",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, groupUuid);
}
inline ::System::Threading::Tasks::Task_1<bool>* Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::ShareAnchorsWithUser(uint64_t userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "ShareAnchorsWithUser",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Threading::Tasks::Task_1<bool>*, false>(this, ___internal_method, userId);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::CheckIfSharingAnchorServiceHung() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(),
                                               "CheckIfSharingAnchorServiceHung", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::StopSharingAnchorsWithUser(uint64_t userId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>::get(), "StopSharingAnchorsWithUser",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, userId);
}
inline ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*
Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::New_ctor(::Meta::XR::BuildingBlocks::SharedSpatialAnchorCore* ssaCore) {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager*>(ssaCore));
}
// Ctor Parameters []
constexpr ::Meta::XR::MultiplayerBlocks::Colocation::SharedAnchorManager::SharedAnchorManager() {}

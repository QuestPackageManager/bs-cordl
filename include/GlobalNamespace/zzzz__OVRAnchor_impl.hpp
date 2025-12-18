#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRAnchor.hpp"
#include "GlobalNamespace/zzzz__OVRObjectPool_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_impl.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTaskBuilder_1_impl.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__AsyncVoidMethodBuilder_impl.hpp"
#include "System/Runtime/CompilerServices/zzzz__YieldAwaitable_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Nullable_1_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
#include "GlobalNamespace/zzzz__OVRNativeList_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRResult_2_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpaceUser_def.hpp"
#include "GlobalNamespace/zzzz__OVRSpace_def.hpp"
#include "GlobalNamespace/zzzz__OVRTask_1_def.hpp"
#include "GlobalNamespace/zzzz__OVRTelemetryMarker_def.hpp"
#include "System/Collections/Generic/zzzz__Dictionary_2_def.hpp"
#include "System/Collections/Generic/zzzz__HashSet_1_def.hpp"
#include "System/Collections/Generic/zzzz__IEnumerable_1_def.hpp"
#include "System/Collections/Generic/zzzz__IList_1_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
#include "System/Runtime/CompilerServices/zzzz__IAsyncStateMachine_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "System/zzzz__IDisposable_def.hpp"
#include "System/zzzz__IEquatable_1_def.hpp"
#include "System/zzzz__Nullable_1_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include "System/zzzz__ReadOnlySpan_1_def.hpp"
#include "System/zzzz__Type_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
#include "UnityEngine/zzzz__Camera_def.hpp"
#include "UnityEngine/zzzz__Pose_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_SaveResult::OVRAnchor_SaveResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_SaveResult::OVRAnchor_SaveResult() {}
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureInvalidAnchor{ static_cast<int32_t>(0xfffffc0b) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureDataIsInvalid{ static_cast<int32_t>(0xfffffc10) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureInsufficientResources{ static_cast<int32_t>(0xffffdcd8) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureStorageAtCapacity{ static_cast<int32_t>(0xffffdcd7) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureInsufficientView{ static_cast<int32_t>(0xffffdcd6) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailurePermissionInsufficient{ static_cast<int32_t>(0xffffdcd5) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureRateLimited{ static_cast<int32_t>(0xffffdcd4) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureTooDark{ static_cast<int32_t>(0xffffdcd3) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureTooBright{ static_cast<int32_t>(0xffffdcd2) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailureUnsupported{ static_cast<int32_t>(0xfffffc14) };
constexpr ::GlobalNamespace::OVRAnchor_SaveResult GlobalNamespace::OVRAnchor_SaveResult::FailurePersistenceNotEnabled{ static_cast<int32_t>(0xfffff82a) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_EraseResult::OVRAnchor_EraseResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_EraseResult::OVRAnchor_EraseResult() {}
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::FailureInvalidAnchor{ static_cast<int32_t>(0xfffffc0b) };
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::FailureDataIsInvalid{ static_cast<int32_t>(0xfffffc10) };
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::FailureInsufficientResources{ static_cast<int32_t>(0xffffdcd8) };
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::FailurePermissionInsufficient{ static_cast<int32_t>(0xffffdcd5) };
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::FailureRateLimited{ static_cast<int32_t>(0xffffdcd4) };
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::FailureUnsupported{ static_cast<int32_t>(0xfffffc14) };
constexpr ::GlobalNamespace::OVRAnchor_EraseResult GlobalNamespace::OVRAnchor_EraseResult::FailurePersistenceNotEnabled{ static_cast<int32_t>(0xfffff82a) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_FetchResult::OVRAnchor_FetchResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_FetchResult::OVRAnchor_FetchResult() {}
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailureDataIsInvalid{ static_cast<int32_t>(0xfffffc10) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailureInvalidOption{ static_cast<int32_t>(0xfffffc17) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailureInsufficientResources{ static_cast<int32_t>(0xffffdcd8) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailureInsufficientView{ static_cast<int32_t>(0xffffdcd6) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailurePermissionInsufficient{ static_cast<int32_t>(0xffffdcd5) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailureRateLimited{ static_cast<int32_t>(0xffffdcd4) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailureTooDark{ static_cast<int32_t>(0xffffdcd3) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailureTooBright{ static_cast<int32_t>(0xffffdcd2) };
constexpr ::GlobalNamespace::OVRAnchor_FetchResult GlobalNamespace::OVRAnchor_FetchResult::FailureUnsupported{ static_cast<int32_t>(0xfffffc14) };
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_ShareResult::OVRAnchor_ShareResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_ShareResult::OVRAnchor_ShareResult() {}
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureOperationFailed{ static_cast<int32_t>(0xfffffc12) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureInvalidParameter{ static_cast<int32_t>(0xfffffc17) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureHandleInvalid{ static_cast<int32_t>(0xfffffc0b) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureDataIsInvalid{ static_cast<int32_t>(0xfffffc10) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureNetworkTimeout{ static_cast<int32_t>(0xfffff82d) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureNetworkRequestFailed{ static_cast<int32_t>(0xfffff82c) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureMappingInsufficient{ static_cast<int32_t>(0xfffff82f) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureLocalizationFailed{ static_cast<int32_t>(0xfffff82e) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureSharableComponentNotEnabled{ static_cast<int32_t>(0xfffff82a) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureCloudStorageDisabled{ static_cast<int32_t>(0xfffff830) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailurePermissionInsufficient{ static_cast<int32_t>(0xffffdcd5) };
constexpr ::GlobalNamespace::OVRAnchor_ShareResult GlobalNamespace::OVRAnchor_ShareResult::FailureUnsupported{ static_cast<int32_t>(0xfffffc14) };
// Ctor Parameters [CppParam { name: "Anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "IncrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_FetchTaskData::OVRAnchor_FetchTaskData(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* Anchors,
    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* IncrementalResultsCallback) noexcept {
  this->Anchors = Anchors;
  this->IncrementalResultsCallback = IncrementalResultsCallback;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_FetchTaskData::OVRAnchor_FetchTaskData() {}
// Ctor Parameters [CppParam { name: "Task", ty: "::GlobalNamespace::OVRTask_1<bool>", modifiers: "", def_value: Some("{}") }, CppParam { name: "EnabledDesired", ty: "bool", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Timeout", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "StartTime", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_DeferredValue::OVRAnchor_DeferredValue(::GlobalNamespace::OVRTask_1<bool> Task, bool EnabledDesired, uint64_t RequestId, double_t Timeout,
                                                                              float_t StartTime) noexcept {
  this->Task = Task;
  this->EnabledDesired = EnabledDesired;
  this->RequestId = RequestId;
  this->Timeout = Timeout;
  this->StartTime = StartTime;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_DeferredValue::OVRAnchor_DeferredValue() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.FromEvent
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRAnchor_DeferredKey (*)(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData)>(
    &::GlobalNamespace::OVRAnchor_DeferredKey::FromEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c59520;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(), "FromEvent", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor_DeferredKey::*)(::GlobalNamespace::OVRAnchor_DeferredKey)>(
    &::GlobalNamespace::OVRAnchor_DeferredKey::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c5ae1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_DeferredKey>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor_DeferredKey::*)(::System::Object*)>(
    &::GlobalNamespace::OVRAnchor_DeferredKey::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c5ae40;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRAnchor_DeferredKey::*)()>(&::GlobalNamespace::OVRAnchor_DeferredKey::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c5aecc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(), 2));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRAnchor_DeferredKey GlobalNamespace::OVRAnchor_DeferredKey::FromEvent(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(), "FromEvent", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_DeferredKey, false>(nullptr, ___internal_method, eventData);
}
inline bool GlobalNamespace::OVRAnchor_DeferredKey::Equals(::GlobalNamespace::OVRAnchor_DeferredKey other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_DeferredKey>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor_DeferredKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRAnchor_DeferredKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_DeferredKey>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
constexpr GlobalNamespace::OVRAnchor_DeferredKey::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>* GlobalNamespace::OVRAnchor_DeferredKey::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_DeferredKey_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComponentType", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_DeferredKey::OVRAnchor_DeferredKey(uint64_t Space, ::GlobalNamespace::OVRPlugin_SpaceComponentType ComponentType) noexcept {
  this->Space = Space;
  this->ComponentType = ComponentType;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_DeferredKey::OVRAnchor_DeferredKey() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_FetchOptions.DiscoverSpaces
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_Result (::GlobalNamespace::OVRAnchor_FetchOptions::*)(::ByRef<uint64_t>)>(
    &::GlobalNamespace::OVRAnchor_FetchOptions::DiscoverSpaces)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x5c54e94;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_FetchOptions>::get(), "DiscoverSpaces",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_FetchOptions.GetSpaceComponentType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (*)(::System::Type*)>(
    &::GlobalNamespace::OVRAnchor_FetchOptions::GetSpaceComponentType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5c5aee8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_FetchOptions>::get(), "GetSpaceComponentType",
                                    std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor_FetchOptions::DiscoverSpaces(::ByRef<uint64_t> requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_FetchOptions>::get(), "DiscoverSpaces", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result, false>(this, ___internal_method, requestId);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRAnchor_FetchOptions::GetSpaceComponentType(::System::Type* type) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_FetchOptions>::get(), "GetSpaceComponentType",
                                  std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Type*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType, false>(nullptr, ___internal_method, type);
}
// Ctor Parameters [CppParam { name: "SingleUuid", ty: "::System::Nullable_1<::System::Guid>", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuids", ty:
// "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "SingleComponentType", ty: "::System::Type*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "ComponentTypes", ty: "::System::Collections::Generic::IEnumerable_1<::System::Type*>*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_FetchOptions::OVRAnchor_FetchOptions(::System::Nullable_1<::System::Guid> SingleUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* Uuids,
                                                                            ::System::Type* SingleComponentType,
                                                                            ::System::Collections::Generic::IEnumerable_1<::System::Type*>* ComponentTypes) noexcept {
  this->SingleUuid = SingleUuid;
  this->Uuids = Uuids;
  this->SingleComponentType = SingleComponentType;
  this->ComponentTypes = ComponentTypes;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_FetchOptions::OVRAnchor_FetchOptions() {}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_Type() {
  return this->___Type;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType const& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_Type() const {
  return this->___Type;
}
constexpr void GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_set_Type(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType value) {
  this->___Type = value;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_ComponentFilter() {
  return this->___ComponentFilter;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents const& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_ComponentFilter() const {
  return this->___ComponentFilter;
}
constexpr void GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_set_ComponentFilter(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents value) {
  this->___ComponentFilter = value;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_IdFilter() {
  return this->___IdFilter;
}
constexpr ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds const& GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_get_IdFilter() const {
  return this->___IdFilter;
}
constexpr void GlobalNamespace::OVRAnchor_FilterUnion::__cordl_internal_set_IdFilter(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds value) {
  this->___IdFilter = value;
}
// Ctor Parameters [CppParam { name: "Type", ty: "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComponentFilter", ty:
// "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents", modifiers: "", def_value: Some("{}") }, CppParam { name: "IdFilter", ty:
// "::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_FilterUnion::OVRAnchor_FilterUnion(::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterType Type,
                                                                          ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoComponents ComponentFilter,
                                                                          ::GlobalNamespace::OVRPlugin_SpaceDiscoveryFilterInfoIds IdFilter) noexcept {
  this->Type = Type;
  this->ComponentFilter = ComponentFilter;
  this->IdFilter = IdFilter;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_FilterUnion::OVRAnchor_FilterUnion() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_TrackableType::OVRAnchor_TrackableType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_TrackableType::OVRAnchor_TrackableType() {}
constexpr ::GlobalNamespace::OVRAnchor_TrackableType GlobalNamespace::OVRAnchor_TrackableType::None{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRAnchor_TrackableType GlobalNamespace::OVRAnchor_TrackableType::Keyboard{ static_cast<int32_t>(0x1) };
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(
    &::GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5b230;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::OVRTelemetryMarker, uint64_t)>(
    &::GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5c5b140;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::Telemetry_OVRAnchor_Key)>(
    &::GlobalNamespace::Telemetry_OVRAnchor_Key::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5c5b4f4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::System::Object*)>(
    &::GlobalNamespace::Telemetry_OVRAnchor_Key::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c5b518;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)()>(
    &::GlobalNamespace::Telemetry_OVRAnchor_Key::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c5b5a4;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), 2));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, markerId, requestId);
}
inline void GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor(::GlobalNamespace::OVRTelemetryMarker marker, uint64_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, marker, requestId);
}
inline bool GlobalNamespace::Telemetry_OVRAnchor_Key::Equals(::GlobalNamespace::Telemetry_OVRAnchor_Key other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::Telemetry_OVRAnchor_Key::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Telemetry_OVRAnchor_Key::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Telemetry_OVRAnchor_Key>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
constexpr GlobalNamespace::Telemetry_OVRAnchor_Key::operator ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>* GlobalNamespace::Telemetry_OVRAnchor_Key::i___System__IEquatable_1___GlobalNamespace__Telemetry_OVRAnchor_Key_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_markerId", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_requestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_Key::Telemetry_OVRAnchor_Key(int32_t _markerId, uint64_t _requestId) noexcept {
  this->_markerId = _markerId;
  this->_requestId = _requestId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_Key::Telemetry_OVRAnchor_Key() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId::Telemetry_OVRAnchor_MarkerId(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId::Telemetry_OVRAnchor_MarkerId() {}
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId GlobalNamespace::Telemetry_OVRAnchor_MarkerId::DiscoverSpaces{ static_cast<int32_t>(0x9b8056f) };
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId GlobalNamespace::Telemetry_OVRAnchor_MarkerId::SaveSpaces{ static_cast<int32_t>(0x9b80d4e) };
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId GlobalNamespace::Telemetry_OVRAnchor_MarkerId::EraseSpaces{ static_cast<int32_t>(0x9b8204e) };
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId GlobalNamespace::Telemetry_OVRAnchor_MarkerId::QuerySpaces{ static_cast<int32_t>(0x9b83c86) };
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId GlobalNamespace::Telemetry_OVRAnchor_MarkerId::SaveSpaceList{ static_cast<int32_t>(0x9b82cd8) };
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId GlobalNamespace::Telemetry_OVRAnchor_MarkerId::EraseSingleSpace{ static_cast<int32_t>(0x9b8220c) };
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId GlobalNamespace::Telemetry_OVRAnchor_MarkerId::ConfigureTracker{ static_cast<int32_t>(0x9b8394d) };
// Ctor Parameters []
constexpr ::GlobalNamespace::Telemetry_OVRAnchor_Annotation::Telemetry_OVRAnchor_Annotation() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.OnInit
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRAnchor_Telemetry::OnInit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c588b0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "OnInit",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.AddMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRTelemetryMarker)>(&::GlobalNamespace::OVRAnchor_Telemetry::AddMarker)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5c5b078;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "AddMarker", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.Start
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(
    ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRAnchor_Telemetry::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5c5b150;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetSyncResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRTelemetryMarker, uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::SetSyncResult)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5c56318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "SetSyncResult", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetAsyncResultAndSend
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, int64_t)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResultAndSend)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5c54870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "SetAsyncResultAndSend", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetAsyncResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(
    ::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, int64_t)>(&::GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResult)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5c59bb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "SetAsyncResult", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.GetMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(&::GlobalNamespace::OVRAnchor_Telemetry::GetMarker)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c547ac;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "GetMarker", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.TryGetMarker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::ByRef<::GlobalNamespace::OVRTelemetryMarker>)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::TryGetMarker)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c5b23c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "TryGetMarker", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRTelemetryMarker>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.Remove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::ByRef<::GlobalNamespace::OVRTelemetryMarker>)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::Remove)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c5b2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRTelemetryMarker>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.GetRemove
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(&::GlobalNamespace::OVRAnchor_Telemetry::GetRemove)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5c5b37c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "GetRemove", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
    return ___internal_method;
  }
};
inline void
GlobalNamespace::OVRAnchor_Telemetry::setStaticF_s_markers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>*, "s_markers",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>* GlobalNamespace::OVRAnchor_Telemetry::getStaticF_s_markers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>*, "s_markers",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get>();
}
inline void GlobalNamespace::OVRAnchor_Telemetry::OnInit() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "OnInit",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::AddMarker(uint64_t requestId, ::GlobalNamespace::OVRTelemetryMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "AddMarker", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, marker);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRAnchor_Telemetry::Start(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId,
                                                                                         ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "Start", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker, false>(nullptr, ___internal_method, markerId, requestId, result);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::SetSyncResult(::GlobalNamespace::OVRTelemetryMarker marker, uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "SetSyncResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRTelemetryMarker>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, marker, requestId, result);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResultAndSend(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, int64_t result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "SetAsyncResultAndSend", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, markerId, requestId, result);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResult(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId,
                                                                                                                        int64_t result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "SetAsyncResult", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>, false>(nullptr, ___internal_method, markerId, requestId, result);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::GetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "GetMarker", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>, false>(nullptr, ___internal_method, markerId, requestId);
}
inline bool GlobalNamespace::OVRAnchor_Telemetry::TryGetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, ::ByRef<::GlobalNamespace::OVRTelemetryMarker> marker) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "TryGetMarker", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRTelemetryMarker>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, markerId, requestId, marker);
}
inline bool GlobalNamespace::OVRAnchor_Telemetry::Remove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, ::ByRef<::GlobalNamespace::OVRTelemetryMarker> marker) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "Remove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRTelemetryMarker>>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, markerId, requestId, marker);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::GetRemove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Telemetry*>::get(), "GetRemove", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>, false>(nullptr, ___internal_method, markerId, requestId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_Telemetry::OVRAnchor_Telemetry() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_KeyboardTrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5b5c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                                               "get_KeyboardTrackingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.set_KeyboardTrackingEnabled
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(bool)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::set_KeyboardTrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5b5c8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "set_KeyboardTrackingEnabled",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_KeyboardTrackingSupported
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingSupported)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5c5b5d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                                               "get_KeyboardTrackingSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_RequiresDynamicObjectTracker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_RequiresDynamicObjectTracker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5b66c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "get_RequiresDynamicObjectTracker",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ToDynamicObjectClasses
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass> (
    ::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::Unity::Collections::Allocator)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ToDynamicObjectClasses)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5c5b674;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "ToDynamicObjectClasses", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ResetDynamicObjects
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::ResetDynamicObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5b734;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                                               "ResetDynamicObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.SetDynamicObjectState
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(
    ::ByRef<::GlobalNamespace::OVRAnchor_TrackerConfiguration>)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::SetDynamicObjectState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c5b73c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "SetDynamicObjectState", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRAnchor_TrackerConfiguration>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.GetTrackableTypes
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::GetTrackableTypes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5c5b748;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "GetTrackableTypes", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::ToString)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5c5b85c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5c5bac0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((
        ::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                   ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::System::Object*)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c5badc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5c5bb64;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method =
        THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                       ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5bbe4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5c5bbfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingEnabled() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                                             "get_KeyboardTrackingEnabled", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::set_KeyboardTrackingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "set_KeyboardTrackingEnabled",
                                               std::span<Il2CppClass const* const, 0>(), ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingSupported() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                                             "get_KeyboardTrackingSupported", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_RequiresDynamicObjectTracker() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                                             "get_RequiresDynamicObjectTracker", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass>
GlobalNamespace::OVRAnchor_TrackerConfiguration::ToDynamicObjectClasses(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "ToDynamicObjectClasses", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass>, false>(this, ___internal_method, allocator);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::ResetDynamicObjects() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                                                             "ResetDynamicObjects", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::SetDynamicObjectState(::ByRef<::GlobalNamespace::OVRAnchor_TrackerConfiguration> other) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "SetDynamicObjectState", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<::GlobalNamespace::OVRAnchor_TrackerConfiguration>>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, other);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::GetTrackableTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "GetTrackableTypes", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, trackableTypes);
}
inline ::StringW GlobalNamespace::OVRAnchor_TrackerConfiguration::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals(::GlobalNamespace::OVRAnchor_TrackerConfiguration other) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRAnchor_TrackerConfiguration::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Equality(::GlobalNamespace::OVRAnchor_TrackerConfiguration lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Inequality(::GlobalNamespace::OVRAnchor_TrackerConfiguration lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration rhs) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
constexpr GlobalNamespace::OVRAnchor_TrackerConfiguration::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*
GlobalNamespace::OVRAnchor_TrackerConfiguration::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_TrackerConfiguration_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_KeyboardTrackingEnabled_k__BackingField", ty: "bool", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration::OVRAnchor_TrackerConfiguration(bool _KeyboardTrackingEnabled_k__BackingField) noexcept {
  this->_KeyboardTrackingEnabled_k__BackingField = _KeyboardTrackingEnabled_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration::OVRAnchor_TrackerConfiguration() {}
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult::OVRAnchor_ConfigureTrackerResult(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult::OVRAnchor_ConfigureTrackerResult() {}
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult GlobalNamespace::OVRAnchor_ConfigureTrackerResult::Success{ static_cast<int32_t>(0x0) };
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult GlobalNamespace::OVRAnchor_ConfigureTrackerResult::Failure{ static_cast<int32_t>(0xfffffc18) };
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult GlobalNamespace::OVRAnchor_ConfigureTrackerResult::Invalid{ static_cast<int32_t>(0xfffffc10) };
constexpr ::GlobalNamespace::OVRAnchor_ConfigureTrackerResult GlobalNamespace::OVRAnchor_ConfigureTrackerResult::NotSupported{ static_cast<int32_t>(0xfffffc14) };
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::*)(::GlobalNamespace::OVRAnchor_Tracker*)>(
    &::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c5c2f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_Tracker*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::*)()>(
    &::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5c5c318;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock.AcquireAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> (*)(
    ::GlobalNamespace::OVRAnchor_Tracker*)>(&::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::AcquireAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c5c338;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>::get(), "AcquireAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_Tracker*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor_AsyncLock::_ctor(::GlobalNamespace::OVRAnchor_Tracker* tracker) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_Tracker*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, tracker);
}
inline void GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> GlobalNamespace::Tracker_OVRAnchor_AsyncLock::AcquireAsync(::GlobalNamespace::OVRAnchor_Tracker* tracker) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>::get(), "AcquireAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_Tracker*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>, false>(nullptr, ___internal_method, tracker);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::Tracker_OVRAnchor_AsyncLock::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::Tracker_OVRAnchor_AsyncLock::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_tracker", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Tracker_OVRAnchor_AsyncLock(::GlobalNamespace::OVRAnchor_Tracker* _tracker) noexcept {
  this->_tracker = _tracker;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Tracker_OVRAnchor_AsyncLock() {}
//  Writing Method size for method: ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::*)()>(
    &::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5c5c3f0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5c5e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tracker", ty:
// "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3(
    int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __t__builder, ::GlobalNamespace::OVRAnchor_Tracker* tracker,
    ::System::Runtime::CompilerServices::YieldAwaitable_YieldAwaiter __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tracker = tracker;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3() {}
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::*)()>(
    &::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::MoveNext)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x5c5c620;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d>::get(), "MoveNext",
        std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5ccd0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d>::get(), "SetStateMachine",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d>::get(), "MoveNext",
      std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void
GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d>::get(), "SetStateMachine",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "tracker", ty:
// "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "config", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__7__wrap1", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::
    Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d(
        int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __t__builder, uint64_t tracker,
        ::GlobalNamespace::OVRAnchor_TrackerConfiguration config, uint64_t __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> __u__1,
        ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->tracker = tracker;
  this->config = config;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::
    Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d() {}
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::*)()>(
    &::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x5c5cd0c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5d62c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty:
// "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: Some("{}") }, CppParam { name: "configuration", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "__7__wrap1", ty: "::GlobalNamespace::Tracker_OVRAnchor_AsyncLock", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: Some("{}") }, CppParam { name: "_results_5__3", ty:
// "::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty:
// "::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__2", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::Tracker_OVRAnchor__ConfigureAsync_d__7(
    int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>> __t__builder,
    ::GlobalNamespace::OVRAnchor_Tracker* __4__this, ::GlobalNamespace::OVRAnchor_TrackerConfiguration configuration, ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock __7__wrap1,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __u__1, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>* _results_5__3,
    ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result> __7__wrap3,
    ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*> __u__2) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->configuration = configuration;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
  this->_results_5__3 = _results_5__3;
  this->__7__wrap3 = __7__wrap3;
  this->__u__2 = __u__2;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::Tracker_OVRAnchor__ConfigureAsync_d__7() {}
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::*)()>(
    &::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5c5d668;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5d984;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::System::Runtime::CompilerServices::AsyncVoidMethodBuilder", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::Tracker_OVRAnchor__Dispose_d__10(int32_t __1__state, ::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder,
                                                                                                ::GlobalNamespace::OVRAnchor_Tracker* __4__this,
                                                                                                ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::Tracker_OVRAnchor__Dispose_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::*)()>(
    &::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5c5d98c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5dd18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5>::get(), "SetStateMachine",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5>::get(), "MoveNext",
                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor_Tracker*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "config", ty: "::GlobalNamespace::OVRAnchor_TrackerConfiguration", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t,::GlobalNamespace::OVRPlugin_Result>>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5(
    int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder, ::GlobalNamespace::OVRAnchor_Tracker* __4__this,
    ::GlobalNamespace::OVRAnchor_TrackerConfiguration config, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->config = config;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.get_Configuration
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRAnchor_TrackerConfiguration (::GlobalNamespace::OVRAnchor_Tracker::*)()>(
    &::GlobalNamespace::OVRAnchor_Tracker::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c5bc14;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(),
                                                                               "get_Configuration", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.SetupDynamicObjectTracker
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (::GlobalNamespace::OVRAnchor_Tracker::*)(
    ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::SetupDynamicObjectTracker)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5c5bc1c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "SetupDynamicObjectTracker", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.ConfigureAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>> (
    ::GlobalNamespace::OVRAnchor_Tracker::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::ConfigureAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c5bce8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "ConfigureAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.FetchTrackablesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (::GlobalNamespace::OVRAnchor_Tracker::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*)>(
    &::GlobalNamespace::OVRAnchor_Tracker::FetchTrackablesAsync)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c5bdbc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "FetchTrackablesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.Finalize
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::Finalize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5c5bf6c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), 1));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c5c020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c5c0c0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), ".ctor",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._SetupDynamicObjectTracker_g__SetClassesAsync_5_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> (*)(
    uint64_t, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__SetClassesAsync_5_0)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5c5c0c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "<SetupDynamicObjectTracker>g__SetClassesAsync|5_0",
                                    std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> (*)(
    uint64_t, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5c5c22c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(),
                                    "<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|5_1", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
    return ___internal_method;
  }
};
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__configuration() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr ::GlobalNamespace::OVRAnchor_TrackerConfiguration const& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__configuration() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____configuration;
}
constexpr void GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_set__configuration(::GlobalNamespace::OVRAnchor_TrackerConfiguration value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____configuration = value;
}
constexpr int32_t& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__asyncOperationCount() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncOperationCount;
}
constexpr int32_t const& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__asyncOperationCount() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____asyncOperationCount;
}
constexpr void GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_set__asyncOperationCount(int32_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____asyncOperationCount = value;
}
constexpr uint64_t& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__dynamicObjectTracker() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicObjectTracker;
}
constexpr uint64_t const& GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_get__dynamicObjectTracker() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->____dynamicObjectTracker;
}
constexpr void GlobalNamespace::OVRAnchor_Tracker::__cordl_internal_set__dynamicObjectTracker(uint64_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->____dynamicObjectTracker = value;
}
inline ::GlobalNamespace::OVRAnchor_TrackerConfiguration GlobalNamespace::OVRAnchor_Tracker::get_Configuration() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "get_Configuration",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackerConfiguration, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor_Tracker::SetupDynamicObjectTracker(::GlobalNamespace::OVRAnchor_TrackerConfiguration config) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "SetupDynamicObjectTracker", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>, false>(this, ___internal_method, config);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>
GlobalNamespace::OVRAnchor_Tracker::ConfigureAsync(::GlobalNamespace::OVRAnchor_TrackerConfiguration configuration) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "ConfigureAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>, false>(this, ___internal_method,
                                                                                                                                                                       configuration);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor_Tracker::FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                         ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "FetchTrackablesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>, false>(
      this, ___internal_method, anchors, incrementalResultsCallback);
}
inline void GlobalNamespace::OVRAnchor_Tracker::Finalize() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), 1)));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Tracker::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Tracker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(), ".ctor",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>
GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__SetClassesAsync_5_0(uint64_t tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration config) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(),
                                               "<SetupDynamicObjectTracker>g__SetClassesAsync|5_0", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>, false>(nullptr, ___internal_method, tracker, config);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>>
GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1(uint64_t tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration config) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor_Tracker*>::get(),
                                               "<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|5_1", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_TrackerConfiguration>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>>, false>(nullptr, ___internal_method, tracker,
                                                                                                                                                                 config);
}
inline ::GlobalNamespace::OVRAnchor_Tracker* GlobalNamespace::OVRAnchor_Tracker::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRAnchor_Tracker*>());
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRAnchor_Tracker::operator ::System::IDisposable*() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRAnchor_Tracker::i___System__IDisposable() noexcept {
  return static_cast<::System::IDisposable*>(static_cast<void*>(this));
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_Tracker::OVRAnchor_Tracker() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceDiscoveryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData)>(
    &::GlobalNamespace::OVRAnchor::OnSpaceDiscoveryComplete)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5c54438;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceDiscoveryComplete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceDiscoveryResultsAvailable
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData)>(
    &::GlobalNamespace::OVRAnchor::OnSpaceDiscoveryResultsAvailable)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5c54978;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceDiscoveryResultsAvailable", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
        ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchOptions,
        ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*)>(&::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5c54ce4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_FetchOptions>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchSharedAnchorsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
        ::System::Guid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c557f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchSharedAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchSharedAnchorsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
        ::System::Guid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(
        &::GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5c558cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchSharedAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateSpatialAnchorAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> (*)(::UnityEngine::Pose)>(
    &::GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5c559a8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "CreateSpatialAnchorAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateSpatialAnchorAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5c55b4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "CreateSpatialAnchorAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5c55cc0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SaveAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5c55f4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveSpacesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (*)(
    ::System::ReadOnlySpan_1<uint64_t>)>(&::GlobalNamespace::OVRAnchor::SaveSpacesAsync)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5c55d44;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SaveSpacesAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSaveSpacesResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData)>(
    &::GlobalNamespace::OVRAnchor::OnSaveSpacesResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c564e0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSaveSpacesResult", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpacesSaveResultData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (
    ::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c56550;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "EraseAsync",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x5c56870;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "EraseAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseSpacesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (*)(
    ::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<::System::Guid>)>(&::GlobalNamespace::OVRAnchor::EraseSpacesAsync)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5c565dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "EraseSpacesAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnEraseSpacesResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData)>(
    &::GlobalNamespace::OVRAnchor::OnEraseSpacesResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c56dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnEraseSpacesResult", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpacesEraseResultData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (
    ::GlobalNamespace::OVRAnchor::*)(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5c56e5c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(
    &::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x5c573f8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareSpacesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<uint64_t>)>(&::GlobalNamespace::OVRAnchor::ShareSpacesAsync)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5c572b4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareSpacesAsync", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (
    ::GlobalNamespace::OVRAnchor::*)(::System::Guid)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5c57b40;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Guid)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5c57d6c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsyncInternal
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<::System::Guid>)>(&::GlobalNamespace::OVRAnchor::ShareAsyncInternal)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5c57be4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsyncInternal", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get(),
                                                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::System::Guid>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnShareAnchorsToGroupsComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRAnchor::OnShareAnchorsToGroupsComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c5813c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnShareAnchorsToGroupsComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.get_Handle
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<uint64_t (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5c581c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "get_Handle",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.get_Uuid
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::System::Guid (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c581cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "get_Uuid",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor::*)(uint64_t, ::System::Guid)>(&::GlobalNamespace::OVRAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5c54cd8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetSupportedComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*)>(&::GlobalNamespace::OVRAnchor::GetSupportedComponents)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5c581d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "GetSupportedComponents", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5c58420;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Equals
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(::System::Object*)>(&::GlobalNamespace::OVRAnchor::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5c584dc;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), 0));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.op_Equality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::op_Equality)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c5857c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.op_Inequality
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::op_Inequality)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5c58604;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetHashCode
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<int32_t (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5c58690;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), 2));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ToString
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::StringW (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c5870c;

  inline static ::MethodInfo const* methodInfo() {

    static auto* ___internal_method = THROW_UNLESS(::il2cpp_utils::ResolveVtableSlot(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), 3));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Dispose
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5c5877c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "Dispose",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Init
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)()>(&::GlobalNamespace::OVRAnchor::Init)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5c58804;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "Init",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchors
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(
    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2)>(&::GlobalNamespace::OVRAnchor::FetchAnchors)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x5c58930;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchors", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateDeferredSpaceComponentStatusTask
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(uint64_t, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool, double_t)>(
    &::GlobalNamespace::OVRAnchor::CreateDeferredSpaceComponentStatusTask)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5c58dec;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "CreateDeferredSpaceComponentStatusTask", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData)>(
    &::GlobalNamespace::OVRAnchor::OnSpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5c59040;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRSpace_StorageLocation, double_t)>(
    &::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c59530;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceQueryComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData)>(
    &::GlobalNamespace::OVRAnchor::OnSpaceQueryComplete)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x5c59624;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(
    ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRSpace_StorageLocation, int32_t, double_t)>(
    &::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5c59d10;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveSpaceList
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRPlugin_Result (*)(uint64_t*, uint32_t, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation, ::ByRef<uint64_t>)>(&::GlobalNamespace::OVRAnchor::SaveSpaceList)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5c59e04;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SaveSpaceList", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceListSaveResult
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData)>(
    &::GlobalNamespace::OVRAnchor::OnSpaceListSaveResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5c59fb0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceListSaveResult", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseSpace
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRPlugin_Result (*)(uint64_t, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation, ::ByRef<uint64_t>)>(&::GlobalNamespace::OVRAnchor::EraseSpace)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5c5a020;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "EraseSpace", std::span<Il2CppClass const* const, 0>(),
                                                 ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>::get(),
                                                                                     ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceEraseComplete
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData)>(
    &::GlobalNamespace::OVRAnchor::OnSpaceEraseComplete)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5c5a178;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceEraseComplete", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetTrackableType
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRAnchor_TrackableType (::GlobalNamespace::OVRAnchor::*)()>(
    &::GlobalNamespace::OVRAnchor::GetTrackableType)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5c5a1e4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "GetTrackableType",
                                                                               std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetRequiredComponents
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*,
    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*)>(&::GlobalNamespace::OVRAnchor::GetRequiredComponents)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5c5a4b8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "GetRequiredComponents", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 3>{
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
                                        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchTrackablesAsync
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
        ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*,
        ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*)>(&::GlobalNamespace::OVRAnchor::FetchTrackablesAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5c5a6d8;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchTrackablesAsync", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*,
    ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*)>(
    &::GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5c5ac18;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 4>{
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>::get() })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<
    static_cast<bool (*)(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRPlugin_SpaceComponentType)>(
        &::GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5c5acfc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "<FetchTrackablesAsync>g__DoesComponentMatchTrackableType|66_1",
        std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor::setStaticF_Null(::GlobalNamespace::OVRAnchor value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRAnchor, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get>(
      std::forward<::GlobalNamespace::OVRAnchor>(value));
}
inline ::GlobalNamespace::OVRAnchor GlobalNamespace::OVRAnchor::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRAnchor, "Null", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get>();
}
inline void GlobalNamespace::OVRAnchor::setStaticF__deferredTasks(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*, "_deferredTasks",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*
GlobalNamespace::OVRAnchor::getStaticF__deferredTasks() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*, "_deferredTasks",
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get>();
}
inline void GlobalNamespace::OVRAnchor::setStaticF__typeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>*, "_typeMap",
                                    ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>* GlobalNamespace::OVRAnchor::getStaticF__typeMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>*, "_typeMap",
                                           ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get>();
}
inline void GlobalNamespace::OVRAnchor::OnSpaceDiscoveryComplete(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceDiscoveryComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceDiscoveryResultsAvailable(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData data) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceDiscoveryResultsAvailable", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::GlobalNamespace::OVRAnchor_FetchOptions options,
                                              ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor_FetchOptions>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>, false>(
      nullptr, ___internal_method, anchors, options, incrementalResultsCallback);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchSharedAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>, false>(
      nullptr, ___internal_method, groupUuid, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids,
                                                    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchSharedAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>, false>(
      nullptr, ___internal_method, groupUuid, allowedAnchorUuids, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync(::UnityEngine::Pose trackingSpacePose) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "CreateSpatialAnchorAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Pose>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>, false>(nullptr, ___internal_method, trackingSpacePose);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync(::UnityEngine::Transform* transform, ::UnityEngine::Camera* centerEyeCamera) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "CreateSpatialAnchorAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Transform*>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::Camera*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>, false>(nullptr, ___internal_method, transform, centerEyeCamera);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRAnchor::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SaveAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>
GlobalNamespace::OVRAnchor::SaveAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SaveAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>, false>(nullptr, ___internal_method, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRAnchor::SaveSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SaveSpacesAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>, false>(nullptr, ___internal_method, spaces);
}
inline void GlobalNamespace::OVRAnchor::OnSaveSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSaveSpacesResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpacesSaveResultData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> GlobalNamespace::OVRAnchor::EraseAsync() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "EraseAsync",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>
GlobalNamespace::OVRAnchor::EraseAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "EraseAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>, false>(nullptr, ___internal_method, anchors,
                                                                                                                                                            uuids);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>
GlobalNamespace::OVRAnchor::EraseSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces, ::System::ReadOnlySpan_1<::System::Guid> uuids) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "EraseSpacesAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>, false>(nullptr, ___internal_method, spaces, uuids);
}
inline void GlobalNamespace::OVRAnchor::OnEraseSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnEraseSpacesResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpacesEraseResultData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>, false>(this, ___internal_method, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors,
                                       ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>, false>(nullptr, ___internal_method, anchors,
                                                                                                                                                            users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces,
                                                                                                                                                           ::System::ReadOnlySpan_1<uint64_t> users) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareSpacesAsync", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>, false>(nullptr, ___internal_method, spaces, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareAsync(::System::Guid groupUuid) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>, false>(this, ___internal_method, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Guid groupUuid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>, false>(nullptr, ___internal_method, anchors,
                                                                                                                                                            groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRAnchor::ShareAsyncInternal(::System::ReadOnlySpan_1<uint64_t> anchors, ::System::ReadOnlySpan_1<::System::Guid> groupUuids) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "ShareAsyncInternal", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<uint64_t>>::get(),
                                                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::ReadOnlySpan_1<::System::Guid>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>, false>(nullptr, ___internal_method, anchors,
                                                                                                                                                            groupUuids);
}
inline void GlobalNamespace::OVRAnchor::OnShareAnchorsToGroupsComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnShareAnchorsToGroupsComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_Result>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, requestId, result);
}
inline uint64_t GlobalNamespace::OVRAnchor::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "get_Handle",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<uint64_t, false>(this, ___internal_method);
}
inline ::System::Guid GlobalNamespace::OVRAnchor::get_Uuid() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "get_Uuid",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::System::Guid, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::_ctor(uint64_t handle, ::System::Guid uuid) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), ".ctor", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Guid>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, handle, uuid);
}
template <typename T> inline T GlobalNamespace::OVRAnchor::GetComponent() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "GetComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OVRAnchor::TryGetComponent(::ByRef<T> component) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "TryGetComponent",
                                                                                  std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                                                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<T>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, component);
}
template <typename T> inline bool GlobalNamespace::OVRAnchor::SupportsComponent() {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SupportsComponent",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }, ::std::span<Il2CppType const* const, 0>())));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor::GetSupportedComponents(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>* components) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "GetSupportedComponents", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, components);
}
inline bool GlobalNamespace::OVRAnchor::Equals(::GlobalNamespace::OVRAnchor other) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "Equals", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), 0)));
  return ::cordl_internals::RunMethodRethrow<bool, false>(this, ___internal_method, obj);
}
inline bool GlobalNamespace::OVRAnchor::op_Equality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "op_Equality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRAnchor::op_Inequality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "op_Inequality", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t GlobalNamespace::OVRAnchor::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), 2)));
  return ::cordl_internals::RunMethodRethrow<int32_t, false>(this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRAnchor::ToString() {
  auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::ResolveVtableSlot(il2cpp_functions::object_get_class(reinterpret_cast<Il2CppObject*>(this)),
                                                                             ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), 3)));
  return ::cordl_internals::RunMethodRethrow<::StringW, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::Dispose() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "Dispose",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::Init() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "Init",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor::FetchAnchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                                                  ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 queryInfo) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchors", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>, false>(nullptr, ___internal_method, anchors, queryInfo);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::CreateDeferredSpaceComponentStatusTask(uint64_t space, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType,
                                                                                                             bool enabledDesired, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "CreateDeferredSpaceComponentStatusTask", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(nullptr, ___internal_method, space, componentType, enabledDesired, timeout);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceSetComponentStatusComplete(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData eventData) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceSetComponentStatusComplete", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventData);
}
template <typename T>
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                        ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout) {
  static auto* ___internal_method_base = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchorsAsync",
      std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(nullptr, ___internal_method, anchors, location, maxResults, timeout);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                                                                        ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                        ::GlobalNamespace::OVRSpace_StorageLocation location, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(nullptr, ___internal_method, uuids, anchors, location, timeout);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceQueryComplete(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData data) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceQueryComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                                                                        ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                        ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchAnchorsAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 5>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRSpace_StorageLocation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<double_t>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(nullptr, ___internal_method, type, anchors, location, maxResults, timeout);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor::SaveSpaceList(uint64_t* spaces, uint32_t numSpaces, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location,
                                                                                     ::ByRef<uint64_t> requestId) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "SaveSpaceList", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t*>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint32_t>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result, false>(nullptr, ___internal_method, spaces, numSpaces, location, requestId);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceListSaveResult(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceListSaveResult", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor::EraseSpace(uint64_t space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location, ::ByRef<uint64_t> requestId) {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "EraseSpace", std::span<Il2CppClass const* const, 0>(),
                                               ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<uint64_t>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ByRef<uint64_t>>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result, false>(nullptr, ___internal_method, space, location, requestId);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceEraseComplete(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "OnSpaceEraseComplete", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRAnchor_TrackableType GlobalNamespace::OVRAnchor::GetTrackableType() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "GetTrackableType",
                                                                             std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackableType, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::GetRequiredComponents(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                                                              ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypesOut,
                                                              ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>* requiredComponentsOut) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "GetRequiredComponents", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 3>{
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
                                      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(nullptr, ___internal_method, trackableTypes, trackableTypesOut, requiredComponentsOut);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor::FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                                                 ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "FetchTrackablesAsync", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>, false>(
      nullptr, ___internal_method, anchors, trackableTypes, incrementalResultsCallback);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
    ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 4>{
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get(),
          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>::get() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>, false>(nullptr, ___internal_method, anchors, trackableTypes, componentType,
                                                                                                                       incrementalResultsCallback);
}
inline bool
GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                                                                                          ::GlobalNamespace::OVRAnchor anchor, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor>::get(), "<FetchTrackablesAsync>g__DoesComponentMatchTrackableType|66_1",
      std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 3>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRAnchor>::get(),
                                          ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_SpaceComponentType>::get() })));
  return ::cordl_internals::RunMethodRethrow<bool, false>(nullptr, ___internal_method, trackableTypes, anchor, componentType);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
constexpr GlobalNamespace::OVRAnchor::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>* GlobalNamespace::OVRAnchor::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRAnchor::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRAnchor::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "_Handle_k__BackingField", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "_Uuid_k__BackingField", ty: "::System::Guid", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor::OVRAnchor(uint64_t _Handle_k__BackingField, ::System::Guid _Uuid_k__BackingField) noexcept {
  this->_Handle_k__BackingField = _Handle_k__BackingField;
  this->_Uuid_k__BackingField = _Uuid_k__BackingField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor::OVRAnchor() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::*)()>(
    &::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x5c5dd54;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5e4cc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "componentType", ty:
// "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "trackableTypes", ty: "::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "incrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "_anchorsWithComponent_5__2", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__7__wrap2", ty: "::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d(
    int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRPlugin_Result> __t__builder, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* _anchorsWithComponent_5__2, ::GlobalNamespace::OVRObjectPool_ListScope_1<::GlobalNamespace::OVRAnchor> __7__wrap2,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->componentType = componentType;
  this->anchors = anchors;
  this->trackableTypes = trackableTypes;
  this->incrementalResultsCallback = incrementalResultsCallback;
  this->_anchorsWithComponent_5__2 = _anchorsWithComponent_5__2;
  this->__7__wrap2 = __7__wrap2;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::*)()>(
    &::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5c5e5c4;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d>::get(),
                                                 "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5ea64;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS(
        (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d>::get(),
                                    "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                    ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d>::get(),
                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(
      (::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d>::get(),
                                  "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
                                  ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "__4__this", ty: "::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d(
    int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder, ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0* __4__this,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->__4__this = __4__this;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0._ctor
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::*)()>(
    &::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5c5e508;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>::get(),
                                                                               ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0._FetchAnchorsAsync_g__execute_0
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::*)()>(
    &::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_FetchAnchorsAsync_g__execute_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5c5e50c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>::get(), "<FetchAnchorsAsync>g__execute|0",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>*& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_uuids() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uuids;
}
constexpr ::System::Collections::Generic::IEnumerable_1<::System::Guid>* const& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_uuids() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___uuids;
}
constexpr void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_set_uuids(::System::Collections::Generic::IEnumerable_1<::System::Guid>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___uuids)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
constexpr ::GlobalNamespace::OVRSpace_StorageLocation& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_location() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr ::GlobalNamespace::OVRSpace_StorageLocation const& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_location() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___location;
}
constexpr void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_set_location(::GlobalNamespace::OVRSpace_StorageLocation value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___location = value;
}
constexpr double_t& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_timeout() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr double_t const& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_timeout() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___timeout;
}
constexpr void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_set_timeout(double_t value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  this->___timeout = value;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_anchors() {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchors;
}
constexpr ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* const& GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_get_anchors() const {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  return this->___anchors;
}
constexpr void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::__cordl_internal_set_anchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* value) {
  CORDL_FIELD_NULL_CHECK(static_cast<void const*>(this));
  il2cpp_functions::gc_wbarrier_set_field(this, static_cast<void**>(static_cast<void*>(&this->___anchors)), cordl_internals::convert(std::forward<decltype(value)>(value)));
}
inline void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>::get(),
                                                                             ".ctor", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_FetchAnchorsAsync_g__execute_0() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>::get(),
                                                                             "<FetchAnchorsAsync>g__execute|0", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>, false>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0* GlobalNamespace::OVRAnchor___c__DisplayClass54_0::New_ctor() {
  return THROW_UNLESS(::il2cpp_utils::NewSpecific<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::OVRAnchor___c__DisplayClass54_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::*)()>(
    &::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5c5eaa0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5ee4c;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty: "::GlobalNamespace::OVRTaskBuilder_1<bool>", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "type", ty: "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: Some("{}") }, CppParam { name: "location", ty:
// "::GlobalNamespace::OVRSpace_StorageLocation", modifiers: "", def_value: Some("{}") }, CppParam { name: "maxResults", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "timeout", ty: "double_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "anchors", ty: "::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::OVRAnchor__FetchAnchorsAsync_d__56(int32_t __1__state, ::GlobalNamespace::OVRTaskBuilder_1<bool> __t__builder,
                                                                                                    ::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                                                                                    ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout,
                                                                                                    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                                    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->type = type;
  this->location = location;
  this->maxResults = maxResults;
  this->timeout = timeout;
  this->anchors = anchors;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::OVRAnchor__FetchAnchorsAsync_d__56() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::*)()>(
    &::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5c5ee88;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5f2a0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "allowedAnchorUuids", ty: "::System::Collections::Generic::IEnumerable_1<::System::Guid>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name: "groupUuid", ty: "::System::Guid", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::OVRAnchor__FetchSharedAnchorsAsync_d__10(
    int32_t __1__state,
    ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder,
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Guid groupUuid,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* __7__wrap1, ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->allowedAnchorUuids = allowedAnchorUuids;
  this->anchors = anchors;
  this->groupUuid = groupUuid;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::OVRAnchor__FetchSharedAnchorsAsync_d__10() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::*)()>(
    &::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5c5f2dc;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method =
        THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9>::get(), "MoveNext",
                                                 std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c5f694;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "groupUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap1", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "__u__1", ty: "::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::OVRAnchor__FetchSharedAnchorsAsync_d__9(
    int32_t __1__state,
    ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* __7__wrap1,
    ::GlobalNamespace::OVRTask_1_Awaiter<::GlobalNamespace::OVRPlugin_Result> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->anchors = anchors;
  this->groupUuid = groupUuid;
  this->__7__wrap1 = __7__wrap1;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::OVRAnchor__FetchSharedAnchorsAsync_d__9() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66.MoveNext
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::*)()>(
    &::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x5c5f6d0;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>::get(),
                                                                               "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66.SetStateMachine
template <>

struct CORDL_HIDDEN ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5c60088;

  inline static ::MethodInfo const* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
        ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
        ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>::get(),
                                                                             "MoveNext", std::span<Il2CppClass const* const, 0>(), ::std::span<Il2CppType const* const, 0>())));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
      ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>::get(), "SetStateMachine", std::span<Il2CppClass const* const, 0>(),
      ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::System::Runtime::CompilerServices::IAsyncStateMachine*>::get() })));
  return ::cordl_internals::RunMethodRethrow<void, false>(this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::il2cpp_utils::Box(this)));
}
// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "__t__builder", ty:
// "::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,::GlobalNamespace::OVRAnchor_FetchResult>>", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "anchors", ty: "::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "trackableTypes", ty: "::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "incrementalResultsCallback", ty: "::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*,int32_t>*", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "__7__wrap1", ty: "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap2", ty:
// "::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__7__wrap3", ty:
// "::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result>", modifiers: "", def_value: Some("{}") }, CppParam { name: "__u__1", ty:
// "::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*>", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::OVRAnchor__FetchTrackablesAsync_d__66(
    int32_t __1__state,
    ::GlobalNamespace::OVRTaskBuilder_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> __t__builder,
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
    ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback,
    ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRAnchor_TrackableType> __7__wrap1,
    ::GlobalNamespace::OVRObjectPool_HashSetScope_1<::GlobalNamespace::OVRPlugin_SpaceComponentType> __7__wrap2,
    ::GlobalNamespace::OVRObjectPool_TaskScope_1<::GlobalNamespace::OVRPlugin_Result> __7__wrap3,
    ::GlobalNamespace::OVRTask_1_Awaiter<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_Result>*> __u__1) noexcept {
  this->__1__state = __1__state;
  this->__t__builder = __t__builder;
  this->anchors = anchors;
  this->trackableTypes = trackableTypes;
  this->incrementalResultsCallback = incrementalResultsCallback;
  this->__7__wrap1 = __7__wrap1;
  this->__7__wrap2 = __7__wrap2;
  this->__7__wrap3 = __7__wrap3;
  this->__u__1 = __u__1;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::OVRAnchor__FetchTrackablesAsync_d__66() {}

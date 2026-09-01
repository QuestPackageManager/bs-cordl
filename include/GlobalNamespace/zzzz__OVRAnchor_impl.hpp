#pragma once
// IWYU pragma private; include "GlobalNamespace\OVRAnchor.hpp"
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_DeferredKey (*)(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData)>(
    &::GlobalNamespace::OVRAnchor_DeferredKey::FromEvent)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e079dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(),
                                                             { "FromEvent", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_DeferredKey::*)(::GlobalNamespace::OVRAnchor_DeferredKey)>(
    &::GlobalNamespace::OVRAnchor_DeferredKey::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e092d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_DeferredKey>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_DeferredKey::*)(::System::Object*)>(&::GlobalNamespace::OVRAnchor_DeferredKey::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e092fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_DeferredKey.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRAnchor_DeferredKey::*)()>(&::GlobalNamespace::OVRAnchor_DeferredKey::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e09388;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), 2 }));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRAnchor_DeferredKey GlobalNamespace::OVRAnchor_DeferredKey::FromEvent(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(),
                                                           { "FromEvent", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_DeferredKey>(nullptr, ___internal_method, eventData);
}
inline bool GlobalNamespace::OVRAnchor_DeferredKey::Equals(::GlobalNamespace::OVRAnchor_DeferredKey other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_DeferredKey>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor_DeferredKey::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRAnchor_DeferredKey::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor_DeferredKey>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
constexpr GlobalNamespace::OVRAnchor_DeferredKey::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>* GlobalNamespace::OVRAnchor_DeferredKey::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_DeferredKey_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_DeferredKey>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Result (::GlobalNamespace::OVRAnchor_FetchOptions::*)(::by_ref<uint64_t>)>(
    &::GlobalNamespace::OVRAnchor_FetchOptions::DiscoverSpaces)> {
  constexpr static std::size_t size = 0x964;
  constexpr static std::size_t addrs = 0x5e03350;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), { "DiscoverSpaces", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_FetchOptions.GetSpaceComponentType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_SpaceComponentType (*)(::System::Type*)>(&::GlobalNamespace::OVRAnchor_FetchOptions::GetSpaceComponentType)> {
  constexpr static std::size_t size = 0x190;
  constexpr static std::size_t addrs = 0x5e093a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), { "GetSpaceComponentType", {}, { ::i2c::type_of<::System::Type*>() } })));
    return ___internal_method;
  }
};
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor_FetchOptions::DiscoverSpaces(::by_ref<uint64_t> requestId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), { "DiscoverSpaces", {}, { ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result>(*this, ___internal_method, requestId);
}
inline ::GlobalNamespace::OVRPlugin_SpaceComponentType GlobalNamespace::OVRAnchor_FetchOptions::GetSpaceComponentType(::System::Type* type) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_FetchOptions>(), { "GetSpaceComponentType", {}, { ::i2c::type_of<::System::Type*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_SpaceComponentType>(nullptr, ___internal_method, type);
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(
    &::GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e096ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                                                             { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::OVRTelemetryMarker, uint64_t)>(
    &::GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x5e095fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                                                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::GlobalNamespace::Telemetry_OVRAnchor_Key)>(
    &::GlobalNamespace::Telemetry_OVRAnchor_Key::Equals)> {
  constexpr static std::size_t size = 0x24;
  constexpr static std::size_t addrs = 0x5e099b0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)(::System::Object*)>(&::GlobalNamespace::Telemetry_OVRAnchor_Key::Equals)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e099d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), { ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Telemetry_OVRAnchor_Key.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::Telemetry_OVRAnchor_Key::*)()>(&::GlobalNamespace::Telemetry_OVRAnchor_Key::GetHashCode)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e09a60;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), { ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), 2 }));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                                                           { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, markerId, requestId);
}
inline void GlobalNamespace::Telemetry_OVRAnchor_Key::_ctor(::GlobalNamespace::OVRTelemetryMarker marker, uint64_t requestId) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(),
                                                                                         { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, marker, requestId);
}
inline bool GlobalNamespace::Telemetry_OVRAnchor_Key::Equals(::GlobalNamespace::Telemetry_OVRAnchor_Key other) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::Telemetry_OVRAnchor_Key::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::Telemetry_OVRAnchor_Key::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::Telemetry_OVRAnchor_Key>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
constexpr GlobalNamespace::Telemetry_OVRAnchor_Key::operator ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>"
constexpr ::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>* GlobalNamespace::Telemetry_OVRAnchor_Key::i___System__IEquatable_1___GlobalNamespace__Telemetry_OVRAnchor_Key_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::Telemetry_OVRAnchor_Key>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRAnchor_Telemetry::OnInit)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e06d6c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(), { "OnInit", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.AddMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRTelemetryMarker)>(&::GlobalNamespace::OVRAnchor_Telemetry::AddMarker)> {
  constexpr static std::size_t size = 0xc8;
  constexpr static std::size_t addrs = 0x5e09534;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(), { "AddMarker", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.Start
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTelemetryMarker (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::Start)> {
  constexpr static std::size_t size = 0xe0;
  constexpr static std::size_t addrs = 0x5e0960c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(
                         ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                         { "Start", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetSyncResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRTelemetryMarker, uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::SetSyncResult)> {
  constexpr static std::size_t size = 0x1c8;
  constexpr static std::size_t addrs = 0x5e047d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                            { "SetSyncResult", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetAsyncResultAndSend
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, int64_t)>(&::GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResultAndSend)> {
  constexpr static std::size_t size = 0x108;
  constexpr static std::size_t addrs = 0x5e02d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                            { "SetAsyncResultAndSend", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.SetAsyncResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, int64_t)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResult)> {
  constexpr static std::size_t size = 0x160;
  constexpr static std::size_t addrs = 0x5e0806c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                                         { "SetAsyncResult", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.GetMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::GetMarker)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e02c68;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                                                             { "GetMarker", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.TryGetMarker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::by_ref<::GlobalNamespace::OVRTelemetryMarker>)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::TryGetMarker)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e096f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                            { "TryGetMarker",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTelemetryMarker>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.Remove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t, ::by_ref<::GlobalNamespace::OVRTelemetryMarker>)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::Remove)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e09798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
            { "Remove", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTelemetryMarker>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Telemetry.GetRemove
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> (*)(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId, uint64_t)>(
    &::GlobalNamespace::OVRAnchor_Telemetry::GetRemove)> {
  constexpr static std::size_t size = 0xc4;
  constexpr static std::size_t addrs = 0x5e09838;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                                                             { "GetRemove", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>() } })));
    return ___internal_method;
  }
};
inline void
GlobalNamespace::OVRAnchor_Telemetry::setStaticF_s_markers(::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>*, "s_markers",
                                    ::GlobalNamespace::OVRAnchor_Telemetry*>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>* GlobalNamespace::OVRAnchor_Telemetry::getStaticF_s_markers() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::Telemetry_OVRAnchor_Key, ::GlobalNamespace::OVRTelemetryMarker>*, "s_markers",
                                           ::GlobalNamespace::OVRAnchor_Telemetry*>();
}
inline void GlobalNamespace::OVRAnchor_Telemetry::OnInit() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(), { "OnInit", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::AddMarker(uint64_t requestId, ::GlobalNamespace::OVRTelemetryMarker marker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(), { "AddMarker", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, marker);
}
inline ::GlobalNamespace::OVRTelemetryMarker GlobalNamespace::OVRAnchor_Telemetry::Start(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId,
                                                                                         ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                          { "Start", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTelemetryMarker>(nullptr, ___internal_method, markerId, requestId, result);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::SetSyncResult(::GlobalNamespace::OVRTelemetryMarker marker, uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                          { "SetSyncResult", {}, { ::i2c::type_of<::GlobalNamespace::OVRTelemetryMarker>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, marker, requestId, result);
}
inline void GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResultAndSend(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, int64_t result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                                       { "SetAsyncResultAndSend", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, markerId, requestId, result);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::SetAsyncResult(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId,
                                                                                                                        int64_t result) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                                              { "SetAsyncResult", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<int64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>>(nullptr, ___internal_method, markerId, requestId, result);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::GetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                                                           { "GetMarker", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>>(nullptr, ___internal_method, markerId, requestId);
}
inline bool GlobalNamespace::OVRAnchor_Telemetry::TryGetMarker(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, ::by_ref<::GlobalNamespace::OVRTelemetryMarker> marker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                          { "TryGetMarker",
                            {},
                            { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTelemetryMarker>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, markerId, requestId, marker);
}
inline bool GlobalNamespace::OVRAnchor_Telemetry::Remove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId, ::by_ref<::GlobalNamespace::OVRTelemetryMarker> marker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
          { "Remove", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>(), ::i2c::type_of<::by_ref<::GlobalNamespace::OVRTelemetryMarker>>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, markerId, requestId, marker);
}
inline ::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker> GlobalNamespace::OVRAnchor_Telemetry::GetRemove(::GlobalNamespace::Telemetry_OVRAnchor_MarkerId markerId, uint64_t requestId) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Telemetry*>(),
                                                           { "GetRemove", {}, { ::i2c::type_of<::GlobalNamespace::Telemetry_OVRAnchor_MarkerId>(), ::i2c::type_of<uint64_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::System::Nullable_1<::GlobalNamespace::OVRTelemetryMarker>>(nullptr, ___internal_method, markerId, requestId);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor_Telemetry::OVRAnchor_Telemetry() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_KeyboardTrackingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e09a7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "get_KeyboardTrackingEnabled", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.set_KeyboardTrackingEnabled
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(bool)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::set_KeyboardTrackingEnabled)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e09a84;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "set_KeyboardTrackingEnabled", {}, { ::i2c::type_of<bool>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_KeyboardTrackingSupported
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingSupported)> {
  constexpr static std::size_t size = 0x9c;
  constexpr static std::size_t addrs = 0x5e09a8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "get_KeyboardTrackingSupported", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.get_RequiresDynamicObjectTracker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::get_RequiresDynamicObjectTracker)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e09b28;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "get_RequiresDynamicObjectTracker", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ToDynamicObjectClasses
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass> (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(
    ::Unity::Collections::Allocator)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ToDynamicObjectClasses)> {
  constexpr static std::size_t size = 0xc0;
  constexpr static std::size_t addrs = 0x5e09b30;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                                                                                           { "ToDynamicObjectClasses", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ResetDynamicObjects
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ResetDynamicObjects)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e09bf0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "ResetDynamicObjects", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.SetDynamicObjectState
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::SetDynamicObjectState)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e09bf8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                                                             { "SetDynamicObjectState", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.GetTrackableTypes
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::GetTrackableTypes)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x5e09c04;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                                                             { "GetTrackableTypes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::ToString)> {
  constexpr static std::size_t size = 0x264;
  constexpr static std::size_t addrs = 0x5e09d18;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x1c;
  constexpr static std::size_t addrs = 0x5e09f7c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                                                                                           { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)(::System::Object*)>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e09f98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRAnchor_TrackerConfiguration::*)()>(&::GlobalNamespace::OVRAnchor_TrackerConfiguration::GetHashCode)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x5e0a020;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Equality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e0a0a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                            { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_TrackerConfiguration.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(
    &::GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Inequality)> {
  constexpr static std::size_t size = 0x18;
  constexpr static std::size_t addrs = 0x5e0a0b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                            { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
    return ___internal_method;
  }
};
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingEnabled() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "get_KeyboardTrackingEnabled", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::set_KeyboardTrackingEnabled(bool value) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "set_KeyboardTrackingEnabled", {}, { ::i2c::type_of<bool>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, value);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_KeyboardTrackingSupported() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "get_KeyboardTrackingSupported", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::get_RequiresDynamicObjectTracker() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "get_RequiresDynamicObjectTracker", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass>
GlobalNamespace::OVRAnchor_TrackerConfiguration::ToDynamicObjectClasses(::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "ToDynamicObjectClasses", {}, { ::i2c::type_of<::Unity::Collections::Allocator>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRNativeList_1<::GlobalNamespace::OVRPlugin_DynamicObjectClass>>(*this, ___internal_method, allocator);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::ResetDynamicObjects() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), { "ResetDynamicObjects", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::SetDynamicObjectState(::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration> other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                                                           { "SetDynamicObjectState", {}, { ::i2c::type_of<::by_ref<::GlobalNamespace::OVRAnchor_TrackerConfiguration>>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, other);
}
inline void GlobalNamespace::OVRAnchor_TrackerConfiguration::GetTrackableTypes(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                                                           { "GetTrackableTypes", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_TrackableType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, trackableTypes);
}
inline ::StringW GlobalNamespace::OVRAnchor_TrackerConfiguration::ToString() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals(::GlobalNamespace::OVRAnchor_TrackerConfiguration other) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                                                                                         { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::Equals(::System::Object* obj) {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline int32_t GlobalNamespace::OVRAnchor_TrackerConfiguration::GetHashCode() {
  auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Equality(::GlobalNamespace::OVRAnchor_TrackerConfiguration lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                          { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRAnchor_TrackerConfiguration::op_Inequality(::GlobalNamespace::OVRAnchor_TrackerConfiguration lhs, ::GlobalNamespace::OVRAnchor_TrackerConfiguration rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(),
                          { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
constexpr GlobalNamespace::OVRAnchor_TrackerConfiguration::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*
GlobalNamespace::OVRAnchor_TrackerConfiguration::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_TrackerConfiguration_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor_TrackerConfiguration>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::*)(::GlobalNamespace::OVRAnchor_Tracker*)>(
    &::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::_ctor)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e0a7b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_Tracker*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::*)()>(&::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Dispose)> {
  constexpr static std::size_t size = 0x20;
  constexpr static std::size_t addrs = 0x5e0a7d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock.AcquireAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> (*)(::GlobalNamespace::OVRAnchor_Tracker*)>(
    &::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::AcquireAsync)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e0a7f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(), { "AcquireAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_Tracker*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor_AsyncLock::_ctor(::GlobalNamespace::OVRAnchor_Tracker* tracker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(), { ".ctor", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_Tracker*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, tracker);
}
inline void GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock> GlobalNamespace::Tracker_OVRAnchor_AsyncLock::AcquireAsync(::GlobalNamespace::OVRAnchor_Tracker* tracker) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>(), { "AcquireAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_Tracker*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::Tracker_OVRAnchor_AsyncLock>>(nullptr, ___internal_method, tracker);
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::Tracker_OVRAnchor_AsyncLock::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::Tracker_OVRAnchor_AsyncLock::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
// Ctor Parameters [CppParam { name: "_tracker", ty: "::GlobalNamespace::OVRAnchor_Tracker*", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Tracker_OVRAnchor_AsyncLock(::GlobalNamespace::OVRAnchor_Tracker* _tracker) noexcept {
  this->_tracker = _tracker;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::Tracker_OVRAnchor_AsyncLock::Tracker_OVRAnchor_AsyncLock() {}
//  Writing Method size for method: ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::*)()>(
    &::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::MoveNext)> {
  constexpr static std::size_t size = 0x1f4;
  constexpr static std::size_t addrs = 0x5e0a8ac;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0aaa0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::AsyncLock_Tracker_OVRAnchor__AcquireAsync_d__3::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::*)()>(
    &::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::MoveNext)> {
  constexpr static std::size_t size = 0x6b0;
  constexpr static std::size_t addrs = 0x5e0aadc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0b18c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d>(),
                                                             { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void
GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d>(),
                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::Tracker_OVRAnchor___SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::*)()>(&::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::MoveNext)> {
  constexpr static std::size_t size = 0x920;
  constexpr static std::size_t addrs = 0x5e0b1c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0bae8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor__ConfigureAsync_d__7::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::*)()>(&::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x31c;
  constexpr static std::size_t addrs = 0x5e0bb24;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0be40;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor__Dispose_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::*)()>(
    &::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::MoveNext)> {
  constexpr static std::size_t size = 0x38c;
  constexpr static std::size_t addrs = 0x5e0be48;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0c1d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::Tracker_OVRAnchor__SetupDynamicObjectTracker_d__5::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_TrackerConfiguration (::GlobalNamespace::OVRAnchor_Tracker::*)()>(
    &::GlobalNamespace::OVRAnchor_Tracker::get_Configuration)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e0a0d0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { "get_Configuration", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.SetupDynamicObjectTracker
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (::GlobalNamespace::OVRAnchor_Tracker::*)(
    ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::SetupDynamicObjectTracker)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e0a0d8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { "SetupDynamicObjectTracker", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.ConfigureAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>> (
    ::GlobalNamespace::OVRAnchor_Tracker::*)(::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::ConfigureAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e0a1a4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { "ConfigureAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.FetchTrackablesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<
    ::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (::GlobalNamespace::OVRAnchor_Tracker::*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*)>(
    &::GlobalNamespace::OVRAnchor_Tracker::FetchTrackablesAsync)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5e0a278;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                                                             { "FetchTrackablesAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                 ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.Finalize
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::Finalize)> {
  constexpr static std::size_t size = 0xb4;
  constexpr static std::size_t addrs = 0x5e0a428;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), 1 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::Dispose)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e0a4dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor_Tracker::*)()>(&::GlobalNamespace::OVRAnchor_Tracker::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0a57c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._SetupDynamicObjectTracker_g__SetClassesAsync_5_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>> (*)(
    uint64_t, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__SetClassesAsync_5_0)> {
  constexpr static std::size_t size = 0x168;
  constexpr static std::size_t addrs = 0x5e0a580;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                            { "<SetupDynamicObjectTracker>g__SetClassesAsync|5_0", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor_Tracker._SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>> (*)(
    uint64_t, ::GlobalNamespace::OVRAnchor_TrackerConfiguration)>(&::GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1)> {
  constexpr static std::size_t size = 0xcc;
  constexpr static std::size_t addrs = 0x5e0a6e8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                                                                                           { "<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|5_1",
                                                                                             {},
                                                                                             { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
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
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { "get_Configuration", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackerConfiguration>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor_Tracker::SetupDynamicObjectTracker(::GlobalNamespace::OVRAnchor_TrackerConfiguration config) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { "SetupDynamicObjectTracker", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(this, ___internal_method, config);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>
GlobalNamespace::OVRAnchor_Tracker::ConfigureAsync(::GlobalNamespace::OVRAnchor_TrackerConfiguration configuration) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { "ConfigureAsync", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ConfigureTrackerResult>>>(this, ___internal_method,
                                                                                                                                                                configuration);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor_Tracker::FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                         ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                                                           { "FetchTrackablesAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(),
                                                               ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>>(
      this, ___internal_method, anchors, incrementalResultsCallback);
}
inline void GlobalNamespace::OVRAnchor_Tracker::Finalize() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), 1 })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Tracker::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor_Tracker::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>
GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__SetClassesAsync_5_0(uint64_t tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration config) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                          { "<SetupDynamicObjectTracker>g__SetClassesAsync|5_0", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRPlugin_Result>>>(nullptr, ___internal_method, tracker, config);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>>
GlobalNamespace::OVRAnchor_Tracker::_SetupDynamicObjectTracker_g__CreateAndConfigureTrackerAsync_5_1(uint64_t tracker, ::GlobalNamespace::OVRAnchor_TrackerConfiguration config) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor_Tracker*>(),
                                                                                         { "<SetupDynamicObjectTracker>g__CreateAndConfigureTrackerAsync|5_1",
                                                                                           {},
                                                                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_TrackerConfiguration>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<uint64_t, ::GlobalNamespace::OVRPlugin_Result>>>(nullptr, ___internal_method, tracker, config);
}
inline ::GlobalNamespace::OVRAnchor_Tracker* GlobalNamespace::OVRAnchor_Tracker::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRAnchor_Tracker*>());
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData)>(&::GlobalNamespace::OVRAnchor::OnSpaceDiscoveryComplete)> {
  constexpr static std::size_t size = 0x374;
  constexpr static std::size_t addrs = 0x5e028f4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSpaceDiscoveryComplete", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceDiscoveryResultsAvailable
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData)>(&::GlobalNamespace::OVRAnchor::OnSpaceDiscoveryResultsAvailable)> {
  constexpr static std::size_t size = 0x360;
  constexpr static std::size_t addrs = 0x5e02e34;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "OnSpaceDiscoveryResultsAvailable", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
        ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchOptions,
        ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*)>(&::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0x1b0;
  constexpr static std::size_t addrs = 0x5e031a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                         { "FetchAnchorsAsync",
                                           {},
                                           { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchOptions>(),
                                             ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchSharedAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
        ::System::Guid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e03cb4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                            { "FetchSharedAnchorsAsync", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchSharedAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
        ::System::Guid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*)>(
        &::GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync)> {
  constexpr static std::size_t size = 0xdc;
  constexpr static std::size_t addrs = 0x5e03d88;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "FetchSharedAnchorsAsync",
                                                                               {},
                                                                               { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateSpatialAnchorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> (*)(::UnityEngine::Pose)>(&::GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync)> {
  constexpr static std::size_t size = 0x1a4;
  constexpr static std::size_t addrs = 0x5e03e64;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "CreateSpatialAnchorAsync", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateSpatialAnchorAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> (*)(::UnityEngine::Transform*, ::UnityEngine::Camera*)>(
    &::GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync)> {
  constexpr static std::size_t size = 0x174;
  constexpr static std::size_t addrs = 0x5e04008;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "CreateSpatialAnchorAsync", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (::GlobalNamespace::OVRAnchor::*)()>(
    &::GlobalNamespace::OVRAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x5e0417c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "SaveAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*)>(&::GlobalNamespace::OVRAnchor::SaveAsync)> {
  constexpr static std::size_t size = 0x3cc;
  constexpr static std::size_t addrs = 0x5e04408;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "SaveAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveSpacesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> (*)(::System::ReadOnlySpan_1<uint64_t>)>(
    &::GlobalNamespace::OVRAnchor::SaveSpacesAsync)> {
  constexpr static std::size_t size = 0x208;
  constexpr static std::size_t addrs = 0x5e04200;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "SaveSpacesAsync", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSaveSpacesResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData)>(&::GlobalNamespace::OVRAnchor::OnSaveSpacesResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e0499c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSaveSpacesResult", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpacesSaveResultData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (::GlobalNamespace::OVRAnchor::*)()>(
    &::GlobalNamespace::OVRAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e04a0c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "EraseAsync", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::System::Guid>*)>(&::GlobalNamespace::OVRAnchor::EraseAsync)> {
  constexpr static std::size_t size = 0x57c;
  constexpr static std::size_t addrs = 0x5e04d2c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "EraseAsync",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                                                     ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseSpacesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> (*)(
    ::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<::System::Guid>)>(&::GlobalNamespace::OVRAnchor::EraseSpacesAsync)> {
  constexpr static std::size_t size = 0x294;
  constexpr static std::size_t addrs = 0x5e04a98;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                { "EraseSpacesAsync", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnEraseSpacesResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData)>(&::GlobalNamespace::OVRAnchor::OnEraseSpacesResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e052a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnEraseSpacesResult", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpacesEraseResultData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (::GlobalNamespace::OVRAnchor::*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x458;
  constexpr static std::size_t addrs = 0x5e05318;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "ShareAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*)>(
    &::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x748;
  constexpr static std::size_t addrs = 0x5e058b4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "ShareAsync",
                                                                                            {},
                                                                                            { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                                              ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareSpacesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<uint64_t>)>(&::GlobalNamespace::OVRAnchor::ShareSpacesAsync)> {
  constexpr static std::size_t size = 0x144;
  constexpr static std::size_t addrs = 0x5e05770;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                { "ShareSpacesAsync", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (::GlobalNamespace::OVRAnchor::*)(
    ::System::Guid)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0xa4;
  constexpr static std::size_t addrs = 0x5e05ffc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "ShareAsync", {}, { ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*, ::System::Guid)>(&::GlobalNamespace::OVRAnchor::ShareAsync)> {
  constexpr static std::size_t size = 0x3d0;
  constexpr static std::size_t addrs = 0x5e06228;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                         { "ShareAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ShareAsyncInternal
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> (*)(
    ::System::ReadOnlySpan_1<uint64_t>, ::System::ReadOnlySpan_1<::System::Guid>)>(&::GlobalNamespace::OVRAnchor::ShareAsyncInternal)> {
  constexpr static std::size_t size = 0x188;
  constexpr static std::size_t addrs = 0x5e060a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                { "ShareAsyncInternal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::System::Guid>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnShareAnchorsToGroupsComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(uint64_t, ::GlobalNamespace::OVRPlugin_Result)>(&::GlobalNamespace::OVRAnchor::OnShareAnchorsToGroupsComplete)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e065f8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "OnShareAnchorsToGroupsComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.get_Handle
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<uint64_t (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::get_Handle)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x5e06680;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "get_Handle", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.get_Uuid
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::System::Guid (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::get_Uuid)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e06688;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "get_Uuid", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._ctor
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor::*)(uint64_t, ::System::Guid)>(&::GlobalNamespace::OVRAnchor::_ctor)> {
  constexpr static std::size_t size = 0xc;
  constexpr static std::size_t addrs = 0x5e03194;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetSupportedComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*)>(
    &::GlobalNamespace::OVRAnchor::GetSupportedComponents)> {
  constexpr static std::size_t size = 0x248;
  constexpr static std::size_t addrs = 0x5e06694;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                { "GetSupportedComponents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::Equals)> {
  constexpr static std::size_t size = 0xbc;
  constexpr static std::size_t addrs = 0x5e068dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Equals
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (::GlobalNamespace::OVRAnchor::*)(::System::Object*)>(&::GlobalNamespace::OVRAnchor::Equals)> {
  constexpr static std::size_t size = 0xa0;
  constexpr static std::size_t addrs = 0x5e06998;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 0 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.op_Equality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::op_Equality)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e06a38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.op_Inequality
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<bool (*)(::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRAnchor)>(&::GlobalNamespace::OVRAnchor::op_Inequality)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x5e06ac0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetHashCode
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<int32_t (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::GetHashCode)> {
  constexpr static std::size_t size = 0x7c;
  constexpr static std::size_t addrs = 0x5e06b4c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 2 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.ToString
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::StringW (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::ToString)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e06bc8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, ::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { ::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 3 }));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Dispose
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::Dispose)> {
  constexpr static std::size_t size = 0x88;
  constexpr static std::size_t addrs = 0x5e06c38;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "Dispose", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.Init
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)()>(&::GlobalNamespace::OVRAnchor::Init)> {
  constexpr static std::size_t size = 0xac;
  constexpr static std::size_t addrs = 0x5e06cc0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "Init", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchors
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(
    ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2)>(&::GlobalNamespace::OVRAnchor::FetchAnchors)> {
  constexpr static std::size_t size = 0x4bc;
  constexpr static std::size_t addrs = 0x5e06dec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(
            ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
            { "FetchAnchors", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.CreateDeferredSpaceComponentStatusTask
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(uint64_t, ::GlobalNamespace::OVRPlugin_SpaceComponentType, bool, double_t)>(
    &::GlobalNamespace::OVRAnchor::CreateDeferredSpaceComponentStatusTask)> {
  constexpr static std::size_t size = 0x254;
  constexpr static std::size_t addrs = 0x5e072a8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{},
                     (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                         { "CreateDeferredSpaceComponentStatusTask",
                                           {},
                                           { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceSetComponentStatusComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData)>(
    &::GlobalNamespace::OVRAnchor::OnSpaceSetComponentStatusComplete)> {
  constexpr static std::size_t size = 0x4e0;
  constexpr static std::size_t addrs = 0x5e074fc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                { "OnSpaceSetComponentStatusComplete", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(
    ::System::Collections::Generic::IEnumerable_1<::System::Guid>*, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRSpace_StorageLocation, double_t)>(
    &::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e079ec;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "FetchAnchorsAsync",
                                                                                                   {},
                                                                                                   { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                                                                     ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                                                     ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceQueryComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData)>(&::GlobalNamespace::OVRAnchor::OnSpaceQueryComplete)> {
  constexpr static std::size_t size = 0x58c;
  constexpr static std::size_t addrs = 0x5e07ae0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSpaceQueryComplete", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchAnchorsAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (*)(
    ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRSpace_StorageLocation, int32_t, double_t)>(
    &::GlobalNamespace::OVRAnchor::FetchAnchorsAsync)> {
  constexpr static std::size_t size = 0xf4;
  constexpr static std::size_t addrs = 0x5e081cc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                            { "FetchAnchorsAsync",
                              {},
                              { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(),
                                ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.SaveSpaceList
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Result (*)(uint64_t*, uint32_t, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation, ::by_ref<uint64_t>)>(
    &::GlobalNamespace::OVRAnchor::SaveSpaceList)> {
  constexpr static std::size_t size = 0x1ac;
  constexpr static std::size_t addrs = 0x5e082c0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "SaveSpaceList",
                                                                               {},
                                                                               { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint32_t>(),
                                                                                 ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceListSaveResult
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData)>(&::GlobalNamespace::OVRAnchor::OnSpaceListSaveResult)> {
  constexpr static std::size_t size = 0x70;
  constexpr static std::size_t addrs = 0x5e0846c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSpaceListSaveResult", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.EraseSpace
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRPlugin_Result (*)(uint64_t, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation, ::by_ref<uint64_t>)>(
    &::GlobalNamespace::OVRAnchor::EraseSpace)> {
  constexpr static std::size_t size = 0x158;
  constexpr static std::size_t addrs = 0x5e084dc;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                            { "EraseSpace", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.OnSpaceEraseComplete
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData)>(&::GlobalNamespace::OVRAnchor::OnSpaceEraseComplete)> {
  constexpr static std::size_t size = 0x6c;
  constexpr static std::size_t addrs = 0x5e08634;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSpaceEraseComplete", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetTrackableType
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRAnchor_TrackableType (::GlobalNamespace::OVRAnchor::*)()>(&::GlobalNamespace::OVRAnchor::GetTrackableType)> {
  constexpr static std::size_t size = 0x2d4;
  constexpr static std::size_t addrs = 0x5e086a0;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "GetTrackableType", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.GetRequiredComponents
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (*)(
    ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*,
    ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*)>(&::GlobalNamespace::OVRAnchor::GetRequiredComponents)> {
  constexpr static std::size_t size = 0x220;
  constexpr static std::size_t addrs = 0x5e08974;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(
        ::i2c::no_logger{},
        (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "GetRequiredComponents",
                                                                               {},
                                                                               { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor.FetchTrackablesAsync
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>> (*)(
        ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*,
        ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*)>(&::GlobalNamespace::OVRAnchor::FetchTrackablesAsync)> {
  constexpr static std::size_t size = 0xd4;
  constexpr static std::size_t addrs = 0x5e08b94;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "FetchTrackablesAsync",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                                 ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> (*)(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*,
    ::GlobalNamespace::OVRPlugin_SpaceComponentType, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*)>(
    &::GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0)> {
  constexpr static std::size_t size = 0xe4;
  constexpr static std::size_t addrs = 0x5e090d4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                 ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(),
                                                                 ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>() } })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor._FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<
    static_cast<bool (*)(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*, ::GlobalNamespace::OVRAnchor, ::GlobalNamespace::OVRPlugin_SpaceComponentType)>(
        &::GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1)> {
  constexpr static std::size_t size = 0x120;
  constexpr static std::size_t addrs = 0x5e091b8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                             { "<FetchTrackablesAsync>g__DoesComponentMatchTrackableType|66_1",
                                                               {},
                                                               { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                                 ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor::setStaticF_Null(::GlobalNamespace::OVRAnchor value) {
  ::cordl_internals::setStaticField<::GlobalNamespace::OVRAnchor, "Null", ::GlobalNamespace::OVRAnchor>(std::forward<::GlobalNamespace::OVRAnchor>(value));
}
inline ::GlobalNamespace::OVRAnchor GlobalNamespace::OVRAnchor::getStaticF_Null() {
  return ::cordl_internals::getStaticField<::GlobalNamespace::OVRAnchor, "Null", ::GlobalNamespace::OVRAnchor>();
}
inline void GlobalNamespace::OVRAnchor::setStaticF__deferredTasks(
    ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>* value) {
  ::cordl_internals::setStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*, "_deferredTasks",
      ::GlobalNamespace::OVRAnchor>(
      std::forward<::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*>(
          value));
}
inline ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*
GlobalNamespace::OVRAnchor::getStaticF__deferredTasks() {
  return ::cordl_internals::getStaticField<
      ::System::Collections::Generic::Dictionary_2<::GlobalNamespace::OVRAnchor_DeferredKey, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor_DeferredValue>*>*, "_deferredTasks",
      ::GlobalNamespace::OVRAnchor>();
}
inline void GlobalNamespace::OVRAnchor::setStaticF__typeMap(::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>* value) {
  ::cordl_internals::setStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>*, "_typeMap", ::GlobalNamespace::OVRAnchor>(
      std::forward<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>*>(value));
}
inline ::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>* GlobalNamespace::OVRAnchor::getStaticF__typeMap() {
  return ::cordl_internals::getStaticField<::System::Collections::Generic::Dictionary_2<::System::Type*, ::GlobalNamespace::OVRPlugin_SpaceComponentType>*, "_typeMap", ::GlobalNamespace::OVRAnchor>();
}
inline void GlobalNamespace::OVRAnchor::OnSpaceDiscoveryComplete(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSpaceDiscoveryComplete", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceDiscoveryResultsAvailable(::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData data) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "OnSpaceDiscoveryResultsAvailable", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::GlobalNamespace::OVRAnchor_FetchOptions options,
                                              ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                              { "FetchAnchorsAsync",
                                                {},
                                                { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor_FetchOptions>(),
                                                  ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>>(
      nullptr, ___internal_method, anchors, options, incrementalResultsCallback);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                          { "FetchSharedAnchorsAsync", {}, { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>>(
      nullptr, ___internal_method, groupUuid, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor::FetchSharedAnchorsAsync(::System::Guid groupUuid, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* allowedAnchorUuids,
                                                    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "FetchSharedAnchorsAsync",
                                                                             {},
                                                                             { ::i2c::type_of<::System::Guid>(), ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                                               ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>>(
      nullptr, ___internal_method, groupUuid, allowedAnchorUuids, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync(::UnityEngine::Pose trackingSpacePose) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "CreateSpatialAnchorAsync", {}, { ::i2c::type_of<::UnityEngine::Pose>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>>(nullptr, ___internal_method, trackingSpacePose);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor> GlobalNamespace::OVRAnchor::CreateSpatialAnchorAsync(::UnityEngine::Transform* transform, ::UnityEngine::Camera* centerEyeCamera) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "CreateSpatialAnchorAsync", {}, { ::i2c::type_of<::UnityEngine::Transform*>(), ::i2c::type_of<::UnityEngine::Camera*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRAnchor>>(nullptr, ___internal_method, transform, centerEyeCamera);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRAnchor::SaveAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "SaveAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>
GlobalNamespace::OVRAnchor::SaveAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "SaveAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(nullptr, ___internal_method, anchors);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>> GlobalNamespace::OVRAnchor::SaveSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "SaveSpacesAsync", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_SaveResult>>>(nullptr, ___internal_method, spaces);
}
inline void GlobalNamespace::OVRAnchor::OnSaveSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesSaveResultData eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSaveSpacesResult", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpacesSaveResultData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>> GlobalNamespace::OVRAnchor::EraseAsync() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "EraseAsync", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(*this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>
GlobalNamespace::OVRAnchor::EraseAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "EraseAsync",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                                                   ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(nullptr, ___internal_method, anchors, uuids);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>
GlobalNamespace::OVRAnchor::EraseSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces, ::System::ReadOnlySpan_1<::System::Guid> uuids) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                              { "EraseSpacesAsync", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_EraseResult>>>(nullptr, ___internal_method, spaces, uuids);
}
inline void GlobalNamespace::OVRAnchor::OnEraseSpacesResult(::GlobalNamespace::OVRDeserialize_SpacesEraseResultData eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnEraseSpacesResult", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpacesEraseResultData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "ShareAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(*this, ___internal_method, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors,
                                       ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>* users) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "ShareAsync",
                                                                                          {},
                                                                                          { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                                            ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRSpaceUser>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareSpacesAsync(::System::ReadOnlySpan_1<uint64_t> spaces,
                                                                                                                                                           ::System::ReadOnlySpan_1<uint64_t> users) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                              { "ShareSpacesAsync", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, spaces, users);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>> GlobalNamespace::OVRAnchor::ShareAsync(::System::Guid groupUuid) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "ShareAsync", {}, { ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(*this, ___internal_method, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRAnchor::ShareAsync(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Guid groupUuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                       { "ShareAsync", {}, { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, groupUuid);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>
GlobalNamespace::OVRAnchor::ShareAsyncInternal(::System::ReadOnlySpan_1<uint64_t> anchors, ::System::ReadOnlySpan_1<::System::Guid> groupUuids) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                              { "ShareAsyncInternal", {}, { ::i2c::type_of<::System::ReadOnlySpan_1<uint64_t>>(), ::i2c::type_of<::System::ReadOnlySpan_1<::System::Guid>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_1<::GlobalNamespace::OVRAnchor_ShareResult>>>(nullptr, ___internal_method, anchors, groupUuids);
}
inline void GlobalNamespace::OVRAnchor::OnShareAnchorsToGroupsComplete(uint64_t requestId, ::GlobalNamespace::OVRPlugin_Result result) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "OnShareAnchorsToGroupsComplete", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_Result>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, requestId, result);
}
inline uint64_t GlobalNamespace::OVRAnchor::get_Handle() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "get_Handle", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<uint64_t>(*this, ___internal_method);
}
inline ::System::Guid GlobalNamespace::OVRAnchor::get_Uuid() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "get_Uuid", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::System::Guid>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::_ctor(uint64_t handle, ::System::Guid uuid) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { ".ctor", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::System::Guid>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, handle, uuid);
}
template <typename T> inline T GlobalNamespace::OVRAnchor::GetComponent() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "GetComponent", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<T>(*this, ___internal_method);
}
template <typename T> inline bool GlobalNamespace::OVRAnchor::TryGetComponent(::by_ref<T> component) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "TryGetComponent", { ::i2c::class_of<T>() }, { ::i2c::type_of<::by_ref<T>>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, component);
}
template <typename T> inline bool GlobalNamespace::OVRAnchor::SupportsComponent() {
  static auto* ___internal_method_base = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "SupportsComponent", { ::i2c::class_of<T>() }, {} })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method);
}
inline bool GlobalNamespace::OVRAnchor::GetSupportedComponents(::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>* components) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                              { "GetSupportedComponents", {}, { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, components);
}
inline bool GlobalNamespace::OVRAnchor::Equals(::GlobalNamespace::OVRAnchor other) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "Equals", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, other);
}
inline bool GlobalNamespace::OVRAnchor::Equals(::System::Object* obj) {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 0 })));
  return ::cordl_internals::RunMethodRethrow<bool>(*this, ___internal_method, obj);
}
inline bool GlobalNamespace::OVRAnchor::op_Equality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "op_Equality", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline bool GlobalNamespace::OVRAnchor::op_Inequality(::GlobalNamespace::OVRAnchor lhs, ::GlobalNamespace::OVRAnchor rhs) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "op_Inequality", {}, { ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRAnchor>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, lhs, rhs);
}
inline int32_t GlobalNamespace::OVRAnchor::GetHashCode() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 2 })));
  return ::cordl_internals::RunMethodRethrow<int32_t>(*this, ___internal_method);
}
inline ::StringW GlobalNamespace::OVRAnchor::ToString() {
  auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(reinterpret_cast<Il2CppObject*>(this)->klass, { ::i2c::class_of<::GlobalNamespace::OVRAnchor>(), 3 })));
  return ::cordl_internals::RunMethodRethrow<::StringW>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::Dispose() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "Dispose", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::Init() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "Init", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor::FetchAnchors(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                                                  ::GlobalNamespace::OVRPlugin_SpaceQueryInfo2 queryInfo) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(
          ::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
          { "FetchAnchors", {}, { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceQueryInfo2>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(nullptr, ___internal_method, anchors, queryInfo);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::CreateDeferredSpaceComponentStatusTask(uint64_t space, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType,
                                                                                                             bool enabledDesired, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                       { "CreateDeferredSpaceComponentStatusTask",
                                         {},
                                         { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<bool>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, space, componentType, enabledDesired, timeout);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceSetComponentStatusComplete(::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData eventData) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "OnSpaceSetComponentStatusComplete", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
template <typename T>
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                        ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout) {
  static auto* ___internal_method_base =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "FetchAnchorsAsync",
                                                             { ::i2c::class_of<T>() },
                                                             { ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::make_generic(___internal_method_base, { ::i2c::class_of<T>() })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, anchors, location, maxResults, timeout);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::System::Collections::Generic::IEnumerable_1<::System::Guid>* uuids,
                                                                                        ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                        ::GlobalNamespace::OVRSpace_StorageLocation location, double_t timeout) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "FetchAnchorsAsync",
                                                                                                 {},
                                                                                                 { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::System::Guid>*>(),
                                                                                                   ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(),
                                                                                                   ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, uuids, anchors, location, timeout);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceQueryComplete(::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData data) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSpaceQueryComplete", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, data);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor::FetchAnchorsAsync(::GlobalNamespace::OVRPlugin_SpaceComponentType type,
                                                                                        ::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                                                        ::GlobalNamespace::OVRSpace_StorageLocation location, int32_t maxResults, double_t timeout) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{},
                   (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                       { "FetchAnchorsAsync",
                                         {},
                                         { ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(), ::i2c::type_of<::System::Collections::Generic::IList_1<::GlobalNamespace::OVRAnchor>*>(),
                                           ::i2c::type_of<::GlobalNamespace::OVRSpace_StorageLocation>(), ::i2c::type_of<int32_t>(), ::i2c::type_of<double_t>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(nullptr, ___internal_method, type, anchors, location, maxResults, timeout);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor::SaveSpaceList(uint64_t* spaces, uint32_t numSpaces, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location,
                                                                                     ::by_ref<uint64_t> requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                          { "SaveSpaceList",
                            {},
                            { ::i2c::type_of<uint64_t*>(), ::i2c::type_of<uint32_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result>(nullptr, ___internal_method, spaces, numSpaces, location, requestId);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceListSaveResult(::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSpaceListSaveResult", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRPlugin_Result GlobalNamespace::OVRAnchor::EraseSpace(uint64_t space, ::GlobalNamespace::OVRPlugin_SpaceStorageLocation location, ::by_ref<uint64_t> requestId) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                          { "EraseSpace", {}, { ::i2c::type_of<uint64_t>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceStorageLocation>(), ::i2c::type_of<::by_ref<uint64_t>>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRPlugin_Result>(nullptr, ___internal_method, space, location, requestId);
}
inline void GlobalNamespace::OVRAnchor::OnSpaceEraseComplete(::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData eventData) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "OnSpaceEraseComplete", {}, { ::i2c::type_of<::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, eventData);
}
inline ::GlobalNamespace::OVRAnchor_TrackableType GlobalNamespace::OVRAnchor::GetTrackableType() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "GetTrackableType", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRAnchor_TrackableType>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor::GetRequiredComponents(::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                                                              ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypesOut,
                                                              ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>* requiredComponentsOut) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "GetRequiredComponents",
                                                                             {},
                                                                             { ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRPlugin_SpaceComponentType>*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(nullptr, ___internal_method, trackableTypes, trackableTypesOut, requiredComponentsOut);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>
GlobalNamespace::OVRAnchor::FetchTrackablesAsync(::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors,
                                                 ::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                                                 ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "FetchTrackablesAsync",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::IEnumerable_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                               ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<
      ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRResult_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, ::GlobalNamespace::OVRAnchor_FetchResult>>>(
      nullptr, ___internal_method, anchors, trackableTypes, incrementalResultsCallback);
}
inline ::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result> GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0(
    ::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>* anchors, ::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
    ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType, ::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>* incrementalResultsCallback) {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(),
                                                           { "<FetchTrackablesAsync>g__QuerySingleComponentAsync|66_0",
                                                             {},
                                                             { ::i2c::type_of<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*>(),
                                                               ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                               ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>(),
                                                               ::i2c::type_of<::System::Action_2<::System::Collections::Generic::List_1<::GlobalNamespace::OVRAnchor>*, int32_t>*>() } })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<::GlobalNamespace::OVRPlugin_Result>>(nullptr, ___internal_method, anchors, trackableTypes, componentType,
                                                                                                                incrementalResultsCallback);
}
inline bool
GlobalNamespace::OVRAnchor::_FetchTrackablesAsync_g__DoesComponentMatchTrackableType_66_1(::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>* trackableTypes,
                                                                                          ::GlobalNamespace::OVRAnchor anchor, ::GlobalNamespace::OVRPlugin_SpaceComponentType componentType) {
  static auto* ___internal_method = THROW_UNLESS(
      ::i2c::no_logger{},
      (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor>(), { "<FetchTrackablesAsync>g__DoesComponentMatchTrackableType|66_1",
                                                                             {},
                                                                             { ::i2c::type_of<::System::Collections::Generic::HashSet_1<::GlobalNamespace::OVRAnchor_TrackableType>*>(),
                                                                               ::i2c::type_of<::GlobalNamespace::OVRAnchor>(), ::i2c::type_of<::GlobalNamespace::OVRPlugin_SpaceComponentType>() } })));
  return ::cordl_internals::RunMethodRethrow<bool>(nullptr, ___internal_method, trackableTypes, anchor, componentType);
}
/// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
constexpr GlobalNamespace::OVRAnchor::operator ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IEquatable_1<::GlobalNamespace::OVRAnchor>"
constexpr ::System::IEquatable_1<::GlobalNamespace::OVRAnchor>* GlobalNamespace::OVRAnchor::i___System__IEquatable_1___GlobalNamespace__OVRAnchor_() {
  return static_cast<::System::IEquatable_1<::GlobalNamespace::OVRAnchor>*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert operator to "::System::IDisposable"
constexpr GlobalNamespace::OVRAnchor::operator ::System::IDisposable*() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::IDisposable"
constexpr ::System::IDisposable* GlobalNamespace::OVRAnchor::i___System__IDisposable() {
  return static_cast<::System::IDisposable*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::*)()>(
    &::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x778;
  constexpr static std::size_t addrs = 0x5e0c210;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0c988;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::OVRAnchor___FetchTrackablesAsync_g__QuerySingleComponentAsync_66_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::*)()>(
    &::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::MoveNext)> {
  constexpr static std::size_t size = 0x3f4;
  constexpr static std::size_t addrs = 0x5e0ca80;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::*)(
    ::System::Runtime::CompilerServices::IAsyncStateMachine*)>(&::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0cf20;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::MoveNext() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine*
GlobalNamespace::__c__DisplayClass54_0_OVRAnchor___FetchAnchorsAsync_g__execute_0_d::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::*)()>(&::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_ctor)> {
  constexpr static std::size_t size = 0x4;
  constexpr static std::size_t addrs = 0x5e0c9c4;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>(), { ".ctor", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0._FetchAnchorsAsync_g__execute_0
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<::GlobalNamespace::OVRTask_1<bool> (::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::*)()>(
    &::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_FetchAnchorsAsync_g__execute_0)> {
  constexpr static std::size_t size = 0xb8;
  constexpr static std::size_t addrs = 0x5e0c9c8;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method =
        THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>(), { "<FetchAnchorsAsync>g__execute|0", {}, {} })));
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
  this->___uuids = value;
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
  this->___anchors = value;
}
inline void GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_ctor() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>(), { ".ctor", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRTask_1<bool> GlobalNamespace::OVRAnchor___c__DisplayClass54_0::_FetchAnchorsAsync_g__execute_0() {
  static auto* ___internal_method =
      THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>(), { "<FetchAnchorsAsync>g__execute|0", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<::GlobalNamespace::OVRTask_1<bool>>(this, ___internal_method);
}
inline ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0* GlobalNamespace::OVRAnchor___c__DisplayClass54_0::New_ctor() {
  return THROW_UNLESS(::i2c::no_logger{}, ::i2c::new_ctor<::GlobalNamespace::OVRAnchor___c__DisplayClass54_0*>());
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRAnchor___c__DisplayClass54_0::OVRAnchor___c__DisplayClass54_0() {}
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56.MoveNext
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::*)()>(&::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::MoveNext)> {
  constexpr static std::size_t size = 0x3ac;
  constexpr static std::size_t addrs = 0x5e0cf5c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0d308;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchAnchorsAsync_d__56::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::*)()>(
    &::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::MoveNext)> {
  constexpr static std::size_t size = 0x418;
  constexpr static std::size_t addrs = 0x5e0d344;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0d75c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__10::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::*)()>(&::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::MoveNext)> {
  constexpr static std::size_t size = 0x3b8;
  constexpr static std::size_t addrs = 0x5e0d798;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0db50;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchSharedAnchorsAsync_d__9::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::*)()>(&::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::MoveNext)> {
  constexpr static std::size_t size = 0x9b8;
  constexpr static std::size_t addrs = 0x5e0db8c;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>(), { "MoveNext", {}, {} })));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66.SetStateMachine
template <>

struct CORDL_HIDDEN ::i2c::metadata_getter<static_cast<void (::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::*)(::System::Runtime::CompilerServices::IAsyncStateMachine*)>(
    &::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::SetStateMachine)> {
  constexpr static std::size_t size = 0x3c;
  constexpr static std::size_t addrs = 0x5e0e544;

  inline static ::MethodInfo const* method_info() {
    static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>(),
                                                                                           { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
    return ___internal_method;
  }
};
inline void GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::MoveNext() {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>(), { "MoveNext", {}, {} })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method);
}
inline void GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine) {
  static auto* ___internal_method = THROW_UNLESS(::i2c::no_logger{}, (::i2c::find_method(::i2c::class_of<::GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66>(),
                                                                                         { "SetStateMachine", {}, { ::i2c::type_of<::System::Runtime::CompilerServices::IAsyncStateMachine*>() } })));
  return ::cordl_internals::RunMethodRethrow<void>(*this, ___internal_method, stateMachine);
}
/// @brief Convert operator to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::operator ::System::Runtime::CompilerServices::IAsyncStateMachine*() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
}
/// @brief Convert to "::System::Runtime::CompilerServices::IAsyncStateMachine"
constexpr ::System::Runtime::CompilerServices::IAsyncStateMachine* GlobalNamespace::OVRAnchor__FetchTrackablesAsync_d__66::i___System__Runtime__CompilerServices__IAsyncStateMachine() {
  return static_cast<::System::Runtime::CompilerServices::IAsyncStateMachine*>(static_cast<void*>(::i2c::to_object<true>(*this, false)));
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

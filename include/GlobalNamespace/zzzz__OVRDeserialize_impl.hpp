#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize.hpp"
#include "GlobalNamespace/zzzz__OVRAnchor_impl.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
#include "Unity/Collections/zzzz__Allocator_def.hpp"
// Ctor Parameters [CppParam { name: "FromRefreshRate", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ToRefreshRate", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData::OVRDeserialize_DisplayRefreshRateChangedData(float_t FromRefreshRate, float_t ToRefreshRate) noexcept {
  this->FromRefreshRate = FromRefreshRate;
  this->ToRefreshRate = ToRefreshRate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_DisplayRefreshRateChangedData::OVRDeserialize_DisplayRefreshRateChangedData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData::OVRDeserialize_SpaceQueryResultsData(uint64_t RequestId) noexcept {
  this->RequestId = RequestId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceQueryResultsData::OVRDeserialize_SpaceQueryResultsData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData::OVRDeserialize_SpaceQueryCompleteData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceQueryCompleteData::OVRDeserialize_SpaceQueryCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData::OVRDeserialize_SceneCaptureCompleteData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SceneCaptureCompleteData::OVRDeserialize_SceneCaptureCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData::OVRDeserialize_SpatialAnchorCreateCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space,
                                                                                                                            ::System::Guid Uuid) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
  this->Space = Space;
  this->Uuid = Uuid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpatialAnchorCreateCompleteData::OVRDeserialize_SpatialAnchorCreateCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComponentType", ty:
// "::GlobalNamespace::OVRPlugin_SpaceComponentType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData::OVRDeserialize_SpaceSetComponentStatusCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space,
                                                                                                                                    ::System::Guid Uuid,
                                                                                                                                    ::GlobalNamespace::OVRPlugin_SpaceComponentType ComponentType,
                                                                                                                                    int32_t Enabled) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
  this->Space = Space;
  this->Uuid = Uuid;
  this->ComponentType = ComponentType;
  this->Enabled = Enabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceSetComponentStatusCompleteData::OVRDeserialize_SpaceSetComponentStatusCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData::OVRDeserialize_SpaceSaveCompleteData(uint64_t RequestId, uint64_t Space, int32_t Result, ::System::Guid Uuid) noexcept {
  this->RequestId = RequestId;
  this->Space = Space;
  this->Result = Result;
  this->Uuid = Uuid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceSaveCompleteData::OVRDeserialize_SpaceSaveCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "Location", ty: "::GlobalNamespace::OVRPlugin_SpaceStorageLocation", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData::OVRDeserialize_SpaceEraseCompleteData(uint64_t RequestId, int32_t Result, ::System::Guid Uuid,
                                                                                                          ::GlobalNamespace::OVRPlugin_SpaceStorageLocation Location) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
  this->Uuid = Uuid;
  this->Location = Location;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceEraseCompleteData::OVRDeserialize_SpaceEraseCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceShareResultData::OVRDeserialize_SpaceShareResultData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceShareResultData::OVRDeserialize_SpaceShareResultData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData::OVRDeserialize_SpaceListSaveResultData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceListSaveResultData::OVRDeserialize_SpaceListSaveResultData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }, CppParam { name: "AdvertisementUuid", ty: "::System::Guid",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData::OVRDeserialize_StartColocationSessionAdvertisementCompleteData(
    ::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result, ::System::Guid AdvertisementUuid) noexcept {
  this->EventType = EventType;
  this->RequestId = RequestId;
  this->Result = Result;
  this->AdvertisementUuid = AdvertisementUuid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_StartColocationSessionAdvertisementCompleteData::OVRDeserialize_StartColocationSessionAdvertisementCompleteData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData::OVRDeserialize_StopColocationSessionAdvertisementCompleteData(
    ::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result) noexcept {
  this->EventType = EventType;
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_StopColocationSessionAdvertisementCompleteData::OVRDeserialize_StopColocationSessionAdvertisementCompleteData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData::OVRDeserialize_StartColocationSessionDiscoveryCompleteData(
    ::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::GlobalNamespace::OVRPlugin_Result Result) noexcept {
  this->EventType = EventType;
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_StartColocationSessionDiscoveryCompleteData::OVRDeserialize_StartColocationSessionDiscoveryCompleteData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData::OVRDeserialize_StopColocationSessionDiscoveryCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType,
                                                                                                                                                  uint64_t RequestId,
                                                                                                                                                  ::GlobalNamespace::OVRPlugin_Result Result) noexcept {
  this->EventType = EventType;
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_StopColocationSessionDiscoveryCompleteData::OVRDeserialize_StopColocationSessionDiscoveryCompleteData() {}
// Ctor Parameters [CppParam { name: "FixedElementField", ty: "uint8_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer::
    ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer(uint8_t FixedElementField) noexcept {
  this->FixedElementField = FixedElementField;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer::
    ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "AdvertisementUuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "AdvertisementMetadataCount", ty: "uint32_t",
// modifiers: "", def_value: Some("{}") }, CppParam { name: "AdvertisementMetadata", ty: "::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer",
// modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData::OVRDeserialize_ColocationSessionDiscoveryResultData(
    ::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId, ::System::Guid AdvertisementUuid, uint32_t AdvertisementMetadataCount,
    ::GlobalNamespace::ColocationSessionDiscoveryResultData_OVRDeserialize__AdvertisementMetadata_e__FixedBuffer AdvertisementMetadata) noexcept {
  this->EventType = EventType;
  this->RequestId = RequestId;
  this->AdvertisementUuid = AdvertisementUuid;
  this->AdvertisementMetadataCount = AdvertisementMetadataCount;
  this->AdvertisementMetadata = AdvertisementMetadata;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryResultData::OVRDeserialize_ColocationSessionDiscoveryResultData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData::OVRDeserialize_ColocationSessionAdvertisementCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType,
                                                                                                                                                  uint64_t RequestId,
                                                                                                                                                  ::GlobalNamespace::OVRPlugin_Result Result) noexcept {
  this->EventType = EventType;
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_ColocationSessionAdvertisementCompleteData::OVRDeserialize_ColocationSessionAdvertisementCompleteData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData::OVRDeserialize_ColocationSessionDiscoveryCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType,
                                                                                                                                          uint64_t RequestId,
                                                                                                                                          ::GlobalNamespace::OVRPlugin_Result Result) noexcept {
  this->EventType = EventType;
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_ColocationSessionDiscoveryCompleteData::OVRDeserialize_ColocationSessionDiscoveryCompleteData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "RequestId", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData::OVRDeserialize_ShareSpacesToGroupsCompleteData(::GlobalNamespace::OVRPlugin_EventType EventType, uint64_t RequestId,
                                                                                                                            ::GlobalNamespace::OVRPlugin_Result Result) noexcept {
  this->EventType = EventType;
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_ShareSpacesToGroupsCompleteData::OVRDeserialize_ShareSpacesToGroupsCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData::OVRDeserialize_SpaceDiscoveryCompleteData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceDiscoveryCompleteData::OVRDeserialize_SpaceDiscoveryCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData::OVRDeserialize_SpaceDiscoveryResultsData(uint64_t RequestId) noexcept {
  this->RequestId = RequestId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpaceDiscoveryResultsData::OVRDeserialize_SpaceDiscoveryResultsData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRAnchor_SaveResult", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpacesSaveResultData::OVRDeserialize_SpacesSaveResultData(uint64_t RequestId, ::GlobalNamespace::OVRAnchor_SaveResult Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpacesSaveResultData::OVRDeserialize_SpacesSaveResultData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRAnchor_EraseResult", modifiers: "",
// def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SpacesEraseResultData::OVRDeserialize_SpacesEraseResultData(uint64_t RequestId, ::GlobalNamespace::OVRAnchor_EraseResult Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SpacesEraseResultData::OVRDeserialize_SpacesEraseResultData() {}
// Ctor Parameters [CppParam { name: "LayerId", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData::OVRDeserialize_PassthroughLayerResumedData(int32_t LayerId) noexcept {
  this->LayerId = LayerId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_PassthroughLayerResumedData::OVRDeserialize_PassthroughLayerResumedData() {}
// Ctor Parameters [CppParam { name: "BoundaryVisibility", ty: "::GlobalNamespace::OVRPlugin_BoundaryVisibility", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData::OVRDeserialize_BoundaryVisibilityChangedData(::GlobalNamespace::OVRPlugin_BoundaryVisibility BoundaryVisibility) noexcept {
  this->BoundaryVisibility = BoundaryVisibility;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_BoundaryVisibilityChangedData::OVRDeserialize_BoundaryVisibilityChangedData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Tracker", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData::OVRDeserialize_CreateDynamicObjectTrackerResultData(::GlobalNamespace::OVRPlugin_EventType EventType,
                                                                                                                                      uint64_t Tracker,
                                                                                                                                      ::GlobalNamespace::OVRPlugin_Result Result) noexcept {
  this->EventType = EventType;
  this->Tracker = Tracker;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_CreateDynamicObjectTrackerResultData::OVRDeserialize_CreateDynamicObjectTrackerResultData() {}
// Ctor Parameters [CppParam { name: "EventType", ty: "::GlobalNamespace::OVRPlugin_EventType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Tracker", ty: "uint64_t", modifiers: "",
// def_value: Some("{}") }, CppParam { name: "Result", ty: "::GlobalNamespace::OVRPlugin_Result", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData::OVRDeserialize_SetDynamicObjectTrackedClassesResultData(::GlobalNamespace::OVRPlugin_EventType EventType,
                                                                                                                                              uint64_t Tracker,
                                                                                                                                              ::GlobalNamespace::OVRPlugin_Result Result) noexcept {
  this->EventType = EventType;
  this->Tracker = Tracker;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize_SetDynamicObjectTrackedClassesResultData::OVRDeserialize_SetDynamicObjectTrackedClassesResultData() {}
template <typename T> inline T GlobalNamespace::OVRDeserialize::ByteArrayToStructure(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDeserialize*>::get(), "ByteArrayToStructure",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, bytes);
}
template <typename T> inline T GlobalNamespace::OVRDeserialize::MarshalEntireStructAs(::GlobalNamespace::OVRPlugin_EventDataBuffer eventDataBuffer, ::Unity::Collections::Allocator allocator) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDeserialize*>::get(), "MarshalEntireStructAs",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 2>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::GlobalNamespace::OVRPlugin_EventDataBuffer>::get(),
                                                                                   ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::Unity::Collections::Allocator>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, eventDataBuffer, allocator);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize::OVRDeserialize() {}

#pragma once
// IWYU pragma private; include "GlobalNamespace/OVRDeserialize.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
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
template <typename T> inline T GlobalNamespace::OVRDeserialize::ByteArrayToStructure(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDeserialize*>::get(), "ByteArrayToStructure",
                                               std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::array<Il2CppType const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::array<Il2CppClass const*, 1>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, bytes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize::OVRDeserialize() {}

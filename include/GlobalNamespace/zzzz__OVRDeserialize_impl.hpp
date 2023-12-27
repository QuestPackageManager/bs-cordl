#pragma once
#include "GlobalNamespace/zzzz__OVRPlugin_impl.hpp"
#include "System/zzzz__Guid_impl.hpp"
#include "System/zzzz__Object_impl.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
#include "GlobalNamespace/zzzz__OVRDeserialize_def.hpp"
#include "System/zzzz__Guid_def.hpp"
#include "GlobalNamespace/zzzz__OVRPlugin_def.hpp"
// Ctor Parameters [CppParam { name: "FromRefreshRate", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "ToRefreshRate", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData::__OVRDeserialize__DisplayRefreshRateChangedData(float_t FromRefreshRate, float_t ToRefreshRate) noexcept {
  this->FromRefreshRate = FromRefreshRate;
  this->ToRefreshRate = ToRefreshRate;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__DisplayRefreshRateChangedData::__OVRDeserialize__DisplayRefreshRateChangedData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData::__OVRDeserialize__SpaceQueryResultsData(uint64_t RequestId) noexcept {
  this->RequestId = RequestId;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceQueryResultsData::__OVRDeserialize__SpaceQueryResultsData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData::__OVRDeserialize__SpaceQueryCompleteData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceQueryCompleteData::__OVRDeserialize__SpaceQueryCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData::__OVRDeserialize__SceneCaptureCompleteData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SceneCaptureCompleteData::__OVRDeserialize__SceneCaptureCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData::__OVRDeserialize__SpatialAnchorCreateCompleteData(uint64_t RequestId, int32_t Result, uint64_t Space,
                                                                                                                                  ::System::Guid Uuid) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
  this->Space = Space;
  this->Uuid = Uuid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SpatialAnchorCreateCompleteData::__OVRDeserialize__SpatialAnchorCreateCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "ComponentType", ty:
// "::GlobalNamespace::__OVRPlugin__SpaceComponentType", modifiers: "", def_value: Some("{}") }, CppParam { name: "Enabled", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData::__OVRDeserialize__SpaceSetComponentStatusCompleteData(
    uint64_t RequestId, int32_t Result, uint64_t Space, ::System::Guid Uuid, ::GlobalNamespace::__OVRPlugin__SpaceComponentType ComponentType, int32_t Enabled) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
  this->Space = Space;
  this->Uuid = Uuid;
  this->ComponentType = ComponentType;
  this->Enabled = Enabled;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceSetComponentStatusCompleteData::__OVRDeserialize__SpaceSetComponentStatusCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Space", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData::__OVRDeserialize__SpaceSaveCompleteData(uint64_t RequestId, uint64_t Space, int32_t Result, ::System::Guid Uuid) noexcept {
  this->RequestId = RequestId;
  this->Space = Space;
  this->Result = Result;
  this->Uuid = Uuid;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceSaveCompleteData::__OVRDeserialize__SpaceSaveCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam {
// name: "Uuid", ty: "::System::Guid", modifiers: "", def_value: Some("{}") }, CppParam { name: "Location", ty: "::GlobalNamespace::__OVRPlugin__SpaceStorageLocation", modifiers: "", def_value:
// Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData::__OVRDeserialize__SpaceEraseCompleteData(uint64_t RequestId, int32_t Result, ::System::Guid Uuid,
                                                                                                                ::GlobalNamespace::__OVRPlugin__SpaceStorageLocation Location) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
  this->Uuid = Uuid;
  this->Location = Location;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceEraseCompleteData::__OVRDeserialize__SpaceEraseCompleteData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceShareResultData::__OVRDeserialize__SpaceShareResultData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceShareResultData::__OVRDeserialize__SpaceShareResultData() {}
// Ctor Parameters [CppParam { name: "RequestId", ty: "uint64_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "Result", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData::__OVRDeserialize__SpaceListSaveResultData(uint64_t RequestId, int32_t Result) noexcept {
  this->RequestId = RequestId;
  this->Result = Result;
}
// Ctor Parameters []
constexpr ::GlobalNamespace::__OVRDeserialize__SpaceListSaveResultData::__OVRDeserialize__SpaceListSaveResultData() {}
template <typename T> inline T GlobalNamespace::OVRDeserialize::ByteArrayToStructure(::ArrayW<uint8_t, ::Array<uint8_t>*> bytes) {
  static auto* ___internal_method_base =
      THROW_UNLESS((::il2cpp_utils::FindMethod(::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::OVRDeserialize*>::get(), "ByteArrayToStructure",
                                               std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() },
                                               ::std::vector<Il2CppType const*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<uint8_t, ::Array<uint8_t>*>>::get() })));
  static auto* ___internal_method =
      THROW_UNLESS(::il2cpp_utils::MakeGenericMethod(___internal_method_base, std::vector<Il2CppClass*>{ ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<T>::get() }));
  return ::cordl_internals::RunMethodRethrow<T, false>(nullptr, ___internal_method, bytes);
}
// Ctor Parameters []
constexpr ::GlobalNamespace::OVRDeserialize::OVRDeserialize() {}
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

#pragma once
// IWYU pragma private; include "OVR/OpenVR/EHiddenAreaMeshType.hpp"
#include "OVR/OpenVR/zzzz__EHiddenAreaMeshType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::OVR::OpenVR::EHiddenAreaMeshType::EHiddenAreaMeshType(int32_t  value__) noexcept  {
this->value__ = value__;
}
// Ctor Parameters []
constexpr ::OVR::OpenVR::EHiddenAreaMeshType::EHiddenAreaMeshType()   {
}
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Standard{static_cast<int32_t>(0x0)};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Inverse{static_cast<int32_t>(0x1)};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_LineLoop{static_cast<int32_t>(0x2)};
constexpr ::OVR::OpenVR::EHiddenAreaMeshType  OVR::OpenVR::EHiddenAreaMeshType::k_eHiddenAreaMesh_Max{static_cast<int32_t>(0x3)};

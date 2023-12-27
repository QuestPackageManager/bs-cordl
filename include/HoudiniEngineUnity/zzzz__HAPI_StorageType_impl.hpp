#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_StorageType::HAPI_StorageType(int32_t value__) noexcept {
  this->value__ = value__;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_StorageType::HAPI_StorageType() {}
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INVALID{ static_cast<int32_t>(0xffffffff) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT{ static_cast<int32_t>(0x0) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT64{ static_cast<int32_t>(0x1) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_FLOAT{ static_cast<int32_t>(0x2) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_FLOAT64{ static_cast<int32_t>(0x3) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_STRING{ static_cast<int32_t>(0x4) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_UINT8{ static_cast<int32_t>(0x5) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT8{ static_cast<int32_t>(0x6) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_INT16{ static_cast<int32_t>(0x7) };
constexpr ::HoudiniEngineUnity::HAPI_StorageType HoudiniEngineUnity::HAPI_StorageType::HAPI_STORAGETYPE_MAX{ static_cast<int32_t>(0x8) };
#ifndef CORDL_NO_IMPL_INCLUDE
#endif

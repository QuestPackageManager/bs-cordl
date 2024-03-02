#pragma once
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeType_impl.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeInfo_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeType_def.hpp"
// Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_VolumeType", modifiers: "", def_value:
// Some("{}") }, CppParam { name: "xLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name:
// "zLength", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "minY", ty: "int32_t", modifiers:
// "", def_value: Some("{}") }, CppParam { name: "minZ", ty: "int32_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "storage", ty: "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: Some("{}") }, CppParam { name: "tileSize", ty: "int32_t", modifiers: "", def_value: Some("{}") },
// CppParam { name: "transform", ty: "::HoudiniEngineUnity::HAPI_Transform", modifiers: "", def_value: Some("{}") }, CppParam { name: "hasTaper", ty: "bool", modifiers: "", def_value: Some("{}") },
// CppParam { name: "xTaper", ty: "float_t", modifiers: "", def_value: Some("{}") }, CppParam { name: "yTaper", ty: "float_t", modifiers: "", def_value: Some("{}") }]
constexpr ::HoudiniEngineUnity::HAPI_VolumeInfo::HAPI_VolumeInfo(int32_t nameSH, ::HoudiniEngineUnity::HAPI_VolumeType type, int32_t xLength, int32_t yLength, int32_t zLength, int32_t minX,
                                                                 int32_t minY, int32_t minZ, int32_t tupleSize, ::HoudiniEngineUnity::HAPI_StorageType storage, int32_t tileSize,
                                                                 ::HoudiniEngineUnity::HAPI_Transform transform, bool hasTaper, float_t xTaper, float_t yTaper) noexcept {
  this->nameSH = nameSH;
  this->type = type;
  this->xLength = xLength;
  this->yLength = yLength;
  this->zLength = zLength;
  this->minX = minX;
  this->minY = minY;
  this->minZ = minZ;
  this->tupleSize = tupleSize;
  this->storage = storage;
  this->tileSize = tileSize;
  this->transform = transform;
  this->hasTaper = hasTaper;
  this->xTaper = xTaper;
  this->yTaper = yTaper;
}
// Ctor Parameters []
constexpr ::HoudiniEngineUnity::HAPI_VolumeInfo::HAPI_VolumeInfo() {}

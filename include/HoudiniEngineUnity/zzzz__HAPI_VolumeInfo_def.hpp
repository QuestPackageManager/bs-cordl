#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_StorageType_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_Transform_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_VolumeType_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_VolumeInfo)
namespace HoudiniEngineUnity {
struct HAPI_StorageType;
}
namespace HoudiniEngineUnity {
struct HAPI_Transform;
}
namespace HoudiniEngineUnity {
struct HAPI_VolumeType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_VolumeInfo);
// Type: HoudiniEngineUnity::HAPI_VolumeInfo
// SizeInfo { instance_size: 104, native_size: 112, calculated_instance_size: 104, calculated_native_size: 116, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9634)), TypeDefinitionIndex(TypeDefinitionIndex(9632)), TypeDefinitionIndex(TypeDefinitionIndex(9653))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9673))
// CS Name: ::HoudiniEngineUnity::HAPI_VolumeInfo
struct CORDL_TYPE HAPI_VolumeInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_VolumeType", modifiers: "", def_value: None
  // }, CppParam { name: "xLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "yLength", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "zLength", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "minZ", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "tupleSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "storage", ty:
  // "::HoudiniEngineUnity::HAPI_StorageType", modifiers: "", def_value: None }, CppParam { name: "tileSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "transform", ty:
  // "::HoudiniEngineUnity::HAPI_Transform", modifiers: "", def_value: None }, CppParam { name: "hasTaper", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "xTaper", ty: "float_t",
  // modifiers: "", def_value: None }, CppParam { name: "yTaper", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HAPI_VolumeInfo(int32_t nameSH, ::HoudiniEngineUnity::HAPI_VolumeType type, int32_t xLength, int32_t yLength, int32_t zLength, int32_t minX, int32_t minY, int32_t minZ, int32_t tupleSize,
                            ::HoudiniEngineUnity::HAPI_StorageType storage, int32_t tileSize, ::HoudiniEngineUnity::HAPI_Transform transform, bool hasTaper, float_t xTaper, float_t yTaper) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_VolumeInfo();

  /// @brief Field nameSH, offset: 0x0, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field type, offset: 0x4, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_VolumeType type;

  /// @brief Field xLength, offset: 0x8, size: 0x4, def value: None
  int32_t xLength;

  /// @brief Field yLength, offset: 0xc, size: 0x4, def value: None
  int32_t yLength;

  /// @brief Field zLength, offset: 0x10, size: 0x4, def value: None
  int32_t zLength;

  /// @brief Field minX, offset: 0x14, size: 0x4, def value: None
  int32_t minX;

  /// @brief Field minY, offset: 0x18, size: 0x4, def value: None
  int32_t minY;

  /// @brief Field minZ, offset: 0x1c, size: 0x4, def value: None
  int32_t minZ;

  /// @brief Field tupleSize, offset: 0x20, size: 0x4, def value: None
  int32_t tupleSize;

  /// @brief Field storage, offset: 0x24, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_StorageType storage;

  /// @brief Field tileSize, offset: 0x28, size: 0x4, def value: None
  int32_t tileSize;

  /// @brief Field transform, offset: 0x30, size: 0x28, def value: None
  ::HoudiniEngineUnity::HAPI_Transform transform;

  /// @brief Field hasTaper, offset: 0x58, size: 0x1, def value: None
  bool hasTaper;

  /// @brief Field xTaper, offset: 0x5c, size: 0x4, def value: None
  float_t xTaper;

  /// @brief Field yTaper, offset: 0x60, size: 0x4, def value: None
  float_t yTaper;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x68 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_VolumeInfo, 0x68>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, nameSH) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, type) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, xLength) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, yLength) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, zLength) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, minX) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, minY) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, minZ) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, tupleSize) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, storage) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, tileSize) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, transform) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, hasTaper) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, xTaper) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeInfo, yTaper) == 0x60, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeInfo, "HoudiniEngineUnity", "HAPI_VolumeInfo");

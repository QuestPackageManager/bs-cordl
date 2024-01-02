#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ObjectInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ObjectInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ObjectInfo);
// Type: HoudiniEngineUnity::HAPI_ObjectInfo
// SizeInfo { instance_size: 28, native_size: 28, calculated_instance_size: 28, calculated_native_size: 44, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9738))
// CS Name: ::HoudiniEngineUnity::HAPI_ObjectInfo
struct CORDL_TYPE HAPI_ObjectInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectInstancePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "hasTransformChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "haveGeosChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isVisible", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "isInstancer", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isInstanced", ty: "bool", modifiers: "", def_value: None
  // }, CppParam { name: "geoCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectToInstanceId",
  // ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ObjectInfo(int32_t nameSH, int32_t objectInstancePathSH, bool hasTransformChanged, bool haveGeosChanged, bool isVisible, bool isInstancer, bool isInstanced, int32_t geoCount,
                            int32_t nodeId, int32_t objectToInstanceId) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ObjectInfo();

  /// @brief Field nameSH, offset: 0x0, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field objectInstancePathSH, offset: 0x4, size: 0x4, def value: None
  int32_t objectInstancePathSH;

  /// @brief Field hasTransformChanged, offset: 0x8, size: 0x1, def value: None
  bool hasTransformChanged;

  /// @brief Field haveGeosChanged, offset: 0x9, size: 0x1, def value: None
  bool haveGeosChanged;

  /// @brief Field isVisible, offset: 0xa, size: 0x1, def value: None
  bool isVisible;

  /// @brief Field isInstancer, offset: 0xb, size: 0x1, def value: None
  bool isInstancer;

  /// @brief Field isInstanced, offset: 0xc, size: 0x1, def value: None
  bool isInstanced;

  /// @brief Field geoCount, offset: 0x10, size: 0x4, def value: None
  int32_t geoCount;

  /// @brief Field nodeId, offset: 0x14, size: 0x4, def value: None
  int32_t nodeId;

  /// @brief Field objectToInstanceId, offset: 0x18, size: 0x4, def value: None
  int32_t objectToInstanceId;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1c };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ObjectInfo, 0x1c>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, nameSH) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, objectInstancePathSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, hasTransformChanged) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, haveGeosChanged) == 0x9, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, isVisible) == 0xa, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, isInstancer) == 0xb, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, isInstanced) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, geoCount) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, nodeId) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ObjectInfo, objectToInstanceId) == 0x18, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ObjectInfo, "HoudiniEngineUnity", "HAPI_ObjectInfo");

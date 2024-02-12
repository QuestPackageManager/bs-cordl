#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_GeoType_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_GeoInfo)
namespace HoudiniEngineUnity {
struct HAPI_GeoType;
}
namespace HoudiniEngineUnity {
struct HAPI_GroupType;
}
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_GeoInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_GeoInfo);
// Type: HoudiniEngineUnity::HAPI_GeoInfo
// SizeInfo { instance_size: 36, native_size: 36, calculated_instance_size: 36, calculated_native_size: 52, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9501))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9531))
// CS Name: ::HoudiniEngineUnity::HAPI_GeoInfo
struct CORDL_TYPE HAPI_GeoInfo {
public:
  // Declarations
  /// @brief Method getGroupCountByType, addr 0x2226504, size 0x28, virtual false, abstract: false, final false
  inline int32_t getGroupCountByType(::HoudiniEngineUnity::HAPI_GroupType type);

  // Ctor Parameters [CppParam { name: "type", ty: "::HoudiniEngineUnity::HAPI_GeoType", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "isEditable", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "isTemplated", ty:
  // "bool", modifiers: "", def_value: None }, CppParam { name: "isDisplayGeo", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasGeoChanged", ty: "bool", modifiers: "", def_value:
  // None }, CppParam { name: "hasMaterialChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pointGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "primitiveGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "edgeGroupCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "partCount", ty:
  // "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_GeoInfo(::HoudiniEngineUnity::HAPI_GeoType type, int32_t nameSH, int32_t nodeId, bool isEditable, bool isTemplated, bool isDisplayGeo, bool hasGeoChanged, bool hasMaterialChanged,
                         int32_t pointGroupCount, int32_t primitiveGroupCount, int32_t edgeGroupCount, int32_t partCount) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_GeoInfo();

  /// @brief Field type, offset: 0x0, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_GeoType type;

  /// @brief Field nameSH, offset: 0x4, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field nodeId, offset: 0x8, size: 0x4, def value: None
  int32_t nodeId;

  /// @brief Field isEditable, offset: 0xc, size: 0x1, def value: None
  bool isEditable;

  /// @brief Field isTemplated, offset: 0xd, size: 0x1, def value: None
  bool isTemplated;

  /// @brief Field isDisplayGeo, offset: 0xe, size: 0x1, def value: None
  bool isDisplayGeo;

  /// @brief Field hasGeoChanged, offset: 0xf, size: 0x1, def value: None
  bool hasGeoChanged;

  /// @brief Field hasMaterialChanged, offset: 0x10, size: 0x1, def value: None
  bool hasMaterialChanged;

  /// @brief Field pointGroupCount, offset: 0x14, size: 0x4, def value: None
  int32_t pointGroupCount;

  /// @brief Field primitiveGroupCount, offset: 0x18, size: 0x4, def value: None
  int32_t primitiveGroupCount;

  /// @brief Field edgeGroupCount, offset: 0x1c, size: 0x4, def value: None
  int32_t edgeGroupCount;

  /// @brief Field partCount, offset: 0x20, size: 0x4, def value: None
  int32_t partCount;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x24 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_GeoInfo, 0x24>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, type) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, nameSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, nodeId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, isEditable) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, isTemplated) == 0xd, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, isDisplayGeo) == 0xe, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, hasGeoChanged) == 0xf, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, hasMaterialChanged) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, pointGroupCount) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, primitiveGroupCount) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, edgeGroupCount) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_GeoInfo, partCount) == 0x20, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_GeoInfo, "HoudiniEngineUnity", "HAPI_GeoInfo");

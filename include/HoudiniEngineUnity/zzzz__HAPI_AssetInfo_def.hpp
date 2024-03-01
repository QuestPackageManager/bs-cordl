#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_AssetInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_AssetInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_AssetInfo);
// Type: HoudiniEngineUnity::HAPI_AssetInfo
// SizeInfo { instance_size: 64, native_size: 64, calculated_instance_size: 64, calculated_native_size: 78, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_AssetInfo
struct CORDL_TYPE HAPI_AssetInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_AssetInfo();

  // Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "objectNodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "hasEverCooked", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers:
  // "", def_value: None }, CppParam { name: "filePathSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "versionSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "fullOpNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpTextSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "helpURLSH", ty: "int32_t",
  // modifiers: "", def_value: None }, CppParam { name: "objectCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "handleCount", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "transformInputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "geoInputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "geoOutputCount", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "haveObjectsChanged", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "haveMaterialsChanged",
  // ty: "bool", modifiers: "", def_value: None }]
  constexpr HAPI_AssetInfo(int32_t nodeId, int32_t objectNodeId, bool hasEverCooked, int32_t nameSH, int32_t labelSH, int32_t filePathSH, int32_t versionSH, int32_t fullOpNameSH, int32_t helpTextSH,
                           int32_t helpURLSH, int32_t objectCount, int32_t handleCount, int32_t transformInputCount, int32_t geoInputCount, int32_t geoOutputCount, bool haveObjectsChanged,
                           bool haveMaterialsChanged) noexcept;

  /// @brief Field nodeId, offset: 0x0, size: 0x4, def value: None
  int32_t nodeId;

  /// @brief Field objectNodeId, offset: 0x4, size: 0x4, def value: None
  int32_t objectNodeId;

  /// @brief Field hasEverCooked, offset: 0x8, size: 0x1, def value: None
  bool hasEverCooked;

  /// @brief Field nameSH, offset: 0xc, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field labelSH, offset: 0x10, size: 0x4, def value: None
  int32_t labelSH;

  /// @brief Field filePathSH, offset: 0x14, size: 0x4, def value: None
  int32_t filePathSH;

  /// @brief Field versionSH, offset: 0x18, size: 0x4, def value: None
  int32_t versionSH;

  /// @brief Field fullOpNameSH, offset: 0x1c, size: 0x4, def value: None
  int32_t fullOpNameSH;

  /// @brief Field helpTextSH, offset: 0x20, size: 0x4, def value: None
  int32_t helpTextSH;

  /// @brief Field helpURLSH, offset: 0x24, size: 0x4, def value: None
  int32_t helpURLSH;

  /// @brief Field objectCount, offset: 0x28, size: 0x4, def value: None
  int32_t objectCount;

  /// @brief Field handleCount, offset: 0x2c, size: 0x4, def value: None
  int32_t handleCount;

  /// @brief Field transformInputCount, offset: 0x30, size: 0x4, def value: None
  int32_t transformInputCount;

  /// @brief Field geoInputCount, offset: 0x34, size: 0x4, def value: None
  int32_t geoInputCount;

  /// @brief Field geoOutputCount, offset: 0x38, size: 0x4, def value: None
  int32_t geoOutputCount;

  /// @brief Field haveObjectsChanged, offset: 0x3c, size: 0x1, def value: None
  bool haveObjectsChanged;

  /// @brief Field haveMaterialsChanged, offset: 0x3d, size: 0x1, def value: None
  bool haveMaterialsChanged;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x40 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_AssetInfo, 0x40>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, nodeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, objectNodeId) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, hasEverCooked) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, nameSH) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, labelSH) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, filePathSH) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, versionSH) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, fullOpNameSH) == 0x1c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, helpTextSH) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, helpURLSH) == 0x24, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, objectCount) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, handleCount) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, transformInputCount) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, geoInputCount) == 0x34, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, geoOutputCount) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, haveObjectsChanged) == 0x3c, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_AssetInfo, haveMaterialsChanged) == 0x3d, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_AssetInfo, "HoudiniEngineUnity", "HAPI_AssetInfo");

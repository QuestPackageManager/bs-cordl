#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ImageInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HoudiniEngineUnity/zzzz__HAPI_ImageDataFormat_def.hpp"
#include "HoudiniEngineUnity/zzzz__HAPI_ImagePacking_def.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ImageInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ImageInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ImageInfo);
// Dependencies HoudiniEngineUnity.HAPI_ImageDataFormat, HoudiniEngineUnity.HAPI_ImagePacking
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_ImageInfo
struct CORDL_TYPE HAPI_ImageInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ImageInfo();

  // Ctor Parameters [CppParam { name: "imageFileFormatNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "xRes", ty: "int32_t", modifiers: "", def_value: None }, CppParam {
  // name: "yRes", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "dataFormat", ty: "::HoudiniEngineUnity::HAPI_ImageDataFormat", modifiers: "", def_value: None }, CppParam { name:
  // "interleaved", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "packing", ty: "::HoudiniEngineUnity::HAPI_ImagePacking", modifiers: "", def_value: None }, CppParam { name: "gamma",
  // ty: "double_t", modifiers: "", def_value: None }]
  constexpr HAPI_ImageInfo(int32_t imageFileFormatNameSH, int32_t xRes, int32_t yRes, ::HoudiniEngineUnity::HAPI_ImageDataFormat dataFormat, bool interleaved,
                           ::HoudiniEngineUnity::HAPI_ImagePacking packing, double_t gamma) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11731 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x20 };

  /// @brief Field imageFileFormatNameSH, offset: 0x0, size: 0x4, def value: None
  int32_t imageFileFormatNameSH;

  /// @brief Field xRes, offset: 0x4, size: 0x4, def value: None
  int32_t xRes;

  /// @brief Field yRes, offset: 0x8, size: 0x4, def value: None
  int32_t yRes;

  /// @brief Field dataFormat, offset: 0xc, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_ImageDataFormat dataFormat;

  /// @brief Field interleaved, offset: 0x10, size: 0x1, def value: None
  bool interleaved;

  /// @brief Field packing, offset: 0x14, size: 0x4, def value: None
  ::HoudiniEngineUnity::HAPI_ImagePacking packing;

  /// @brief Field gamma, offset: 0x18, size: 0x8, def value: None
  double_t gamma;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageInfo, imageFileFormatNameSH) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageInfo, xRes) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageInfo, yRes) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageInfo, dataFormat) == 0xc, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageInfo, interleaved) == 0x10, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageInfo, packing) == 0x14, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ImageInfo, gamma) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ImageInfo, 0x20>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ImageInfo, "HoudiniEngineUnity", "HAPI_ImageInfo");

#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_VolumeTileInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_VolumeTileInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_VolumeTileInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_VolumeTileInfo);
// Type: HoudiniEngineUnity::HAPI_VolumeTileInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 29, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_VolumeTileInfo
struct CORDL_TYPE HAPI_VolumeTileInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_VolumeTileInfo();

  // Ctor Parameters [CppParam { name: "minX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minY", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "minZ", ty:
  // "int32_t", modifiers: "", def_value: None }, CppParam { name: "isValid", ty: "bool", modifiers: "", def_value: None }]
  constexpr HAPI_VolumeTileInfo(int32_t minX, int32_t minY, int32_t minZ, bool isValid) noexcept;

  /// @brief Field minX, offset: 0x0, size: 0x4, def value: None
  int32_t minX;

  /// @brief Field minY, offset: 0x4, size: 0x4, def value: None
  int32_t minY;

  /// @brief Field minZ, offset: 0x8, size: 0x4, def value: None
  int32_t minZ;

  /// @brief Field isValid, offset: 0xc, size: 0x1, def value: None
  bool isValid;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_VolumeTileInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeTileInfo, minX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeTileInfo, minY) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeTileInfo, minZ) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_VolumeTileInfo, isValid) == 0xc, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_VolumeTileInfo, "HoudiniEngineUnity", "HAPI_VolumeTileInfo");

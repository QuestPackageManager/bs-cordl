#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_HandleBindingInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_HandleBindingInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_HandleBindingInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_HandleBindingInfo);
// Type: HoudiniEngineUnity::HAPI_HandleBindingInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_HandleBindingInfo
struct CORDL_TYPE HAPI_HandleBindingInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_HandleBindingInfo();

  // Ctor Parameters [CppParam { name: "handleParmNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assetParmNameSH", ty: "int32_t", modifiers: "", def_value: None },
  // CppParam { name: "assetParmId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "assetParmIndex", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_HandleBindingInfo(int32_t handleParmNameSH, int32_t assetParmNameSH, int32_t assetParmId, int32_t assetParmIndex) noexcept;

  /// @brief Field handleParmNameSH, offset: 0x0, size: 0x4, def value: None
  int32_t handleParmNameSH;

  /// @brief Field assetParmNameSH, offset: 0x4, size: 0x4, def value: None
  int32_t assetParmNameSH;

  /// @brief Field assetParmId, offset: 0x8, size: 0x4, def value: None
  int32_t assetParmId;

  /// @brief Field assetParmIndex, offset: 0xc, size: 0x4, def value: None
  int32_t assetParmIndex;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_HandleBindingInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_HandleBindingInfo, handleParmNameSH) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_HandleBindingInfo, assetParmNameSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_HandleBindingInfo, assetParmId) == 0x8, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_HandleBindingInfo, assetParmIndex) == 0xc, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_HandleBindingInfo, "HoudiniEngineUnity", "HAPI_HandleBindingInfo");

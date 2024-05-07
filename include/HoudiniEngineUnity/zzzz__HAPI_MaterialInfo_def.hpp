#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_MaterialInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_MaterialInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_MaterialInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_MaterialInfo);
// Type: HoudiniEngineUnity::HAPI_MaterialInfo
// SizeInfo { instance_size: 8, native_size: 8, calculated_instance_size: 8, calculated_native_size: 22, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: ::HoudiniEngineUnity::HAPI_MaterialInfo
struct CORDL_TYPE HAPI_MaterialInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_MaterialInfo();

  // Ctor Parameters [CppParam { name: "nodeId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "exists", ty: "bool", modifiers: "", def_value: None }, CppParam { name:
  // "hasChanged", ty: "bool", modifiers: "", def_value: None }]
  constexpr HAPI_MaterialInfo(int32_t nodeId, bool exists, bool hasChanged) noexcept;

  /// @brief Field nodeId, offset: 0x0, size: 0x4, def value: None
  int32_t nodeId;

  /// @brief Field exists, offset: 0x4, size: 0x1, def value: None
  bool exists;

  /// @brief Field hasChanged, offset: 0x5, size: 0x1, def value: None
  bool hasChanged;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_MaterialInfo, 0x8>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_MaterialInfo, nodeId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_MaterialInfo, exists) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_MaterialInfo, hasChanged) == 0x5, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_MaterialInfo, "HoudiniEngineUnity", "HAPI_MaterialInfo");

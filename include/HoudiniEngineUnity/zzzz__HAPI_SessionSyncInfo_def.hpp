#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_SessionSyncInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_SessionSyncInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_SessionSyncInfo);
// Type: HoudiniEngineUnity::HAPI_SessionSyncInfo
// SizeInfo { instance_size: 2, native_size: 2, calculated_instance_size: 2, calculated_native_size: 18, minimum_alignment: 1, natural_alignment: 1, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9683))
// CS Name: ::HoudiniEngineUnity::HAPI_SessionSyncInfo
struct CORDL_TYPE HAPI_SessionSyncInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "cookUsingHoudiniTime", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "syncViewport", ty: "bool", modifiers: "", def_value: None }]
  constexpr HAPI_SessionSyncInfo(bool cookUsingHoudiniTime, bool syncViewport) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_SessionSyncInfo();

  /// @brief Field cookUsingHoudiniTime, offset: 0x0, size: 0x1, def value: None
  bool cookUsingHoudiniTime;

  /// @brief Field syncViewport, offset: 0x1, size: 0x1, def value: None
  bool syncViewport;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_SessionSyncInfo, 0x2>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_SessionSyncInfo, cookUsingHoudiniTime) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_SessionSyncInfo, syncViewport) == 0x1, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_SessionSyncInfo, "HoudiniEngineUnity", "HAPI_SessionSyncInfo");

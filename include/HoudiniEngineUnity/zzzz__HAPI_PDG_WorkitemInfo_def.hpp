#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PDG_WorkitemInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_WorkitemInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_PDG_WorkitemInfo
struct CORDL_TYPE HAPI_PDG_WorkitemInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PDG_WorkitemInfo();

  // Ctor Parameters [CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "numResults", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "nameSH", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_PDG_WorkitemInfo(int32_t index, int32_t numResults, int32_t nameSH) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field index, offset: 0x0, size: 0x4, def value: None
  int32_t index;

  /// @brief Field numResults, offset: 0x4, size: 0x4, def value: None
  int32_t numResults;

  /// @brief Field nameSH, offset: 0x8, size: 0x4, def value: None
  int32_t nameSH;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, index) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, numResults) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, nameSH) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, 0xc>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemInfo, "HoudiniEngineUnity", "HAPI_PDG_WorkitemInfo");

#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_PDG_WorkitemResultInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_PDG_WorkitemResultInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_PDG_WorkitemResultInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_PDG_WorkitemResultInfo
struct CORDL_TYPE HAPI_PDG_WorkitemResultInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PDG_WorkitemResultInfo();

  // Ctor Parameters [CppParam { name: "resultSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resultTagSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "resultHash", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr HAPI_PDG_WorkitemResultInfo(int32_t resultSH, int32_t resultTagSH, int64_t resultHash) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11740 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  /// @brief Field resultSH, offset: 0x0, size: 0x4, def value: None
  int32_t resultSH;

  /// @brief Field resultTagSH, offset: 0x4, size: 0x4, def value: None
  int32_t resultTagSH;

  /// @brief Field resultHash, offset: 0x8, size: 0x8, def value: None
  int64_t resultHash;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, resultSH) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, resultTagSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, resultHash) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, 0x10>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, "HoudiniEngineUnity", "HAPI_PDG_WorkitemResultInfo");

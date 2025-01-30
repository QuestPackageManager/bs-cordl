#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ParmChoiceInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_ParmChoiceInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ParmChoiceInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ParmChoiceInfo);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_ParmChoiceInfo
struct CORDL_TYPE HAPI_ParmChoiceInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ParmChoiceInfo();

  // Ctor Parameters [CppParam { name: "parentParmId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "valueSH", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ParmChoiceInfo(int32_t parentParmId, int32_t labelSH, int32_t valueSH) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11720 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field parentParmId, offset: 0x0, size: 0x4, def value: None
  int32_t parentParmId;

  /// @brief Field labelSH, offset: 0x4, size: 0x4, def value: None
  int32_t labelSH;

  /// @brief Field valueSH, offset: 0x8, size: 0x4, def value: None
  int32_t valueSH;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, parentParmId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, labelSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, valueSH) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, 0xc>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, "HoudiniEngineUnity", "HAPI_ParmChoiceInfo");

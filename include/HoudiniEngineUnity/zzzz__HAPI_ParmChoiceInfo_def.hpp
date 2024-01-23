#pragma once
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
// Type: HoudiniEngineUnity::HAPI_ParmChoiceInfo
// SizeInfo { instance_size: 12, native_size: 12, calculated_instance_size: 12, calculated_native_size: 28, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9735))
// CS Name: ::HoudiniEngineUnity::HAPI_ParmChoiceInfo
struct CORDL_TYPE HAPI_ParmChoiceInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "parentParmId", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "labelSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "valueSH", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_ParmChoiceInfo(int32_t parentParmId, int32_t labelSH, int32_t valueSH) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ParmChoiceInfo();

  /// @brief Field parentParmId, offset: 0x0, size: 0x4, def value: None
  int32_t parentParmId;

  /// @brief Field labelSH, offset: 0x4, size: 0x4, def value: None
  int32_t labelSH;

  /// @brief Field valueSH, offset: 0x8, size: 0x4, def value: None
  int32_t valueSH;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ParmChoiceInfo, 0xc>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, parentParmId) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, labelSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, valueSH) == 0x8, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ParmChoiceInfo, "HoudiniEngineUnity", "HAPI_ParmChoiceInfo");

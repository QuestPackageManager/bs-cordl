#pragma once
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
// Type: HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo
// SizeInfo { instance_size: 16, native_size: 16, calculated_instance_size: 16, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9754))
// CS Name: ::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo
struct CORDL_TYPE HAPI_PDG_WorkitemResultInfo {
public:
  // Declarations
  // Ctor Parameters [CppParam { name: "resultSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "resultTagSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "resultHash", ty: "int64_t", modifiers: "", def_value: None }]
  constexpr HAPI_PDG_WorkitemResultInfo(int32_t resultSH, int32_t resultTagSH, int64_t resultHash) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_PDG_WorkitemResultInfo();

  /// @brief Field resultSH, offset: 0x0, size: 0x4, def value: None
  int32_t resultSH;

  /// @brief Field resultTagSH, offset: 0x4, size: 0x4, def value: None
  int32_t resultTagSH;

  /// @brief Field resultHash, offset: 0x8, size: 0x8, def value: None
  int64_t resultHash;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x10 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, 0x10>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, resultSH) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, resultTagSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, resultHash) == 0x8, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_PDG_WorkitemResultInfo, "HoudiniEngineUnity", "HAPI_PDG_WorkitemResultInfo");

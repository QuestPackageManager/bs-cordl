#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_HandleInfo.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_HandleInfo)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_HandleInfo;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_HandleInfo);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_HandleInfo
struct CORDL_TYPE HAPI_HandleInfo {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_HandleInfo();

  // Ctor Parameters [CppParam { name: "nameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "typeNameSH", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name:
  // "bindingsCount", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_HandleInfo(int32_t nameSH, int32_t typeNameSH, int32_t bindingsCount) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11723 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field nameSH, offset: 0x0, size: 0x4, def value: None
  int32_t nameSH;

  /// @brief Field typeNameSH, offset: 0x4, size: 0x4, def value: None
  int32_t typeNameSH;

  /// @brief Field bindingsCount, offset: 0x8, size: 0x4, def value: None
  int32_t bindingsCount;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_HandleInfo, nameSH) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_HandleInfo, typeNameSH) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_HandleInfo, bindingsCount) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_HandleInfo, 0xc>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_HandleInfo, "HoudiniEngineUnity", "HAPI_HandleInfo");

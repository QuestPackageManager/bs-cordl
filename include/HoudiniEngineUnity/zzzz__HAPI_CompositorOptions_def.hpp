#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_CompositorOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CompositorOptions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CompositorOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CompositorOptions);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_CompositorOptions
struct CORDL_TYPE HAPI_CompositorOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_CompositorOptions();

  // Ctor Parameters [CppParam { name: "maximumResolutionX", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "maximumResolutionY", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_CompositorOptions(int32_t maximumResolutionX, int32_t maximumResolutionY) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11744 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field maximumResolutionX, offset: 0x0, size: 0x4, def value: None
  int32_t maximumResolutionX;

  /// @brief Field maximumResolutionY, offset: 0x4, size: 0x4, def value: None
  int32_t maximumResolutionY;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_CompositorOptions, maximumResolutionX) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_CompositorOptions, maximumResolutionY) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CompositorOptions, 0x8>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CompositorOptions, "HoudiniEngineUnity", "HAPI_CompositorOptions");

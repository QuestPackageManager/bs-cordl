#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_TimelineOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_TimelineOptions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_TimelineOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_TimelineOptions);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_TimelineOptions
struct CORDL_TYPE HAPI_TimelineOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_TimelineOptions();

  // Ctor Parameters [CppParam { name: "fps", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "startTime", ty: "float_t", modifiers: "", def_value: None }, CppParam { name:
  // "endTime", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HAPI_TimelineOptions(float_t fps, float_t startTime, float_t endTime) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0xc };

  /// @brief Field fps, offset: 0x0, size: 0x4, def value: None
  float_t fps;

  /// @brief Field startTime, offset: 0x4, size: 0x4, def value: None
  float_t startTime;

  /// @brief Field endTime, offset: 0x8, size: 0x4, def value: None
  float_t endTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_TimelineOptions, fps) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_TimelineOptions, startTime) == 0x4, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_TimelineOptions, endTime) == 0x8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_TimelineOptions, 0xc>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_TimelineOptions, "HoudiniEngineUnity", "HAPI_TimelineOptions");

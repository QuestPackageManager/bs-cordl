#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_ThriftServerOptions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstddef>
CORDL_MODULE_EXPORT(HAPI_ThriftServerOptions)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_ThriftServerOptions;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_ThriftServerOptions);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_ThriftServerOptions
struct CORDL_TYPE HAPI_ThriftServerOptions {
public:
  // Declarations
  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_ThriftServerOptions();

  // Ctor Parameters [CppParam { name: "autoClose", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "timeoutMs", ty: "float_t", modifiers: "", def_value: None }]
  constexpr HAPI_ThriftServerOptions(bool autoClose, float_t timeoutMs) noexcept;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11715 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field autoClose, offset: 0x0, size: 0x1, def value: None
  bool autoClose;

  /// @brief Field timeoutMs, offset: 0x4, size: 0x4, def value: None
  float_t timeoutMs;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_ThriftServerOptions, autoClose) == 0x0, "Offset mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_ThriftServerOptions, timeoutMs) == 0x4, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_ThriftServerOptions, 0x8>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_ThriftServerOptions, "HoudiniEngineUnity", "HAPI_ThriftServerOptions");

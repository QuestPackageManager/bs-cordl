#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_License.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_License)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_License;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_License);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_License
struct CORDL_TYPE HAPI_License {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_License_Unwrapped
  enum struct __HAPI_License_Unwrapped : int32_t {
    __E_HAPI_LICENSE_NONE = static_cast<int32_t>(0x0),
    __E_HAPI_LICENSE_HOUDINI_ENGINE = static_cast<int32_t>(0x1),
    __E_HAPI_LICENSE_HOUDINI = static_cast<int32_t>(0x2),
    __E_HAPI_LICENSE_HOUDINI_FX = static_cast<int32_t>(0x3),
    __E_HAPI_LICENSE_HOUDINI_ENGINE_INDIE = static_cast<int32_t>(0x4),
    __E_HAPI_LICENSE_HOUDINI_INDIE = static_cast<int32_t>(0x5),
    __E_HAPI_LICENSE_MAX = static_cast<int32_t>(0x6),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_License_Unwrapped() const noexcept {
    return static_cast<__HAPI_License_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_License();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_License(int32_t value__) noexcept;

  /// @brief Field HAPI_LICENSE_HOUDINI value: I32(2)
  static ::HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI;

  /// @brief Field HAPI_LICENSE_HOUDINI_ENGINE value: I32(1)
  static ::HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI_ENGINE;

  /// @brief Field HAPI_LICENSE_HOUDINI_ENGINE_INDIE value: I32(4)
  static ::HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI_ENGINE_INDIE;

  /// @brief Field HAPI_LICENSE_HOUDINI_FX value: I32(3)
  static ::HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI_FX;

  /// @brief Field HAPI_LICENSE_HOUDINI_INDIE value: I32(5)
  static ::HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_HOUDINI_INDIE;

  /// @brief Field HAPI_LICENSE_MAX value: I32(6)
  static ::HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_MAX;

  /// @brief Field HAPI_LICENSE_NONE value: I32(0)
  static ::HoudiniEngineUnity::HAPI_License const HAPI_LICENSE_NONE;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11668 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_License, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_License, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_License, "HoudiniEngineUnity", "HAPI_License");

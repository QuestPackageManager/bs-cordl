#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_EnvIntType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_EnvIntType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_EnvIntType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_EnvIntType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_EnvIntType
struct CORDL_TYPE HAPI_EnvIntType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_EnvIntType_Unwrapped
  enum struct __HAPI_EnvIntType_Unwrapped : int32_t {
    __E_HAPI_ENVINT_INVALID = static_cast<int32_t>(0xffffffff),
    __E_HAPI_ENVINT_VERSION_HOUDINI_MAJOR = static_cast<int32_t>(0x64),
    __E_HAPI_ENVINT_VERSION_HOUDINI_MINOR = static_cast<int32_t>(0x6e),
    __E_HAPI_ENVINT_VERSION_HOUDINI_BUILD = static_cast<int32_t>(0x78),
    __E_HAPI_ENVINT_VERSION_HOUDINI_PATCH = static_cast<int32_t>(0x82),
    __E_HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR = static_cast<int32_t>(0xc8),
    __E_HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR = static_cast<int32_t>(0xd2),
    __E_HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API = static_cast<int32_t>(0xdc),
    __E_HAPI_ENVINT_MAX = static_cast<int32_t>(0xdd),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_EnvIntType_Unwrapped() const noexcept {
    return static_cast<__HAPI_EnvIntType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_EnvIntType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_EnvIntType(int32_t value__) noexcept;

  /// @brief Field HAPI_ENVINT_INVALID value: I32(-1)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_INVALID;

  /// @brief Field HAPI_ENVINT_MAX value: I32(221)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_MAX;

  /// @brief Field HAPI_ENVINT_VERSION_HOUDINI_BUILD value: I32(120)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_BUILD;

  /// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API value: I32(220)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_API;

  /// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR value: I32(200)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MAJOR;

  /// @brief Field HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR value: I32(210)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_ENGINE_MINOR;

  /// @brief Field HAPI_ENVINT_VERSION_HOUDINI_MAJOR value: I32(100)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_MAJOR;

  /// @brief Field HAPI_ENVINT_VERSION_HOUDINI_MINOR value: I32(110)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_MINOR;

  /// @brief Field HAPI_ENVINT_VERSION_HOUDINI_PATCH value: I32(130)
  static ::HoudiniEngineUnity::HAPI_EnvIntType const HAPI_ENVINT_VERSION_HOUDINI_PATCH;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11704 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_EnvIntType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_EnvIntType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_EnvIntType, "HoudiniEngineUnity", "HAPI_EnvIntType");

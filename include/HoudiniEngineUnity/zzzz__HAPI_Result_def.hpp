#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HAPI_Result.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_Result)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_Result;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_Result);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HAPI_Result
struct CORDL_TYPE HAPI_Result {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_Result_Unwrapped
  enum struct __HAPI_Result_Unwrapped : int32_t {
    __E_HAPI_RESULT_SUCCESS = static_cast<int32_t>(0x0),
    __E_HAPI_RESULT_FAILURE = static_cast<int32_t>(0x1),
    __E_HAPI_RESULT_ALREADY_INITIALIZED = static_cast<int32_t>(0x2),
    __E_HAPI_RESULT_NOT_INITIALIZED = static_cast<int32_t>(0x3),
    __E_HAPI_RESULT_CANT_LOADFILE = static_cast<int32_t>(0x4),
    __E_HAPI_RESULT_PARM_SET_FAILED = static_cast<int32_t>(0x5),
    __E_HAPI_RESULT_INVALID_ARGUMENT = static_cast<int32_t>(0x6),
    __E_HAPI_RESULT_CANT_LOAD_GEO = static_cast<int32_t>(0x7),
    __E_HAPI_RESULT_CANT_GENERATE_PRESET = static_cast<int32_t>(0x8),
    __E_HAPI_RESULT_CANT_LOAD_PRESET = static_cast<int32_t>(0x9),
    __E_HAPI_RESULT_ASSET_DEF_ALREADY_LOADED = static_cast<int32_t>(0xa),
    __E_HAPI_RESULT_NO_LICENSE_FOUND = static_cast<int32_t>(0x6e),
    __E_HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND = static_cast<int32_t>(0x78),
    __E_HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE = static_cast<int32_t>(0x82),
    __E_HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE = static_cast<int32_t>(0x8c),
    __E_HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE = static_cast<int32_t>(0x96),
    __E_HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN = static_cast<int32_t>(0xa0),
    __E_HAPI_RESULT_ASSET_INVALID = static_cast<int32_t>(0xc8),
    __E_HAPI_RESULT_NODE_INVALID = static_cast<int32_t>(0xd2),
    __E_HAPI_RESULT_USER_INTERRUPTED = static_cast<int32_t>(0x12c),
    __E_HAPI_RESULT_INVALID_SESSION = static_cast<int32_t>(0x190),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_Result_Unwrapped() const noexcept {
    return static_cast<__HAPI_Result_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_Result();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_Result(int32_t value__) noexcept;

  /// @brief Field HAPI_RESULT_ALREADY_INITIALIZED value: I32(2)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ALREADY_INITIALIZED;

  /// @brief Field HAPI_RESULT_ASSET_DEF_ALREADY_LOADED value: I32(10)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ASSET_DEF_ALREADY_LOADED;

  /// @brief Field HAPI_RESULT_ASSET_INVALID value: I32(200)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ASSET_INVALID;

  /// @brief Field HAPI_RESULT_CANT_GENERATE_PRESET value: I32(8)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_GENERATE_PRESET;

  /// @brief Field HAPI_RESULT_CANT_LOADFILE value: I32(4)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOADFILE;

  /// @brief Field HAPI_RESULT_CANT_LOAD_GEO value: I32(7)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOAD_GEO;

  /// @brief Field HAPI_RESULT_CANT_LOAD_PRESET value: I32(9)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOAD_PRESET;

  /// @brief Field HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN value: I32(160)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN;

  /// @brief Field HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE value: I32(150)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE;

  /// @brief Field HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE value: I32(130)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE;

  /// @brief Field HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE value: I32(140)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE;

  /// @brief Field HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND value: I32(120)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND;

  /// @brief Field HAPI_RESULT_FAILURE value: I32(1)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_FAILURE;

  /// @brief Field HAPI_RESULT_INVALID_ARGUMENT value: I32(6)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_INVALID_ARGUMENT;

  /// @brief Field HAPI_RESULT_INVALID_SESSION value: I32(400)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_INVALID_SESSION;

  /// @brief Field HAPI_RESULT_NODE_INVALID value: I32(210)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NODE_INVALID;

  /// @brief Field HAPI_RESULT_NOT_INITIALIZED value: I32(3)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NOT_INITIALIZED;

  /// @brief Field HAPI_RESULT_NO_LICENSE_FOUND value: I32(110)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NO_LICENSE_FOUND;

  /// @brief Field HAPI_RESULT_PARM_SET_FAILED value: I32(5)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_PARM_SET_FAILED;

  /// @brief Field HAPI_RESULT_SUCCESS value: I32(0)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_SUCCESS;

  /// @brief Field HAPI_RESULT_USER_INTERRUPTED value: I32(300)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_USER_INTERRUPTED;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11671 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HAPI_Result, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Result, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Result, "HoudiniEngineUnity", "HAPI_Result");

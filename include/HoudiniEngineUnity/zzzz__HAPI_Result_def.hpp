#pragma once
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
// Type: HoudiniEngineUnity::HAPI_Result
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9689))
// CS Name: ::HoudiniEngineUnity::HAPI_Result
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_Result(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_Result();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_RESULT_SUCCESS value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_SUCCESS;

  /// @brief Field HAPI_RESULT_FAILURE value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_FAILURE;

  /// @brief Field HAPI_RESULT_ALREADY_INITIALIZED value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ALREADY_INITIALIZED;

  /// @brief Field HAPI_RESULT_NOT_INITIALIZED value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NOT_INITIALIZED;

  /// @brief Field HAPI_RESULT_CANT_LOADFILE value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOADFILE;

  /// @brief Field HAPI_RESULT_PARM_SET_FAILED value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_PARM_SET_FAILED;

  /// @brief Field HAPI_RESULT_INVALID_ARGUMENT value: static_cast<int32_t>(0x6)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_INVALID_ARGUMENT;

  /// @brief Field HAPI_RESULT_CANT_LOAD_GEO value: static_cast<int32_t>(0x7)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOAD_GEO;

  /// @brief Field HAPI_RESULT_CANT_GENERATE_PRESET value: static_cast<int32_t>(0x8)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_GENERATE_PRESET;

  /// @brief Field HAPI_RESULT_CANT_LOAD_PRESET value: static_cast<int32_t>(0x9)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_CANT_LOAD_PRESET;

  /// @brief Field HAPI_RESULT_ASSET_DEF_ALREADY_LOADED value: static_cast<int32_t>(0xa)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ASSET_DEF_ALREADY_LOADED;

  /// @brief Field HAPI_RESULT_NO_LICENSE_FOUND value: static_cast<int32_t>(0x6e)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NO_LICENSE_FOUND;

  /// @brief Field HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND value: static_cast<int32_t>(0x78)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_LICENSE_FOUND;

  /// @brief Field HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE value: static_cast<int32_t>(0x82)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_C_LICENSE;

  /// @brief Field HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE value: static_cast<int32_t>(0x8c)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_NC_ASSET_WITH_LC_LICENSE;

  /// @brief Field HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE value: static_cast<int32_t>(0x96)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_LC_ASSET_WITH_C_LICENSE;

  /// @brief Field HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN value: static_cast<int32_t>(0xa0)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_DISALLOWED_HENGINEINDIE_W_3PARTY_PLUGIN;

  /// @brief Field HAPI_RESULT_ASSET_INVALID value: static_cast<int32_t>(0xc8)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_ASSET_INVALID;

  /// @brief Field HAPI_RESULT_NODE_INVALID value: static_cast<int32_t>(0xd2)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_NODE_INVALID;

  /// @brief Field HAPI_RESULT_USER_INTERRUPTED value: static_cast<int32_t>(0x12c)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_USER_INTERRUPTED;

  /// @brief Field HAPI_RESULT_INVALID_SESSION value: static_cast<int32_t>(0x190)
  static ::HoudiniEngineUnity::HAPI_Result const HAPI_RESULT_INVALID_SESSION;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_Result, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HAPI_Result, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_Result, "HoudiniEngineUnity", "HAPI_Result");

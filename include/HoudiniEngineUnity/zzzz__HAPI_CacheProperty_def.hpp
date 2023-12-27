#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HAPI_CacheProperty)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HAPI_CacheProperty;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HAPI_CacheProperty);
// Type: HoudiniEngineUnity::HAPI_CacheProperty
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9720))
// CS Name: ::HoudiniEngineUnity::HAPI_CacheProperty
struct CORDL_TYPE HAPI_CacheProperty {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HAPI_CacheProperty_Unwrapped
  enum struct __HAPI_CacheProperty_Unwrapped : int32_t {
    __E_HAPI_CACHEPROP_CURRENT = static_cast<int32_t>(0x0),
    __E_HAPI_CACHEPROP_HAS_MIN = static_cast<int32_t>(0x1),
    __E_HAPI_CACHEPROP_MIN = static_cast<int32_t>(0x2),
    __E_HAPI_CACHEPROP_HAS_MAX = static_cast<int32_t>(0x3),
    __E_HAPI_CACHEPROP_MAX = static_cast<int32_t>(0x4),
    __E_HAPI_CACHEPROP_CULL_LEVEL = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HAPI_CacheProperty_Unwrapped() const noexcept {
    return static_cast<__HAPI_CacheProperty_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HAPI_CacheProperty(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HAPI_CacheProperty();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field HAPI_CACHEPROP_CURRENT value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_CURRENT;

  /// @brief Field HAPI_CACHEPROP_HAS_MIN value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_HAS_MIN;

  /// @brief Field HAPI_CACHEPROP_MIN value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_MIN;

  /// @brief Field HAPI_CACHEPROP_HAS_MAX value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_HAS_MAX;

  /// @brief Field HAPI_CACHEPROP_MAX value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_MAX;

  /// @brief Field HAPI_CACHEPROP_CULL_LEVEL value: static_cast<int32_t>(0x5)
  static ::HoudiniEngineUnity::HAPI_CacheProperty const HAPI_CACHEPROP_CULL_LEVEL;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HAPI_CacheProperty, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HAPI_CacheProperty, "HoudiniEngineUnity", "HAPI_CacheProperty");

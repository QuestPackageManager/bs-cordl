#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HEU_AssetEventType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HEU_AssetEventType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HEU_AssetEventType);
// Type: HoudiniEngineUnity::HEU_AssetEventType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9386))
// CS Name: ::HoudiniEngineUnity::HEU_AssetEventType
struct CORDL_TYPE HEU_AssetEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HEU_AssetEventType_Unwrapped
  enum struct __HEU_AssetEventType_Unwrapped : int32_t {
    __E_UNKNOWN = static_cast<int32_t>(0x0),
    __E_RELOAD = static_cast<int32_t>(0x1),
    __E_COOK = static_cast<int32_t>(0x2),
    __E_BAKE_NEW = static_cast<int32_t>(0x3),
    __E_BAKE_UPDATE = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HEU_AssetEventType_Unwrapped() const noexcept {
    return static_cast<__HEU_AssetEventType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HEU_AssetEventType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr HEU_AssetEventType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field UNKNOWN value: static_cast<int32_t>(0x0)
  static ::HoudiniEngineUnity::HEU_AssetEventType const UNKNOWN;

  /// @brief Field RELOAD value: static_cast<int32_t>(0x1)
  static ::HoudiniEngineUnity::HEU_AssetEventType const RELOAD;

  /// @brief Field COOK value: static_cast<int32_t>(0x2)
  static ::HoudiniEngineUnity::HEU_AssetEventType const COOK;

  /// @brief Field BAKE_NEW value: static_cast<int32_t>(0x3)
  static ::HoudiniEngineUnity::HEU_AssetEventType const BAKE_NEW;

  /// @brief Field BAKE_UPDATE value: static_cast<int32_t>(0x4)
  static ::HoudiniEngineUnity::HEU_AssetEventType const BAKE_UPDATE;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HEU_AssetEventType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HoudiniEngineUnity::HEU_AssetEventType, value__) == 0x0, "Offset mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_AssetEventType, "HoudiniEngineUnity", "HEU_AssetEventType");

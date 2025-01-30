#pragma once
// IWYU pragma private; include "HoudiniEngineUnity/HFLayerType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HFLayerType)
// Forward declare root types
namespace HoudiniEngineUnity {
struct HFLayerType;
}
// Write type traits
MARK_VAL_T(::HoudiniEngineUnity::HFLayerType);
// Dependencies
namespace HoudiniEngineUnity {
// Is value type: true
// CS Name: HoudiniEngineUnity.HFLayerType
struct CORDL_TYPE HFLayerType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HFLayerType_Unwrapped
  enum struct __HFLayerType_Unwrapped : int32_t {
    __E_DEFAULT = static_cast<int32_t>(0x0),
    __E_HEIGHT = static_cast<int32_t>(0x1),
    __E_MASK = static_cast<int32_t>(0x2),
    __E_DETAIL = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HFLayerType_Unwrapped() const noexcept {
    return static_cast<__HFLayerType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HFLayerType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HFLayerType(int32_t value__) noexcept;

  /// @brief Field DEFAULT value: I32(0)
  static ::HoudiniEngineUnity::HFLayerType const DEFAULT;

  /// @brief Field DETAIL value: I32(3)
  static ::HoudiniEngineUnity::HFLayerType const DETAIL;

  /// @brief Field HEIGHT value: I32(1)
  static ::HoudiniEngineUnity::HFLayerType const HEIGHT;

  /// @brief Field MASK value: I32(2)
  static ::HoudiniEngineUnity::HFLayerType const MASK;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11936 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HoudiniEngineUnity::HFLayerType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HoudiniEngineUnity::HFLayerType, 0x4>, "Size mismatch!");

} // namespace HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HFLayerType, "HoudiniEngineUnity", "HFLayerType");

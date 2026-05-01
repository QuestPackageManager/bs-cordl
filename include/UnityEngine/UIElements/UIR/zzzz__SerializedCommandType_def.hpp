#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/UIR/SerializedCommandType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SerializedCommandType)
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
struct SerializedCommandType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UIElements::UIR::SerializedCommandType);
// Dependencies
namespace UnityEngine::UIElements::UIR {
// Is value type: true
// CS Name: UnityEngine.UIElements.UIR.SerializedCommandType
struct CORDL_TYPE SerializedCommandType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SerializedCommandType_Unwrapped
  enum struct __SerializedCommandType_Unwrapped : int32_t {
    __E_DrawRanges = static_cast<int32_t>(0x0),
    __E_SetTexture = static_cast<int32_t>(0x1),
    __E_ApplyBatchProps = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SerializedCommandType_Unwrapped() const noexcept {
    return static_cast<__SerializedCommandType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SerializedCommandType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SerializedCommandType(int32_t value__) noexcept;

  /// @brief Field ApplyBatchProps value: I32(2)
  static ::UnityEngine::UIElements::UIR::SerializedCommandType const ApplyBatchProps;

  /// @brief Field DrawRanges value: I32(0)
  static ::UnityEngine::UIElements::UIR::SerializedCommandType const DrawRanges;

  /// @brief Field SetTexture value: I32(1)
  static ::UnityEngine::UIElements::UIR::SerializedCommandType const SetTexture;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5280 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::UIR::SerializedCommandType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::UIR::SerializedCommandType, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UIElements::UIR
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::SerializedCommandType, "UnityEngine.UIElements.UIR", "SerializedCommandType");

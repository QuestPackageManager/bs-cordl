#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/AdvancedUpscalers.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AdvancedUpscalers)
// Forward declare root types
namespace UnityEngine::Rendering {
struct AdvancedUpscalers;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::AdvancedUpscalers);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.AdvancedUpscalers
struct CORDL_TYPE AdvancedUpscalers {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __AdvancedUpscalers_Unwrapped
  enum struct __AdvancedUpscalers_Unwrapped : uint8_t {
    __E_DLSS = static_cast<uint8_t>(0x0u),
    __E_FSR2 = static_cast<uint8_t>(0x1u),
    __E_STP = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AdvancedUpscalers_Unwrapped() const noexcept {
    return static_cast<__AdvancedUpscalers_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AdvancedUpscalers();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr AdvancedUpscalers(uint8_t value__) noexcept;

  /// @brief Field DLSS value: U8(0)
  static ::UnityEngine::Rendering::AdvancedUpscalers const DLSS;

  /// @brief Field FSR2 value: U8(1)
  static ::UnityEngine::Rendering::AdvancedUpscalers const FSR2;

  /// @brief Field STP value: U8(2)
  static ::UnityEngine::Rendering::AdvancedUpscalers const STP;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 11891 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::AdvancedUpscalers, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::AdvancedUpscalers, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::AdvancedUpscalers, "UnityEngine.Rendering", "AdvancedUpscalers");

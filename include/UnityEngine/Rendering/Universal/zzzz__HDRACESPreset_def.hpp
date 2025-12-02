#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/Universal/HDRACESPreset.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(HDRACESPreset)
// Forward declare root types
namespace UnityEngine::Rendering::Universal {
struct HDRACESPreset;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::Universal::HDRACESPreset);
// Dependencies
namespace UnityEngine::Rendering::Universal {
// Is value type: true
// CS Name: UnityEngine.Rendering.Universal.HDRACESPreset
struct CORDL_TYPE HDRACESPreset {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __HDRACESPreset_Unwrapped
  enum struct __HDRACESPreset_Unwrapped : int32_t {
    __E_ACES1000Nits = static_cast<int32_t>(0x3),
    __E_ACES2000Nits = static_cast<int32_t>(0x4),
    __E_ACES4000Nits = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __HDRACESPreset_Unwrapped() const noexcept {
    return static_cast<__HDRACESPreset_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr HDRACESPreset();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr HDRACESPreset(int32_t value__) noexcept;

  /// @brief Field ACES1000Nits value: I32(3)
  static ::UnityEngine::Rendering::Universal::HDRACESPreset const ACES1000Nits;

  /// @brief Field ACES2000Nits value: I32(4)
  static ::UnityEngine::Rendering::Universal::HDRACESPreset const ACES2000Nits;

  /// @brief Field ACES4000Nits value: I32(5)
  static ::UnityEngine::Rendering::Universal::HDRACESPreset const ACES4000Nits;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12783 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::Universal::HDRACESPreset, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::Universal::HDRACESPreset, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Rendering::Universal
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::Universal::HDRACESPreset, "UnityEngine.Rendering.Universal", "HDRACESPreset");

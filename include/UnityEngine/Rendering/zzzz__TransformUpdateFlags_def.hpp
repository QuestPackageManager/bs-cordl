#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/TransformUpdateFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TransformUpdateFlags)
// Forward declare root types
namespace UnityEngine::Rendering {
struct TransformUpdateFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Rendering::TransformUpdateFlags);
// Dependencies
namespace UnityEngine::Rendering {
// Is value type: true
// CS Name: UnityEngine.Rendering.TransformUpdateFlags
struct CORDL_TYPE TransformUpdateFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint8_t;

  /// @brief Nested struct __TransformUpdateFlags_Unwrapped
  enum struct __TransformUpdateFlags_Unwrapped : uint8_t {
    __E_None = static_cast<uint8_t>(0x0u),
    __E_HasLightProbeCombined = static_cast<uint8_t>(0x1u),
    __E_IsPartOfStaticBatch = static_cast<uint8_t>(0x2u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TransformUpdateFlags_Unwrapped() const noexcept {
    return static_cast<__TransformUpdateFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint8_t() const noexcept {
    return static_cast<uint8_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TransformUpdateFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint8_t", modifiers: "", def_value: None }]
  constexpr TransformUpdateFlags(uint8_t value__) noexcept;

  /// @brief Field HasLightProbeCombined value: U8(1)
  static ::UnityEngine::Rendering::TransformUpdateFlags const HasLightProbeCombined;

  /// @brief Field IsPartOfStaticBatch value: U8(2)
  static ::UnityEngine::Rendering::TransformUpdateFlags const IsPartOfStaticBatch;

  /// @brief Field None value: U8(0)
  static ::UnityEngine::Rendering::TransformUpdateFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17670 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x1 };

  /// @brief Field value__, offset: 0x0, size: 0x1, def value: None
  uint8_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::TransformUpdateFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::TransformUpdateFlags, 0x1>, "Size mismatch!");

} // namespace UnityEngine::Rendering
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::TransformUpdateFlags, "UnityEngine.Rendering", "TransformUpdateFlags");

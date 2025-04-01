#pragma once
// IWYU pragma private; include "UnityEngine/AudioVelocityUpdateMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioVelocityUpdateMode)
// Forward declare root types
namespace UnityEngine {
struct AudioVelocityUpdateMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AudioVelocityUpdateMode);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AudioVelocityUpdateMode
struct CORDL_TYPE AudioVelocityUpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioVelocityUpdateMode_Unwrapped
  enum struct __AudioVelocityUpdateMode_Unwrapped : int32_t {
    __E_Auto = static_cast<int32_t>(0x0),
    __E_Fixed = static_cast<int32_t>(0x1),
    __E_Dynamic = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioVelocityUpdateMode_Unwrapped() const noexcept {
    return static_cast<__AudioVelocityUpdateMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioVelocityUpdateMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioVelocityUpdateMode(int32_t value__) noexcept;

  /// @brief Field Auto value: I32(0)
  static ::UnityEngine::AudioVelocityUpdateMode const Auto;

  /// @brief Field Dynamic value: I32(2)
  static ::UnityEngine::AudioVelocityUpdateMode const Dynamic;

  /// @brief Field Fixed value: I32(1)
  static ::UnityEngine::AudioVelocityUpdateMode const Fixed;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17911 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AudioVelocityUpdateMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioVelocityUpdateMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioVelocityUpdateMode, "UnityEngine", "AudioVelocityUpdateMode");

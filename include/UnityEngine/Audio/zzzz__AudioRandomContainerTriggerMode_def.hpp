#pragma once
// IWYU pragma private; include "UnityEngine/Audio/AudioRandomContainerTriggerMode.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioRandomContainerTriggerMode)
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioRandomContainerTriggerMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioRandomContainerTriggerMode);
// Dependencies
namespace UnityEngine::Audio {
// Is value type: true
// CS Name: UnityEngine.Audio.AudioRandomContainerTriggerMode
struct CORDL_TYPE AudioRandomContainerTriggerMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioRandomContainerTriggerMode_Unwrapped
  enum struct __AudioRandomContainerTriggerMode_Unwrapped : int32_t {
    __E_Manual = static_cast<int32_t>(0x0),
    __E_Automatic = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioRandomContainerTriggerMode_Unwrapped() const noexcept {
    return static_cast<__AudioRandomContainerTriggerMode_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioRandomContainerTriggerMode();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioRandomContainerTriggerMode(int32_t value__) noexcept;

  /// @brief Field Automatic value: I32(1)
  static ::UnityEngine::Audio::AudioRandomContainerTriggerMode const Automatic;

  /// @brief Field Manual value: I32(0)
  static ::UnityEngine::Audio::AudioRandomContainerTriggerMode const Manual;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 20595 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Audio::AudioRandomContainerTriggerMode, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioRandomContainerTriggerMode, 0x4>, "Size mismatch!");

} // namespace UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioRandomContainerTriggerMode, "UnityEngine.Audio", "AudioRandomContainerTriggerMode");

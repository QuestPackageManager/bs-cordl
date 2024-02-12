#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioMixerUpdateMode)
// Forward declare root types
namespace UnityEngine::Audio {
struct AudioMixerUpdateMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::Audio::AudioMixerUpdateMode);
// Type: UnityEngine.Audio::AudioMixerUpdateMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::Audio {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15314))
// CS Name: ::UnityEngine.Audio::AudioMixerUpdateMode
struct CORDL_TYPE AudioMixerUpdateMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioMixerUpdateMode_Unwrapped
  enum struct __AudioMixerUpdateMode_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_UnscaledTime = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioMixerUpdateMode_Unwrapped() const noexcept {
    return static_cast<__AudioMixerUpdateMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioMixerUpdateMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioMixerUpdateMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::Audio::AudioMixerUpdateMode const Normal;

  /// @brief Field UnscaledTime value: static_cast<int32_t>(0x1)
  static ::UnityEngine::Audio::AudioMixerUpdateMode const UnscaledTime;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Audio::AudioMixerUpdateMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::Audio::AudioMixerUpdateMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::Audio
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Audio::AudioMixerUpdateMode, "UnityEngine.Audio", "AudioMixerUpdateMode");

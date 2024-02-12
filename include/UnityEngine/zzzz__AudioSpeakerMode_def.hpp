#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioSpeakerMode)
// Forward declare root types
namespace UnityEngine {
struct AudioSpeakerMode;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AudioSpeakerMode);
// Type: UnityEngine::AudioSpeakerMode
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15291))
// CS Name: ::UnityEngine::AudioSpeakerMode
struct CORDL_TYPE AudioSpeakerMode {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioSpeakerMode_Unwrapped
  enum struct __AudioSpeakerMode_Unwrapped : int32_t {
    __E_Raw = static_cast<int32_t>(0x0),
    __E_Mono = static_cast<int32_t>(0x1),
    __E_Stereo = static_cast<int32_t>(0x2),
    __E_Quad = static_cast<int32_t>(0x3),
    __E_Surround = static_cast<int32_t>(0x4),
    __E_Mode5point1 = static_cast<int32_t>(0x5),
    __E_Mode7point1 = static_cast<int32_t>(0x6),
    __E_Prologic = static_cast<int32_t>(0x7),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioSpeakerMode_Unwrapped() const noexcept {
    return static_cast<__AudioSpeakerMode_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioSpeakerMode(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioSpeakerMode();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Raw value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AudioSpeakerMode const Raw;

  /// @brief Field Mono value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AudioSpeakerMode const Mono;

  /// @brief Field Stereo value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AudioSpeakerMode const Stereo;

  /// @brief Field Quad value: static_cast<int32_t>(0x3)
  static ::UnityEngine::AudioSpeakerMode const Quad;

  /// @brief Field Surround value: static_cast<int32_t>(0x4)
  static ::UnityEngine::AudioSpeakerMode const Surround;

  /// @brief Field Mode5point1 value: static_cast<int32_t>(0x5)
  static ::UnityEngine::AudioSpeakerMode const Mode5point1;

  /// @brief Field Mode7point1 value: static_cast<int32_t>(0x6)
  static ::UnityEngine::AudioSpeakerMode const Mode7point1;

  /// @brief Field Prologic value: static_cast<int32_t>(0x7)
  static ::UnityEngine::AudioSpeakerMode const Prologic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioSpeakerMode, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AudioSpeakerMode, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioSpeakerMode, "UnityEngine", "AudioSpeakerMode");

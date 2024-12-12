#pragma once
// IWYU pragma private; include "UnityEngine/AudioType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(AudioType)
// Forward declare root types
namespace UnityEngine {
struct AudioType;
}
// Write type traits
MARK_VAL_T(::UnityEngine::AudioType);
// Dependencies
namespace UnityEngine {
// Is value type: true
// CS Name: UnityEngine.AudioType
struct CORDL_TYPE AudioType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __AudioType_Unwrapped
  enum struct __AudioType_Unwrapped : int32_t {
    __E_UNKNOWN = static_cast<int32_t>(0x0),
    __E_ACC = static_cast<int32_t>(0x1),
    __E_AIFF = static_cast<int32_t>(0x2),
    __E_IT = static_cast<int32_t>(0xa),
    __E_MOD = static_cast<int32_t>(0xc),
    __E_MPEG = static_cast<int32_t>(0xd),
    __E_OGGVORBIS = static_cast<int32_t>(0xe),
    __E_S3M = static_cast<int32_t>(0x11),
    __E_WAV = static_cast<int32_t>(0x14),
    __E_XM = static_cast<int32_t>(0x15),
    __E_XMA = static_cast<int32_t>(0x16),
    __E_VAG = static_cast<int32_t>(0x17),
    __E_AUDIOQUEUE = static_cast<int32_t>(0x18),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __AudioType_Unwrapped() const noexcept {
    return static_cast<__AudioType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr AudioType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr AudioType(int32_t value__) noexcept;

  /// @brief Field ACC value: I32(1)
  static ::UnityEngine::AudioType const ACC;

  /// @brief Field AIFF value: I32(2)
  static ::UnityEngine::AudioType const AIFF;

  /// @brief Field AUDIOQUEUE value: I32(24)
  static ::UnityEngine::AudioType const AUDIOQUEUE;

  /// @brief Field IT value: I32(10)
  static ::UnityEngine::AudioType const IT;

  /// @brief Field MOD value: I32(12)
  static ::UnityEngine::AudioType const MOD;

  /// @brief Field MPEG value: I32(13)
  static ::UnityEngine::AudioType const MPEG;

  /// @brief Field OGGVORBIS value: I32(14)
  static ::UnityEngine::AudioType const OGGVORBIS;

  /// @brief Field S3M value: I32(17)
  static ::UnityEngine::AudioType const S3M;

  /// @brief Field UNKNOWN value: I32(0)
  static ::UnityEngine::AudioType const UNKNOWN;

  /// @brief Field VAG value: I32(23)
  static ::UnityEngine::AudioType const VAG;

  /// @brief Field WAV value: I32(20)
  static ::UnityEngine::AudioType const WAV;

  /// @brief Field XM value: I32(21)
  static ::UnityEngine::AudioType const XM;

  /// @brief Field XMA value: I32(22)
  static ::UnityEngine::AudioType const XMA;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10653 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::AudioType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioType, 0x4>, "Size mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioType, "UnityEngine", "AudioType");

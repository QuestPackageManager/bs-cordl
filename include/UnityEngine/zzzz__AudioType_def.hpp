#pragma once
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
// Type: UnityEngine::AudioType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine {
// Is value type: true
// CS Name: ::UnityEngine::AudioType
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

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ACC value: static_cast<int32_t>(0x1)
  static ::UnityEngine::AudioType const ACC;

  /// @brief Field AIFF value: static_cast<int32_t>(0x2)
  static ::UnityEngine::AudioType const AIFF;

  /// @brief Field AUDIOQUEUE value: static_cast<int32_t>(0x18)
  static ::UnityEngine::AudioType const AUDIOQUEUE;

  /// @brief Field IT value: static_cast<int32_t>(0xa)
  static ::UnityEngine::AudioType const IT;

  /// @brief Field MOD value: static_cast<int32_t>(0xc)
  static ::UnityEngine::AudioType const MOD;

  /// @brief Field MPEG value: static_cast<int32_t>(0xd)
  static ::UnityEngine::AudioType const MPEG;

  /// @brief Field OGGVORBIS value: static_cast<int32_t>(0xe)
  static ::UnityEngine::AudioType const OGGVORBIS;

  /// @brief Field S3M value: static_cast<int32_t>(0x11)
  static ::UnityEngine::AudioType const S3M;

  /// @brief Field UNKNOWN value: static_cast<int32_t>(0x0)
  static ::UnityEngine::AudioType const UNKNOWN;

  /// @brief Field VAG value: static_cast<int32_t>(0x17)
  static ::UnityEngine::AudioType const VAG;

  /// @brief Field WAV value: static_cast<int32_t>(0x14)
  static ::UnityEngine::AudioType const WAV;

  /// @brief Field XM value: static_cast<int32_t>(0x15)
  static ::UnityEngine::AudioType const XM;

  /// @brief Field XMA value: static_cast<int32_t>(0x16)
  static ::UnityEngine::AudioType const XMA;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::AudioType, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::AudioType, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::AudioType, "UnityEngine", "AudioType");

#pragma once
// IWYU pragma private; include "LIV/SDK/Unity/FEATURES.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FEATURES)
// Forward declare root types
namespace LIV::SDK::Unity {
struct FEATURES;
}
// Write type traits
MARK_VAL_T(::LIV::SDK::Unity::FEATURES);
// Dependencies
namespace LIV::SDK::Unity {
// Is value type: true
// CS Name: LIV.SDK.Unity.FEATURES
struct CORDL_TYPE FEATURES {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint64_t;

  /// @brief Nested struct __FEATURES_Unwrapped
  enum struct __FEATURES_Unwrapped : uint64_t {
    __E_NONE = static_cast<uint64_t>(0x0u),
    __E_BACKGROUND_RENDER = static_cast<uint64_t>(0x1u),
    __E_FOREGROUND_RENDER = static_cast<uint64_t>(0x2u),
    __E_COMPLEX_CLIP_PLANE = static_cast<uint64_t>(0x4u),
    __E_BACKGROUND_DEPTH_RENDER = static_cast<uint64_t>(0x8u),
    __E_OVERRIDE_POST_PROCESSING = static_cast<uint64_t>(0x10u),
    __E_FIX_FOREGROUND_ALPHA = static_cast<uint64_t>(0x20u),
    __E_GROUND_CLIP_PLANE = static_cast<uint64_t>(0x40u),
    __E_RELEASE_CONTROL = static_cast<uint64_t>(0x8000u),
    __E_OPTIMIZED_RENDER = static_cast<uint64_t>(0x10000000u),
    __E_INTERLACED_RENDER = static_cast<uint64_t>(0x20000000u),
    __E_DEBUG_CLIP_PLANE = static_cast<uint64_t>(0x1000000000000u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FEATURES_Unwrapped() const noexcept {
    return static_cast<__FEATURES_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint64_t() const noexcept {
    return static_cast<uint64_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FEATURES();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint64_t", modifiers: "", def_value: None }]
  constexpr FEATURES(uint64_t value__) noexcept;

  /// @brief Field BACKGROUND_DEPTH_RENDER value: U64(8)
  static ::LIV::SDK::Unity::FEATURES const BACKGROUND_DEPTH_RENDER;

  /// @brief Field BACKGROUND_RENDER value: U64(1)
  static ::LIV::SDK::Unity::FEATURES const BACKGROUND_RENDER;

  /// @brief Field COMPLEX_CLIP_PLANE value: U64(4)
  static ::LIV::SDK::Unity::FEATURES const COMPLEX_CLIP_PLANE;

  /// @brief Field DEBUG_CLIP_PLANE value: U64(281474976710656)
  static ::LIV::SDK::Unity::FEATURES const DEBUG_CLIP_PLANE;

  /// @brief Field FIX_FOREGROUND_ALPHA value: U64(32)
  static ::LIV::SDK::Unity::FEATURES const FIX_FOREGROUND_ALPHA;

  /// @brief Field FOREGROUND_RENDER value: U64(2)
  static ::LIV::SDK::Unity::FEATURES const FOREGROUND_RENDER;

  /// @brief Field GROUND_CLIP_PLANE value: U64(64)
  static ::LIV::SDK::Unity::FEATURES const GROUND_CLIP_PLANE;

  /// @brief Field INTERLACED_RENDER value: U64(536870912)
  static ::LIV::SDK::Unity::FEATURES const INTERLACED_RENDER;

  /// @brief Field NONE value: U64(0)
  static ::LIV::SDK::Unity::FEATURES const NONE;

  /// @brief Field OPTIMIZED_RENDER value: U64(268435456)
  static ::LIV::SDK::Unity::FEATURES const OPTIMIZED_RENDER;

  /// @brief Field OVERRIDE_POST_PROCESSING value: U64(16)
  static ::LIV::SDK::Unity::FEATURES const OVERRIDE_POST_PROCESSING;

  /// @brief Field RELEASE_CONTROL value: U64(32768)
  static ::LIV::SDK::Unity::FEATURES const RELEASE_CONTROL;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 17321 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x8 };

  /// @brief Field value__, offset: 0x0, size: 0x8, def value: None
  uint64_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::LIV::SDK::Unity::FEATURES, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::LIV::SDK::Unity::FEATURES, 0x8>, "Size mismatch!");

} // namespace LIV::SDK::Unity
DEFINE_IL2CPP_ARG_TYPE(::LIV::SDK::Unity::FEATURES, "LIV.SDK.Unity", "FEATURES");

#pragma once
// IWYU pragma private; include "Unity/Profiling/ProfilerCategoryColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ProfilerCategoryColor)
// Forward declare root types
namespace Unity::Profiling {
struct ProfilerCategoryColor;
}
// Write type traits
MARK_VAL_T(::Unity::Profiling::ProfilerCategoryColor);
// Dependencies
namespace Unity::Profiling {
// Is value type: true
// CS Name: Unity.Profiling.ProfilerCategoryColor
struct CORDL_TYPE ProfilerCategoryColor {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = uint16_t;

  /// @brief Nested struct __ProfilerCategoryColor_Unwrapped
  enum struct __ProfilerCategoryColor_Unwrapped : uint16_t {
    __E_Render = static_cast<uint16_t>(0x0u),
    __E_Scripts = static_cast<uint16_t>(0x1u),
    __E_BurstJobs = static_cast<uint16_t>(0x2u),
    __E_Other = static_cast<uint16_t>(0x3u),
    __E_Physics = static_cast<uint16_t>(0x4u),
    __E_Animation = static_cast<uint16_t>(0x5u),
    __E_Audio = static_cast<uint16_t>(0x6u),
    __E_AudioJob = static_cast<uint16_t>(0x7u),
    __E_AudioUpdateJob = static_cast<uint16_t>(0x8u),
    __E_Lighting = static_cast<uint16_t>(0x9u),
    __E_GC = static_cast<uint16_t>(0xau),
    __E_VSync = static_cast<uint16_t>(0xbu),
    __E_Memory = static_cast<uint16_t>(0xcu),
    __E_Internal = static_cast<uint16_t>(0xdu),
    __E_UI = static_cast<uint16_t>(0xeu),
    __E_Build = static_cast<uint16_t>(0xfu),
    __E_Input = static_cast<uint16_t>(0x10u),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ProfilerCategoryColor_Unwrapped() const noexcept {
    return static_cast<__ProfilerCategoryColor_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator uint16_t() const noexcept {
    return static_cast<uint16_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ProfilerCategoryColor();

  // Ctor Parameters [CppParam { name: "value__", ty: "uint16_t", modifiers: "", def_value: None }]
  constexpr ProfilerCategoryColor(uint16_t value__) noexcept;

  /// @brief Field Animation value: U16(5)
  static ::Unity::Profiling::ProfilerCategoryColor const Animation;

  /// @brief Field Audio value: U16(6)
  static ::Unity::Profiling::ProfilerCategoryColor const Audio;

  /// @brief Field AudioJob value: U16(7)
  static ::Unity::Profiling::ProfilerCategoryColor const AudioJob;

  /// @brief Field AudioUpdateJob value: U16(8)
  static ::Unity::Profiling::ProfilerCategoryColor const AudioUpdateJob;

  /// @brief Field Build value: U16(15)
  static ::Unity::Profiling::ProfilerCategoryColor const Build;

  /// @brief Field BurstJobs value: U16(2)
  static ::Unity::Profiling::ProfilerCategoryColor const BurstJobs;

  /// @brief Field GC value: U16(10)
  static ::Unity::Profiling::ProfilerCategoryColor const GC;

  /// @brief Field Input value: U16(16)
  static ::Unity::Profiling::ProfilerCategoryColor const Input;

  /// @brief Field Internal value: U16(13)
  static ::Unity::Profiling::ProfilerCategoryColor const Internal;

  /// @brief Field Lighting value: U16(9)
  static ::Unity::Profiling::ProfilerCategoryColor const Lighting;

  /// @brief Field Memory value: U16(12)
  static ::Unity::Profiling::ProfilerCategoryColor const Memory;

  /// @brief Field Other value: U16(3)
  static ::Unity::Profiling::ProfilerCategoryColor const Other;

  /// @brief Field Physics value: U16(4)
  static ::Unity::Profiling::ProfilerCategoryColor const Physics;

  /// @brief Field Render value: U16(0)
  static ::Unity::Profiling::ProfilerCategoryColor const Render;

  /// @brief Field Scripts value: U16(1)
  static ::Unity::Profiling::ProfilerCategoryColor const Scripts;

  /// @brief Field UI value: U16(14)
  static ::Unity::Profiling::ProfilerCategoryColor const UI;

  /// @brief Field VSync value: U16(11)
  static ::Unity::Profiling::ProfilerCategoryColor const VSync;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 10563 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x2 };

  /// @brief Field value__, offset: 0x0, size: 0x2, def value: None
  uint16_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::Unity::Profiling::ProfilerCategoryColor, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::Unity::Profiling::ProfilerCategoryColor, 0x2>, "Size mismatch!");

} // namespace Unity::Profiling
DEFINE_IL2CPP_ARG_TYPE(::Unity::Profiling::ProfilerCategoryColor, "Unity.Profiling", "ProfilerCategoryColor");

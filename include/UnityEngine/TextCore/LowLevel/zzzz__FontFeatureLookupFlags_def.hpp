#pragma once
// IWYU pragma private; include "UnityEngine/TextCore/LowLevel/FontFeatureLookupFlags.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FontFeatureLookupFlags)
// Forward declare root types
namespace UnityEngine::TextCore::LowLevel {
struct FontFeatureLookupFlags;
}
// Write type traits
MARK_VAL_T(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags);
// Dependencies
namespace UnityEngine::TextCore::LowLevel {
// Is value type: true
// CS Name: UnityEngine.TextCore.LowLevel.FontFeatureLookupFlags
struct CORDL_TYPE FontFeatureLookupFlags {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FontFeatureLookupFlags_Unwrapped
  enum struct __FontFeatureLookupFlags_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_IgnoreLigatures = static_cast<int32_t>(0x4),
    __E_IgnoreSpacingAdjustments = static_cast<int32_t>(0x100),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FontFeatureLookupFlags_Unwrapped() const noexcept {
    return static_cast<__FontFeatureLookupFlags_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FontFeatureLookupFlags();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FontFeatureLookupFlags(int32_t value__) noexcept;

  /// @brief Field IgnoreLigatures value: I32(4)
  static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags const IgnoreLigatures;

  /// @brief Field IgnoreSpacingAdjustments value: I32(256)
  static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags const IgnoreSpacingAdjustments;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 18194 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags, 0x4>, "Size mismatch!");

} // namespace UnityEngine::TextCore::LowLevel
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::TextCore::LowLevel::FontFeatureLookupFlags, "UnityEngine.TextCore.LowLevel", "FontFeatureLookupFlags");

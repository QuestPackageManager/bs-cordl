#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion4/EventBoxGroupType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(EventBoxGroupType)
// Forward declare root types
namespace BeatmapSaveDataVersion4 {
struct EventBoxGroupType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion4::EventBoxGroupType);
// Dependencies
namespace BeatmapSaveDataVersion4 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion4.EventBoxGroupType
struct CORDL_TYPE EventBoxGroupType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __EventBoxGroupType_Unwrapped
  enum struct __EventBoxGroupType_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Color = static_cast<int32_t>(0x1),
    __E_Rotation = static_cast<int32_t>(0x2),
    __E_Translation = static_cast<int32_t>(0x3),
    __E_FloatFx = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __EventBoxGroupType_Unwrapped() const noexcept {
    return static_cast<__EventBoxGroupType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr EventBoxGroupType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr EventBoxGroupType(int32_t value__) noexcept;

  /// @brief Field Color value: I32(1)
  static ::BeatmapSaveDataVersion4::EventBoxGroupType const Color;

  /// @brief Field FloatFx value: I32(4)
  static ::BeatmapSaveDataVersion4::EventBoxGroupType const FloatFx;

  /// @brief Field None value: I32(0)
  static ::BeatmapSaveDataVersion4::EventBoxGroupType const None;

  /// @brief Field Rotation value: I32(2)
  static ::BeatmapSaveDataVersion4::EventBoxGroupType const Rotation;

  /// @brief Field Translation value: I32(3)
  static ::BeatmapSaveDataVersion4::EventBoxGroupType const Translation;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15284 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion4::EventBoxGroupType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion4::EventBoxGroupType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion4
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion4::EventBoxGroupType, "BeatmapSaveDataVersion4", "EventBoxGroupType");

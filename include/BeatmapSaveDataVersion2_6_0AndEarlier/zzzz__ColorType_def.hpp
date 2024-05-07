#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion2_6_0AndEarlier/ColorType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(ColorType)
// Forward declare root types
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
struct ColorType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType);
// Type: BeatmapSaveDataVersion2_6_0AndEarlier::ColorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion2_6_0AndEarlier {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType
struct CORDL_TYPE ColorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __ColorType_Unwrapped
  enum struct __ColorType_Unwrapped : int32_t {
    __E_ColorA = static_cast<int32_t>(0x0),
    __E_ColorB = static_cast<int32_t>(0x1),
    __E_None = static_cast<int32_t>(0xffffffff),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __ColorType_Unwrapped() const noexcept {
    return static_cast<__ColorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr ColorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr ColorType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ColorA value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType const ColorA;

  /// @brief Field ColorB value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType const ColorB;

  /// @brief Field None value: static_cast<int32_t>(0xffffffff)
  static ::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType const None;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion2_6_0AndEarlier
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion2_6_0AndEarlier::ColorType, "BeatmapSaveDataVersion2_6_0AndEarlier", "ColorType");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SliderType)
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
struct SliderType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion3::SliderType);
// Type: BeatmapSaveDataVersion3::SliderType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// CS Name: ::BeatmapSaveDataVersion3::SliderType
struct CORDL_TYPE SliderType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SliderType_Unwrapped
  enum struct __SliderType_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Burst = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SliderType_Unwrapped() const noexcept {
    return static_cast<__SliderType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SliderType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SliderType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Burst value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataVersion3::SliderType const Burst;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataVersion3::SliderType const Normal;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::SliderType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataVersion3::SliderType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataVersion3
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::SliderType, "BeatmapSaveDataVersion3", "SliderType");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(NoteColorType)
// Forward declare root types
namespace BeatmapSaveDataCommon {
struct NoteColorType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataCommon::NoteColorType);
// Type: BeatmapSaveDataCommon::NoteColorType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace BeatmapSaveDataCommon {
// Is value type: true
// CS Name: ::BeatmapSaveDataCommon::NoteColorType
struct CORDL_TYPE NoteColorType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __NoteColorType_Unwrapped
  enum struct __NoteColorType_Unwrapped : int32_t {
    __E_ColorA = static_cast<int32_t>(0x0),
    __E_ColorB = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __NoteColorType_Unwrapped() const noexcept {
    return static_cast<__NoteColorType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr NoteColorType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr NoteColorType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field ColorA value: static_cast<int32_t>(0x0)
  static ::BeatmapSaveDataCommon::NoteColorType const ColorA;

  /// @brief Field ColorB value: static_cast<int32_t>(0x1)
  static ::BeatmapSaveDataCommon::NoteColorType const ColorB;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataCommon::NoteColorType, 0x4>, "Size mismatch!");

static_assert(offsetof(::BeatmapSaveDataCommon::NoteColorType, value__) == 0x0, "Offset mismatch!");

} // namespace BeatmapSaveDataCommon
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataCommon::NoteColorType, "BeatmapSaveDataCommon", "NoteColorType");

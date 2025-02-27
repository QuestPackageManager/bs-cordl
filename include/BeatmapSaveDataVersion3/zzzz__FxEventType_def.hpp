#pragma once
// IWYU pragma private; include "BeatmapSaveDataVersion3/FxEventType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(FxEventType)
// Forward declare root types
namespace BeatmapSaveDataVersion3 {
struct FxEventType;
}
// Write type traits
MARK_VAL_T(::BeatmapSaveDataVersion3::FxEventType);
// Dependencies
namespace BeatmapSaveDataVersion3 {
// Is value type: true
// CS Name: BeatmapSaveDataVersion3.FxEventType
struct CORDL_TYPE FxEventType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __FxEventType_Unwrapped
  enum struct __FxEventType_Unwrapped : int32_t {
    __E_Int = static_cast<int32_t>(0x0),
    __E_Float = static_cast<int32_t>(0x1),
    __E_Bool = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __FxEventType_Unwrapped() const noexcept {
    return static_cast<__FxEventType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr FxEventType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr FxEventType(int32_t value__) noexcept;

  /// @brief Field Bool value: I32(2)
  static ::BeatmapSaveDataVersion3::FxEventType const Bool;

  /// @brief Field Float value: I32(1)
  static ::BeatmapSaveDataVersion3::FxEventType const Float;

  /// @brief Field Int value: I32(0)
  static ::BeatmapSaveDataVersion3::FxEventType const Int;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13405 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::BeatmapSaveDataVersion3::FxEventType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::BeatmapSaveDataVersion3::FxEventType, 0x4>, "Size mismatch!");

} // namespace BeatmapSaveDataVersion3
DEFINE_IL2CPP_ARG_TYPE(::BeatmapSaveDataVersion3::FxEventType, "BeatmapSaveDataVersion3", "FxEventType");

#pragma once
// IWYU pragma private; include "GlobalNamespace/SongPackDataType.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SongPackDataType)
// Forward declare root types
namespace GlobalNamespace {
struct SongPackDataType;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::SongPackDataType);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: SongPackDataType
struct CORDL_TYPE SongPackDataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SongPackDataType_Unwrapped
  enum struct __SongPackDataType_Unwrapped : int32_t {
    __E_SingleBeatmapLevelPack = static_cast<int32_t>(0x0),
    __E_MultipleBeatmapLevelsPack = static_cast<int32_t>(0x1),
    __E_All = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SongPackDataType_Unwrapped() const noexcept {
    return static_cast<__SongPackDataType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackDataType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SongPackDataType(int32_t value__) noexcept;

  /// @brief Field All value: I32(2)
  static ::GlobalNamespace::SongPackDataType const All;

  /// @brief Field MultipleBeatmapLevelsPack value: I32(1)
  static ::GlobalNamespace::SongPackDataType const MultipleBeatmapLevelsPack;

  /// @brief Field SingleBeatmapLevelPack value: I32(0)
  static ::GlobalNamespace::SongPackDataType const SingleBeatmapLevelPack;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13116 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::SongPackDataType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackDataType, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackDataType, "", "SongPackDataType");

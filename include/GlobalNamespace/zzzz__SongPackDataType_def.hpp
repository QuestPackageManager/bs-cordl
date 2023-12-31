#pragma once
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
// Type: ::SongPackDataType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4517))
// CS Name: ::SongPackDataType
struct CORDL_TYPE SongPackDataType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SongPackDataType_Unwrapped
  enum struct __SongPackDataType_Unwrapped : int32_t {
    __E_SingleBeatmapLevelPack = static_cast<int32_t>(0x0),
    __E_MultipleBeatmapLevelPacks = static_cast<int32_t>(0x1),
    __E_SinglePreviewBeatmapLevelPack = static_cast<int32_t>(0x2),
    __E_MultiplePreviewBeatmapLevelPacks = static_cast<int32_t>(0x3),
    __E_SingleBeatmapLevelPackCollection = static_cast<int32_t>(0x4),
    __E_MultipleBeatmapLevelPackCollections = static_cast<int32_t>(0x5),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SongPackDataType_Unwrapped() const noexcept {
    return static_cast<__SongPackDataType_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SongPackDataType(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr SongPackDataType();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field SingleBeatmapLevelPack value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::SongPackDataType const SingleBeatmapLevelPack;

  /// @brief Field MultipleBeatmapLevelPacks value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::SongPackDataType const MultipleBeatmapLevelPacks;

  /// @brief Field SinglePreviewBeatmapLevelPack value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::SongPackDataType const SinglePreviewBeatmapLevelPack;

  /// @brief Field MultiplePreviewBeatmapLevelPacks value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::SongPackDataType const MultiplePreviewBeatmapLevelPacks;

  /// @brief Field SingleBeatmapLevelPackCollection value: static_cast<int32_t>(0x4)
  static ::GlobalNamespace::SongPackDataType const SingleBeatmapLevelPackCollection;

  /// @brief Field MultipleBeatmapLevelPackCollections value: static_cast<int32_t>(0x5)
  static ::GlobalNamespace::SongPackDataType const MultipleBeatmapLevelPackCollections;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SongPackDataType, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SongPackDataType, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SongPackDataType, "", "SongPackDataType");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatmapLevel)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevel;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapLevel);
// Type: ::IBeatmapLevel
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4413))
// CS Name: ::IBeatmapLevel*
class CORDL_TYPE IBeatmapLevel {
public:
  // Declarations
  __declspec(property(get = get_beatmapLevelData))::GlobalNamespace::IBeatmapLevelData* beatmapLevelData;

  /// @brief Convert operator to "::GlobalNamespace::IPreviewBeatmapLevel"
  constexpr operator ::GlobalNamespace::IPreviewBeatmapLevel*() noexcept;

  /// @brief Method get_beatmapLevelData addr 0x0 size 0xffffffffffffffff virtual true final false
  inline ::GlobalNamespace::IBeatmapLevelData* get_beatmapLevelData();

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevel", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapLevel(IBeatmapLevel&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevel", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevel(IBeatmapLevel const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevel);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevel*, "", "IBeatmapLevel");

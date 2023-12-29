#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelDataExtensions)
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelDataExtensions;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelDataExtensions);
// Type: ::BeatmapLevelDataExtensions
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4415))
// CS Name: ::BeatmapLevelDataExtensions*
class CORDL_TYPE BeatmapLevelDataExtensions : public ::System::Object {
public:
  // Declarations
  /// @brief Method GetDifficultyBeatmap addr 0x21fdebc size 0x418 virtual false final false
  static inline ::GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                            ::GlobalNamespace::BeatmapDifficulty difficulty);

  /// @brief Method GetDifficultyBeatmapSet addr 0x21fe2d4 size 0x4a0 virtual false final false
  static inline ::GlobalNamespace::IDifficultyBeatmapSet* GetDifficultyBeatmapSet(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                                  ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method GetDifficultyBeatmap addr 0x21fe774 size 0x20 virtual false final false
  static inline ::GlobalNamespace::IDifficultyBeatmap* GetDifficultyBeatmap(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData,
                                                                            ::GlobalNamespace::PreviewDifficultyBeatmap* previewDifficultyBeatmap);

  /// @brief Method GetDifficultyBeatmapSet addr 0x21fe794 size 0x478 virtual false final false
  static inline ::GlobalNamespace::IDifficultyBeatmapSet* GetDifficultyBeatmapSet(::GlobalNamespace::IBeatmapLevelData* beatmapLevelData, ::StringW beatmapCharacteristicName);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataExtensions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelDataExtensions(BeatmapLevelDataExtensions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelDataExtensions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelDataExtensions(BeatmapLevelDataExtensions const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelDataExtensions();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelDataExtensions, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelDataExtensions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelDataExtensions*, "", "BeatmapLevelDataExtensions");

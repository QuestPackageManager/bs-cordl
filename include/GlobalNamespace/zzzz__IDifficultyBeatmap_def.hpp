#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(IDifficultyBeatmap)
namespace GlobalNamespace {
class PlayerSpecificSettings;
}
namespace GlobalNamespace {
class EnvironmentInfoSO;
}
namespace System::Threading::Tasks {
template <typename TResult> class Task_1;
}
namespace GlobalNamespace {
class IBeatmapDataBasicInfo;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IBeatmapLevel;
}
namespace GlobalNamespace {
class IReadonlyBeatmapData;
}
// Forward declare root types
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IDifficultyBeatmap);
// Type: ::IDifficultyBeatmap
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4394))
// CS Name: ::IDifficultyBeatmap*
class CORDL_TYPE IDifficultyBeatmap {
public:
  // Declarations
  __declspec(property(get = get_level))::GlobalNamespace::IBeatmapLevel* level;

  __declspec(property(get = get_parentDifficultyBeatmapSet))::GlobalNamespace::IDifficultyBeatmapSet* parentDifficultyBeatmapSet;

  __declspec(property(get = get_difficulty))::GlobalNamespace::BeatmapDifficulty difficulty;

  __declspec(property(get = get_difficultyRank)) int32_t difficultyRank;

  __declspec(property(get = get_noteJumpMovementSpeed)) float_t noteJumpMovementSpeed;

  __declspec(property(get = get_noteJumpStartBeatOffset)) float_t noteJumpStartBeatOffset;

  __declspec(property(get = get_environmentNameIdx)) int32_t environmentNameIdx;

  /// @brief Method get_level, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IBeatmapLevel* get_level();

  /// @brief Method get_parentDifficultyBeatmapSet, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::IDifficultyBeatmapSet* get_parentDifficultyBeatmapSet();

  /// @brief Method get_difficulty, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_difficulty();

  /// @brief Method get_difficultyRank, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_difficultyRank();

  /// @brief Method get_noteJumpMovementSpeed, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_noteJumpMovementSpeed();

  /// @brief Method get_noteJumpStartBeatOffset, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline float_t get_noteJumpStartBeatOffset();

  /// @brief Method get_environmentNameIdx, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline int32_t get_environmentNameIdx();

  /// @brief Method GetBeatmapDataBasicInfoAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IBeatmapDataBasicInfo*>* GetBeatmapDataBasicInfoAsync();

  /// @brief Method GetBeatmapDataAsync, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Threading::Tasks::Task_1<::GlobalNamespace::IReadonlyBeatmapData*>* GetBeatmapDataAsync(::GlobalNamespace::EnvironmentInfoSO* environmentInfo,
                                                                                                           ::GlobalNamespace::PlayerSpecificSettings* playerSpecificSettings);

  // Ctor Parameters [CppParam { name: "", ty: "IDifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IDifficultyBeatmap(IDifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IDifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IDifficultyBeatmap(IDifficultyBeatmap const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IDifficultyBeatmap*, "", "IDifficultyBeatmap");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
CORDL_MODULE_EXPORT(IBeatmapLevelData)
namespace UnityEngine {
class AudioClip;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
// Forward declare root types
namespace GlobalNamespace {
class IBeatmapLevelData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::IBeatmapLevelData);
// Type: ::IBeatmapLevelData
// SizeInfo { instance_size: 0, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4392))
// CS Name: ::IBeatmapLevelData*
class CORDL_TYPE IBeatmapLevelData {
public:
  // Declarations
  __declspec(property(get = get_audioClip))::UnityEngine::AudioClip* audioClip;

  __declspec(property(get = get_difficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;

  /// @brief Method get_audioClip, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::UnityEngine::AudioClip* get_audioClip();

  /// @brief Method get_difficultyBeatmapSets, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: true, final false
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IBeatmapLevelData(IBeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IBeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IBeatmapLevelData(IBeatmapLevelData const&) = delete;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::IBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IBeatmapLevelData*, "", "IBeatmapLevelData");

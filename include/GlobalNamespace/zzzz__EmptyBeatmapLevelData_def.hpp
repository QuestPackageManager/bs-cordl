#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(EmptyBeatmapLevelData)
namespace GlobalNamespace {
class IBeatmapLevelData;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class AudioClip;
}
// Forward declare root types
namespace GlobalNamespace {
class EmptyBeatmapLevelData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::EmptyBeatmapLevelData);
// Type: ::EmptyBeatmapLevelData
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4387))
// CS Name: ::EmptyBeatmapLevelData*
class CORDL_TYPE EmptyBeatmapLevelData : public ::System::Object {
public:
  // Declarations
  __declspec(property(get = get_audioClip))::UnityW<::UnityEngine::AudioClip> audioClip;

  __declspec(property(get = get_difficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IBeatmapLevelData"
  constexpr ::GlobalNamespace::IBeatmapLevelData* i___GlobalNamespace__IBeatmapLevelData() noexcept;

  /// @brief Method get_audioClip, addr 0x2347dd4, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::AudioClip> get_audioClip();

  /// @brief Method get_difficultyBeatmapSets, addr 0x2347ddc, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();

  static inline ::GlobalNamespace::EmptyBeatmapLevelData* New_ctor();

  /// @brief Method .ctor, addr 0x2347dcc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "EmptyBeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  EmptyBeatmapLevelData(EmptyBeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "EmptyBeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  EmptyBeatmapLevelData(EmptyBeatmapLevelData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr EmptyBeatmapLevelData();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::EmptyBeatmapLevelData, 0x10>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::EmptyBeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EmptyBeatmapLevelData*, "", "EmptyBeatmapLevelData");

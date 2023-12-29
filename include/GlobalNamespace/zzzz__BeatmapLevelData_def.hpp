#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(BeatmapLevelData)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace UnityEngine {
class AudioClip;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IBeatmapLevelData;
}
// Forward declare root types
namespace GlobalNamespace {
class BeatmapLevelData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::BeatmapLevelData);
// Type: ::BeatmapLevelData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2611))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4366))
// CS Name: ::BeatmapLevelData*
class CORDL_TYPE BeatmapLevelData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _audioClip, offset 0x10, size 0x8
  __declspec(property(get = __get__audioClip, put = __set__audioClip))::UnityEngine::AudioClip* _audioClip;

  /// @brief Field _difficultyBeatmapSets, offset 0x18, size 0x8
  __declspec(property(get = __get__difficultyBeatmapSets,
                      put = __set__difficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* _difficultyBeatmapSets;

  __declspec(property(get = get_audioClip))::UnityEngine::AudioClip* audioClip;

  __declspec(property(get = get_difficultyBeatmapSets))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets;

  /// @brief Convert operator to "::GlobalNamespace::IBeatmapLevelData"
  constexpr operator ::GlobalNamespace::IBeatmapLevelData*() noexcept;

  constexpr ::UnityEngine::AudioClip*& __get__audioClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AudioClip*> const& __get__audioClip() const;

  constexpr void __set__audioClip(::UnityEngine::AudioClip* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*& __get__difficultyBeatmapSets();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>*> const& __get__difficultyBeatmapSets() const;

  constexpr void __set__difficultyBeatmapSets(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* value);

  /// @brief Method get_audioClip addr 0x21f6110 size 0x8 virtual true final true
  inline ::UnityEngine::AudioClip* get_audioClip();

  /// @brief Method get_difficultyBeatmapSets addr 0x21f6118 size 0x8 virtual true final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* get_difficultyBeatmapSets();

  static inline ::GlobalNamespace::BeatmapLevelData* New_ctor(::UnityEngine::AudioClip* audioClip,
                                                              ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets);

  /// @brief Method .ctor addr 0x21f6120 size 0x2c virtual false final false
  inline void _ctor(::UnityEngine::AudioClip* audioClip, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* difficultyBeatmapSets);

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BeatmapLevelData(BeatmapLevelData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BeatmapLevelData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BeatmapLevelData(BeatmapLevelData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BeatmapLevelData();

public:
  /// @brief Field _audioClip, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::AudioClip* ____audioClip;

  /// @brief Field _difficultyBeatmapSets, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmapSet*>* ____difficultyBeatmapSets;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::BeatmapLevelData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelData, ____audioClip) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::BeatmapLevelData, ____difficultyBeatmapSets) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::BeatmapLevelData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BeatmapLevelData*, "", "BeatmapLevelData");

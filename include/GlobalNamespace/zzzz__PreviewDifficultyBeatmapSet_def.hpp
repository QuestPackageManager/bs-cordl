#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(PreviewDifficultyBeatmapSet)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewDifficultyBeatmapSet;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PreviewDifficultyBeatmapSet);
// Type: ::PreviewDifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4409))
// CS Name: ::PreviewDifficultyBeatmapSet*
class CORDL_TYPE PreviewDifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapCharacteristic, put = __cordl_internal_set__beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> _beatmapCharacteristic;

  /// @brief Field _beatmapDifficulties, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__beatmapDifficulties,
                      put = __cordl_internal_set__beatmapDifficulties))::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> _beatmapDifficulties;

  __declspec(property(get = get_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  __declspec(property(get = get_beatmapDifficulties))::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> beatmapDifficulties;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get__beatmapCharacteristic();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get__beatmapCharacteristic() const;

  constexpr void __cordl_internal_set__beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*>& __cordl_internal_get__beatmapDifficulties();

  constexpr ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> const& __cordl_internal_get__beatmapDifficulties() const;

  constexpr void __cordl_internal_set__beatmapDifficulties(::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> value);

  /// @brief Method get_beatmapCharacteristic, addr 0x234c5e0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> get_beatmapCharacteristic();

  /// @brief Method get_beatmapDifficulties, addr 0x234c5e8, size 0x8, virtual false, abstract: false, final false
  inline ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> get_beatmapDifficulties();

  static inline ::GlobalNamespace::PreviewDifficultyBeatmapSet* New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                         ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> beatmapDifficulties);

  /// @brief Method .ctor, addr 0x234c5f0, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                    ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> beatmapDifficulties);

  // Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreviewDifficultyBeatmapSet(PreviewDifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreviewDifficultyBeatmapSet(PreviewDifficultyBeatmapSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreviewDifficultyBeatmapSet();

public:
  /// @brief Field _beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ____beatmapCharacteristic;

  /// @brief Field _beatmapDifficulties, offset: 0x18, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::BeatmapDifficulty, ::Array<::GlobalNamespace::BeatmapDifficulty>*> ____beatmapDifficulties;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviewDifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewDifficultyBeatmapSet, ____beatmapCharacteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewDifficultyBeatmapSet, ____beatmapDifficulties) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmapSet*, "", "PreviewDifficultyBeatmapSet");

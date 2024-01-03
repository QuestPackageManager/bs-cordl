#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(DifficultyBeatmapSet)
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class DifficultyBeatmapSet;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::DifficultyBeatmapSet);
// Type: ::DifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4397))
// CS Name: ::DifficultyBeatmapSet*
class CORDL_TYPE DifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmapCharacteristic>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic_k__BackingField,
                      put = __set__beatmapCharacteristic_k__BackingField))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic_k__BackingField;

  /// @brief Field <difficultyBeatmaps>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__difficultyBeatmaps_k__BackingField,
                      put = __set__difficultyBeatmaps_k__BackingField))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* _difficultyBeatmaps_k__BackingField;

  __declspec(property(get = get_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  __declspec(property(get = get_difficultyBeatmaps))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;

  /// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmapSet"
  constexpr operator ::GlobalNamespace::IDifficultyBeatmapSet*() noexcept;

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic_k__BackingField() const;

  constexpr void __set__beatmapCharacteristic_k__BackingField(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*& __get__difficultyBeatmaps_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>*> const& __get__difficultyBeatmaps_k__BackingField() const;

  constexpr void __set__difficultyBeatmaps_k__BackingField(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* value);

  /// @brief Method get_beatmapCharacteristic, addr 0x234954c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();

  /// @brief Method get_difficultyBeatmaps, addr 0x2349554, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();

  static inline ::GlobalNamespace::DifficultyBeatmapSet* New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);

  /// @brief Method .ctor, addr 0x234955c, size 0x2c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps);

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DifficultyBeatmapSet(DifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DifficultyBeatmapSet(DifficultyBeatmapSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DifficultyBeatmapSet();

public:
  /// @brief Field <beatmapCharacteristic>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic_k__BackingField;

  /// @brief Field <difficultyBeatmaps>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* ____difficultyBeatmaps_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::DifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyBeatmapSet, ____beatmapCharacteristic_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::DifficultyBeatmapSet, ____difficultyBeatmaps_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::DifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::DifficultyBeatmapSet*, "", "DifficultyBeatmapSet");

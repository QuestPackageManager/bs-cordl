#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
CORDL_MODULE_EXPORT(CustomDifficultyBeatmapSet)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
class CustomDifficultyBeatmap;
}
namespace GlobalNamespace {
class IDifficultyBeatmapSet;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace System::Collections::Generic {
template <typename T> class IReadOnlyList_1;
}
// Forward declare root types
namespace GlobalNamespace {
class CustomDifficultyBeatmapSet;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::CustomDifficultyBeatmapSet);
// Type: ::CustomDifficultyBeatmapSet
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4378))
// CS Name: ::CustomDifficultyBeatmapSet*
class CORDL_TYPE CustomDifficultyBeatmapSet : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapCharacteristic, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic, put = __set__beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic;

  /// @brief Field _difficultyBeatmaps, offset 0x18, size 0x8
  __declspec(property(get = __get__difficultyBeatmaps,
                      put = __set__difficultyBeatmaps))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomDifficultyBeatmap*>* _difficultyBeatmaps;

  __declspec(property(get = get_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  __declspec(property(get = get_difficultyBeatmaps))::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* difficultyBeatmaps;

  /// @brief Convert operator to "::GlobalNamespace::IDifficultyBeatmapSet"
  constexpr operator ::GlobalNamespace::IDifficultyBeatmapSet*() noexcept;

  /// @brief Convert to "::GlobalNamespace::IDifficultyBeatmapSet"
  constexpr ::GlobalNamespace::IDifficultyBeatmapSet* i___GlobalNamespace__IDifficultyBeatmapSet() noexcept;

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic() const;

  constexpr void __set__beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomDifficultyBeatmap*>*& __get__difficultyBeatmaps();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomDifficultyBeatmap*>*> const& __get__difficultyBeatmaps() const;

  constexpr void __set__difficultyBeatmaps(::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomDifficultyBeatmap*>* value);

  /// @brief Method get_beatmapCharacteristic, addr 0x2346aac, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();

  /// @brief Method get_difficultyBeatmaps, addr 0x2346ab4, size 0x8, virtual true, abstract: false, final true
  inline ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::IDifficultyBeatmap*>* get_difficultyBeatmaps();

  static inline ::GlobalNamespace::CustomDifficultyBeatmapSet* New_ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method .ctor, addr 0x2346abc, size 0x28, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method SetCustomDifficultyBeatmaps, addr 0x2346ae4, size 0x8, virtual false, abstract: false, final false
  inline void SetCustomDifficultyBeatmaps(::ArrayW<::GlobalNamespace::CustomDifficultyBeatmap*, ::Array<::GlobalNamespace::CustomDifficultyBeatmap*>*> difficultyBeatmaps);

  // Ctor Parameters [CppParam { name: "", ty: "CustomDifficultyBeatmapSet", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  CustomDifficultyBeatmapSet(CustomDifficultyBeatmapSet&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "CustomDifficultyBeatmapSet", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  CustomDifficultyBeatmapSet(CustomDifficultyBeatmapSet const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr CustomDifficultyBeatmapSet();

public:
  /// @brief Field _beatmapCharacteristic, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic;

  /// @brief Field _difficultyBeatmaps, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::IReadOnlyList_1<::GlobalNamespace::CustomDifficultyBeatmap*>* ____difficultyBeatmaps;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::CustomDifficultyBeatmapSet, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmapSet, ____beatmapCharacteristic) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::CustomDifficultyBeatmapSet, ____difficultyBeatmaps) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::CustomDifficultyBeatmapSet);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::CustomDifficultyBeatmapSet*, "", "CustomDifficultyBeatmapSet");

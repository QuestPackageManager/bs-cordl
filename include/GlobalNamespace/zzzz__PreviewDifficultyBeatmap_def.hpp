#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(PreviewDifficultyBeatmap)
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace System {
class Object;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace System {
template <typename T> class IEquatable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::PreviewDifficultyBeatmap);
// Type: ::PreviewDifficultyBeatmap
// SizeInfo { instance_size: 40, native_size: -1, calculated_instance_size: 40, calculated_native_size: 36, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4408))
// CS Name: ::PreviewDifficultyBeatmap*
class CORDL_TYPE PreviewDifficultyBeatmap : public ::System::Object {
public:
  // Declarations
  /// @brief Field <beatmapLevel>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevel_k__BackingField, put = __set__beatmapLevel_k__BackingField))::GlobalNamespace::IPreviewBeatmapLevel* _beatmapLevel_k__BackingField;

  /// @brief Field <beatmapCharacteristic>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__beatmapCharacteristic_k__BackingField,
                      put = __set__beatmapCharacteristic_k__BackingField))::GlobalNamespace::BeatmapCharacteristicSO* _beatmapCharacteristic_k__BackingField;

  /// @brief Field <beatmapDifficulty>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__beatmapDifficulty_k__BackingField, put = __set__beatmapDifficulty_k__BackingField))::GlobalNamespace::BeatmapDifficulty _beatmapDifficulty_k__BackingField;

  __declspec(property(get = get_beatmapLevel, put = set_beatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel;

  __declspec(property(get = get_beatmapCharacteristic, put = set_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  __declspec(property(get = get_beatmapDifficulty, put = set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Convert operator to "::System::IEquatable_1<::GlobalNamespace::PreviewDifficultyBeatmap*>"
  constexpr operator ::System::IEquatable_1<::GlobalNamespace::PreviewDifficultyBeatmap*>*() noexcept;

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get__beatmapLevel_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get__beatmapLevel_k__BackingField() const;

  constexpr void __set__beatmapLevel_k__BackingField(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get__beatmapCharacteristic_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get__beatmapCharacteristic_k__BackingField() const;

  constexpr void __set__beatmapCharacteristic_k__BackingField(::GlobalNamespace::BeatmapCharacteristicSO* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get__beatmapDifficulty_k__BackingField();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get__beatmapDifficulty_k__BackingField() const;

  constexpr void __set__beatmapDifficulty_k__BackingField(::GlobalNamespace::BeatmapDifficulty value);

  /// @brief Method get_beatmapLevel, addr 0x234c2fc, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::IPreviewBeatmapLevel* get_beatmapLevel();

  /// @brief Method set_beatmapLevel, addr 0x234c304, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  /// @brief Method get_beatmapCharacteristic, addr 0x234c30c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapCharacteristicSO* get_beatmapCharacteristic();

  /// @brief Method set_beatmapCharacteristic, addr 0x234c314, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  /// @brief Method get_beatmapDifficulty, addr 0x234c31c, size 0x8, virtual false, abstract: false, final false
  inline ::GlobalNamespace::BeatmapDifficulty get_beatmapDifficulty();

  /// @brief Method set_beatmapDifficulty, addr 0x234c324, size 0x8, virtual false, abstract: false, final false
  inline void set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  static inline ::GlobalNamespace::PreviewDifficultyBeatmap* New_ctor(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                                                                      ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  /// @brief Method .ctor, addr 0x2341690, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IPreviewBeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty);

  /// @brief Method Equals, addr 0x234c32c, size 0xb4, virtual true, abstract: false, final true
  inline bool Equals(::GlobalNamespace::PreviewDifficultyBeatmap* other);

  /// @brief Method Equals, addr 0x234c3e0, size 0x10c, virtual true, abstract: false, final false
  inline bool Equals(::System::Object* obj);

  /// @brief Method GetHashCode, addr 0x234c4ec, size 0xc0, virtual true, abstract: false, final false
  inline int32_t GetHashCode();

  /// @brief Method op_Equality, addr 0x23417ec, size 0x18, virtual false, abstract: false, final false
  static inline bool op_Equality(::GlobalNamespace::PreviewDifficultyBeatmap* a, ::GlobalNamespace::PreviewDifficultyBeatmap* b);

  /// @brief Method op_Inequality, addr 0x234c5ac, size 0x34, virtual false, abstract: false, final false
  static inline bool op_Inequality(::GlobalNamespace::PreviewDifficultyBeatmap* a, ::GlobalNamespace::PreviewDifficultyBeatmap* b);

  // Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmap", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PreviewDifficultyBeatmap(PreviewDifficultyBeatmap&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PreviewDifficultyBeatmap", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PreviewDifficultyBeatmap(PreviewDifficultyBeatmap const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PreviewDifficultyBeatmap();

public:
  /// @brief Field <beatmapLevel>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ____beatmapLevel_k__BackingField;

  /// @brief Field <beatmapCharacteristic>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ____beatmapCharacteristic_k__BackingField;

  /// @brief Field <beatmapDifficulty>k__BackingField, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ____beatmapDifficulty_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::PreviewDifficultyBeatmap, 0x28>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewDifficultyBeatmap, ____beatmapLevel_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewDifficultyBeatmap, ____beatmapCharacteristic_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::PreviewDifficultyBeatmap, ____beatmapDifficulty_k__BackingField) == 0x20, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::PreviewDifficultyBeatmap);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::PreviewDifficultyBeatmap*, "", "PreviewDifficultyBeatmap");

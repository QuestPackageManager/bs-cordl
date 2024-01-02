#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
CORDL_MODULE_EXPORT(SelectLevelDestination)
namespace GlobalNamespace {
class IBeatmapLevelPack;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
// Forward declare root types
namespace GlobalNamespace {
class SelectLevelDestination;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::SelectLevelDestination);
// Type: ::SelectLevelDestination
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14717)), TypeDefinitionIndex(TypeDefinitionIndex(4152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4156))
// CS Name: ::SelectLevelDestination*
class CORDL_TYPE SelectLevelDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field beatmapLevelPack, offset 0x10, size 0x8
  __declspec(property(get = __get_beatmapLevelPack, put = __set_beatmapLevelPack))::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack;

  /// @brief Field previewBeatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __get_previewBeatmapLevel, put = __set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __get_beatmapDifficulty, put = __set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __get_beatmapCharacteristic, put = __set_beatmapCharacteristic))::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic;

  constexpr ::GlobalNamespace::IBeatmapLevelPack*& __get_beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IBeatmapLevelPack*> const& __get_beatmapLevelPack() const;

  constexpr void __set_beatmapLevelPack(::GlobalNamespace::IBeatmapLevelPack* value);

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __get_previewBeatmapLevel() const;

  constexpr void __set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __get_beatmapDifficulty() const;

  constexpr void __set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::GlobalNamespace::BeatmapCharacteristicSO*& __get_beatmapCharacteristic();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapCharacteristicSO*> const& __get_beatmapCharacteristic() const;

  constexpr void __set_beatmapCharacteristic(::GlobalNamespace::BeatmapCharacteristicSO* value);

  static inline ::GlobalNamespace::SelectLevelDestination* New_ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel,
                                                                    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method .ctor, addr 0x223cf3c, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IBeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelDestination", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SelectLevelDestination(SelectLevelDestination&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SelectLevelDestination", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SelectLevelDestination(SelectLevelDestination const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SelectLevelDestination();

public:
  /// @brief Field beatmapLevelPack, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IBeatmapLevelPack* ___beatmapLevelPack;

  /// @brief Field previewBeatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapCharacteristicSO* ___beatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelDestination, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelDestination, ___beatmapLevelPack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelDestination, ___previewBeatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelDestination, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelDestination, ___beatmapCharacteristic) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectLevelDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelDestination*, "", "SelectLevelDestination");

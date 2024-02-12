#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "GlobalNamespace/zzzz__MenuDestination_def.hpp"
CORDL_MODULE_EXPORT(SelectLevelDestination)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class BeatmapLevelPack;
}
namespace GlobalNamespace {
class BeatmapLevel;
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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(10608)), TypeDefinitionIndex(TypeDefinitionIndex(15101))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10612))
// CS Name: ::SelectLevelDestination*
class CORDL_TYPE SelectLevelDestination : public ::GlobalNamespace::MenuDestination {
public:
  // Declarations
  /// @brief Field beatmapLevelPack, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevelPack, put = __cordl_internal_set_beatmapLevelPack))::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack;

  /// @brief Field beatmapLevel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field beatmapDifficulty, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  constexpr ::GlobalNamespace::BeatmapLevelPack*& __cordl_internal_get_beatmapLevelPack();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevelPack*> const& __cordl_internal_get_beatmapLevelPack() const;

  constexpr void __cordl_internal_set_beatmapLevelPack(::GlobalNamespace::BeatmapLevelPack* value);

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_beatmapLevel() const;

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr void __cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  static inline ::GlobalNamespace::SelectLevelDestination* New_ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel,
                                                                    ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic);

  /// @brief Method .ctor, addr 0x1265900, size 0x44, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevelPack* beatmapLevelPack, ::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
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
  ::GlobalNamespace::BeatmapLevelPack* ___beatmapLevelPack;

  /// @brief Field beatmapLevel, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

  /// @brief Field beatmapDifficulty, offset: 0x20, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___beatmapCharacteristic;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::SelectLevelDestination, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelDestination, ___beatmapLevelPack) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelDestination, ___beatmapLevel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelDestination, ___beatmapDifficulty) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::SelectLevelDestination, ___beatmapCharacteristic) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::SelectLevelDestination);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SelectLevelDestination*, "", "SelectLevelDestination");

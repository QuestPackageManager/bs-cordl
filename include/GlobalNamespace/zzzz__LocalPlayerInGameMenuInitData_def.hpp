#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficulty_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LocalPlayerInGameMenuInitData)
namespace GlobalNamespace {
class BeatmapCharacteristicSO;
}
namespace GlobalNamespace {
struct BeatmapDifficulty;
}
namespace GlobalNamespace {
class IPreviewBeatmapLevel;
}
// Forward declare root types
namespace GlobalNamespace {
class LocalPlayerInGameMenuInitData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalPlayerInGameMenuInitData);
// Type: ::LocalPlayerInGameMenuInitData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(2613)), TypeDefinitionIndex(TypeDefinitionIndex(14717))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5051))
// CS Name: ::LocalPlayerInGameMenuInitData*
class CORDL_TYPE LocalPlayerInGameMenuInitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field previewBeatmapLevel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_previewBeatmapLevel, put = __cordl_internal_set_previewBeatmapLevel))::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  /// @brief Field hasSong, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSong, put = __cordl_internal_set_hasSong)) bool hasSong;

  constexpr ::GlobalNamespace::IPreviewBeatmapLevel*& __cordl_internal_get_previewBeatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IPreviewBeatmapLevel*> const& __cordl_internal_get_previewBeatmapLevel() const;

  constexpr void __cordl_internal_set_previewBeatmapLevel(::GlobalNamespace::IPreviewBeatmapLevel* value);

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr void __cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr bool& __cordl_internal_get_hasSong();

  constexpr bool const& __cordl_internal_get_hasSong() const;

  constexpr void __cordl_internal_set_hasSong(bool value);

  static inline ::GlobalNamespace::LocalPlayerInGameMenuInitData* New_ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                           ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool hasSong);

  /// @brief Method .ctor, addr 0x23c3de4, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::IPreviewBeatmapLevel* previewBeatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                    ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool hasSong);

  // Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalPlayerInGameMenuInitData();

public:
  /// @brief Field previewBeatmapLevel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::IPreviewBeatmapLevel* ___previewBeatmapLevel;

  /// @brief Field beatmapDifficulty, offset: 0x18, size: 0x4, def value: None
  ::GlobalNamespace::BeatmapDifficulty ___beatmapDifficulty;

  /// @brief Field beatmapCharacteristic, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> ___beatmapCharacteristic;

  /// @brief Field hasSong, offset: 0x28, size: 0x1, def value: None
  bool ___hasSong;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalPlayerInGameMenuInitData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___previewBeatmapLevel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___beatmapDifficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___beatmapCharacteristic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___hasSong) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalPlayerInGameMenuInitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalPlayerInGameMenuInitData*, "", "LocalPlayerInGameMenuInitData");

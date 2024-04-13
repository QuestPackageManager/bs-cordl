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
class BeatmapLevel;
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
// CS Name: ::LocalPlayerInGameMenuInitData*
class CORDL_TYPE LocalPlayerInGameMenuInitData : public ::System::Object {
public:
  // Declarations
  /// @brief Field beatmapCharacteristic, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapCharacteristic, put = __cordl_internal_set_beatmapCharacteristic))::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> beatmapCharacteristic;

  /// @brief Field beatmapDifficulty, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get_beatmapDifficulty, put = __cordl_internal_set_beatmapDifficulty))::GlobalNamespace::BeatmapDifficulty beatmapDifficulty;

  /// @brief Field beatmapLevel, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_beatmapLevel, put = __cordl_internal_set_beatmapLevel))::GlobalNamespace::BeatmapLevel* beatmapLevel;

  /// @brief Field hasSong, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSong, put = __cordl_internal_set_hasSong)) bool hasSong;

  static inline ::GlobalNamespace::LocalPlayerInGameMenuInitData* New_ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty,
                                                                           ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic, bool hasSong);

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> const& __cordl_internal_get_beatmapCharacteristic() const;

  constexpr ::UnityW<::GlobalNamespace::BeatmapCharacteristicSO>& __cordl_internal_get_beatmapCharacteristic();

  constexpr ::GlobalNamespace::BeatmapDifficulty const& __cordl_internal_get_beatmapDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficulty& __cordl_internal_get_beatmapDifficulty();

  constexpr ::GlobalNamespace::BeatmapLevel*& __cordl_internal_get_beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::BeatmapLevel*> const& __cordl_internal_get_beatmapLevel() const;

  constexpr bool const& __cordl_internal_get_hasSong() const;

  constexpr bool& __cordl_internal_get_hasSong();

  constexpr void __cordl_internal_set_beatmapCharacteristic(::UnityW<::GlobalNamespace::BeatmapCharacteristicSO> value);

  constexpr void __cordl_internal_set_beatmapDifficulty(::GlobalNamespace::BeatmapDifficulty value);

  constexpr void __cordl_internal_set_beatmapLevel(::GlobalNamespace::BeatmapLevel* value);

  constexpr void __cordl_internal_set_hasSong(bool value);

  /// @brief Method .ctor, addr 0x25e34b0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::BeatmapLevel* beatmapLevel, ::GlobalNamespace::BeatmapDifficulty beatmapDifficulty, ::GlobalNamespace::BeatmapCharacteristicSO* beatmapCharacteristic,
                    bool hasSong);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalPlayerInGameMenuInitData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalPlayerInGameMenuInitData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalPlayerInGameMenuInitData(LocalPlayerInGameMenuInitData const&) = delete;

  /// @brief Field beatmapLevel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::BeatmapLevel* ___beatmapLevel;

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

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___beatmapLevel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___beatmapDifficulty) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___beatmapCharacteristic) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LocalPlayerInGameMenuInitData, ___hasSong) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalPlayerInGameMenuInitData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalPlayerInGameMenuInitData*, "", "LocalPlayerInGameMenuInitData");

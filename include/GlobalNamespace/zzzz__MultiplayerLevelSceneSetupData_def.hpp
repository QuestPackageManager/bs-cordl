#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLevelSceneSetupData.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapKey_def.hpp"
#include "GlobalNamespace/zzzz__SceneSetupData_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
CORDL_MODULE_EXPORT(MultiplayerLevelSceneSetupData)
namespace GlobalNamespace {
struct BeatmapKey;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLevelSceneSetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLevelSceneSetupData);
// Type: ::MultiplayerLevelSceneSetupData
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 41, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerLevelSceneSetupData*
class CORDL_TYPE MultiplayerLevelSceneSetupData : public ::GlobalNamespace::SceneSetupData {
public:
  // Declarations
  /// @brief Field beatmapKey, offset 0x10, size 0x18
  __declspec(property(get = __cordl_internal_get_beatmapKey, put = __cordl_internal_set_beatmapKey))::GlobalNamespace::BeatmapKey beatmapKey;

  /// @brief Field hasSong, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get_hasSong, put = __cordl_internal_set_hasSong)) bool hasSong;

  static inline ::GlobalNamespace::MultiplayerLevelSceneSetupData* New_ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong);

  constexpr ::GlobalNamespace::BeatmapKey const& __cordl_internal_get_beatmapKey() const;

  constexpr ::GlobalNamespace::BeatmapKey& __cordl_internal_get_beatmapKey();

  constexpr bool const& __cordl_internal_get_hasSong() const;

  constexpr bool& __cordl_internal_get_hasSong();

  constexpr void __cordl_internal_set_beatmapKey(::GlobalNamespace::BeatmapKey value);

  constexpr void __cordl_internal_set_hasSong(bool value);

  /// @brief Method .ctor, addr 0x26a2910, size 0x3c, virtual false, abstract: false, final false
  inline void _ctor(ByRef<::GlobalNamespace::BeatmapKey> beatmapKey, bool hasSong);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLevelSceneSetupData();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelSceneSetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLevelSceneSetupData(MultiplayerLevelSceneSetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLevelSceneSetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLevelSceneSetupData(MultiplayerLevelSceneSetupData const&) = delete;

  /// @brief Field beatmapKey, offset: 0x10, size: 0x18, def value: None
  ::GlobalNamespace::BeatmapKey ___beatmapKey;

  /// @brief Field hasSong, offset: 0x28, size: 0x1, def value: None
  bool ___hasSong;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLevelSceneSetupData, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSceneSetupData, ___beatmapKey) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLevelSceneSetupData, ___hasSong) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLevelSceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLevelSceneSetupData*, "", "MultiplayerLevelSceneSetupData");

#pragma once
// IWYU pragma private; include "GlobalNamespace/LocalLeaderboardsSettingsSO.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(LocalLeaderboardsSettingsSO)
// Forward declare root types
namespace GlobalNamespace {
class LocalLeaderboardsSettingsSO;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LocalLeaderboardsSettingsSO);
// Dependencies PersistentScriptableObject
namespace GlobalNamespace {
// Is value type: false
// CS Name: LocalLeaderboardsSettingsSO
class CORDL_TYPE LocalLeaderboardsSettingsSO : public ::GlobalNamespace::PersistentScriptableObject {
public:
  // Declarations
  /// @brief Field _maxNumberOfScoresInLeaderboard, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__maxNumberOfScoresInLeaderboard, put = __cordl_internal_set__maxNumberOfScoresInLeaderboard)) int32_t _maxNumberOfScoresInLeaderboard;

  __declspec(property(get = get_maxNumberOfScoresInLeaderboard, put = set_maxNumberOfScoresInLeaderboard)) int32_t maxNumberOfScoresInLeaderboard;

  static inline ::GlobalNamespace::LocalLeaderboardsSettingsSO* New_ctor();

  constexpr int32_t const& __cordl_internal_get__maxNumberOfScoresInLeaderboard() const;

  constexpr int32_t& __cordl_internal_get__maxNumberOfScoresInLeaderboard();

  constexpr void __cordl_internal_set__maxNumberOfScoresInLeaderboard(int32_t value);

  /// @brief Method .ctor, addr 0x2705c38, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_maxNumberOfScoresInLeaderboard, addr 0x2705c28, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_maxNumberOfScoresInLeaderboard();

  /// @brief Method set_maxNumberOfScoresInLeaderboard, addr 0x2705c30, size 0x8, virtual false, abstract: false, final false
  inline void set_maxNumberOfScoresInLeaderboard(int32_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LocalLeaderboardsSettingsSO();

public:
  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsSettingsSO", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LocalLeaderboardsSettingsSO(LocalLeaderboardsSettingsSO&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LocalLeaderboardsSettingsSO", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LocalLeaderboardsSettingsSO(LocalLeaderboardsSettingsSO const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 13343 };

  /// @brief Field _maxNumberOfScoresInLeaderboard, offset: 0x18, size: 0x4, def value: None
  int32_t ____maxNumberOfScoresInLeaderboard;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::LocalLeaderboardsSettingsSO, ____maxNumberOfScoresInLeaderboard) == 0x18, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LocalLeaderboardsSettingsSO, 0x20>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LocalLeaderboardsSettingsSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LocalLeaderboardsSettingsSO*, "", "LocalLeaderboardsSettingsSO");

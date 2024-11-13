#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServersFilter.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__BeatmapDifficultyMask_def.hpp"
#include "GlobalNamespace/zzzz__GameplayModifierMask_def.hpp"
#include "GlobalNamespace/zzzz__SongPackMask_def.hpp"
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(GameServersFilter)
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilter;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::GameServersFilter);
// Type: ::GameServersFilter
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 59, minimum_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::GameServersFilter*
class CORDL_TYPE GameServersFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field filterByDifficulty, offset 0x10, size 0x1
  __declspec(property(get = __cordl_internal_get_filterByDifficulty, put = __cordl_internal_set_filterByDifficulty)) bool filterByDifficulty;

  /// @brief Field filterByModifiers, offset 0x12, size 0x1
  __declspec(property(get = __cordl_internal_get_filterByModifiers, put = __cordl_internal_set_filterByModifiers)) bool filterByModifiers;

  /// @brief Field filterBySongPacks, offset 0x16, size 0x1
  __declspec(property(get = __cordl_internal_get_filterBySongPacks, put = __cordl_internal_set_filterBySongPacks)) bool filterBySongPacks;

  /// @brief Field filteredDifficulty, offset 0x11, size 0x1
  __declspec(property(get = __cordl_internal_get_filteredDifficulty, put = __cordl_internal_set_filteredDifficulty)) ::GlobalNamespace::BeatmapDifficultyMask filteredDifficulty;

  /// @brief Field filteredModifiers, offset 0x14, size 0x2
  __declspec(property(get = __cordl_internal_get_filteredModifiers, put = __cordl_internal_set_filteredModifiers)) ::GlobalNamespace::GameplayModifierMask filteredModifiers;

  /// @brief Field filteredSongPacks, offset 0x18, size 0x20
  __declspec(property(get = __cordl_internal_get_filteredSongPacks, put = __cordl_internal_set_filteredSongPacks)) ::GlobalNamespace::SongPackMask filteredSongPacks;

  /// @brief Field showFull, offset 0x38, size 0x1
  __declspec(property(get = __cordl_internal_get_showFull, put = __cordl_internal_set_showFull)) bool showFull;

  /// @brief Field showInternetGames, offset 0x3a, size 0x1
  __declspec(property(get = __cordl_internal_get_showInternetGames, put = __cordl_internal_set_showInternetGames)) bool showInternetGames;

  /// @brief Field showProtected, offset 0x39, size 0x1
  __declspec(property(get = __cordl_internal_get_showProtected, put = __cordl_internal_set_showProtected)) bool showProtected;

  static inline ::GlobalNamespace::GameServersFilter* New_ctor();

  constexpr bool const& __cordl_internal_get_filterByDifficulty() const;

  constexpr bool& __cordl_internal_get_filterByDifficulty();

  constexpr bool const& __cordl_internal_get_filterByModifiers() const;

  constexpr bool& __cordl_internal_get_filterByModifiers();

  constexpr bool const& __cordl_internal_get_filterBySongPacks() const;

  constexpr bool& __cordl_internal_get_filterBySongPacks();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __cordl_internal_get_filteredDifficulty() const;

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __cordl_internal_get_filteredDifficulty();

  constexpr ::GlobalNamespace::GameplayModifierMask const& __cordl_internal_get_filteredModifiers() const;

  constexpr ::GlobalNamespace::GameplayModifierMask& __cordl_internal_get_filteredModifiers();

  constexpr ::GlobalNamespace::SongPackMask const& __cordl_internal_get_filteredSongPacks() const;

  constexpr ::GlobalNamespace::SongPackMask& __cordl_internal_get_filteredSongPacks();

  constexpr bool const& __cordl_internal_get_showFull() const;

  constexpr bool& __cordl_internal_get_showFull();

  constexpr bool const& __cordl_internal_get_showInternetGames() const;

  constexpr bool& __cordl_internal_get_showInternetGames();

  constexpr bool const& __cordl_internal_get_showProtected() const;

  constexpr bool& __cordl_internal_get_showProtected();

  constexpr void __cordl_internal_set_filterByDifficulty(bool value);

  constexpr void __cordl_internal_set_filterByModifiers(bool value);

  constexpr void __cordl_internal_set_filterBySongPacks(bool value);

  constexpr void __cordl_internal_set_filteredDifficulty(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr void __cordl_internal_set_filteredModifiers(::GlobalNamespace::GameplayModifierMask value);

  constexpr void __cordl_internal_set_filteredSongPacks(::GlobalNamespace::SongPackMask value);

  constexpr void __cordl_internal_set_showFull(bool value);

  constexpr void __cordl_internal_set_showInternetGames(bool value);

  constexpr void __cordl_internal_set_showProtected(bool value);

  /// @brief Method .ctor, addr 0x3ba6e20, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServersFilter();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServersFilter(GameServersFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServersFilter(GameServersFilter const&) = delete;

  /// @brief Field filterByDifficulty, offset: 0x10, size: 0x1, def value: None
  bool ___filterByDifficulty;

  /// @brief Field filteredDifficulty, offset: 0x11, size: 0x1, def value: None
  ::GlobalNamespace::BeatmapDifficultyMask ___filteredDifficulty;

  /// @brief Field filterByModifiers, offset: 0x12, size: 0x1, def value: None
  bool ___filterByModifiers;

  /// @brief Field filteredModifiers, offset: 0x14, size: 0x2, def value: None
  ::GlobalNamespace::GameplayModifierMask ___filteredModifiers;

  /// @brief Field filterBySongPacks, offset: 0x16, size: 0x1, def value: None
  bool ___filterBySongPacks;

  /// @brief Field filteredSongPacks, offset: 0x18, size: 0x20, def value: None
  ::GlobalNamespace::SongPackMask ___filteredSongPacks;

  /// @brief Field showFull, offset: 0x38, size: 0x1, def value: None
  bool ___showFull;

  /// @brief Field showProtected, offset: 0x39, size: 0x1, def value: None
  bool ___showProtected;

  /// @brief Field showInternetGames, offset: 0x3a, size: 0x1, def value: None
  bool ___showInternetGames;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4815 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServersFilter, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___filterByDifficulty) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___filteredDifficulty) == 0x11, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___filterByModifiers) == 0x12, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___filteredModifiers) == 0x14, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___filterBySongPacks) == 0x16, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___filteredSongPacks) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___showFull) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___showProtected) == 0x39, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilter, ___showInternetGames) == 0x3a, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServersFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersFilter*, "", "GameServersFilter");

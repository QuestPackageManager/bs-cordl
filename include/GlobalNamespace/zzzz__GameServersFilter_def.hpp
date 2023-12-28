#pragma once
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
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 59, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14719)), TypeDefinitionIndex(TypeDefinitionIndex(14997)), TypeDefinitionIndex(TypeDefinitionIndex(15047)),
// TypeDefinitionIndex(TypeDefinitionIndex(2613))} Self: TypeDefinitionIndex(TypeDefinitionIndex(5572)) CS Name: ::GameServersFilter*
class CORDL_TYPE GameServersFilter : public ::System::Object {
public:
  // Declarations
  /// @brief Field filterByDifficulty, offset 0x10, size 0x1
  __declspec(property(get = __get_filterByDifficulty, put = __set_filterByDifficulty)) bool filterByDifficulty;

  /// @brief Field filteredDifficulty, offset 0x11, size 0x1
  __declspec(property(get = __get_filteredDifficulty, put = __set_filteredDifficulty))::GlobalNamespace::BeatmapDifficultyMask filteredDifficulty;

  /// @brief Field filterByModifiers, offset 0x12, size 0x1
  __declspec(property(get = __get_filterByModifiers, put = __set_filterByModifiers)) bool filterByModifiers;

  /// @brief Field filteredModifiers, offset 0x14, size 0x2
  __declspec(property(get = __get_filteredModifiers, put = __set_filteredModifiers))::GlobalNamespace::GameplayModifierMask filteredModifiers;

  /// @brief Field filterBySongPacks, offset 0x16, size 0x1
  __declspec(property(get = __get_filterBySongPacks, put = __set_filterBySongPacks)) bool filterBySongPacks;

  /// @brief Field filteredSongPacks, offset 0x18, size 0x20
  __declspec(property(get = __get_filteredSongPacks, put = __set_filteredSongPacks))::GlobalNamespace::SongPackMask filteredSongPacks;

  /// @brief Field showFull, offset 0x38, size 0x1
  __declspec(property(get = __get_showFull, put = __set_showFull)) bool showFull;

  /// @brief Field showProtected, offset 0x39, size 0x1
  __declspec(property(get = __get_showProtected, put = __set_showProtected)) bool showProtected;

  /// @brief Field showInternetGames, offset 0x3a, size 0x1
  __declspec(property(get = __get_showInternetGames, put = __set_showInternetGames)) bool showInternetGames;

  constexpr bool& __get_filterByDifficulty();

  constexpr bool const& __get_filterByDifficulty() const;

  constexpr void __set_filterByDifficulty(bool value);

  constexpr ::GlobalNamespace::BeatmapDifficultyMask& __get_filteredDifficulty();

  constexpr ::GlobalNamespace::BeatmapDifficultyMask const& __get_filteredDifficulty() const;

  constexpr void __set_filteredDifficulty(::GlobalNamespace::BeatmapDifficultyMask value);

  constexpr bool& __get_filterByModifiers();

  constexpr bool const& __get_filterByModifiers() const;

  constexpr void __set_filterByModifiers(bool value);

  constexpr ::GlobalNamespace::GameplayModifierMask& __get_filteredModifiers();

  constexpr ::GlobalNamespace::GameplayModifierMask const& __get_filteredModifiers() const;

  constexpr void __set_filteredModifiers(::GlobalNamespace::GameplayModifierMask value);

  constexpr bool& __get_filterBySongPacks();

  constexpr bool const& __get_filterBySongPacks() const;

  constexpr void __set_filterBySongPacks(bool value);

  constexpr ::GlobalNamespace::SongPackMask& __get_filteredSongPacks();

  constexpr ::GlobalNamespace::SongPackMask const& __get_filteredSongPacks() const;

  constexpr void __set_filteredSongPacks(::GlobalNamespace::SongPackMask value);

  constexpr bool& __get_showFull();

  constexpr bool const& __get_showFull() const;

  constexpr void __set_showFull(bool value);

  constexpr bool& __get_showProtected();

  constexpr bool const& __get_showProtected() const;

  constexpr void __set_showProtected(bool value);

  constexpr bool& __get_showInternetGames();

  constexpr bool const& __get_showInternetGames() const;

  constexpr void __set_showInternetGames(bool value);

  static inline ::GlobalNamespace::GameServersFilter* New_ctor();

  /// @brief Method .ctor addr 0x22a5690 size 0x48 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilter", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServersFilter(GameServersFilter&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilter", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServersFilter(GameServersFilter const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServersFilter();

public:
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

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::GameServersFilter, 0x40>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::GameServersFilter);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::GameServersFilter*, "", "GameServersFilter");

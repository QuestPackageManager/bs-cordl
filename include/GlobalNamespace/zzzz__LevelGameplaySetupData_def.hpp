#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(LevelGameplaySetupData)
namespace GlobalNamespace {
class GameplayModifiers;
}
namespace GlobalNamespace {
class ILevelGameplaySetupData;
}
namespace GlobalNamespace {
class PreviewDifficultyBeatmap;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelGameplaySetupData;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelGameplaySetupData);
// Type: ::LevelGameplaySetupData
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4498))
// CS Name: ::LevelGameplaySetupData*
class CORDL_TYPE LevelGameplaySetupData : public ::System::Object {
public:
  // Declarations
  /// @brief Field _beatmapLevel, offset 0x10, size 0x8
  __declspec(property(get = __get__beatmapLevel, put = __set__beatmapLevel))::GlobalNamespace::PreviewDifficultyBeatmap* _beatmapLevel;

  /// @brief Field _gameplayModifiers, offset 0x18, size 0x8
  __declspec(property(get = __get__gameplayModifiers, put = __set__gameplayModifiers))::GlobalNamespace::GameplayModifiers* _gameplayModifiers;

  __declspec(property(get = get_beatmapLevel))::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel;

  __declspec(property(get = get_gameplayModifiers))::GlobalNamespace::GameplayModifiers* gameplayModifiers;

  /// @brief Convert operator to "::GlobalNamespace::ILevelGameplaySetupData"
  constexpr operator ::GlobalNamespace::ILevelGameplaySetupData*() noexcept;

  constexpr ::GlobalNamespace::PreviewDifficultyBeatmap*& __get__beatmapLevel();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::PreviewDifficultyBeatmap*> const& __get__beatmapLevel() const;

  constexpr void __set__beatmapLevel(::GlobalNamespace::PreviewDifficultyBeatmap* value);

  constexpr ::GlobalNamespace::GameplayModifiers*& __get__gameplayModifiers();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::GameplayModifiers*> const& __get__gameplayModifiers() const;

  constexpr void __set__gameplayModifiers(::GlobalNamespace::GameplayModifiers* value);

  /// @brief Method get_beatmapLevel, addr 0x2355d34, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::PreviewDifficultyBeatmap* get_beatmapLevel();

  /// @brief Method get_gameplayModifiers, addr 0x2355d3c, size 0x8, virtual true, abstract: false, final true
  inline ::GlobalNamespace::GameplayModifiers* get_gameplayModifiers();

  static inline ::GlobalNamespace::LevelGameplaySetupData* New_ctor();

  /// @brief Method .ctor, addr 0x2355d44, size 0x68, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::GlobalNamespace::LevelGameplaySetupData* New_ctor(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method .ctor, addr 0x2355dac, size 0xa4, virtual false, abstract: false, final false
  inline void _ctor(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel, ::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  /// @brief Method ClearGameplaySetupData, addr 0x2355e50, size 0x64, virtual false, abstract: false, final false
  inline void ClearGameplaySetupData();

  /// @brief Method SetBeatmapLevel, addr 0x2355eb4, size 0x8, virtual false, abstract: false, final false
  inline void SetBeatmapLevel(::GlobalNamespace::PreviewDifficultyBeatmap* beatmapLevel);

  /// @brief Method SetGameplayModifiers, addr 0x2355ebc, size 0x78, virtual false, abstract: false, final false
  inline void SetGameplayModifiers(::GlobalNamespace::GameplayModifiers* gameplayModifiers);

  // Ctor Parameters [CppParam { name: "", ty: "LevelGameplaySetupData", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelGameplaySetupData(LevelGameplaySetupData&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelGameplaySetupData", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelGameplaySetupData(LevelGameplaySetupData const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelGameplaySetupData();

public:
  /// @brief Field _beatmapLevel, offset: 0x10, size: 0x8, def value: None
  ::GlobalNamespace::PreviewDifficultyBeatmap* ____beatmapLevel;

  /// @brief Field _gameplayModifiers, offset: 0x18, size: 0x8, def value: None
  ::GlobalNamespace::GameplayModifiers* ____gameplayModifiers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelGameplaySetupData, 0x20>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelGameplaySetupData, ____beatmapLevel) == 0x10, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelGameplaySetupData, ____gameplayModifiers) == 0x18, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelGameplaySetupData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelGameplaySetupData*, "", "LevelGameplaySetupData");

#pragma once
// IWYU pragma private; include "GlobalNamespace/GameServersFilterText.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/stringw.hpp"
CORDL_MODULE_EXPORT(GameServersFilterText)
namespace GlobalNamespace {
struct BeatmapDifficultyMask;
}
namespace GlobalNamespace {
class GameServersFilter;
}
namespace GlobalNamespace {
struct SongPackMask;
}
namespace GlobalNamespace {
class SongPackMasksModel;
}
namespace HMUI {
class CurvedTextMeshPro;
}
namespace System::Text {
class StringBuilder;
}
// Forward declare root types
namespace GlobalNamespace {
class GameServersFilterText;
}
// Write type traits
MARK_REF_T(::GlobalNamespace::GameServersFilterText*);
DEFINE_IL2CPP_CLASS(::GlobalNamespace::GameServersFilterText*, "", "GameServersFilterText");
// Dependencies UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: GameServersFilterText
class CORDL_TYPE GameServersFilterText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _songPackMasksModel, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__songPackMasksModel, put = __cordl_internal_set__songPackMasksModel)) ::GlobalNamespace::SongPackMasksModel* _songPackMasksModel;

  /// @brief Field _stringBuilder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__stringBuilder, put = __cordl_internal_set__stringBuilder)) ::System::Text::StringBuilder* _stringBuilder;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::HMUI::CurvedTextMeshPro> _text;

  static inline ::GlobalNamespace::GameServersFilterText* New_ctor();

  /// @brief Method Setup, addr 0x5a1d6f0, size 0x264, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::BeatmapDifficultyMask beatmapDifficultyMask, ::GlobalNamespace::SongPackMask songPackMask, bool visible);

  /// @brief Method Setup, addr 0x5a1d440, size 0x2b0, virtual false, abstract: false, final false
  inline void Setup(::GlobalNamespace::GameServersFilter* filter, bool visible);

  constexpr ::GlobalNamespace::SongPackMasksModel* const& __cordl_internal_get__songPackMasksModel() const;

  constexpr ::GlobalNamespace::SongPackMasksModel*& __cordl_internal_get__songPackMasksModel();

  constexpr ::System::Text::StringBuilder* const& __cordl_internal_get__stringBuilder() const;

  constexpr ::System::Text::StringBuilder*& __cordl_internal_get__stringBuilder();

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::HMUI::CurvedTextMeshPro>& __cordl_internal_get__text();

  constexpr void __cordl_internal_set__songPackMasksModel(::GlobalNamespace::SongPackMasksModel* value);

  constexpr void __cordl_internal_set__stringBuilder(::System::Text::StringBuilder* value);

  constexpr void __cordl_internal_set__text(::UnityW<::HMUI::CurvedTextMeshPro> value);

  /// @brief Method .ctor, addr 0x5a1d954, size 0x60, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr GameServersFilterText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  GameServersFilterText(GameServersFilterText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "GameServersFilterText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  GameServersFilterText(GameServersFilterText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 6456 };

  /// @brief Field kAllLevelPacksLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kAllLevelPacksLocalizationKey{ u"ALL_LEVEL_PACKS" };

  /// @brief Field kBeatmapDifficultyAllLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kBeatmapDifficultyAllLocalizationKey{ u"BEATMAP_DIFFICULTY_ALL" };

  /// @brief Field kLabelDifficultyLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kLabelDifficultyLocalizationKey{ u"LABEL_DIFFICULTY" };

  /// @brief Field kMusicPackLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicPackLocalizationKey{ u"MUSIC_PACK" };

  /// @brief Field kMusicPacksTabbarTitleLocalizationKey offset 0xffffffff size 0x8
  static constexpr ::ConstString kMusicPacksTabbarTitleLocalizationKey{ u"MUSIC_PACKS_TABBAR_TITLE" };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::CurvedTextMeshPro> ____text;

  /// @brief Field _songPackMasksModel, offset: 0x28, size: 0x8, def value: None
  ::GlobalNamespace::SongPackMasksModel* ____songPackMasksModel;

  /// @brief Field _stringBuilder, offset: 0x30, size: 0x8, def value: None
  ::System::Text::StringBuilder* ____stringBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::GameServersFilterText, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterText, ____songPackMasksModel) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::GameServersFilterText, ____stringBuilder) == 0x30, "Offset mismatch!");

static_assert(sizeof(::GlobalNamespace::GameServersFilterText) == 0x38, "Size mismatch!");

} // namespace GlobalNamespace

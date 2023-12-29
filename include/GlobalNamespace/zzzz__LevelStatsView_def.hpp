#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(LevelStatsView)
namespace GlobalNamespace {
class PlayerData;
}
namespace GlobalNamespace {
class IDifficultyBeatmap;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class LevelStatsView;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::LevelStatsView);
// Type: ::LevelStatsView
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10152))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5885))
// CS Name: ::LevelStatsView*
class CORDL_TYPE LevelStatsView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _highScoreText, offset 0x18, size 0x8
  __declspec(property(get = __get__highScoreText, put = __set__highScoreText))::TMPro::TextMeshProUGUI* _highScoreText;

  /// @brief Field _maxComboText, offset 0x20, size 0x8
  __declspec(property(get = __get__maxComboText, put = __set__maxComboText))::TMPro::TextMeshProUGUI* _maxComboText;

  /// @brief Field _maxRankText, offset 0x28, size 0x8
  __declspec(property(get = __get__maxRankText, put = __set__maxRankText))::TMPro::TextMeshProUGUI* _maxRankText;

  constexpr ::TMPro::TextMeshProUGUI*& __get__highScoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__highScoreText() const;

  constexpr void __set__highScoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__maxComboText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__maxComboText() const;

  constexpr void __set__maxComboText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__maxRankText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__maxRankText() const;

  constexpr void __set__maxRankText(::TMPro::TextMeshProUGUI* value);

  /// @brief Method Hide addr 0x21a12b4 size 0x24 virtual false final false
  inline void Hide();

  /// @brief Method ShowStats addr 0x21a12d8 size 0x3b4 virtual false final false
  inline void ShowStats(::GlobalNamespace::IDifficultyBeatmap* difficultyBeatmap, ::GlobalNamespace::PlayerData* playerData);

  static inline ::GlobalNamespace::LevelStatsView* New_ctor();

  /// @brief Method .ctor addr 0x21a168c size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "LevelStatsView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  LevelStatsView(LevelStatsView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "LevelStatsView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  LevelStatsView(LevelStatsView const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr LevelStatsView();

public:
  /// @brief Field _highScoreText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____highScoreText;

  /// @brief Field _maxComboText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____maxComboText;

  /// @brief Field _maxRankText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____maxRankText;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::LevelStatsView, 0x30>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____highScoreText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____maxComboText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::LevelStatsView, ____maxRankText) == 0x28, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::LevelStatsView);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::LevelStatsView*, "", "LevelStatsView");

#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerLeaderboardPanelItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLeaderboardPanelItem)
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine::UI {
class Image;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLeaderboardPanelItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLeaderboardPanelItem);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerLeaderboardPanelItem
class CORDL_TYPE MultiplayerLeaderboardPanelItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _backgroundImage, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundImage, put = __cordl_internal_set__backgroundImage)) ::UnityW<::UnityEngine::UI::Image> _backgroundImage;

  /// @brief Field _failedPlayerTextColor, offset 0x50, size 0x10
  __declspec(property(get = __cordl_internal_get__failedPlayerTextColor, put = __cordl_internal_set__failedPlayerTextColor)) ::UnityEngine::Color _failedPlayerTextColor;

  /// @brief Field _firstPlayerBackgroundColor, offset 0x60, size 0x10
  __declspec(property(get = __cordl_internal_get__firstPlayerBackgroundColor, put = __cordl_internal_set__firstPlayerBackgroundColor)) ::UnityEngine::Color _firstPlayerBackgroundColor;

  /// @brief Field _lastPlayerBackgroundColor, offset 0x70, size 0x10
  __declspec(property(get = __cordl_internal_get__lastPlayerBackgroundColor, put = __cordl_internal_set__lastPlayerBackgroundColor)) ::UnityEngine::Color _lastPlayerBackgroundColor;

  /// @brief Field _normalPlayerTextColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__normalPlayerTextColor, put = __cordl_internal_set__normalPlayerTextColor)) ::UnityEngine::Color _normalPlayerTextColor;

  /// @brief Field _playerNameText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__playerNameText, put = __cordl_internal_set__playerNameText)) ::UnityW<::TMPro::TextMeshProUGUI> _playerNameText;

  /// @brief Field _positionText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__positionText, put = __cordl_internal_set__positionText)) ::UnityW<::TMPro::TextMeshProUGUI> _positionText;

  /// @brief Field _prevFailed, offset 0x94, size 0x1
  __declspec(property(get = __cordl_internal_get__prevFailed, put = __cordl_internal_set__prevFailed)) bool _prevFailed;

  /// @brief Field _prevNumberOfPlayers, offset 0x98, size 0x4
  __declspec(property(get = __cordl_internal_get__prevNumberOfPlayers, put = __cordl_internal_set__prevNumberOfPlayers)) int32_t _prevNumberOfPlayers;

  /// @brief Field _prevPlayerName, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get__prevPlayerName, put = __cordl_internal_set__prevPlayerName)) ::StringW _prevPlayerName;

  /// @brief Field _prevPosition, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get__prevPosition, put = __cordl_internal_set__prevPosition)) int32_t _prevPosition;

  /// @brief Field _prevScore, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__prevScore, put = __cordl_internal_set__prevScore)) int32_t _prevScore;

  /// @brief Field _scoreText, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreText, put = __cordl_internal_set__scoreText)) ::UnityW<::TMPro::TextMeshProUGUI> _scoreText;

  __declspec(property(put = set_hide)) bool hide;

  static inline ::GlobalNamespace::MultiplayerLeaderboardPanelItem* New_ctor();

  /// @brief Method SetData, addr 0x3ba8430, size 0x2c4, virtual false, abstract: false, final false
  inline void SetData(int32_t position, ::StringW playerName, int32_t score, bool failed, int32_t numberOfPlayers);

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get__backgroundImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get__backgroundImage();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__failedPlayerTextColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__failedPlayerTextColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__firstPlayerBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__firstPlayerBackgroundColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__lastPlayerBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__lastPlayerBackgroundColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalPlayerTextColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalPlayerTextColor();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playerNameText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playerNameText();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__positionText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__positionText();

  constexpr bool const& __cordl_internal_get__prevFailed() const;

  constexpr bool& __cordl_internal_get__prevFailed();

  constexpr int32_t const& __cordl_internal_get__prevNumberOfPlayers() const;

  constexpr int32_t& __cordl_internal_get__prevNumberOfPlayers();

  constexpr ::StringW const& __cordl_internal_get__prevPlayerName() const;

  constexpr ::StringW& __cordl_internal_get__prevPlayerName();

  constexpr int32_t const& __cordl_internal_get__prevPosition() const;

  constexpr int32_t& __cordl_internal_get__prevPosition();

  constexpr int32_t const& __cordl_internal_get__prevScore() const;

  constexpr int32_t& __cordl_internal_get__prevScore();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__scoreText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__scoreText();

  constexpr void __cordl_internal_set__backgroundImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set__failedPlayerTextColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__firstPlayerBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__lastPlayerBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__normalPlayerTextColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__playerNameText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__positionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__prevFailed(bool value);

  constexpr void __cordl_internal_set__prevNumberOfPlayers(int32_t value);

  constexpr void __cordl_internal_set__prevPlayerName(::StringW value);

  constexpr void __cordl_internal_set__prevPosition(int32_t value);

  constexpr void __cordl_internal_set__prevScore(int32_t value);

  constexpr void __cordl_internal_set__scoreText(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3ba86fc, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_hide, addr 0x3ba81bc, size 0x2c, virtual false, abstract: false, final false
  inline void set_hide(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLeaderboardPanelItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLeaderboardPanelItem(MultiplayerLeaderboardPanelItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLeaderboardPanelItem(MultiplayerLeaderboardPanelItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4414 };

  /// @brief Field _playerNameText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playerNameText;

  /// @brief Field _scoreText, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____scoreText;

  /// @brief Field _positionText, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____positionText;

  /// @brief Field _backgroundImage, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ____backgroundImage;

  /// @brief Field _normalPlayerTextColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____normalPlayerTextColor;

  /// @brief Field _failedPlayerTextColor, offset: 0x50, size: 0x10, def value: None
  ::UnityEngine::Color ____failedPlayerTextColor;

  /// @brief Field _firstPlayerBackgroundColor, offset: 0x60, size: 0x10, def value: None
  ::UnityEngine::Color ____firstPlayerBackgroundColor;

  /// @brief Field _lastPlayerBackgroundColor, offset: 0x70, size: 0x10, def value: None
  ::UnityEngine::Color ____lastPlayerBackgroundColor;

  /// @brief Field _prevPosition, offset: 0x80, size: 0x4, def value: None
  int32_t ____prevPosition;

  /// @brief Field _prevPlayerName, offset: 0x88, size: 0x8, def value: None
  ::StringW ____prevPlayerName;

  /// @brief Field _prevScore, offset: 0x90, size: 0x4, def value: None
  int32_t ____prevScore;

  /// @brief Field _prevFailed, offset: 0x94, size: 0x1, def value: None
  bool ____prevFailed;

  /// @brief Field _prevNumberOfPlayers, offset: 0x98, size: 0x4, def value: None
  int32_t ____prevNumberOfPlayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____playerNameText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____scoreText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____positionText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____backgroundImage) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____normalPlayerTextColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____failedPlayerTextColor) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____firstPlayerBackgroundColor) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____lastPlayerBackgroundColor) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevPosition) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevPlayerName) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevScore) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevFailed) == 0x94, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevNumberOfPlayers) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLeaderboardPanelItem, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeaderboardPanelItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeaderboardPanelItem*, "", "MultiplayerLeaderboardPanelItem");

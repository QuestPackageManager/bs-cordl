#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerLeaderboardPanelItem)
namespace UnityEngine::UI {
class Image;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerLeaderboardPanelItem;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerLeaderboardPanelItem);
// Type: ::MultiplayerLeaderboardPanelItem
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 148, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225)), TypeDefinitionIndex(TypeDefinitionIndex(10251))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5038))
// CS Name: ::MultiplayerLeaderboardPanelItem*
class CORDL_TYPE MultiplayerLeaderboardPanelItem : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerNameText, offset 0x18, size 0x8
  __declspec(property(get = __get__playerNameText, put = __set__playerNameText))::TMPro::TextMeshProUGUI* _playerNameText;

  /// @brief Field _scoreText, offset 0x20, size 0x8
  __declspec(property(get = __get__scoreText, put = __set__scoreText))::TMPro::TextMeshProUGUI* _scoreText;

  /// @brief Field _positionText, offset 0x28, size 0x8
  __declspec(property(get = __get__positionText, put = __set__positionText))::TMPro::TextMeshProUGUI* _positionText;

  /// @brief Field _backgroundImage, offset 0x30, size 0x8
  __declspec(property(get = __get__backgroundImage, put = __set__backgroundImage))::UnityEngine::UI::Image* _backgroundImage;

  /// @brief Field _normalPlayerTextColor, offset 0x38, size 0x10
  __declspec(property(get = __get__normalPlayerTextColor, put = __set__normalPlayerTextColor))::UnityEngine::Color _normalPlayerTextColor;

  /// @brief Field _failedPlayerTextColor, offset 0x48, size 0x10
  __declspec(property(get = __get__failedPlayerTextColor, put = __set__failedPlayerTextColor))::UnityEngine::Color _failedPlayerTextColor;

  /// @brief Field _firstPlayerBackgroundColor, offset 0x58, size 0x10
  __declspec(property(get = __get__firstPlayerBackgroundColor, put = __set__firstPlayerBackgroundColor))::UnityEngine::Color _firstPlayerBackgroundColor;

  /// @brief Field _lastPlayerBackgroundColor, offset 0x68, size 0x10
  __declspec(property(get = __get__lastPlayerBackgroundColor, put = __set__lastPlayerBackgroundColor))::UnityEngine::Color _lastPlayerBackgroundColor;

  /// @brief Field _prevPosition, offset 0x78, size 0x4
  __declspec(property(get = __get__prevPosition, put = __set__prevPosition)) int32_t _prevPosition;

  /// @brief Field _prevPlayerName, offset 0x80, size 0x8
  __declspec(property(get = __get__prevPlayerName, put = __set__prevPlayerName))::StringW _prevPlayerName;

  /// @brief Field _prevScore, offset 0x88, size 0x4
  __declspec(property(get = __get__prevScore, put = __set__prevScore)) int32_t _prevScore;

  /// @brief Field _prevFailed, offset 0x8c, size 0x1
  __declspec(property(get = __get__prevFailed, put = __set__prevFailed)) bool _prevFailed;

  /// @brief Field _prevNumberOfPlayers, offset 0x90, size 0x4
  __declspec(property(get = __get__prevNumberOfPlayers, put = __set__prevNumberOfPlayers)) int32_t _prevNumberOfPlayers;

  __declspec(property(put = set_hide)) bool hide;

  constexpr ::TMPro::TextMeshProUGUI*& __get__playerNameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__playerNameText() const;

  constexpr void __set__playerNameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__scoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__scoreText() const;

  constexpr void __set__scoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__positionText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__positionText() const;

  constexpr void __set__positionText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::UI::Image*& __get__backgroundImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__backgroundImage() const;

  constexpr void __set__backgroundImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::Color& __get__normalPlayerTextColor();

  constexpr ::UnityEngine::Color const& __get__normalPlayerTextColor() const;

  constexpr void __set__normalPlayerTextColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__failedPlayerTextColor();

  constexpr ::UnityEngine::Color const& __get__failedPlayerTextColor() const;

  constexpr void __set__failedPlayerTextColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__firstPlayerBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__firstPlayerBackgroundColor() const;

  constexpr void __set__firstPlayerBackgroundColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__lastPlayerBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__lastPlayerBackgroundColor() const;

  constexpr void __set__lastPlayerBackgroundColor(::UnityEngine::Color value);

  constexpr int32_t& __get__prevPosition();

  constexpr int32_t const& __get__prevPosition() const;

  constexpr void __set__prevPosition(int32_t value);

  constexpr ::StringW& __get__prevPlayerName();

  constexpr ::StringW const& __get__prevPlayerName() const;

  constexpr void __set__prevPlayerName(::StringW value);

  constexpr int32_t& __get__prevScore();

  constexpr int32_t const& __get__prevScore() const;

  constexpr void __set__prevScore(int32_t value);

  constexpr bool& __get__prevFailed();

  constexpr bool const& __get__prevFailed() const;

  constexpr void __set__prevFailed(bool value);

  constexpr int32_t& __get__prevNumberOfPlayers();

  constexpr int32_t const& __get__prevNumberOfPlayers() const;

  constexpr void __set__prevNumberOfPlayers(int32_t value);

  /// @brief Method SetData, addr 0x23c1c14, size 0x2d0, virtual false, abstract: false, final false
  inline void SetData(int32_t position, ::StringW playerName, int32_t score, bool failed, int32_t numberOfPlayers);

  /// @brief Method set_hide, addr 0x23c19a0, size 0x2c, virtual false, abstract: false, final false
  inline void set_hide(bool value);

  static inline ::GlobalNamespace::MultiplayerLeaderboardPanelItem* New_ctor();

  /// @brief Method .ctor, addr 0x23c1eec, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerLeaderboardPanelItem(MultiplayerLeaderboardPanelItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerLeaderboardPanelItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerLeaderboardPanelItem(MultiplayerLeaderboardPanelItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerLeaderboardPanelItem();

public:
  /// @brief Field _playerNameText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____playerNameText;

  /// @brief Field _scoreText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____scoreText;

  /// @brief Field _positionText, offset: 0x28, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____positionText;

  /// @brief Field _backgroundImage, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____backgroundImage;

  /// @brief Field _normalPlayerTextColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____normalPlayerTextColor;

  /// @brief Field _failedPlayerTextColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____failedPlayerTextColor;

  /// @brief Field _firstPlayerBackgroundColor, offset: 0x58, size: 0x10, def value: None
  ::UnityEngine::Color ____firstPlayerBackgroundColor;

  /// @brief Field _lastPlayerBackgroundColor, offset: 0x68, size: 0x10, def value: None
  ::UnityEngine::Color ____lastPlayerBackgroundColor;

  /// @brief Field _prevPosition, offset: 0x78, size: 0x4, def value: None
  int32_t ____prevPosition;

  /// @brief Field _prevPlayerName, offset: 0x80, size: 0x8, def value: None
  ::StringW ____prevPlayerName;

  /// @brief Field _prevScore, offset: 0x88, size: 0x4, def value: None
  int32_t ____prevScore;

  /// @brief Field _prevFailed, offset: 0x8c, size: 0x1, def value: None
  bool ____prevFailed;

  /// @brief Field _prevNumberOfPlayers, offset: 0x90, size: 0x4, def value: None
  int32_t ____prevNumberOfPlayers;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerLeaderboardPanelItem, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____playerNameText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____scoreText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____positionText) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____backgroundImage) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____normalPlayerTextColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____failedPlayerTextColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____firstPlayerBackgroundColor) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____lastPlayerBackgroundColor) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevPosition) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevPlayerName) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevScore) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevFailed) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerLeaderboardPanelItem, ____prevNumberOfPlayers) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerLeaderboardPanelItem);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerLeaderboardPanelItem*, "", "MultiplayerLeaderboardPanelItem");

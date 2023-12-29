#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__TableCell_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerResultsTableCell)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class LevelCompletionResults;
}
namespace GlobalNamespace {
class MultiplayerResultsAvatarController;
}
namespace GlobalNamespace {
class TubeBloomPrePassLight;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace TMPro {
class TextMeshProUGUI;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerResultsTableCell;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerResultsTableCell);
// Type: ::MultiplayerResultsTableCell
// SizeInfo { instance_size: 240, native_size: -1, calculated_instance_size: 240, calculated_native_size: 236, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10178)), TypeDefinitionIndex(TypeDefinitionIndex(13781))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5889))
// CS Name: ::MultiplayerResultsTableCell*
class CORDL_TYPE MultiplayerResultsTableCell : public ::HMUI::TableCell {
public:
  // Declarations
  /// @brief Field _positionText, offset 0x58, size 0x8
  __declspec(property(get = __get__positionText, put = __set__positionText))::TMPro::TextMeshProUGUI* _positionText;

  /// @brief Field _nameText, offset 0x60, size 0x8
  __declspec(property(get = __get__nameText, put = __set__nameText))::TMPro::TextMeshProUGUI* _nameText;

  /// @brief Field _scoreText, offset 0x68, size 0x8
  __declspec(property(get = __get__scoreText, put = __set__scoreText))::TMPro::TextMeshProUGUI* _scoreText;

  /// @brief Field _rankText, offset 0x70, size 0x8
  __declspec(property(get = __get__rankText, put = __set__rankText))::TMPro::TextMeshProUGUI* _rankText;

  /// @brief Field _lights, offset 0x78, size 0x8
  __declspec(property(get = __get__lights, put = __set__lights))::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> _lights;

  /// @brief Field _backgroundImage, offset 0x80, size 0x8
  __declspec(property(get = __get__backgroundImage, put = __set__backgroundImage))::UnityEngine::UI::Image* _backgroundImage;

  /// @brief Field _canvasGroup, offset 0x88, size 0x8
  __declspec(property(get = __get__canvasGroup, put = __set__canvasGroup))::UnityEngine::CanvasGroup* _canvasGroup;

  /// @brief Field _multiplayerResultsAvatarController, offset 0x90, size 0x8
  __declspec(property(get = __get__multiplayerResultsAvatarController,
                      put = __set__multiplayerResultsAvatarController))::GlobalNamespace::MultiplayerResultsAvatarController* _multiplayerResultsAvatarController;

  /// @brief Field _avatarScale, offset 0x98, size 0x4
  __declspec(property(get = __get__avatarScale, put = __set__avatarScale)) float_t _avatarScale;

  /// @brief Field _normalSecondPlayerColor, offset 0x9c, size 0x10
  __declspec(property(get = __get__normalSecondPlayerColor, put = __set__normalSecondPlayerColor))::UnityEngine::Color _normalSecondPlayerColor;

  /// @brief Field _normalLastPlayerColor, offset 0xac, size 0x10
  __declspec(property(get = __get__normalLastPlayerColor, put = __set__normalLastPlayerColor))::UnityEngine::Color _normalLastPlayerColor;

  /// @brief Field _localPlayerColor, offset 0xbc, size 0x10
  __declspec(property(get = __get__localPlayerColor, put = __set__localPlayerColor))::UnityEngine::Color _localPlayerColor;

  /// @brief Field _winnerColor, offset 0xcc, size 0x10
  __declspec(property(get = __get__winnerColor, put = __set__winnerColor))::UnityEngine::Color _winnerColor;

  /// @brief Field _lightColor, offset 0xdc, size 0x10
  __declspec(property(get = __get__lightColor, put = __set__lightColor))::UnityEngine::Color _lightColor;

  __declspec(property(put = set_alpha)) float_t alpha;

  constexpr ::TMPro::TextMeshProUGUI*& __get__positionText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__positionText() const;

  constexpr void __set__positionText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__nameText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__nameText() const;

  constexpr void __set__nameText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__scoreText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__scoreText() const;

  constexpr void __set__scoreText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__rankText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__rankText() const;

  constexpr void __set__rankText(::TMPro::TextMeshProUGUI* value);

  constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*>& __get__lights();

  constexpr ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> const& __get__lights() const;

  constexpr void __set__lights(::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> value);

  constexpr ::UnityEngine::UI::Image*& __get__backgroundImage();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::Image*> const& __get__backgroundImage() const;

  constexpr void __set__backgroundImage(::UnityEngine::UI::Image* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__canvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__canvasGroup() const;

  constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::GlobalNamespace::MultiplayerResultsAvatarController*& __get__multiplayerResultsAvatarController();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerResultsAvatarController*> const& __get__multiplayerResultsAvatarController() const;

  constexpr void __set__multiplayerResultsAvatarController(::GlobalNamespace::MultiplayerResultsAvatarController* value);

  constexpr float_t& __get__avatarScale();

  constexpr float_t const& __get__avatarScale() const;

  constexpr void __set__avatarScale(float_t value);

  constexpr ::UnityEngine::Color& __get__normalSecondPlayerColor();

  constexpr ::UnityEngine::Color const& __get__normalSecondPlayerColor() const;

  constexpr void __set__normalSecondPlayerColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__normalLastPlayerColor();

  constexpr ::UnityEngine::Color const& __get__normalLastPlayerColor() const;

  constexpr void __set__normalLastPlayerColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__localPlayerColor();

  constexpr ::UnityEngine::Color const& __get__localPlayerColor() const;

  constexpr void __set__localPlayerColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__winnerColor();

  constexpr ::UnityEngine::Color const& __get__winnerColor() const;

  constexpr void __set__winnerColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__lightColor();

  constexpr ::UnityEngine::Color const& __get__lightColor() const;

  constexpr void __set__lightColor(::UnityEngine::Color value);

  /// @brief Method set_alpha addr 0x21a1b28 size 0xa0 virtual false final false
  inline void set_alpha(float_t value);

  /// @brief Method SetData addr 0x21a1bc8 size 0x3c4 virtual false final false
  inline void SetData(::GlobalNamespace::IConnectedPlayer* connectedPlayer, int32_t position, ::StringW playerName, ::GlobalNamespace::LevelCompletionResults* levelCompletionResults,
                      bool isLocalPlayer, int32_t numberOfPlayers);

  static inline ::GlobalNamespace::MultiplayerResultsTableCell* New_ctor();

  /// @brief Method .ctor addr 0x21a1f8c size 0x10 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsTableCell", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerResultsTableCell(MultiplayerResultsTableCell&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerResultsTableCell", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerResultsTableCell(MultiplayerResultsTableCell const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerResultsTableCell();

public:
  /// @brief Field _positionText, offset: 0x58, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____positionText;

  /// @brief Field _nameText, offset: 0x60, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____nameText;

  /// @brief Field _scoreText, offset: 0x68, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____scoreText;

  /// @brief Field _rankText, offset: 0x70, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____rankText;

  /// @brief Field _lights, offset: 0x78, size: 0x8, def value: None
  ::ArrayW<::GlobalNamespace::TubeBloomPrePassLight*, ::Array<::GlobalNamespace::TubeBloomPrePassLight*>*> ____lights;

  /// @brief Field _backgroundImage, offset: 0x80, size: 0x8, def value: None
  ::UnityEngine::UI::Image* ____backgroundImage;

  /// @brief Field _canvasGroup, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____canvasGroup;

  /// @brief Field _multiplayerResultsAvatarController, offset: 0x90, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerResultsAvatarController* ____multiplayerResultsAvatarController;

  /// @brief Field _avatarScale, offset: 0x98, size: 0x4, def value: None
  float_t ____avatarScale;

  /// @brief Field _normalSecondPlayerColor, offset: 0x9c, size: 0x10, def value: None
  ::UnityEngine::Color ____normalSecondPlayerColor;

  /// @brief Field _normalLastPlayerColor, offset: 0xac, size: 0x10, def value: None
  ::UnityEngine::Color ____normalLastPlayerColor;

  /// @brief Field _localPlayerColor, offset: 0xbc, size: 0x10, def value: None
  ::UnityEngine::Color ____localPlayerColor;

  /// @brief Field _winnerColor, offset: 0xcc, size: 0x10, def value: None
  ::UnityEngine::Color ____winnerColor;

  /// @brief Field _lightColor, offset: 0xdc, size: 0x10, def value: None
  ::UnityEngine::Color ____lightColor;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerResultsTableCell, 0xf0>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____positionText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____nameText) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____scoreText) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____rankText) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____lights) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____backgroundImage) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____canvasGroup) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____multiplayerResultsAvatarController) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____avatarScale) == 0x98, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____normalSecondPlayerColor) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____normalLastPlayerColor) == 0xac, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____localPlayerColor) == 0xbc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____winnerColor) == 0xcc, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerResultsTableCell, ____lightColor) == 0xdc, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerResultsTableCell);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerResultsTableCell*, "", "MultiplayerResultsTableCell");

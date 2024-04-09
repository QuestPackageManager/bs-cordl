#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPositionHUDController)
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPositionHUDController;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPositionHUDController);
// Type: ::MultiplayerPositionHUDController
// SizeInfo { instance_size: 88, native_size: -1, calculated_instance_size: 88, calculated_native_size: 84, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::MultiplayerPositionHUDController*
class CORDL_TYPE MultiplayerPositionHUDController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _canvasGroup, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup))::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _firstPlayerAnimationGo, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__firstPlayerAnimationGo, put = __cordl_internal_set__firstPlayerAnimationGo))::UnityW<::UnityEngine::GameObject> _firstPlayerAnimationGo;

  /// @brief Field _initData, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__initData, put = __cordl_internal_set__initData))::GlobalNamespace::__CoreGameHUDController__InitData* _initData;

  /// @brief Field _playerCountText, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__playerCountText, put = __cordl_internal_set__playerCountText))::UnityW<::TMPro::TextMeshProUGUI> _playerCountText;

  /// @brief Field _playersManager, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__playersManager, put = __cordl_internal_set__playersManager))::UnityW<::GlobalNamespace::MultiplayerPlayersManager> _playersManager;

  /// @brief Field _positionText, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__positionText, put = __cordl_internal_set__positionText))::UnityW<::TMPro::TextMeshProUGUI> _positionText;

  /// @brief Field _prevPosition, offset 0x50, size 0x4
  __declspec(property(get = __cordl_internal_get__prevPosition, put = __cordl_internal_set__prevPosition)) int32_t _prevPosition;

  /// @brief Field _scoreProvider, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider))::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  __declspec(property(put = set_alpha)) float_t alpha;

  static inline ::GlobalNamespace::MultiplayerPositionHUDController* New_ctor();

  /// @brief Method Start, addr 0x25da5e0, size 0x15c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x25da73c, size 0x1b0, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr ::UnityW<::UnityEngine::GameObject> const& __cordl_internal_get__firstPlayerAnimationGo() const;

  constexpr ::UnityW<::UnityEngine::GameObject>& __cordl_internal_get__firstPlayerAnimationGo();

  constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& __cordl_internal_get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& __cordl_internal_get__initData() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__playerCountText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__playerCountText();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> const& __cordl_internal_get__playersManager() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerPlayersManager>& __cordl_internal_get__playersManager();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__positionText() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__positionText();

  constexpr int32_t const& __cordl_internal_get__prevPosition() const;

  constexpr int32_t& __cordl_internal_get__prevPosition();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__firstPlayerAnimationGo(::UnityW<::UnityEngine::GameObject> value);

  constexpr void __cordl_internal_set__initData(::GlobalNamespace::__CoreGameHUDController__InitData* value);

  constexpr void __cordl_internal_set__playerCountText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__playersManager(::UnityW<::GlobalNamespace::MultiplayerPlayersManager> value);

  constexpr void __cordl_internal_set__positionText(::UnityW<::TMPro::TextMeshProUGUI> value);

  constexpr void __cordl_internal_set__prevPosition(int32_t value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  /// @brief Method .ctor, addr 0x25da8ec, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method set_alpha, addr 0x25da5c4, size 0x1c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPositionHUDController();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionHUDController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPositionHUDController(MultiplayerPositionHUDController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionHUDController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPositionHUDController(MultiplayerPositionHUDController const&) = delete;

  /// @brief Field _playerCountText, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____playerCountText;

  /// @brief Field _positionText, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____positionText;

  /// @brief Field _canvasGroup, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _firstPlayerAnimationGo, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::GameObject> ____firstPlayerAnimationGo;

  /// @brief Field _scoreProvider, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  /// @brief Field _playersManager, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerPlayersManager> ____playersManager;

  /// @brief Field _initData, offset: 0x48, size: 0x8, def value: None
  ::GlobalNamespace::__CoreGameHUDController__InitData* ____initData;

  /// @brief Field _prevPosition, offset: 0x50, size: 0x4, def value: None
  int32_t ____prevPosition;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPositionHUDController, 0x58>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionHUDController, ____playerCountText) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionHUDController, ____positionText) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionHUDController, ____canvasGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionHUDController, ____firstPlayerAnimationGo) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionHUDController, ____scoreProvider) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionHUDController, ____playersManager) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionHUDController, ____initData) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionHUDController, ____prevPosition) == 0x50, "Offset mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPositionHUDController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPositionHUDController*, "", "MultiplayerPositionHUDController");

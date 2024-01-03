#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerPositionHUDController)
namespace GlobalNamespace {
class __CoreGameHUDController__InitData;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MultiplayerPlayersManager;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class CanvasGroup;
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
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5039))
// CS Name: ::MultiplayerPositionHUDController*
class CORDL_TYPE MultiplayerPositionHUDController : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _playerCountText, offset 0x18, size 0x8
  __declspec(property(get = __get__playerCountText, put = __set__playerCountText))::TMPro::TextMeshProUGUI* _playerCountText;

  /// @brief Field _positionText, offset 0x20, size 0x8
  __declspec(property(get = __get__positionText, put = __set__positionText))::TMPro::TextMeshProUGUI* _positionText;

  /// @brief Field _canvasGroup, offset 0x28, size 0x8
  __declspec(property(get = __get__canvasGroup, put = __set__canvasGroup))::UnityEngine::CanvasGroup* _canvasGroup;

  /// @brief Field _firstPlayerAnimationGo, offset 0x30, size 0x8
  __declspec(property(get = __get__firstPlayerAnimationGo, put = __set__firstPlayerAnimationGo))::UnityEngine::GameObject* _firstPlayerAnimationGo;

  /// @brief Field _scoreProvider, offset 0x38, size 0x8
  __declspec(property(get = __get__scoreProvider, put = __set__scoreProvider))::GlobalNamespace::MultiplayerScoreProvider* _scoreProvider;

  /// @brief Field _playersManager, offset 0x40, size 0x8
  __declspec(property(get = __get__playersManager, put = __set__playersManager))::GlobalNamespace::MultiplayerPlayersManager* _playersManager;

  /// @brief Field _initData, offset 0x48, size 0x8
  __declspec(property(get = __get__initData, put = __set__initData))::GlobalNamespace::__CoreGameHUDController__InitData* _initData;

  /// @brief Field _prevPosition, offset 0x50, size 0x4
  __declspec(property(get = __get__prevPosition, put = __set__prevPosition)) int32_t _prevPosition;

  __declspec(property(put = set_alpha)) float_t alpha;

  constexpr ::TMPro::TextMeshProUGUI*& __get__playerCountText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__playerCountText() const;

  constexpr void __set__playerCountText(::TMPro::TextMeshProUGUI* value);

  constexpr ::TMPro::TextMeshProUGUI*& __get__positionText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshProUGUI*> const& __get__positionText() const;

  constexpr void __set__positionText(::TMPro::TextMeshProUGUI* value);

  constexpr ::UnityEngine::CanvasGroup*& __get__canvasGroup();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::CanvasGroup*> const& __get__canvasGroup() const;

  constexpr void __set__canvasGroup(::UnityEngine::CanvasGroup* value);

  constexpr ::UnityEngine::GameObject*& __get__firstPlayerAnimationGo();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::GameObject*> const& __get__firstPlayerAnimationGo() const;

  constexpr void __set__firstPlayerAnimationGo(::UnityEngine::GameObject* value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreProvider() const;

  constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value);

  constexpr ::GlobalNamespace::MultiplayerPlayersManager*& __get__playersManager();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerPlayersManager*> const& __get__playersManager() const;

  constexpr void __set__playersManager(::GlobalNamespace::MultiplayerPlayersManager* value);

  constexpr ::GlobalNamespace::__CoreGameHUDController__InitData*& __get__initData();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::__CoreGameHUDController__InitData*> const& __get__initData() const;

  constexpr void __set__initData(::GlobalNamespace::__CoreGameHUDController__InitData* value);

  constexpr int32_t& __get__prevPosition();

  constexpr int32_t const& __get__prevPosition() const;

  constexpr void __set__prevPosition(int32_t value);

  /// @brief Method set_alpha, addr 0x23c1f00, size 0x1c, virtual false, abstract: false, final false
  inline void set_alpha(float_t value);

  /// @brief Method Start, addr 0x23c1f1c, size 0x15c, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x23c2078, size 0x1b0, virtual false, abstract: false, final false
  inline void Update();

  static inline ::GlobalNamespace::MultiplayerPositionHUDController* New_ctor();

  /// @brief Method .ctor, addr 0x23c2228, size 0x10, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionHUDController", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPositionHUDController(MultiplayerPositionHUDController&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionHUDController", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPositionHUDController(MultiplayerPositionHUDController const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPositionHUDController();

public:
  /// @brief Field _playerCountText, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____playerCountText;

  /// @brief Field _positionText, offset: 0x20, size: 0x8, def value: None
  ::TMPro::TextMeshProUGUI* ____positionText;

  /// @brief Field _canvasGroup, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::CanvasGroup* ____canvasGroup;

  /// @brief Field _firstPlayerAnimationGo, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::GameObject* ____firstPlayerAnimationGo;

  /// @brief Field _scoreProvider, offset: 0x38, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreProvider;

  /// @brief Field _playersManager, offset: 0x40, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerPlayersManager* ____playersManager;

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

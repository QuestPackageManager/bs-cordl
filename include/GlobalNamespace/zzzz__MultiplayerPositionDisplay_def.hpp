#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerPositionDisplay.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerPositionDisplay)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider_RankedPlayer;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPositionDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPositionDisplay);
// Dependencies UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerPositionDisplay
class CORDL_TYPE MultiplayerPositionDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _colorAnimationStartDuration, offset 0xa0, size 0x4
  __declspec(property(get = __cordl_internal_get__colorAnimationStartDuration, put = __cordl_internal_set__colorAnimationStartDuration)) float_t _colorAnimationStartDuration;

  /// @brief Field _colorAnimationStartTime, offset 0x9c, size 0x4
  __declspec(property(get = __cordl_internal_get__colorAnimationStartTime, put = __cordl_internal_set__colorAnimationStartTime)) float_t _colorAnimationStartTime;

  /// @brief Field _connectedPlayer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _crossFadeDuration, offset 0x5c, size 0x4
  __declspec(property(get = __cordl_internal_get__crossFadeDuration, put = __cordl_internal_set__crossFadeDuration)) float_t _crossFadeDuration;

  /// @brief Field _fadeInDuration, offset 0x58, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeInDuration, put = __cordl_internal_set__fadeInDuration)) float_t _fadeInDuration;

  /// @brief Field _fadeOutDuration, offset 0x60, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeOutDuration, put = __cordl_internal_set__fadeOutDuration)) float_t _fadeOutDuration;

  /// @brief Field _failedColor, offset 0x48, size 0x10
  __declspec(property(get = __cordl_internal_get__failedColor, put = __cordl_internal_set__failedColor)) ::UnityEngine::Color _failedColor;

  /// @brief Field _isFailed, offset 0x79, size 0x1
  __declspec(property(get = __cordl_internal_get__isFailed, put = __cordl_internal_set__isFailed)) bool _isFailed;

  /// @brief Field _leadingColor, offset 0x38, size 0x10
  __declspec(property(get = __cordl_internal_get__leadingColor, put = __cordl_internal_set__leadingColor)) ::UnityEngine::Color _leadingColor;

  /// @brief Field _normalColor, offset 0x28, size 0x10
  __declspec(property(get = __cordl_internal_get__normalColor, put = __cordl_internal_set__normalColor)) ::UnityEngine::Color _normalColor;

  /// @brief Field _scoreProvider, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__scoreProvider, put = __cordl_internal_set__scoreProvider)) ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> _scoreProvider;

  /// @brief Field _startColor, offset 0x7c, size 0x10
  __declspec(property(get = __cordl_internal_get__startColor, put = __cordl_internal_set__startColor)) ::UnityEngine::Color _startColor;

  /// @brief Field _targetColor, offset 0x8c, size 0x10
  __declspec(property(get = __cordl_internal_get__targetColor, put = __cordl_internal_set__targetColor)) ::UnityEngine::Color _targetColor;

  /// @brief Field _text, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__text, put = __cordl_internal_set__text)) ::UnityW<::TMPro::TextMeshPro> _text;

  /// @brief Field _updatingColor, offset 0x7a, size 0x1
  __declspec(property(get = __cordl_internal_get__updatingColor, put = __cordl_internal_set__updatingColor)) bool _updatingColor;

  /// @brief Field _wasFirst, offset 0x78, size 0x1
  __declspec(property(get = __cordl_internal_get__wasFirst, put = __cordl_internal_set__wasFirst)) bool _wasFirst;

  /// @brief Method ChangeColor, addr 0x3be01e4, size 0x7c, virtual false, abstract: false, final false
  inline void ChangeColor(::UnityEngine::Color toColor, float_t duration);

  /// @brief Method HandleFirstPlayerDidChange, addr 0x3be05ac, size 0xb0, virtual false, abstract: false, final false
  inline void HandleFirstPlayerDidChange(::GlobalNamespace::MultiplayerScoreProvider_RankedPlayer* obj);

  /// @brief Method HandlePlayerFailed, addr 0x3be04b4, size 0x18, virtual false, abstract: false, final false
  inline void HandlePlayerFailed();

  static inline ::GlobalNamespace::MultiplayerPositionDisplay* New_ctor();

  /// @brief Method OnDestroy, addr 0x3be0108, size 0xdc, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method Start, addr 0x3bdffd0, size 0x118, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method Update, addr 0x3be0260, size 0x4c, virtual false, abstract: false, final false
  inline void Update();

  /// @brief Method UpdateColors, addr 0x3be02ac, size 0x98, virtual false, abstract: false, final false
  inline void UpdateColors();

  /// @brief Method UpdatePosition, addr 0x3be0344, size 0x170, virtual false, abstract: false, final false
  inline void UpdatePosition();

  constexpr float_t const& __cordl_internal_get__colorAnimationStartDuration() const;

  constexpr float_t& __cordl_internal_get__colorAnimationStartDuration();

  constexpr float_t const& __cordl_internal_get__colorAnimationStartTime() const;

  constexpr float_t& __cordl_internal_get__colorAnimationStartTime();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr float_t const& __cordl_internal_get__crossFadeDuration() const;

  constexpr float_t& __cordl_internal_get__crossFadeDuration();

  constexpr float_t const& __cordl_internal_get__fadeInDuration() const;

  constexpr float_t& __cordl_internal_get__fadeInDuration();

  constexpr float_t const& __cordl_internal_get__fadeOutDuration() const;

  constexpr float_t& __cordl_internal_get__fadeOutDuration();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__failedColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__failedColor();

  constexpr bool const& __cordl_internal_get__isFailed() const;

  constexpr bool& __cordl_internal_get__isFailed();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__leadingColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__leadingColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalColor();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> const& __cordl_internal_get__scoreProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerScoreProvider>& __cordl_internal_get__scoreProvider();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__startColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__startColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__targetColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__targetColor();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__text() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__text();

  constexpr bool const& __cordl_internal_get__updatingColor() const;

  constexpr bool& __cordl_internal_get__updatingColor();

  constexpr bool const& __cordl_internal_get__wasFirst() const;

  constexpr bool& __cordl_internal_get__wasFirst();

  constexpr void __cordl_internal_set__colorAnimationStartDuration(float_t value);

  constexpr void __cordl_internal_set__colorAnimationStartTime(float_t value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__crossFadeDuration(float_t value);

  constexpr void __cordl_internal_set__fadeInDuration(float_t value);

  constexpr void __cordl_internal_set__fadeOutDuration(float_t value);

  constexpr void __cordl_internal_set__failedColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__isFailed(bool value);

  constexpr void __cordl_internal_set__leadingColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__normalColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__scoreProvider(::UnityW<::GlobalNamespace::MultiplayerScoreProvider> value);

  constexpr void __cordl_internal_set__startColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__targetColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__text(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__updatingColor(bool value);

  constexpr void __cordl_internal_set__wasFirst(bool value);

  /// @brief Method .ctor, addr 0x3be065c, size 0x24, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPositionDisplay();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPositionDisplay(MultiplayerPositionDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPositionDisplay(MultiplayerPositionDisplay const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4605 };

  /// @brief Field _text, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____text;

  /// @brief Field _normalColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _leadingColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____leadingColor;

  /// @brief Field _failedColor, offset: 0x48, size: 0x10, def value: None
  ::UnityEngine::Color ____failedColor;

  /// @brief Field _fadeInDuration, offset: 0x58, size: 0x4, def value: None
  float_t ____fadeInDuration;

  /// @brief Field _crossFadeDuration, offset: 0x5c, size: 0x4, def value: None
  float_t ____crossFadeDuration;

  /// @brief Field _fadeOutDuration, offset: 0x60, size: 0x4, def value: None
  float_t ____fadeOutDuration;

  /// @brief Field _scoreProvider, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerScoreProvider> ____scoreProvider;

  /// @brief Field _connectedPlayer, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _wasFirst, offset: 0x78, size: 0x1, def value: None
  bool ____wasFirst;

  /// @brief Field _isFailed, offset: 0x79, size: 0x1, def value: None
  bool ____isFailed;

  /// @brief Field _updatingColor, offset: 0x7a, size: 0x1, def value: None
  bool ____updatingColor;

  /// @brief Field _startColor, offset: 0x7c, size: 0x10, def value: None
  ::UnityEngine::Color ____startColor;

  /// @brief Field _targetColor, offset: 0x8c, size: 0x10, def value: None
  ::UnityEngine::Color ____targetColor;

  /// @brief Field _colorAnimationStartTime, offset: 0x9c, size: 0x4, def value: None
  float_t ____colorAnimationStartTime;

  /// @brief Field _colorAnimationStartDuration, offset: 0xa0, size: 0x4, def value: None
  float_t ____colorAnimationStartDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____text) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____normalColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____leadingColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____failedColor) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____fadeInDuration) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____crossFadeDuration) == 0x5c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____fadeOutDuration) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____scoreProvider) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____connectedPlayer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____wasFirst) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____isFailed) == 0x79, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____updatingColor) == 0x7a, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____startColor) == 0x7c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____targetColor) == 0x8c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____colorAnimationStartTime) == 0x9c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerPositionDisplay, ____colorAnimationStartDuration) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPositionDisplay, 0xa8>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPositionDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPositionDisplay*, "", "MultiplayerPositionDisplay");

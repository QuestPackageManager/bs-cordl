#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(MultiplayerPositionDisplay)
namespace GlobalNamespace {
class __MultiplayerScoreProvider__RankedPlayer;
}
namespace GlobalNamespace {
class MultiplayerScoreProvider;
}
namespace UnityEngine {
struct Color;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace TMPro {
class TextMeshPro;
}
// Forward declare root types
namespace GlobalNamespace {
class MultiplayerPositionDisplay;
}
// Write type traits
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerPositionDisplay);
// Type: ::MultiplayerPositionDisplay
// SizeInfo { instance_size: 160, native_size: -1, calculated_instance_size: 160, calculated_native_size: 156, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5240))
// CS Name: ::MultiplayerPositionDisplay*
class CORDL_TYPE MultiplayerPositionDisplay : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _text, offset 0x18, size 0x8
  __declspec(property(get = __get__text, put = __set__text))::TMPro::TextMeshPro* _text;

  /// @brief Field _normalColor, offset 0x20, size 0x10
  __declspec(property(get = __get__normalColor, put = __set__normalColor))::UnityEngine::Color _normalColor;

  /// @brief Field _leadingColor, offset 0x30, size 0x10
  __declspec(property(get = __get__leadingColor, put = __set__leadingColor))::UnityEngine::Color _leadingColor;

  /// @brief Field _failedColor, offset 0x40, size 0x10
  __declspec(property(get = __get__failedColor, put = __set__failedColor))::UnityEngine::Color _failedColor;

  /// @brief Field _fadeInDuration, offset 0x50, size 0x4
  __declspec(property(get = __get__fadeInDuration, put = __set__fadeInDuration)) float_t _fadeInDuration;

  /// @brief Field _crossFadeDuration, offset 0x54, size 0x4
  __declspec(property(get = __get__crossFadeDuration, put = __set__crossFadeDuration)) float_t _crossFadeDuration;

  /// @brief Field _fadeOutDuration, offset 0x58, size 0x4
  __declspec(property(get = __get__fadeOutDuration, put = __set__fadeOutDuration)) float_t _fadeOutDuration;

  /// @brief Field _scoreProvider, offset 0x60, size 0x8
  __declspec(property(get = __get__scoreProvider, put = __set__scoreProvider))::GlobalNamespace::MultiplayerScoreProvider* _scoreProvider;

  /// @brief Field _connectedPlayer, offset 0x68, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _wasFirst, offset 0x70, size 0x1
  __declspec(property(get = __get__wasFirst, put = __set__wasFirst)) bool _wasFirst;

  /// @brief Field _isFailed, offset 0x71, size 0x1
  __declspec(property(get = __get__isFailed, put = __set__isFailed)) bool _isFailed;

  /// @brief Field _updatingColor, offset 0x72, size 0x1
  __declspec(property(get = __get__updatingColor, put = __set__updatingColor)) bool _updatingColor;

  /// @brief Field _startColor, offset 0x74, size 0x10
  __declspec(property(get = __get__startColor, put = __set__startColor))::UnityEngine::Color _startColor;

  /// @brief Field _targetColor, offset 0x84, size 0x10
  __declspec(property(get = __get__targetColor, put = __set__targetColor))::UnityEngine::Color _targetColor;

  /// @brief Field _colorAnimationStartTime, offset 0x94, size 0x4
  __declspec(property(get = __get__colorAnimationStartTime, put = __set__colorAnimationStartTime)) float_t _colorAnimationStartTime;

  /// @brief Field _colorAnimationStartDuration, offset 0x98, size 0x4
  __declspec(property(get = __get__colorAnimationStartDuration, put = __set__colorAnimationStartDuration)) float_t _colorAnimationStartDuration;

  constexpr ::TMPro::TextMeshPro*& __get__text();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& __get__text() const;

  constexpr void __set__text(::TMPro::TextMeshPro* value);

  constexpr ::UnityEngine::Color& __get__normalColor();

  constexpr ::UnityEngine::Color const& __get__normalColor() const;

  constexpr void __set__normalColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__leadingColor();

  constexpr ::UnityEngine::Color const& __get__leadingColor() const;

  constexpr void __set__leadingColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__failedColor();

  constexpr ::UnityEngine::Color const& __get__failedColor() const;

  constexpr void __set__failedColor(::UnityEngine::Color value);

  constexpr float_t& __get__fadeInDuration();

  constexpr float_t const& __get__fadeInDuration() const;

  constexpr void __set__fadeInDuration(float_t value);

  constexpr float_t& __get__crossFadeDuration();

  constexpr float_t const& __get__crossFadeDuration() const;

  constexpr void __set__crossFadeDuration(float_t value);

  constexpr float_t& __get__fadeOutDuration();

  constexpr float_t const& __get__fadeOutDuration() const;

  constexpr void __set__fadeOutDuration(float_t value);

  constexpr ::GlobalNamespace::MultiplayerScoreProvider*& __get__scoreProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerScoreProvider*> const& __get__scoreProvider() const;

  constexpr void __set__scoreProvider(::GlobalNamespace::MultiplayerScoreProvider* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr bool& __get__wasFirst();

  constexpr bool const& __get__wasFirst() const;

  constexpr void __set__wasFirst(bool value);

  constexpr bool& __get__isFailed();

  constexpr bool const& __get__isFailed() const;

  constexpr void __set__isFailed(bool value);

  constexpr bool& __get__updatingColor();

  constexpr bool const& __get__updatingColor() const;

  constexpr void __set__updatingColor(bool value);

  constexpr ::UnityEngine::Color& __get__startColor();

  constexpr ::UnityEngine::Color const& __get__startColor() const;

  constexpr void __set__startColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__targetColor();

  constexpr ::UnityEngine::Color const& __get__targetColor() const;

  constexpr void __set__targetColor(::UnityEngine::Color value);

  constexpr float_t& __get__colorAnimationStartTime();

  constexpr float_t const& __get__colorAnimationStartTime() const;

  constexpr void __set__colorAnimationStartTime(float_t value);

  constexpr float_t& __get__colorAnimationStartDuration();

  constexpr float_t const& __get__colorAnimationStartDuration() const;

  constexpr void __set__colorAnimationStartDuration(float_t value);

  /// @brief Method Start addr 0x2257760 size 0x110 virtual false final false
  inline void Start();

  /// @brief Method OnDestroy addr 0x2257890 size 0xe0 virtual false final false
  inline void OnDestroy();

  /// @brief Method Update addr 0x22579ec size 0x4c virtual false final false
  inline void Update();

  /// @brief Method UpdateColors addr 0x2257a38 size 0x94 virtual false final false
  inline void UpdateColors();

  /// @brief Method UpdatePosition addr 0x2257acc size 0x170 virtual false final false
  inline void UpdatePosition();

  /// @brief Method HandlePlayerFailed addr 0x2257c3c size 0x18 virtual false final false
  inline void HandlePlayerFailed();

  /// @brief Method HandleFirstPlayerDidChange addr 0x2257d38 size 0xac virtual false final false
  inline void HandleFirstPlayerDidChange(::GlobalNamespace::__MultiplayerScoreProvider__RankedPlayer* obj);

  /// @brief Method ChangeColor addr 0x2257970 size 0x7c virtual false final false
  inline void ChangeColor(::UnityEngine::Color toColor, float_t duration);

  static inline ::GlobalNamespace::MultiplayerPositionDisplay* New_ctor();

  /// @brief Method .ctor addr 0x2257de4 size 0x24 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionDisplay", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerPositionDisplay(MultiplayerPositionDisplay&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerPositionDisplay", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerPositionDisplay(MultiplayerPositionDisplay const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerPositionDisplay();

public:
  /// @brief Field _text, offset: 0x18, size: 0x8, def value: None
  ::TMPro::TextMeshPro* ____text;

  /// @brief Field _normalColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____normalColor;

  /// @brief Field _leadingColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____leadingColor;

  /// @brief Field _failedColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____failedColor;

  /// @brief Field _fadeInDuration, offset: 0x50, size: 0x4, def value: None
  float_t ____fadeInDuration;

  /// @brief Field _crossFadeDuration, offset: 0x54, size: 0x4, def value: None
  float_t ____crossFadeDuration;

  /// @brief Field _fadeOutDuration, offset: 0x58, size: 0x4, def value: None
  float_t ____fadeOutDuration;

  /// @brief Field _scoreProvider, offset: 0x60, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerScoreProvider* ____scoreProvider;

  /// @brief Field _connectedPlayer, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _wasFirst, offset: 0x70, size: 0x1, def value: None
  bool ____wasFirst;

  /// @brief Field _isFailed, offset: 0x71, size: 0x1, def value: None
  bool ____isFailed;

  /// @brief Field _updatingColor, offset: 0x72, size: 0x1, def value: None
  bool ____updatingColor;

  /// @brief Field _startColor, offset: 0x74, size: 0x10, def value: None
  ::UnityEngine::Color ____startColor;

  /// @brief Field _targetColor, offset: 0x84, size: 0x10, def value: None
  ::UnityEngine::Color ____targetColor;

  /// @brief Field _colorAnimationStartTime, offset: 0x94, size: 0x4, def value: None
  float_t ____colorAnimationStartTime;

  /// @brief Field _colorAnimationStartDuration, offset: 0x98, size: 0x4, def value: None
  float_t ____colorAnimationStartDuration;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerPositionDisplay, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
NEED_NO_BOX(::GlobalNamespace::MultiplayerPositionDisplay);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerPositionDisplay*, "", "MultiplayerPositionDisplay");

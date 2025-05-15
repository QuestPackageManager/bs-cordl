#pragma once
// IWYU pragma private; include "GlobalNamespace/MultiplayerScoreDiffText.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerScoreDiffText)
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace GlobalNamespace {
class MultiplayerLeadPlayerProvider;
}
namespace GlobalNamespace {
struct MultiplayerScoreDiffText_HorizontalPosition;
}
namespace GlobalNamespace {
struct MultiplayerScoreDiffText_State;
}
namespace TMPro {
class TextMeshPro;
}
namespace Tweening {
class FloatTween;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace UnityEngine {
class SpriteRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
struct MultiplayerScoreDiffText_HorizontalPosition;
}
namespace GlobalNamespace {
struct MultiplayerScoreDiffText_State;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition);
MARK_VAL_T(::GlobalNamespace::MultiplayerScoreDiffText_State);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreDiffText);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerScoreDiffText/HorizontalPosition
struct CORDL_TYPE MultiplayerScoreDiffText_HorizontalPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerScoreDiffText_HorizontalPosition_Unwrapped
  enum struct __MultiplayerScoreDiffText_HorizontalPosition_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerScoreDiffText_HorizontalPosition_Unwrapped() const noexcept {
    return static_cast<__MultiplayerScoreDiffText_HorizontalPosition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreDiffText_HorizontalPosition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerScoreDiffText_HorizontalPosition(int32_t value__) noexcept;

  /// @brief Field Left value: I32(0)
  static ::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition const Left;

  /// @brief Field Right value: I32(1)
  static ::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition const Right;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4493 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: MultiplayerScoreDiffText/State
struct CORDL_TYPE MultiplayerScoreDiffText_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __MultiplayerScoreDiffText_State_Unwrapped
  enum struct __MultiplayerScoreDiffText_State_Unwrapped : int32_t {
    __E_Hidden = static_cast<int32_t>(0x0),
    __E_Displayed = static_cast<int32_t>(0x1),
    __E_AnimatingDisplay = static_cast<int32_t>(0x2),
    __E_AnimatingHide = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __MultiplayerScoreDiffText_State_Unwrapped() const noexcept {
    return static_cast<__MultiplayerScoreDiffText_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreDiffText_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr MultiplayerScoreDiffText_State(int32_t value__) noexcept;

  /// @brief Field AnimatingDisplay value: I32(2)
  static ::GlobalNamespace::MultiplayerScoreDiffText_State const AnimatingDisplay;

  /// @brief Field AnimatingHide value: I32(3)
  static ::GlobalNamespace::MultiplayerScoreDiffText_State const AnimatingHide;

  /// @brief Field Displayed value: I32(1)
  static ::GlobalNamespace::MultiplayerScoreDiffText_State const Displayed;

  /// @brief Field Hidden value: I32(0)
  static ::GlobalNamespace::MultiplayerScoreDiffText_State const Hidden;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4494 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreDiffText_State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies MultiplayerScoreDiffText::State, UnityEngine.Color, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: MultiplayerScoreDiffText
class CORDL_TYPE MultiplayerScoreDiffText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using HorizontalPosition = ::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition;

  using State = ::GlobalNamespace::MultiplayerScoreDiffText_State;

  /// @brief Field _activeTextColor, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get__activeTextColor, put = __cordl_internal_set__activeTextColor)) ::UnityEngine::Color _activeTextColor;

  /// @brief Field _backgroundSpriteRenderer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__backgroundSpriteRenderer, put = __cordl_internal_set__backgroundSpriteRenderer)) ::UnityW<::UnityEngine::SpriteRenderer> _backgroundSpriteRenderer;

  /// @brief Field _connectedPlayer, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get__connectedPlayer, put = __cordl_internal_set__connectedPlayer)) ::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _currentBackgroundColor, offset 0x80, size 0x10
  __declspec(property(get = __cordl_internal_get__currentBackgroundColor, put = __cordl_internal_set__currentBackgroundColor)) ::UnityEngine::Color _currentBackgroundColor;

  /// @brief Field _leadPlayerProvider, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get__leadPlayerProvider, put = __cordl_internal_set__leadPlayerProvider)) ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> _leadPlayerProvider;

  /// @brief Field _leadingBackgroundColor, offset 0x40, size 0x10
  __declspec(property(get = __cordl_internal_get__leadingBackgroundColor, put = __cordl_internal_set__leadingBackgroundColor)) ::UnityEngine::Color _leadingBackgroundColor;

  /// @brief Field _normalBackgroundColor, offset 0x30, size 0x10
  __declspec(property(get = __cordl_internal_get__normalBackgroundColor, put = __cordl_internal_set__normalBackgroundColor)) ::UnityEngine::Color _normalBackgroundColor;

  /// @brief Field _onPlatformText, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__onPlatformText, put = __cordl_internal_set__onPlatformText)) ::UnityW<::TMPro::TextMeshPro> _onPlatformText;

  /// @brief Field _onPlatformTextAlphaTween, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get__onPlatformTextAlphaTween, put = __cordl_internal_set__onPlatformTextAlphaTween)) ::Tweening::FloatTween* _onPlatformTextAlphaTween;

  /// @brief Field _state, offset 0x90, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::GlobalNamespace::MultiplayerScoreDiffText_State _state;

  /// @brief Field _tweeningManager, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__tweeningManager, put = __cordl_internal_set__tweeningManager)) ::UnityW<::Tweening::TimeTweeningManager> _tweeningManager;

  /// @brief Field _useAutomaticLeadPlayerSelection, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__useAutomaticLeadPlayerSelection, put = __cordl_internal_set__useAutomaticLeadPlayerSelection)) bool _useAutomaticLeadPlayerSelection;

  /// @brief Method AnimateHide, addr 0x3bbb1f0, size 0xf0, virtual false, abstract: false, final false
  inline void AnimateHide();

  /// @brief Method AnimateIsLeadPlayer, addr 0x3bbb2e0, size 0x50, virtual false, abstract: false, final false
  inline void AnimateIsLeadPlayer(bool isLeader);

  /// @brief Method AnimateScoreDiff, addr 0x3bbb040, size 0x1b0, virtual false, abstract: false, final false
  inline void AnimateScoreDiff(int32_t scoreDiff);

  /// @brief Method HandleNewLeaderWasSelected, addr 0x3bbb330, size 0xc0, virtual false, abstract: false, final false
  inline void HandleNewLeaderWasSelected(::StringW userId);

  static inline ::GlobalNamespace::MultiplayerScoreDiffText* New_ctor();

  /// @brief Method OnDestroy, addr 0x3bbae5c, size 0x10c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetHorizontalPositionRelativeToLocalPlayer, addr 0x3bbaf68, size 0xd8, virtual false, abstract: false, final false
  inline void SetHorizontalPositionRelativeToLocalPlayer(::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition relativePosition);

  /// @brief Method Start, addr 0x3bbad04, size 0x158, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method <AnimateHide>b__18_0, addr 0x3bbb474, size 0x30, virtual false, abstract: false, final false
  inline void _AnimateHide_b__18_0();

  /// @brief Method <AnimateScoreDiff>b__17_0, addr 0x3bbb468, size 0xc, virtual false, abstract: false, final false
  inline void _AnimateScoreDiff_b__17_0();

  /// @brief Method <Start>b__14_0, addr 0x3bbb40c, size 0x5c, virtual false, abstract: false, final false
  inline void _Start_b__14_0(float_t val);

  constexpr ::UnityEngine::Color const& __cordl_internal_get__activeTextColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__activeTextColor();

  constexpr ::UnityW<::UnityEngine::SpriteRenderer> const& __cordl_internal_get__backgroundSpriteRenderer() const;

  constexpr ::UnityW<::UnityEngine::SpriteRenderer>& __cordl_internal_get__backgroundSpriteRenderer();

  constexpr ::GlobalNamespace::IConnectedPlayer* const& __cordl_internal_get__connectedPlayer() const;

  constexpr ::GlobalNamespace::IConnectedPlayer*& __cordl_internal_get__connectedPlayer();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__currentBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__currentBackgroundColor();

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> const& __cordl_internal_get__leadPlayerProvider() const;

  constexpr ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider>& __cordl_internal_get__leadPlayerProvider();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__leadingBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__leadingBackgroundColor();

  constexpr ::UnityEngine::Color const& __cordl_internal_get__normalBackgroundColor() const;

  constexpr ::UnityEngine::Color& __cordl_internal_get__normalBackgroundColor();

  constexpr ::UnityW<::TMPro::TextMeshPro> const& __cordl_internal_get__onPlatformText() const;

  constexpr ::UnityW<::TMPro::TextMeshPro>& __cordl_internal_get__onPlatformText();

  constexpr ::Tweening::FloatTween* const& __cordl_internal_get__onPlatformTextAlphaTween() const;

  constexpr ::Tweening::FloatTween*& __cordl_internal_get__onPlatformTextAlphaTween();

  constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::MultiplayerScoreDiffText_State& __cordl_internal_get__state();

  constexpr ::UnityW<::Tweening::TimeTweeningManager> const& __cordl_internal_get__tweeningManager() const;

  constexpr ::UnityW<::Tweening::TimeTweeningManager>& __cordl_internal_get__tweeningManager();

  constexpr bool const& __cordl_internal_get__useAutomaticLeadPlayerSelection() const;

  constexpr bool& __cordl_internal_get__useAutomaticLeadPlayerSelection();

  constexpr void __cordl_internal_set__activeTextColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__backgroundSpriteRenderer(::UnityW<::UnityEngine::SpriteRenderer> value);

  constexpr void __cordl_internal_set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr void __cordl_internal_set__currentBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__leadPlayerProvider(::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> value);

  constexpr void __cordl_internal_set__leadingBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__normalBackgroundColor(::UnityEngine::Color value);

  constexpr void __cordl_internal_set__onPlatformText(::UnityW<::TMPro::TextMeshPro> value);

  constexpr void __cordl_internal_set__onPlatformTextAlphaTween(::Tweening::FloatTween* value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::MultiplayerScoreDiffText_State value);

  constexpr void __cordl_internal_set__tweeningManager(::UnityW<::Tweening::TimeTweeningManager> value);

  constexpr void __cordl_internal_set__useAutomaticLeadPlayerSelection(bool value);

  /// @brief Method .ctor, addr 0x3bbb3f0, size 0x1c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreDiffText();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreDiffText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreDiffText(MultiplayerScoreDiffText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreDiffText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreDiffText(MultiplayerScoreDiffText const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4495 };

  /// @brief Field _activeTextColor, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Color ____activeTextColor;

  /// @brief Field _normalBackgroundColor, offset: 0x30, size: 0x10, def value: None
  ::UnityEngine::Color ____normalBackgroundColor;

  /// @brief Field _leadingBackgroundColor, offset: 0x40, size: 0x10, def value: None
  ::UnityEngine::Color ____leadingBackgroundColor;

  /// @brief Field _useAutomaticLeadPlayerSelection, offset: 0x50, size: 0x1, def value: None
  bool ____useAutomaticLeadPlayerSelection;

  /// @brief Field _onPlatformText, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshPro> ____onPlatformText;

  /// @brief Field _backgroundSpriteRenderer, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::SpriteRenderer> ____backgroundSpriteRenderer;

  /// @brief Field _tweeningManager, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::Tweening::TimeTweeningManager> ____tweeningManager;

  /// @brief Field _connectedPlayer, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _leadPlayerProvider, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::GlobalNamespace::MultiplayerLeadPlayerProvider> ____leadPlayerProvider;

  /// @brief Field _currentBackgroundColor, offset: 0x80, size: 0x10, def value: None
  ::UnityEngine::Color ____currentBackgroundColor;

  /// @brief Field _state, offset: 0x90, size: 0x4, def value: None
  ::GlobalNamespace::MultiplayerScoreDiffText_State ____state;

  /// @brief Field _onPlatformTextAlphaTween, offset: 0x98, size: 0x8, def value: None
  ::Tweening::FloatTween* ____onPlatformTextAlphaTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____activeTextColor) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____normalBackgroundColor) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____leadingBackgroundColor) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____useAutomaticLeadPlayerSelection) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____onPlatformText) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____backgroundSpriteRenderer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____tweeningManager) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____connectedPlayer) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____leadPlayerProvider) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____currentBackgroundColor) == 0x80, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____state) == 0x90, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____onPlatformTextAlphaTween) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreDiffText, 0xa0>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreDiffText_HorizontalPosition, "", "MultiplayerScoreDiffText/HorizontalPosition");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreDiffText_State, "", "MultiplayerScoreDiffText/State");
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreDiffText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreDiffText*, "", "MultiplayerScoreDiffText");

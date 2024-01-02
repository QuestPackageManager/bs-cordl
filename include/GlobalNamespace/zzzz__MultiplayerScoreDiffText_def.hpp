#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__MultiplayerScoreDiffText_def.hpp"
#include "UnityEngine/zzzz__Color_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(MultiplayerScoreDiffText)
namespace TMPro {
class TextMeshPro;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace GlobalNamespace {
class IConnectedPlayer;
}
namespace Tweening {
class TimeTweeningManager;
}
namespace GlobalNamespace {
struct __MultiplayerScoreDiffText__HorizontalPosition;
}
namespace Tweening {
class FloatTween;
}
namespace GlobalNamespace {
struct __MultiplayerScoreDiffText__State;
}
namespace GlobalNamespace {
class MultiplayerLeadPlayerProvider;
}
// Forward declare root types
namespace GlobalNamespace {
struct __MultiplayerScoreDiffText__HorizontalPosition;
}
namespace GlobalNamespace {
struct __MultiplayerScoreDiffText__State;
}
namespace GlobalNamespace {
class MultiplayerScoreDiffText;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition);
MARK_VAL_T(::GlobalNamespace::__MultiplayerScoreDiffText__State);
MARK_REF_PTR_T(::GlobalNamespace::MultiplayerScoreDiffText);
// Type: ::HorizontalPosition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5130))
// CS Name: ::MultiplayerScoreDiffText::HorizontalPosition
struct CORDL_TYPE __MultiplayerScoreDiffText__HorizontalPosition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerScoreDiffText__HorizontalPosition_Unwrapped
  enum struct ____MultiplayerScoreDiffText__HorizontalPosition_Unwrapped : int32_t {
    __E_Left = static_cast<int32_t>(0x0),
    __E_Right = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerScoreDiffText__HorizontalPosition_Unwrapped() const noexcept {
    return static_cast<____MultiplayerScoreDiffText__HorizontalPosition_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerScoreDiffText__HorizontalPosition(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreDiffText__HorizontalPosition();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Left value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition const Left;

  /// @brief Field Right value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition const Right;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5131))
// CS Name: ::MultiplayerScoreDiffText::State
struct CORDL_TYPE __MultiplayerScoreDiffText__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____MultiplayerScoreDiffText__State_Unwrapped
  enum struct ____MultiplayerScoreDiffText__State_Unwrapped : int32_t {
    __E_Hidden = static_cast<int32_t>(0x0),
    __E_Displayed = static_cast<int32_t>(0x1),
    __E_AnimatingDisplay = static_cast<int32_t>(0x2),
    __E_AnimatingHide = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____MultiplayerScoreDiffText__State_Unwrapped() const noexcept {
    return static_cast<____MultiplayerScoreDiffText__State_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __MultiplayerScoreDiffText__State(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __MultiplayerScoreDiffText__State();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Hidden value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__MultiplayerScoreDiffText__State const Hidden;

  /// @brief Field Displayed value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__MultiplayerScoreDiffText__State const Displayed;

  /// @brief Field AnimatingDisplay value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__MultiplayerScoreDiffText__State const AnimatingDisplay;

  /// @brief Field AnimatingHide value: static_cast<int32_t>(0x3)
  static ::GlobalNamespace::__MultiplayerScoreDiffText__State const AnimatingHide;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__MultiplayerScoreDiffText__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__MultiplayerScoreDiffText__State, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::MultiplayerScoreDiffText
// SizeInfo { instance_size: 152, native_size: -1, calculated_instance_size: 152, calculated_native_size: 152, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10251)), TypeDefinitionIndex(TypeDefinitionIndex(5131)), TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5132))
// CS Name: ::MultiplayerScoreDiffText*
class CORDL_TYPE MultiplayerScoreDiffText : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::__MultiplayerScoreDiffText__State;

  using HorizontalPosition = ::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition;

  /// @brief Field _activeTextColor, offset 0x18, size 0x10
  __declspec(property(get = __get__activeTextColor, put = __set__activeTextColor))::UnityEngine::Color _activeTextColor;

  /// @brief Field _normalBackgroundColor, offset 0x28, size 0x10
  __declspec(property(get = __get__normalBackgroundColor, put = __set__normalBackgroundColor))::UnityEngine::Color _normalBackgroundColor;

  /// @brief Field _leadingBackgroundColor, offset 0x38, size 0x10
  __declspec(property(get = __get__leadingBackgroundColor, put = __set__leadingBackgroundColor))::UnityEngine::Color _leadingBackgroundColor;

  /// @brief Field _useAutomaticLeadPlayerSelection, offset 0x48, size 0x1
  __declspec(property(get = __get__useAutomaticLeadPlayerSelection, put = __set__useAutomaticLeadPlayerSelection)) bool _useAutomaticLeadPlayerSelection;

  /// @brief Field _onPlatformText, offset 0x50, size 0x8
  __declspec(property(get = __get__onPlatformText, put = __set__onPlatformText))::TMPro::TextMeshPro* _onPlatformText;

  /// @brief Field _backgroundSpriteRenderer, offset 0x58, size 0x8
  __declspec(property(get = __get__backgroundSpriteRenderer, put = __set__backgroundSpriteRenderer))::UnityEngine::SpriteRenderer* _backgroundSpriteRenderer;

  /// @brief Field _tweeningManager, offset 0x60, size 0x8
  __declspec(property(get = __get__tweeningManager, put = __set__tweeningManager))::Tweening::TimeTweeningManager* _tweeningManager;

  /// @brief Field _connectedPlayer, offset 0x68, size 0x8
  __declspec(property(get = __get__connectedPlayer, put = __set__connectedPlayer))::GlobalNamespace::IConnectedPlayer* _connectedPlayer;

  /// @brief Field _leadPlayerProvider, offset 0x70, size 0x8
  __declspec(property(get = __get__leadPlayerProvider, put = __set__leadPlayerProvider))::GlobalNamespace::MultiplayerLeadPlayerProvider* _leadPlayerProvider;

  /// @brief Field _currentBackgroundColor, offset 0x78, size 0x10
  __declspec(property(get = __get__currentBackgroundColor, put = __set__currentBackgroundColor))::UnityEngine::Color _currentBackgroundColor;

  /// @brief Field _state, offset 0x88, size 0x4
  __declspec(property(get = __get__state, put = __set__state))::GlobalNamespace::__MultiplayerScoreDiffText__State _state;

  /// @brief Field _onPlatformTextAlphaTween, offset 0x90, size 0x8
  __declspec(property(get = __get__onPlatformTextAlphaTween, put = __set__onPlatformTextAlphaTween))::Tweening::FloatTween* _onPlatformTextAlphaTween;

  constexpr ::UnityEngine::Color& __get__activeTextColor();

  constexpr ::UnityEngine::Color const& __get__activeTextColor() const;

  constexpr void __set__activeTextColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__normalBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__normalBackgroundColor() const;

  constexpr void __set__normalBackgroundColor(::UnityEngine::Color value);

  constexpr ::UnityEngine::Color& __get__leadingBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__leadingBackgroundColor() const;

  constexpr void __set__leadingBackgroundColor(::UnityEngine::Color value);

  constexpr bool& __get__useAutomaticLeadPlayerSelection();

  constexpr bool const& __get__useAutomaticLeadPlayerSelection() const;

  constexpr void __set__useAutomaticLeadPlayerSelection(bool value);

  constexpr ::TMPro::TextMeshPro*& __get__onPlatformText();

  constexpr ::cordl_internals::to_const_pointer<::TMPro::TextMeshPro*> const& __get__onPlatformText() const;

  constexpr void __set__onPlatformText(::TMPro::TextMeshPro* value);

  constexpr ::UnityEngine::SpriteRenderer*& __get__backgroundSpriteRenderer();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::SpriteRenderer*> const& __get__backgroundSpriteRenderer() const;

  constexpr void __set__backgroundSpriteRenderer(::UnityEngine::SpriteRenderer* value);

  constexpr ::Tweening::TimeTweeningManager*& __get__tweeningManager();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::TimeTweeningManager*> const& __get__tweeningManager() const;

  constexpr void __set__tweeningManager(::Tweening::TimeTweeningManager* value);

  constexpr ::GlobalNamespace::IConnectedPlayer*& __get__connectedPlayer();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::IConnectedPlayer*> const& __get__connectedPlayer() const;

  constexpr void __set__connectedPlayer(::GlobalNamespace::IConnectedPlayer* value);

  constexpr ::GlobalNamespace::MultiplayerLeadPlayerProvider*& __get__leadPlayerProvider();

  constexpr ::cordl_internals::to_const_pointer<::GlobalNamespace::MultiplayerLeadPlayerProvider*> const& __get__leadPlayerProvider() const;

  constexpr void __set__leadPlayerProvider(::GlobalNamespace::MultiplayerLeadPlayerProvider* value);

  constexpr ::UnityEngine::Color& __get__currentBackgroundColor();

  constexpr ::UnityEngine::Color const& __get__currentBackgroundColor() const;

  constexpr void __set__currentBackgroundColor(::UnityEngine::Color value);

  constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State& __get__state();

  constexpr ::GlobalNamespace::__MultiplayerScoreDiffText__State const& __get__state() const;

  constexpr void __set__state(::GlobalNamespace::__MultiplayerScoreDiffText__State value);

  constexpr ::Tweening::FloatTween*& __get__onPlatformTextAlphaTween();

  constexpr ::cordl_internals::to_const_pointer<::Tweening::FloatTween*> const& __get__onPlatformTextAlphaTween() const;

  constexpr void __set__onPlatformTextAlphaTween(::Tweening::FloatTween* value);

  /// @brief Method Start, addr 0x23d6fe8, size 0x158, virtual false, abstract: false, final false
  inline void Start();

  /// @brief Method OnDestroy, addr 0x23d7140, size 0x110, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method SetHorizontalPositionRelativeToLocalPlayer, addr 0x23d7250, size 0xd8, virtual false, abstract: false, final false
  inline void SetHorizontalPositionRelativeToLocalPlayer(::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition relativePosition);

  /// @brief Method AnimateScoreDiff, addr 0x23d7328, size 0x1b0, virtual false, abstract: false, final false
  inline void AnimateScoreDiff(int32_t scoreDiff);

  /// @brief Method AnimateHide, addr 0x23d74d8, size 0xf0, virtual false, abstract: false, final false
  inline void AnimateHide();

  /// @brief Method AnimateIsLeadPlayer, addr 0x23d75c8, size 0x54, virtual false, abstract: false, final false
  inline void AnimateIsLeadPlayer(bool isLeader);

  /// @brief Method HandleNewLeaderWasSelected, addr 0x23d761c, size 0xc0, virtual false, abstract: false, final false
  inline void HandleNewLeaderWasSelected(::StringW userId);

  static inline ::GlobalNamespace::MultiplayerScoreDiffText* New_ctor();

  /// @brief Method .ctor, addr 0x23d76dc, size 0x20, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method <Start>b__14_0, addr 0x23d76fc, size 0x5c, virtual false, abstract: false, final false
  inline void _Start_b__14_0(float_t val);

  /// @brief Method <AnimateScoreDiff>b__17_0, addr 0x23d7758, size 0xc, virtual false, abstract: false, final false
  inline void _AnimateScoreDiff_b__17_0();

  /// @brief Method <AnimateHide>b__18_0, addr 0x23d7764, size 0x30, virtual false, abstract: false, final false
  inline void _AnimateHide_b__18_0();

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreDiffText", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MultiplayerScoreDiffText(MultiplayerScoreDiffText&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MultiplayerScoreDiffText", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MultiplayerScoreDiffText(MultiplayerScoreDiffText const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MultiplayerScoreDiffText();

public:
  /// @brief Field _activeTextColor, offset: 0x18, size: 0x10, def value: None
  ::UnityEngine::Color ____activeTextColor;

  /// @brief Field _normalBackgroundColor, offset: 0x28, size: 0x10, def value: None
  ::UnityEngine::Color ____normalBackgroundColor;

  /// @brief Field _leadingBackgroundColor, offset: 0x38, size: 0x10, def value: None
  ::UnityEngine::Color ____leadingBackgroundColor;

  /// @brief Field _useAutomaticLeadPlayerSelection, offset: 0x48, size: 0x1, def value: None
  bool ____useAutomaticLeadPlayerSelection;

  /// @brief Field _onPlatformText, offset: 0x50, size: 0x8, def value: None
  ::TMPro::TextMeshPro* ____onPlatformText;

  /// @brief Field _backgroundSpriteRenderer, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::SpriteRenderer* ____backgroundSpriteRenderer;

  /// @brief Field _tweeningManager, offset: 0x60, size: 0x8, def value: None
  ::Tweening::TimeTweeningManager* ____tweeningManager;

  /// @brief Field _connectedPlayer, offset: 0x68, size: 0x8, def value: None
  ::GlobalNamespace::IConnectedPlayer* ____connectedPlayer;

  /// @brief Field _leadPlayerProvider, offset: 0x70, size: 0x8, def value: None
  ::GlobalNamespace::MultiplayerLeadPlayerProvider* ____leadPlayerProvider;

  /// @brief Field _currentBackgroundColor, offset: 0x78, size: 0x10, def value: None
  ::UnityEngine::Color ____currentBackgroundColor;

  /// @brief Field _state, offset: 0x88, size: 0x4, def value: None
  ::GlobalNamespace::__MultiplayerScoreDiffText__State ____state;

  /// @brief Field _onPlatformTextAlphaTween, offset: 0x90, size: 0x8, def value: None
  ::Tweening::FloatTween* ____onPlatformTextAlphaTween;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::MultiplayerScoreDiffText, 0x98>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____activeTextColor) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____normalBackgroundColor) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____leadingBackgroundColor) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____useAutomaticLeadPlayerSelection) == 0x48, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____onPlatformText) == 0x50, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____backgroundSpriteRenderer) == 0x58, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____tweeningManager) == 0x60, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____connectedPlayer) == 0x68, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____leadPlayerProvider) == 0x70, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____currentBackgroundColor) == 0x78, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____state) == 0x88, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::MultiplayerScoreDiffText, ____onPlatformTextAlphaTween) == 0x90, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerScoreDiffText__HorizontalPosition, "", "MultiplayerScoreDiffText/HorizontalPosition");
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__MultiplayerScoreDiffText__State, "", "MultiplayerScoreDiffText/State");
NEED_NO_BOX(::GlobalNamespace::MultiplayerScoreDiffText);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::MultiplayerScoreDiffText*, "", "MultiplayerScoreDiffText");

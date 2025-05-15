#pragma once
// IWYU pragma private; include "GlobalNamespace/TextFadeTransitions.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextFadeTransitions)
namespace GlobalNamespace {
struct TextFadeTransitions_State;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
struct TextFadeTransitions_State;
}
namespace GlobalNamespace {
class TextFadeTransitions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::TextFadeTransitions_State);
MARK_REF_PTR_T(::GlobalNamespace::TextFadeTransitions);
// Dependencies
namespace GlobalNamespace {
// Is value type: true
// CS Name: TextFadeTransitions/State
struct CORDL_TYPE TextFadeTransitions_State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __TextFadeTransitions_State_Unwrapped
  enum struct __TextFadeTransitions_State_Unwrapped : int32_t {
    __E_NotInTransition = static_cast<int32_t>(0x0),
    __E_FadingOut = static_cast<int32_t>(0x1),
    __E_FadingIn = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __TextFadeTransitions_State_Unwrapped() const noexcept {
    return static_cast<__TextFadeTransitions_State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr TextFadeTransitions_State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr TextFadeTransitions_State(int32_t value__) noexcept;

  /// @brief Field FadingIn value: I32(2)
  static ::GlobalNamespace::TextFadeTransitions_State const FadingIn;

  /// @brief Field FadingOut value: I32(1)
  static ::GlobalNamespace::TextFadeTransitions_State const FadingOut;

  /// @brief Field NotInTransition value: I32(0)
  static ::GlobalNamespace::TextFadeTransitions_State const NotInTransition;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4700 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextFadeTransitions_State, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextFadeTransitions_State, 0x4>, "Size mismatch!");

} // namespace GlobalNamespace
// Dependencies TextFadeTransitions::State, UnityEngine.MonoBehaviour
namespace GlobalNamespace {
// Is value type: false
// CS Name: TextFadeTransitions
class CORDL_TYPE TextFadeTransitions : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::TextFadeTransitions_State;

  /// @brief Field _canvasGroup, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup)) ::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _delay, offset 0x44, size 0x4
  __declspec(property(get = __cordl_internal_get__delay, put = __cordl_internal_set__delay)) float_t _delay;

  /// @brief Field _fade, offset 0x40, size 0x4
  __declspec(property(get = __cordl_internal_get__fade, put = __cordl_internal_set__fade)) float_t _fade;

  /// @brief Field _fadeDuration, offset 0x30, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeDuration, put = __cordl_internal_set__fadeDuration)) float_t _fadeDuration;

  /// @brief Field _nextText, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__nextText, put = __cordl_internal_set__nextText)) ::StringW _nextText;

  /// @brief Field _state, offset 0x34, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state)) ::GlobalNamespace::TextFadeTransitions_State _state;

  /// @brief Field _textLabel, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__textLabel, put = __cordl_internal_set__textLabel)) ::UnityW<::TMPro::TextMeshProUGUI> _textLabel;

  /// @brief Method Awake, addr 0x3bf0d54, size 0x7c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::TextFadeTransitions* New_ctor();

  /// @brief Method RefreshState, addr 0x3bf0ea4, size 0x120, virtual false, abstract: false, final false
  inline void RefreshState();

  /// @brief Method RefreshTextAlpha, addr 0x3bf0dd0, size 0xd0, virtual false, abstract: false, final false
  inline void RefreshTextAlpha();

  /// @brief Method ShowText, addr 0x3be84cc, size 0x88, virtual false, abstract: false, final false
  inline void ShowText(::StringW text, float_t delay);

  /// @brief Method Update, addr 0x3bf0ea0, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr float_t const& __cordl_internal_get__delay() const;

  constexpr float_t& __cordl_internal_get__delay();

  constexpr float_t const& __cordl_internal_get__fade() const;

  constexpr float_t& __cordl_internal_get__fade();

  constexpr float_t const& __cordl_internal_get__fadeDuration() const;

  constexpr float_t& __cordl_internal_get__fadeDuration();

  constexpr ::StringW const& __cordl_internal_get__nextText() const;

  constexpr ::StringW& __cordl_internal_get__nextText();

  constexpr ::GlobalNamespace::TextFadeTransitions_State const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::TextFadeTransitions_State& __cordl_internal_get__state();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__textLabel() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__textLabel();

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__delay(float_t value);

  constexpr void __cordl_internal_set__fade(float_t value);

  constexpr void __cordl_internal_set__fadeDuration(float_t value);

  constexpr void __cordl_internal_set__nextText(::StringW value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::TextFadeTransitions_State value);

  constexpr void __cordl_internal_set__textLabel(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x3bf0fc4, size 0x14, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextFadeTransitions();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextFadeTransitions", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextFadeTransitions(TextFadeTransitions&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextFadeTransitions", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextFadeTransitions(TextFadeTransitions const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4701 };

  /// @brief Field _textLabel, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____textLabel;

  /// @brief Field _canvasGroup, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _fadeDuration, offset: 0x30, size: 0x4, def value: None
  float_t ____fadeDuration;

  /// @brief Field _state, offset: 0x34, size: 0x4, def value: None
  ::GlobalNamespace::TextFadeTransitions_State ____state;

  /// @brief Field _nextText, offset: 0x38, size: 0x8, def value: None
  ::StringW ____nextText;

  /// @brief Field _fade, offset: 0x40, size: 0x4, def value: None
  float_t ____fade;

  /// @brief Field _delay, offset: 0x44, size: 0x4, def value: None
  float_t ____delay;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____textLabel) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____canvasGroup) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____fadeDuration) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____state) == 0x34, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____nextText) == 0x38, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____fade) == 0x40, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____delay) == 0x44, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextFadeTransitions, 0x48>, "Size mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextFadeTransitions_State, "", "TextFadeTransitions/State");
NEED_NO_BOX(::GlobalNamespace::TextFadeTransitions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextFadeTransitions*, "", "TextFadeTransitions");

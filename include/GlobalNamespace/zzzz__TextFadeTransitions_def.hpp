#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "GlobalNamespace/zzzz__TextFadeTransitions_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(TextFadeTransitions)
namespace GlobalNamespace {
struct __TextFadeTransitions__State;
}
namespace TMPro {
class TextMeshProUGUI;
}
namespace UnityEngine {
class CanvasGroup;
}
// Forward declare root types
namespace GlobalNamespace {
struct __TextFadeTransitions__State;
}
namespace GlobalNamespace {
class TextFadeTransitions;
}
// Write type traits
MARK_VAL_T(::GlobalNamespace::__TextFadeTransitions__State);
MARK_REF_PTR_T(::GlobalNamespace::TextFadeTransitions);
// Type: ::State
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: true
// CS Name: ::TextFadeTransitions::State
struct CORDL_TYPE __TextFadeTransitions__State {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____TextFadeTransitions__State_Unwrapped
  enum struct ____TextFadeTransitions__State_Unwrapped : int32_t {
    __E_NotInTransition = static_cast<int32_t>(0x0),
    __E_FadingOut = static_cast<int32_t>(0x1),
    __E_FadingIn = static_cast<int32_t>(0x2),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____TextFadeTransitions__State_Unwrapped() const noexcept {
    return static_cast<____TextFadeTransitions__State_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __TextFadeTransitions__State();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __TextFadeTransitions__State(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field FadingIn value: static_cast<int32_t>(0x2)
  static ::GlobalNamespace::__TextFadeTransitions__State const FadingIn;

  /// @brief Field FadingOut value: static_cast<int32_t>(0x1)
  static ::GlobalNamespace::__TextFadeTransitions__State const FadingOut;

  /// @brief Field NotInTransition value: static_cast<int32_t>(0x0)
  static ::GlobalNamespace::__TextFadeTransitions__State const NotInTransition;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::__TextFadeTransitions__State, 0x4>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::__TextFadeTransitions__State, value__) == 0x0, "Offset mismatch!");

} // namespace GlobalNamespace
// Type: ::TextFadeTransitions
// SizeInfo { instance_size: 64, native_size: -1, calculated_instance_size: 64, calculated_native_size: 60, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace GlobalNamespace {
// Is value type: false
// CS Name: ::TextFadeTransitions*
class CORDL_TYPE TextFadeTransitions : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using State = ::GlobalNamespace::__TextFadeTransitions__State;

  /// @brief Field _canvasGroup, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__canvasGroup, put = __cordl_internal_set__canvasGroup))::UnityW<::UnityEngine::CanvasGroup> _canvasGroup;

  /// @brief Field _fade, offset 0x38, size 0x4
  __declspec(property(get = __cordl_internal_get__fade, put = __cordl_internal_set__fade)) float_t _fade;

  /// @brief Field _fadeDuration, offset 0x28, size 0x4
  __declspec(property(get = __cordl_internal_get__fadeDuration, put = __cordl_internal_set__fadeDuration)) float_t _fadeDuration;

  /// @brief Field _nextText, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__nextText, put = __cordl_internal_set__nextText))::StringW _nextText;

  /// @brief Field _state, offset 0x2c, size 0x4
  __declspec(property(get = __cordl_internal_get__state, put = __cordl_internal_set__state))::GlobalNamespace::__TextFadeTransitions__State _state;

  /// @brief Field _textLabel, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__textLabel, put = __cordl_internal_set__textLabel))::UnityW<::TMPro::TextMeshProUGUI> _textLabel;

  /// @brief Method Awake, addr 0x24977d8, size 0x7c, virtual false, abstract: false, final false
  inline void Awake();

  static inline ::GlobalNamespace::TextFadeTransitions* New_ctor();

  /// @brief Method RefreshState, addr 0x2497928, size 0x100, virtual false, abstract: false, final false
  inline void RefreshState();

  /// @brief Method RefreshTextAlpha, addr 0x2497854, size 0xd0, virtual false, abstract: false, final false
  inline void RefreshTextAlpha();

  /// @brief Method ShowText, addr 0x248e5b4, size 0x74, virtual false, abstract: false, final false
  inline void ShowText(::StringW text);

  /// @brief Method Update, addr 0x2497924, size 0x4, virtual false, abstract: false, final false
  inline void Update();

  constexpr ::UnityW<::UnityEngine::CanvasGroup> const& __cordl_internal_get__canvasGroup() const;

  constexpr ::UnityW<::UnityEngine::CanvasGroup>& __cordl_internal_get__canvasGroup();

  constexpr float_t const& __cordl_internal_get__fade() const;

  constexpr float_t& __cordl_internal_get__fade();

  constexpr float_t const& __cordl_internal_get__fadeDuration() const;

  constexpr float_t& __cordl_internal_get__fadeDuration();

  constexpr ::StringW const& __cordl_internal_get__nextText() const;

  constexpr ::StringW& __cordl_internal_get__nextText();

  constexpr ::GlobalNamespace::__TextFadeTransitions__State const& __cordl_internal_get__state() const;

  constexpr ::GlobalNamespace::__TextFadeTransitions__State& __cordl_internal_get__state();

  constexpr ::UnityW<::TMPro::TextMeshProUGUI> const& __cordl_internal_get__textLabel() const;

  constexpr ::UnityW<::TMPro::TextMeshProUGUI>& __cordl_internal_get__textLabel();

  constexpr void __cordl_internal_set__canvasGroup(::UnityW<::UnityEngine::CanvasGroup> value);

  constexpr void __cordl_internal_set__fade(float_t value);

  constexpr void __cordl_internal_set__fadeDuration(float_t value);

  constexpr void __cordl_internal_set__nextText(::StringW value);

  constexpr void __cordl_internal_set__state(::GlobalNamespace::__TextFadeTransitions__State value);

  constexpr void __cordl_internal_set__textLabel(::UnityW<::TMPro::TextMeshProUGUI> value);

  /// @brief Method .ctor, addr 0x2497a28, size 0x14, virtual false, abstract: false, final false
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

  /// @brief Field _textLabel, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::TMPro::TextMeshProUGUI> ____textLabel;

  /// @brief Field _canvasGroup, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::CanvasGroup> ____canvasGroup;

  /// @brief Field _fadeDuration, offset: 0x28, size: 0x4, def value: None
  float_t ____fadeDuration;

  /// @brief Field _state, offset: 0x2c, size: 0x4, def value: None
  ::GlobalNamespace::__TextFadeTransitions__State ____state;

  /// @brief Field _nextText, offset: 0x30, size: 0x8, def value: None
  ::StringW ____nextText;

  /// @brief Field _fade, offset: 0x38, size: 0x4, def value: None
  float_t ____fade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::GlobalNamespace::TextFadeTransitions, 0x40>, "Size mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____textLabel) == 0x18, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____canvasGroup) == 0x20, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____fadeDuration) == 0x28, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____state) == 0x2c, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____nextText) == 0x30, "Offset mismatch!");

static_assert(offsetof(::GlobalNamespace::TextFadeTransitions, ____fade) == 0x38, "Offset mismatch!");

} // namespace GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::__TextFadeTransitions__State, "", "TextFadeTransitions/State");
NEED_NO_BOX(::GlobalNamespace::TextFadeTransitions);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::TextFadeTransitions*, "", "TextFadeTransitions");

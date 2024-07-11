#pragma once
// IWYU pragma private; include "HMUI/SwitchView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "HMUI/zzzz__SwitchView_def.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SwitchView)
namespace HMUI {
class ToggleWithCallbacks;
}
namespace HMUI {
struct __SwitchView__AnimationType;
}
namespace HMUI {
struct __ToggleWithCallbacks__SelectionState;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace HMUI {
struct __SwitchView__AnimationType;
}
namespace HMUI {
class SwitchView;
}
// Write type traits
MARK_VAL_T(::HMUI::__SwitchView__AnimationType);
MARK_REF_PTR_T(::HMUI::SwitchView);
// Type: ::AnimationType
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: true
// CS Name: ::SwitchView::AnimationType
struct CORDL_TYPE __SwitchView__AnimationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____SwitchView__AnimationType_Unwrapped
  enum struct ____SwitchView__AnimationType_Unwrapped : int32_t {
    __E_OnOff = static_cast<int32_t>(0x0),
    __E_SelectedState = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____SwitchView__AnimationType_Unwrapped() const noexcept {
    return static_cast<____SwitchView__AnimationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __SwitchView__AnimationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __SwitchView__AnimationType(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field OnOff value: static_cast<int32_t>(0x0)
  static ::HMUI::__SwitchView__AnimationType const OnOff;

  /// @brief Field SelectedState value: static_cast<int32_t>(0x1)
  static ::HMUI::__SwitchView__AnimationType const SelectedState;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::__SwitchView__AnimationType, 0x4>, "Size mismatch!");

static_assert(offsetof(::HMUI::__SwitchView__AnimationType, value__) == 0x0, "Offset mismatch!");

} // namespace HMUI
// Type: HMUI::SwitchView
// SizeInfo { instance_size: 104, native_size: -1, calculated_instance_size: 104, calculated_native_size: 104, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::SwitchView*
class CORDL_TYPE SwitchView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationType = ::HMUI::__SwitchView__AnimationType;

  /// @brief Field _animationType, offset 0x18, size 0x4
  __declspec(property(get = __cordl_internal_get__animationType, put = __cordl_internal_set__animationType))::HMUI::__SwitchView__AnimationType _animationType;

  /// @brief Field _disabledAnimationClip, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledAnimationClip, put = __cordl_internal_set__disabledAnimationClip))::UnityW<::UnityEngine::AnimationClip> _disabledAnimationClip;

  /// @brief Field _highlightedAnimationClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightedAnimationClip, put = __cordl_internal_set__highlightedAnimationClip))::UnityW<::UnityEngine::AnimationClip> _highlightedAnimationClip;

  /// @brief Field _normalAnimationClip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalAnimationClip, put = __cordl_internal_set__normalAnimationClip))::UnityW<::UnityEngine::AnimationClip> _normalAnimationClip;

  /// @brief Field _offAnimationClip, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__offAnimationClip, put = __cordl_internal_set__offAnimationClip))::UnityW<::UnityEngine::AnimationClip> _offAnimationClip;

  /// @brief Field _onAnimationClip, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__onAnimationClip, put = __cordl_internal_set__onAnimationClip))::UnityW<::UnityEngine::AnimationClip> _onAnimationClip;

  /// @brief Field _pressedAnimationClip, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedAnimationClip, put = __cordl_internal_set__pressedAnimationClip))::UnityW<::UnityEngine::AnimationClip> _pressedAnimationClip;

  /// @brief Field _selectedAndHighlightedAnimationClip, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedAnimationClip,
                      put = __cordl_internal_set__selectedAndHighlightedAnimationClip))::UnityW<::UnityEngine::AnimationClip> _selectedAndHighlightedAnimationClip;

  /// @brief Field _selectedAnimationClip, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAnimationClip, put = __cordl_internal_set__selectedAnimationClip))::UnityW<::UnityEngine::AnimationClip> _selectedAnimationClip;

  /// @brief Field _toggle, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle))::UnityW<::HMUI::ToggleWithCallbacks> _toggle;

  /// @brief Method Awake, addr 0x2556b6c, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleOnValueChanged, addr 0x2557068, size 0x4, virtual false, abstract: false, final false
  inline void HandleOnValueChanged(bool value);

  /// @brief Method HandleStateDidChange, addr 0x255706c, size 0x4, virtual false, abstract: false, final false
  inline void HandleStateDidChange(::HMUI::__ToggleWithCallbacks__SelectionState value);

  static inline ::HMUI::SwitchView* New_ctor();

  /// @brief Method OnDestroy, addr 0x2556ea8, size 0x10c, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshVisuals, addr 0x2556d84, size 0x124, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method Start, addr 0x2556bbc, size 0x114, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::HMUI::__SwitchView__AnimationType const& __cordl_internal_get__animationType() const;

  constexpr ::HMUI::__SwitchView__AnimationType& __cordl_internal_get__animationType();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__disabledAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__disabledAnimationClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__highlightedAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__highlightedAnimationClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__normalAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__normalAnimationClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__offAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__offAnimationClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__onAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__onAnimationClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__pressedAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__pressedAnimationClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__selectedAndHighlightedAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__selectedAndHighlightedAnimationClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__selectedAnimationClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__selectedAnimationClip();

  constexpr ::UnityW<::HMUI::ToggleWithCallbacks> const& __cordl_internal_get__toggle() const;

  constexpr ::UnityW<::HMUI::ToggleWithCallbacks>& __cordl_internal_get__toggle();

  constexpr void __cordl_internal_set__animationType(::HMUI::__SwitchView__AnimationType value);

  constexpr void __cordl_internal_set__disabledAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__highlightedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__normalAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__offAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__onAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__pressedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__selectedAndHighlightedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__selectedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__toggle(::UnityW<::HMUI::ToggleWithCallbacks> value);

  /// @brief Method .ctor, addr 0x25570c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchView();

public:
  // Ctor Parameters [CppParam { name: "", ty: "SwitchView", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  SwitchView(SwitchView&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "SwitchView", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  SwitchView(SwitchView const&) = delete;

  /// @brief Field _animationType, offset: 0x18, size: 0x4, def value: None
  ::HMUI::__SwitchView__AnimationType ____animationType;

  /// @brief Field _normalAnimationClip, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____normalAnimationClip;

  /// @brief Field _highlightedAnimationClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____highlightedAnimationClip;

  /// @brief Field _pressedAnimationClip, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____pressedAnimationClip;

  /// @brief Field _disabledAnimationClip, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____disabledAnimationClip;

  /// @brief Field _onAnimationClip, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____onAnimationClip;

  /// @brief Field _offAnimationClip, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____offAnimationClip;

  /// @brief Field _selectedAnimationClip, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____selectedAnimationClip;

  /// @brief Field _selectedAndHighlightedAnimationClip, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____selectedAndHighlightedAnimationClip;

  /// @brief Field _toggle, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::HMUI::ToggleWithCallbacks> ____toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::SwitchView, 0x68>, "Size mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____animationType) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____normalAnimationClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____highlightedAnimationClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____pressedAnimationClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____disabledAnimationClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____onAnimationClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____offAnimationClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____selectedAnimationClip) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____selectedAndHighlightedAnimationClip) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____toggle) == 0x60, "Offset mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::__SwitchView__AnimationType, "HMUI", "SwitchView/AnimationType");
NEED_NO_BOX(::HMUI::SwitchView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SwitchView*, "HMUI", "SwitchView");

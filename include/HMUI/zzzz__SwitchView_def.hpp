#pragma once
// IWYU pragma private; include "HMUI/SwitchView.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(SwitchView)
namespace HMUI {
struct SwitchView_AnimationType;
}
namespace HMUI {
struct ToggleWithCallbacks_SelectionState;
}
namespace HMUI {
class ToggleWithCallbacks;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace HMUI {
struct SwitchView_AnimationType;
}
namespace HMUI {
class SwitchView;
}
// Write type traits
MARK_VAL_T(::HMUI::SwitchView_AnimationType);
MARK_REF_PTR_T(::HMUI::SwitchView);
// Dependencies
namespace HMUI {
// Is value type: true
// CS Name: HMUI.SwitchView/AnimationType
struct CORDL_TYPE SwitchView_AnimationType {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __SwitchView_AnimationType_Unwrapped
  enum struct __SwitchView_AnimationType_Unwrapped : int32_t {
    __E_OnOff = static_cast<int32_t>(0x0),
    __E_SelectedState = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __SwitchView_AnimationType_Unwrapped() const noexcept {
    return static_cast<__SwitchView_AnimationType_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr SwitchView_AnimationType();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr SwitchView_AnimationType(int32_t value__) noexcept;

  /// @brief Field OnOff value: I32(0)
  static ::HMUI::SwitchView_AnimationType const OnOff;

  /// @brief Field SelectedState value: I32(1)
  static ::HMUI::SwitchView_AnimationType const SelectedState;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16110 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SwitchView_AnimationType, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SwitchView_AnimationType, 0x4>, "Size mismatch!");

} // namespace HMUI
// Dependencies HMUI.SwitchView::AnimationType, UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.SwitchView
class CORDL_TYPE SwitchView : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  using AnimationType = ::HMUI::SwitchView_AnimationType;

  /// @brief Field _animationType, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__animationType, put = __cordl_internal_set__animationType)) ::HMUI::SwitchView_AnimationType _animationType;

  /// @brief Field _disabledAnimationClip, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledAnimationClip, put = __cordl_internal_set__disabledAnimationClip)) ::UnityW<::UnityEngine::AnimationClip> _disabledAnimationClip;

  /// @brief Field _highlightedAnimationClip, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightedAnimationClip, put = __cordl_internal_set__highlightedAnimationClip)) ::UnityW<::UnityEngine::AnimationClip> _highlightedAnimationClip;

  /// @brief Field _normalAnimationClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__normalAnimationClip, put = __cordl_internal_set__normalAnimationClip)) ::UnityW<::UnityEngine::AnimationClip> _normalAnimationClip;

  /// @brief Field _offAnimationClip, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get__offAnimationClip, put = __cordl_internal_set__offAnimationClip)) ::UnityW<::UnityEngine::AnimationClip> _offAnimationClip;

  /// @brief Field _onAnimationClip, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__onAnimationClip, put = __cordl_internal_set__onAnimationClip)) ::UnityW<::UnityEngine::AnimationClip> _onAnimationClip;

  /// @brief Field _pressedAnimationClip, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedAnimationClip, put = __cordl_internal_set__pressedAnimationClip)) ::UnityW<::UnityEngine::AnimationClip> _pressedAnimationClip;

  /// @brief Field _selectedAndHighlightedAnimationClip, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAndHighlightedAnimationClip, put = __cordl_internal_set__selectedAndHighlightedAnimationClip)) ::UnityW<::UnityEngine::AnimationClip>
      _selectedAndHighlightedAnimationClip;

  /// @brief Field _selectedAnimationClip, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedAnimationClip, put = __cordl_internal_set__selectedAnimationClip)) ::UnityW<::UnityEngine::AnimationClip> _selectedAnimationClip;

  /// @brief Field _toggle, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get__toggle, put = __cordl_internal_set__toggle)) ::UnityW<::HMUI::ToggleWithCallbacks> _toggle;

  /// @brief Method Awake, addr 0x39f8c00, size 0x50, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleOnValueChanged, addr 0x39f90ec, size 0x4, virtual false, abstract: false, final false
  inline void HandleOnValueChanged(bool value);

  /// @brief Method HandleStateDidChange, addr 0x39f90f0, size 0x4, virtual false, abstract: false, final false
  inline void HandleStateDidChange(::HMUI::ToggleWithCallbacks_SelectionState value);

  static inline ::HMUI::SwitchView* New_ctor();

  /// @brief Method OnDestroy, addr 0x39f8f34, size 0x104, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method RefreshVisuals, addr 0x39f8e10, size 0x124, virtual false, abstract: false, final false
  inline void RefreshVisuals();

  /// @brief Method Start, addr 0x39f8c50, size 0x10c, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::HMUI::SwitchView_AnimationType const& __cordl_internal_get__animationType() const;

  constexpr ::HMUI::SwitchView_AnimationType& __cordl_internal_get__animationType();

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

  constexpr void __cordl_internal_set__animationType(::HMUI::SwitchView_AnimationType value);

  constexpr void __cordl_internal_set__disabledAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__highlightedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__normalAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__offAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__onAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__pressedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__selectedAndHighlightedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__selectedAnimationClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__toggle(::UnityW<::HMUI::ToggleWithCallbacks> value);

  /// @brief Method .ctor, addr 0x39f9148, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 16111 };

  /// @brief Field _animationType, offset: 0x20, size: 0x4, def value: None
  ::HMUI::SwitchView_AnimationType ____animationType;

  /// @brief Field _normalAnimationClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____normalAnimationClip;

  /// @brief Field _highlightedAnimationClip, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____highlightedAnimationClip;

  /// @brief Field _pressedAnimationClip, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____pressedAnimationClip;

  /// @brief Field _disabledAnimationClip, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____disabledAnimationClip;

  /// @brief Field _onAnimationClip, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____onAnimationClip;

  /// @brief Field _offAnimationClip, offset: 0x50, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____offAnimationClip;

  /// @brief Field _selectedAnimationClip, offset: 0x58, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____selectedAnimationClip;

  /// @brief Field _selectedAndHighlightedAnimationClip, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____selectedAndHighlightedAnimationClip;

  /// @brief Field _toggle, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::HMUI::ToggleWithCallbacks> ____toggle;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::SwitchView, ____animationType) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____normalAnimationClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____highlightedAnimationClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____pressedAnimationClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____disabledAnimationClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____onAnimationClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____offAnimationClip) == 0x50, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____selectedAnimationClip) == 0x58, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____selectedAndHighlightedAnimationClip) == 0x60, "Offset mismatch!");

static_assert(offsetof(::HMUI::SwitchView, ____toggle) == 0x68, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::SwitchView, 0x70>, "Size mismatch!");

} // namespace HMUI
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SwitchView_AnimationType, "HMUI", "SwitchView/AnimationType");
NEED_NO_BOX(::HMUI::SwitchView);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::SwitchView*, "HMUI", "SwitchView");

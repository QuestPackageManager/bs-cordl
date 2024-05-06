#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(ButtonStaticAnimations)
namespace HMUI {
class NoTransitionsButton;
}
namespace HMUI {
struct __NoTransitionsButton__SelectionState;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace HMUI {
class ButtonStaticAnimations;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::ButtonStaticAnimations);
// Type: HMUI::ButtonStaticAnimations
// SizeInfo { instance_size: 72, native_size: -1, calculated_instance_size: 72, calculated_native_size: 65, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// CS Name: ::HMUI::ButtonStaticAnimations*
class CORDL_TYPE ButtonStaticAnimations : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _button, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__button, put = __cordl_internal_set__button))::UnityW<::HMUI::NoTransitionsButton> _button;

  /// @brief Field _didStart, offset 0x40, size 0x1
  __declspec(property(get = __cordl_internal_get__didStart, put = __cordl_internal_set__didStart)) bool _didStart;

  /// @brief Field _disabledClip, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledClip, put = __cordl_internal_set__disabledClip))::UnityW<::UnityEngine::AnimationClip> _disabledClip;

  /// @brief Field _highlightedClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightedClip, put = __cordl_internal_set__highlightedClip))::UnityW<::UnityEngine::AnimationClip> _highlightedClip;

  /// @brief Field _normalClip, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__normalClip, put = __cordl_internal_set__normalClip))::UnityW<::UnityEngine::AnimationClip> _normalClip;

  /// @brief Field _pressedClip, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedClip, put = __cordl_internal_set__pressedClip))::UnityW<::UnityEngine::AnimationClip> _pressedClip;

  /// @brief Method Awake, addr 0x25136f4, size 0x88, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleButtonSelectionStateDidChange, addr 0x25137a0, size 0xf8, virtual false, abstract: false, final false
  inline void HandleButtonSelectionStateDidChange(::HMUI::__NoTransitionsButton__SelectionState state);

  static inline ::HMUI::ButtonStaticAnimations* New_ctor();

  /// @brief Method OnDestroy, addr 0x25138b4, size 0xd0, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x2513898, size 0x1c, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x251377c, size 0x24, virtual false, abstract: false, final false
  inline void Start();

  constexpr ::UnityW<::HMUI::NoTransitionsButton> const& __cordl_internal_get__button() const;

  constexpr ::UnityW<::HMUI::NoTransitionsButton>& __cordl_internal_get__button();

  constexpr bool const& __cordl_internal_get__didStart() const;

  constexpr bool& __cordl_internal_get__didStart();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__disabledClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__disabledClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__highlightedClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__highlightedClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__normalClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__normalClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__pressedClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__pressedClip();

  constexpr void __cordl_internal_set__button(::UnityW<::HMUI::NoTransitionsButton> value);

  constexpr void __cordl_internal_set__didStart(bool value);

  constexpr void __cordl_internal_set__disabledClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__highlightedClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__normalClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__pressedClip(::UnityW<::UnityEngine::AnimationClip> value);

  /// @brief Method .ctor, addr 0x2513984, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ButtonStaticAnimations();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ButtonStaticAnimations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ButtonStaticAnimations(ButtonStaticAnimations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ButtonStaticAnimations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ButtonStaticAnimations(ButtonStaticAnimations const&) = delete;

  /// @brief Field _button, offset: 0x18, size: 0x8, def value: None
  ::UnityW<::HMUI::NoTransitionsButton> ____button;

  /// @brief Field _normalClip, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____normalClip;

  /// @brief Field _highlightedClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____highlightedClip;

  /// @brief Field _pressedClip, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____pressedClip;

  /// @brief Field _disabledClip, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____disabledClip;

  /// @brief Field _didStart, offset: 0x40, size: 0x1, def value: None
  bool ____didStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::ButtonStaticAnimations, 0x48>, "Size mismatch!");

static_assert(offsetof(::HMUI::ButtonStaticAnimations, ____button) == 0x18, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonStaticAnimations, ____normalClip) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonStaticAnimations, ____highlightedClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonStaticAnimations, ____pressedClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonStaticAnimations, ____disabledClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::ButtonStaticAnimations, ____didStart) == 0x40, "Offset mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::ButtonStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::ButtonStaticAnimations*, "HMUI", "ButtonStaticAnimations");

#pragma once
// IWYU pragma private; include "HMUI/InputFieldViewStaticAnimations.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputFieldViewStaticAnimations)
namespace HMUI {
struct InputFieldView_SelectionState;
}
namespace HMUI {
class InputFieldView;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace HMUI {
class InputFieldViewStaticAnimations;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::InputFieldViewStaticAnimations);
// Dependencies UnityEngine.MonoBehaviour
namespace HMUI {
// Is value type: false
// CS Name: HMUI.InputFieldViewStaticAnimations
class CORDL_TYPE InputFieldViewStaticAnimations : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _didStart, offset 0x50, size 0x1
  __declspec(property(get = __cordl_internal_get__didStart, put = __cordl_internal_set__didStart)) bool _didStart;

  /// @brief Field _disabledClip, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get__disabledClip, put = __cordl_internal_set__disabledClip)) ::UnityW<::UnityEngine::AnimationClip> _disabledClip;

  /// @brief Field _highlightedClip, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get__highlightedClip, put = __cordl_internal_set__highlightedClip)) ::UnityW<::UnityEngine::AnimationClip> _highlightedClip;

  /// @brief Field _inputFieldView, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__inputFieldView, put = __cordl_internal_set__inputFieldView)) ::UnityW<::HMUI::InputFieldView> _inputFieldView;

  /// @brief Field _normalClip, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get__normalClip, put = __cordl_internal_set__normalClip)) ::UnityW<::UnityEngine::AnimationClip> _normalClip;

  /// @brief Field _pressedClip, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__pressedClip, put = __cordl_internal_set__pressedClip)) ::UnityW<::UnityEngine::AnimationClip> _pressedClip;

  /// @brief Field _selectedClip, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get__selectedClip, put = __cordl_internal_set__selectedClip)) ::UnityW<::UnityEngine::AnimationClip> _selectedClip;

  /// @brief Method Awake, addr 0x56d2bd0, size 0x8c, virtual false, abstract: false, final false
  inline void Awake();

  /// @brief Method HandleInputFieldViewSelectionStateDidChange, addr 0x56d2c7c, size 0x124, virtual false, abstract: false, final false
  inline void HandleInputFieldViewSelectionStateDidChange(::HMUI::InputFieldView_SelectionState state);

  static inline ::HMUI::InputFieldViewStaticAnimations* New_ctor();

  /// @brief Method OnDestroy, addr 0x56d2db8, size 0x110, virtual false, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x56d2da0, size 0x18, virtual false, abstract: false, final false
  inline void OnEnable();

  /// @brief Method Start, addr 0x56d2c5c, size 0x20, virtual false, abstract: false, final false
  inline void Start();

  constexpr bool const& __cordl_internal_get__didStart() const;

  constexpr bool& __cordl_internal_get__didStart();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__disabledClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__disabledClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__highlightedClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__highlightedClip();

  constexpr ::UnityW<::HMUI::InputFieldView> const& __cordl_internal_get__inputFieldView() const;

  constexpr ::UnityW<::HMUI::InputFieldView>& __cordl_internal_get__inputFieldView();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__normalClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__normalClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__pressedClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__pressedClip();

  constexpr ::UnityW<::UnityEngine::AnimationClip> const& __cordl_internal_get__selectedClip() const;

  constexpr ::UnityW<::UnityEngine::AnimationClip>& __cordl_internal_get__selectedClip();

  constexpr void __cordl_internal_set__didStart(bool value);

  constexpr void __cordl_internal_set__disabledClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__highlightedClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__inputFieldView(::UnityW<::HMUI::InputFieldView> value);

  constexpr void __cordl_internal_set__normalClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__pressedClip(::UnityW<::UnityEngine::AnimationClip> value);

  constexpr void __cordl_internal_set__selectedClip(::UnityW<::UnityEngine::AnimationClip> value);

  /// @brief Method .ctor, addr 0x56d2ec8, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldViewStaticAnimations();

public:
  // Ctor Parameters [CppParam { name: "", ty: "InputFieldViewStaticAnimations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldViewStaticAnimations(InputFieldViewStaticAnimations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldViewStaticAnimations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldViewStaticAnimations(InputFieldViewStaticAnimations const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 19183 };

  /// @brief Field _inputFieldView, offset: 0x20, size: 0x8, def value: None
  ::UnityW<::HMUI::InputFieldView> ____inputFieldView;

  /// @brief Field _normalClip, offset: 0x28, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____normalClip;

  /// @brief Field _highlightedClip, offset: 0x30, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____highlightedClip;

  /// @brief Field _pressedClip, offset: 0x38, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____pressedClip;

  /// @brief Field _disabledClip, offset: 0x40, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____disabledClip;

  /// @brief Field _selectedClip, offset: 0x48, size: 0x8, def value: None
  ::UnityW<::UnityEngine::AnimationClip> ____selectedClip;

  /// @brief Field _didStart, offset: 0x50, size: 0x1, def value: None
  bool ____didStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::HMUI::InputFieldViewStaticAnimations, ____inputFieldView) == 0x20, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewStaticAnimations, ____normalClip) == 0x28, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewStaticAnimations, ____highlightedClip) == 0x30, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewStaticAnimations, ____pressedClip) == 0x38, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewStaticAnimations, ____disabledClip) == 0x40, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewStaticAnimations, ____selectedClip) == 0x48, "Offset mismatch!");

static_assert(offsetof(::HMUI::InputFieldViewStaticAnimations, ____didStart) == 0x50, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldViewStaticAnimations, 0x58>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::InputFieldViewStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldViewStaticAnimations*, "HMUI", "InputFieldViewStaticAnimations");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
CORDL_MODULE_EXPORT(InputFieldViewStaticAnimations)
namespace HMUI {
class InputFieldView;
}
namespace UnityEngine {
class AnimationClip;
}
namespace HMUI {
struct __InputFieldView__SelectionState;
}
// Forward declare root types
namespace HMUI {
class InputFieldViewStaticAnimations;
}
// Write type traits
MARK_REF_PTR_T(::HMUI::InputFieldViewStaticAnimations);
// Type: HMUI::InputFieldViewStaticAnimations
// SizeInfo { instance_size: 80, native_size: -1, calculated_instance_size: 80, calculated_native_size: 73, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10225))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13633))
// CS Name: ::HMUI::InputFieldViewStaticAnimations*
class CORDL_TYPE InputFieldViewStaticAnimations : public ::UnityEngine::MonoBehaviour {
public:
  // Declarations
  /// @brief Field _inputFieldView, offset 0x18, size 0x8
  __declspec(property(get = __get__inputFieldView, put = __set__inputFieldView))::HMUI::InputFieldView* _inputFieldView;

  /// @brief Field _normalClip, offset 0x20, size 0x8
  __declspec(property(get = __get__normalClip, put = __set__normalClip))::UnityEngine::AnimationClip* _normalClip;

  /// @brief Field _highlightedClip, offset 0x28, size 0x8
  __declspec(property(get = __get__highlightedClip, put = __set__highlightedClip))::UnityEngine::AnimationClip* _highlightedClip;

  /// @brief Field _pressedClip, offset 0x30, size 0x8
  __declspec(property(get = __get__pressedClip, put = __set__pressedClip))::UnityEngine::AnimationClip* _pressedClip;

  /// @brief Field _disabledClip, offset 0x38, size 0x8
  __declspec(property(get = __get__disabledClip, put = __set__disabledClip))::UnityEngine::AnimationClip* _disabledClip;

  /// @brief Field _selectedClip, offset 0x40, size 0x8
  __declspec(property(get = __get__selectedClip, put = __set__selectedClip))::UnityEngine::AnimationClip* _selectedClip;

  /// @brief Field _didStart, offset 0x48, size 0x1
  __declspec(property(get = __get__didStart, put = __set__didStart)) bool _didStart;

  constexpr ::HMUI::InputFieldView*& __get__inputFieldView();

  constexpr ::cordl_internals::to_const_pointer<::HMUI::InputFieldView*> const& __get__inputFieldView() const;

  constexpr void __set__inputFieldView(::HMUI::InputFieldView* value);

  constexpr ::UnityEngine::AnimationClip*& __get__normalClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get__normalClip() const;

  constexpr void __set__normalClip(::UnityEngine::AnimationClip* value);

  constexpr ::UnityEngine::AnimationClip*& __get__highlightedClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get__highlightedClip() const;

  constexpr void __set__highlightedClip(::UnityEngine::AnimationClip* value);

  constexpr ::UnityEngine::AnimationClip*& __get__pressedClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get__pressedClip() const;

  constexpr void __set__pressedClip(::UnityEngine::AnimationClip* value);

  constexpr ::UnityEngine::AnimationClip*& __get__disabledClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get__disabledClip() const;

  constexpr void __set__disabledClip(::UnityEngine::AnimationClip* value);

  constexpr ::UnityEngine::AnimationClip*& __get__selectedClip();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::AnimationClip*> const& __get__selectedClip() const;

  constexpr void __set__selectedClip(::UnityEngine::AnimationClip* value);

  constexpr bool& __get__didStart();

  constexpr bool const& __get__didStart() const;

  constexpr void __set__didStart(bool value);

  /// @brief Method Awake addr 0x2141750 size 0x88 virtual false final false
  inline void Awake();

  /// @brief Method Start addr 0x21417d8 size 0x24 virtual false final false
  inline void Start();

  /// @brief Method OnEnable addr 0x21418fc size 0x1c virtual false final false
  inline void OnEnable();

  /// @brief Method OnDestroy addr 0x2141918 size 0xd0 virtual false final false
  inline void OnDestroy();

  /// @brief Method HandleInputFieldViewSelectionStateDidChange addr 0x21417fc size 0x100 virtual false final false
  inline void HandleInputFieldViewSelectionStateDidChange(::HMUI::__InputFieldView__SelectionState state);

  static inline ::HMUI::InputFieldViewStaticAnimations* New_ctor();

  /// @brief Method .ctor addr 0x21419e8 size 0x8 virtual false final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldViewStaticAnimations", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  InputFieldViewStaticAnimations(InputFieldViewStaticAnimations&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "InputFieldViewStaticAnimations", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  InputFieldViewStaticAnimations(InputFieldViewStaticAnimations const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr InputFieldViewStaticAnimations();

public:
  /// @brief Field _inputFieldView, offset: 0x18, size: 0x8, def value: None
  ::HMUI::InputFieldView* ____inputFieldView;

  /// @brief Field _normalClip, offset: 0x20, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ____normalClip;

  /// @brief Field _highlightedClip, offset: 0x28, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ____highlightedClip;

  /// @brief Field _pressedClip, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ____pressedClip;

  /// @brief Field _disabledClip, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ____disabledClip;

  /// @brief Field _selectedClip, offset: 0x40, size: 0x8, def value: None
  ::UnityEngine::AnimationClip* ____selectedClip;

  /// @brief Field _didStart, offset: 0x48, size: 0x1, def value: None
  bool ____didStart;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::HMUI::InputFieldViewStaticAnimations, 0x50>, "Size mismatch!");

} // namespace HMUI
NEED_NO_BOX(::HMUI::InputFieldViewStaticAnimations);
DEFINE_IL2CPP_ARG_TYPE(::HMUI::InputFieldViewStaticAnimations*, "HMUI", "InputFieldViewStaticAnimations");

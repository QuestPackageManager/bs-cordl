#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__UIBehaviour_def.hpp"
#include "UnityEngine/UI/zzzz__ColorBlock_def.hpp"
#include "UnityEngine/UI/zzzz__Navigation_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__SpriteState_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Selectable)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::EventSystems {
class AxisEventData;
}
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IDeselectHandler;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IMoveHandler;
}
namespace UnityEngine::EventSystems {
class IPointerDownHandler;
}
namespace UnityEngine::EventSystems {
class IPointerEnterHandler;
}
namespace UnityEngine::EventSystems {
class IPointerExitHandler;
}
namespace UnityEngine::EventSystems {
class IPointerUpHandler;
}
namespace UnityEngine::EventSystems {
class ISelectHandler;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
class AnimationTriggers;
}
namespace UnityEngine::UI {
struct ColorBlock;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
struct Navigation;
}
namespace UnityEngine::UI {
struct SpriteState;
}
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
namespace UnityEngine::UI {
struct __Selectable__Transition;
}
namespace UnityEngine {
class Animator;
}
namespace UnityEngine {
class CanvasGroup;
}
namespace UnityEngine {
struct Color;
}
namespace UnityEngine {
class RectTransform;
}
namespace UnityEngine {
class Sprite;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __Selectable__SelectionState;
}
namespace UnityEngine::UI {
struct __Selectable__Transition;
}
namespace UnityEngine::UI {
class Selectable;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__Selectable__SelectionState);
MARK_VAL_T(::UnityEngine::UI::__Selectable__Transition);
MARK_REF_PTR_T(::UnityEngine::UI::Selectable);
// Type: ::Transition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Selectable::Transition
struct CORDL_TYPE __Selectable__Transition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Selectable__Transition_Unwrapped
  enum struct ____Selectable__Transition_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_ColorTint = static_cast<int32_t>(0x1),
    __E_SpriteSwap = static_cast<int32_t>(0x2),
    __E_Animation = static_cast<int32_t>(0x3),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Selectable__Transition_Unwrapped() const noexcept {
    return static_cast<____Selectable__Transition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Selectable__Transition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Selectable__Transition(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Animation value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Selectable__Transition const Animation;

  /// @brief Field ColorTint value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Selectable__Transition const ColorTint;

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Selectable__Transition const None;

  /// @brief Field SpriteSwap value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Selectable__Transition const SpriteSwap;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Selectable__Transition, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Selectable__Transition, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::SelectionState
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// CS Name: ::Selectable::SelectionState
struct CORDL_TYPE __Selectable__SelectionState {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Selectable__SelectionState_Unwrapped
  enum struct ____Selectable__SelectionState_Unwrapped : int32_t {
    __E_Normal = static_cast<int32_t>(0x0),
    __E_Highlighted = static_cast<int32_t>(0x1),
    __E_Pressed = static_cast<int32_t>(0x2),
    __E_Selected = static_cast<int32_t>(0x3),
    __E_Disabled = static_cast<int32_t>(0x4),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Selectable__SelectionState_Unwrapped() const noexcept {
    return static_cast<____Selectable__SelectionState_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Selectable__SelectionState();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Selectable__SelectionState(int32_t value__) noexcept;

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief Field Disabled value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__Selectable__SelectionState const Disabled;

  /// @brief Field Highlighted value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Selectable__SelectionState const Highlighted;

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Selectable__SelectionState const Normal;

  /// @brief Field Pressed value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Selectable__SelectionState const Pressed;

  /// @brief Field Selected value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Selectable__SelectionState const Selected;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Selectable__SelectionState, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Selectable__SelectionState, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Selectable
// SizeInfo { instance_size: 248, native_size: -1, calculated_instance_size: 248, calculated_native_size: 248, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// CS Name: ::UnityEngine.UI::Selectable*
class CORDL_TYPE Selectable : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using SelectionState = ::UnityEngine::UI::__Selectable__SelectionState;

  using Transition = ::UnityEngine::UI::__Selectable__Transition;

  /// @brief Field <hasSelection>k__BackingField, offset 0xea, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSelection_k__BackingField, put = __cordl_internal_set__hasSelection_k__BackingField)) bool _hasSelection_k__BackingField;

  /// @brief Field <isPointerDown>k__BackingField, offset 0xe9, size 0x1
  __declspec(property(get = __cordl_internal_get__isPointerDown_k__BackingField, put = __cordl_internal_set__isPointerDown_k__BackingField)) bool _isPointerDown_k__BackingField;

  /// @brief Field <isPointerInside>k__BackingField, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get__isPointerInside_k__BackingField, put = __cordl_internal_set__isPointerInside_k__BackingField)) bool _isPointerInside_k__BackingField;

  __declspec(property(get = get_animationTriggers, put = set_animationTriggers))::UnityEngine::UI::AnimationTriggers* animationTriggers;

  __declspec(property(get = get_animator))::UnityW<::UnityEngine::Animator> animator;

  __declspec(property(get = get_colors, put = set_colors))::UnityEngine::UI::ColorBlock colors;

  __declspec(property(get = get_currentSelectionState))::UnityEngine::UI::__Selectable__SelectionState currentSelectionState;

  __declspec(property(get = get_hasSelection, put = set_hasSelection)) bool hasSelection;

  __declspec(property(get = get_image, put = set_image))::UnityW<::UnityEngine::UI::Image> image;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_isPointerDown, put = set_isPointerDown)) bool isPointerDown;

  __declspec(property(get = get_isPointerInside, put = set_isPointerInside)) bool isPointerInside;

  /// @brief Field m_AnimationTriggers, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimationTriggers, put = __cordl_internal_set_m_AnimationTriggers))::UnityEngine::UI::AnimationTriggers* m_AnimationTriggers;

  /// @brief Field m_CanvasGroupCache, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CanvasGroupCache,
                      put = __cordl_internal_set_m_CanvasGroupCache))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* m_CanvasGroupCache;

  /// @brief Field m_Colors, offset 0x4c, size 0x58
  __declspec(property(get = __cordl_internal_get_m_Colors, put = __cordl_internal_set_m_Colors))::UnityEngine::UI::ColorBlock m_Colors;

  /// @brief Field m_CurrentIndex, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndex, put = __cordl_internal_set_m_CurrentIndex)) int32_t m_CurrentIndex;

  /// @brief Field m_EnableCalled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableCalled, put = __cordl_internal_set_m_EnableCalled)) bool m_EnableCalled;

  /// @brief Field m_GroupsAllowInteraction, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GroupsAllowInteraction, put = __cordl_internal_set_m_GroupsAllowInteraction)) bool m_GroupsAllowInteraction;

  /// @brief Field m_Interactable, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Interactable, put = __cordl_internal_set_m_Interactable)) bool m_Interactable;

  /// @brief Field m_Navigation, offset 0x20, size 0x28
  __declspec(property(get = __cordl_internal_get_m_Navigation, put = __cordl_internal_set_m_Navigation))::UnityEngine::UI::Navigation m_Navigation;

  /// @brief Field m_SpriteState, offset 0xa8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_SpriteState, put = __cordl_internal_set_m_SpriteState))::UnityEngine::UI::SpriteState m_SpriteState;

  /// @brief Field m_TargetGraphic, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetGraphic, put = __cordl_internal_set_m_TargetGraphic))::UnityW<::UnityEngine::UI::Graphic> m_TargetGraphic;

  /// @brief Field m_Transition, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Transition, put = __cordl_internal_set_m_Transition))::UnityEngine::UI::__Selectable__Transition m_Transition;

  __declspec(property(get = get_navigation, put = set_navigation))::UnityEngine::UI::Navigation navigation;

  /// @brief Field s_SelectableCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SelectableCount, put = setStaticF_s_SelectableCount)) int32_t s_SelectableCount;

  /// @brief Field s_Selectables, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Selectables,
                             put = setStaticF_s_Selectables))::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> s_Selectables;

  __declspec(property(get = get_spriteState, put = set_spriteState))::UnityEngine::UI::SpriteState spriteState;

  __declspec(property(get = get_targetGraphic, put = set_targetGraphic))::UnityW<::UnityEngine::UI::Graphic> targetGraphic;

  __declspec(property(get = get_transition, put = set_transition))::UnityEngine::UI::__Selectable__Transition transition;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr operator ::UnityEngine::EventSystems::IMoveHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

  /// @brief Method AllSelectablesNoAlloc, addr 0x2e92470, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t AllSelectablesNoAlloc(::ArrayW<::UnityEngine::UI::Selectable*, ::Array<::UnityEngine::UI::Selectable*>*> selectables);

  /// @brief Method Awake, addr 0x2e92b54, size 0x8c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method DoSpriteSwap, addr 0x2e9303c, size 0xa8, virtual false, abstract: false, final false
  inline void DoSpriteSwap(::UnityEngine::Sprite* newSprite);

  /// @brief Method DoStateTransition, addr 0x2e9326c, size 0x194, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  /// @brief Method EvaluateAndTransitionToSelectionState, addr 0x2e93b64, size 0x98, virtual false, abstract: false, final false
  inline void EvaluateAndTransitionToSelectionState();

  /// @brief Method FindSelectable, addr 0x2e93400, size 0x4ac, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectable(::UnityEngine::Vector3 dir);

  /// @brief Method FindSelectableOnDown, addr 0x2e8e360, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnDown();

  /// @brief Method FindSelectableOnLeft, addr 0x2e8e06c, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnLeft();

  /// @brief Method FindSelectableOnRight, addr 0x2e8e168, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnRight();

  /// @brief Method FindSelectableOnUp, addr 0x2e8e264, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnUp();

  /// @brief Method GetPointOnRectEdge, addr 0x2e938ac, size 0x1a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetPointOnRectEdge(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 dir);

  /// @brief Method InstantClearState, addr 0x2e92ee4, size 0x70, virtual true, abstract: false, final false
  inline void InstantClearState();

  /// @brief Method IsHighlighted, addr 0x2e93b08, size 0x5c, virtual false, abstract: false, final false
  inline bool IsHighlighted();

  /// @brief Method IsInteractable, addr 0x2e92da0, size 0x20, virtual true, abstract: false, final false
  inline bool IsInteractable();

  /// @brief Method IsPressed, addr 0x2e92e98, size 0x4c, virtual false, abstract: false, final false
  inline bool IsPressed();

  /// @brief Method Navigate, addr 0x2e93a50, size 0xb8, virtual false, abstract: false, final false
  inline void Navigate(::UnityEngine::EventSystems::AxisEventData* eventData, ::UnityEngine::UI::Selectable* sel);

  static inline ::UnityEngine::UI::Selectable* New_ctor();

  /// @brief Method OnApplicationFocus, addr 0x2e92e3c, size 0x5c, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method OnCanvasGroupChanged, addr 0x2e92be0, size 0x1c0, virtual true, abstract: false, final false
  inline void OnCanvasGroupChanged();

  /// @brief Method OnDeselect, addr 0x2e93c1c, size 0x8, virtual true, abstract: false, final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2e92dc0, size 0x4, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x2e8d304, size 0x128, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x2e8d03c, size 0x2a8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnMove, addr 0x2e8dfbc, size 0x8c, virtual true, abstract: false, final false
  inline void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData);

  /// @brief Method OnPointerDown, addr 0x2e8da94, size 0x130, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x2e93bfc, size 0xc, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x2e93c08, size 0x8, virtual true, abstract: false, final false
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x2e8dcd0, size 0x28, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelect, addr 0x2e93c10, size 0xc, virtual true, abstract: false, final false
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnSetProperty, addr 0x2e925c8, size 0x64, virtual false, abstract: false, final false
  inline void OnSetProperty();

  /// @brief Method OnTransformParentChanged, addr 0x2e92e14, size 0x28, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method Select, addr 0x2e93c24, size 0x104, virtual true, abstract: false, final false
  inline void Select();

  /// @brief Method StartColorTween, addr 0x2e92f54, size 0xe8, virtual false, abstract: false, final false
  inline void StartColorTween(::UnityEngine::Color targetColor, bool instant);

  /// @brief Method TriggerAnimation, addr 0x2e930e4, size 0x188, virtual false, abstract: false, final false
  inline void TriggerAnimation(::StringW triggername);

  constexpr bool const& __cordl_internal_get__hasSelection_k__BackingField() const;

  constexpr bool& __cordl_internal_get__hasSelection_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPointerDown_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPointerDown_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPointerInside_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isPointerInside_k__BackingField();

  constexpr ::UnityEngine::UI::AnimationTriggers*& __cordl_internal_get_m_AnimationTriggers();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::AnimationTriggers*> const& __cordl_internal_get_m_AnimationTriggers() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& __cordl_internal_get_m_CanvasGroupCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*> const& __cordl_internal_get_m_CanvasGroupCache() const;

  constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get_m_Colors() const;

  constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get_m_Colors();

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr bool const& __cordl_internal_get_m_EnableCalled() const;

  constexpr bool& __cordl_internal_get_m_EnableCalled();

  constexpr bool const& __cordl_internal_get_m_GroupsAllowInteraction() const;

  constexpr bool& __cordl_internal_get_m_GroupsAllowInteraction();

  constexpr bool const& __cordl_internal_get_m_Interactable() const;

  constexpr bool& __cordl_internal_get_m_Interactable();

  constexpr ::UnityEngine::UI::Navigation const& __cordl_internal_get_m_Navigation() const;

  constexpr ::UnityEngine::UI::Navigation& __cordl_internal_get_m_Navigation();

  constexpr ::UnityEngine::UI::SpriteState const& __cordl_internal_get_m_SpriteState() const;

  constexpr ::UnityEngine::UI::SpriteState& __cordl_internal_get_m_SpriteState();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_TargetGraphic() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_TargetGraphic();

  constexpr ::UnityEngine::UI::__Selectable__Transition const& __cordl_internal_get_m_Transition() const;

  constexpr ::UnityEngine::UI::__Selectable__Transition& __cordl_internal_get_m_Transition();

  constexpr void __cordl_internal_set__hasSelection_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isPointerDown_k__BackingField(bool value);

  constexpr void __cordl_internal_set__isPointerInside_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_AnimationTriggers(::UnityEngine::UI::AnimationTriggers* value);

  constexpr void __cordl_internal_set_m_CanvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* value);

  constexpr void __cordl_internal_set_m_Colors(::UnityEngine::UI::ColorBlock value);

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr void __cordl_internal_set_m_EnableCalled(bool value);

  constexpr void __cordl_internal_set_m_GroupsAllowInteraction(bool value);

  constexpr void __cordl_internal_set_m_Interactable(bool value);

  constexpr void __cordl_internal_set_m_Navigation(::UnityEngine::UI::Navigation value);

  constexpr void __cordl_internal_set_m_SpriteState(::UnityEngine::UI::SpriteState value);

  constexpr void __cordl_internal_set_m_TargetGraphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set_m_Transition(::UnityEngine::UI::__Selectable__Transition value);

  /// @brief Method .ctor, addr 0x2e8cc08, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

  static inline int32_t getStaticF_s_SelectableCount();

  static inline ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> getStaticF_s_Selectables();

  /// @brief Method get_allSelectableCount, addr 0x2e92374, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_allSelectableCount();

  /// @brief Method get_allSelectables, addr 0x2e923cc, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>* get_allSelectables();

  /// @brief Method get_allSelectablesArray, addr 0x2e922d8, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> get_allSelectablesArray();

  /// @brief Method get_animationTriggers, addr 0x2e927dc, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::AnimationTriggers* get_animationTriggers();

  /// @brief Method get_animator, addr 0x2e92b0c, size 0x48, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> get_animator();

  /// @brief Method get_colors, addr 0x2e926a8, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::ColorBlock get_colors();

  /// @brief Method get_currentSelectionState, addr 0x2e92dc4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Selectable__SelectionState get_currentSelectionState();

  /// @brief Method get_hasSelection, addr 0x2e92a74, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method get_image, addr 0x2e92a88, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_image();

  /// @brief Method get_interactable, addr 0x2e928d4, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method get_isPointerDown, addr 0x2e92a60, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPointerDown();

  /// @brief Method get_isPointerInside, addr 0x2e92a4c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPointerInside();

  /// @brief Method get_navigation, addr 0x2e9252c, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Navigation get_navigation();

  /// @brief Method get_spriteState, addr 0x2e92750, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::SpriteState get_spriteState();

  /// @brief Method get_targetGraphic, addr 0x2e92858, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_targetGraphic();

  /// @brief Method get_transition, addr 0x2e9262c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Selectable__Transition get_transition();

  /// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr ::UnityEngine::EventSystems::IMoveHandler* i___UnityEngine__EventSystems__IMoveHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

  static inline void setStaticF_s_SelectableCount(int32_t value);

  static inline void setStaticF_s_Selectables(::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> value);

  /// @brief Method set_animationTriggers, addr 0x2e927e4, size 0x74, virtual false, abstract: false, final false
  inline void set_animationTriggers(::UnityEngine::UI::AnimationTriggers* value);

  /// @brief Method set_colors, addr 0x2e926b8, size 0x98, virtual false, abstract: false, final false
  inline void set_colors(::UnityEngine::UI::ColorBlock value);

  /// @brief Method set_hasSelection, addr 0x2e92a7c, size 0xc, virtual false, abstract: false, final false
  inline void set_hasSelection(bool value);

  /// @brief Method set_image, addr 0x2e92b04, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::UI::Image* value);

  /// @brief Method set_interactable, addr 0x2e928dc, size 0x170, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method set_isPointerDown, addr 0x2e92a68, size 0xc, virtual false, abstract: false, final false
  inline void set_isPointerDown(bool value);

  /// @brief Method set_isPointerInside, addr 0x2e92a54, size 0xc, virtual false, abstract: false, final false
  inline void set_isPointerInside(bool value);

  /// @brief Method set_navigation, addr 0x2e92540, size 0x88, virtual false, abstract: false, final false
  inline void set_navigation(::UnityEngine::UI::Navigation value);

  /// @brief Method set_spriteState, addr 0x2e92760, size 0x7c, virtual false, abstract: false, final false
  inline void set_spriteState(::UnityEngine::UI::SpriteState value);

  /// @brief Method set_targetGraphic, addr 0x2e92860, size 0x74, virtual false, abstract: false, final false
  inline void set_targetGraphic(::UnityEngine::UI::Graphic* value);

  /// @brief Method set_transition, addr 0x2e92634, size 0x74, virtual false, abstract: false, final false
  inline void set_transition(::UnityEngine::UI::__Selectable__Transition value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Selectable();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Selectable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Selectable(Selectable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Selectable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Selectable(Selectable const&) = delete;

  /// @brief Field m_EnableCalled, offset: 0x18, size: 0x1, def value: None
  bool ___m_EnableCalled;

  /// @brief Field m_Navigation, offset: 0x20, size: 0x28, def value: None
  ::UnityEngine::UI::Navigation ___m_Navigation;

  /// @brief Field m_Transition, offset: 0x48, size: 0x4, def value: None
  ::UnityEngine::UI::__Selectable__Transition ___m_Transition;

  /// @brief Field m_Colors, offset: 0x4c, size: 0x58, def value: None
  ::UnityEngine::UI::ColorBlock ___m_Colors;

  /// @brief Field m_SpriteState, offset: 0xa8, size: 0x20, def value: None
  ::UnityEngine::UI::SpriteState ___m_SpriteState;

  /// @brief Field m_AnimationTriggers, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UI::AnimationTriggers* ___m_AnimationTriggers;

  /// @brief Field m_Interactable, offset: 0xd0, size: 0x1, def value: None
  bool ___m_Interactable;

  /// @brief Field m_TargetGraphic, offset: 0xd8, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___m_TargetGraphic;

  /// @brief Field m_GroupsAllowInteraction, offset: 0xe0, size: 0x1, def value: None
  bool ___m_GroupsAllowInteraction;

  /// @brief Field m_CurrentIndex, offset: 0xe4, size: 0x4, def value: None
  int32_t ___m_CurrentIndex;

  /// @brief Field <isPointerInside>k__BackingField, offset: 0xe8, size: 0x1, def value: None
  bool ____isPointerInside_k__BackingField;

  /// @brief Field <isPointerDown>k__BackingField, offset: 0xe9, size: 0x1, def value: None
  bool ____isPointerDown_k__BackingField;

  /// @brief Field <hasSelection>k__BackingField, offset: 0xea, size: 0x1, def value: None
  bool ____hasSelection_k__BackingField;

  /// @brief Field m_CanvasGroupCache, offset: 0xf0, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* ___m_CanvasGroupCache;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Selectable, 0xf8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_EnableCalled) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_Navigation) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_Transition) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_Colors) == 0x4c, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_SpriteState) == 0xa8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_AnimationTriggers) == 0xc8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_Interactable) == 0xd0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_TargetGraphic) == 0xd8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_GroupsAllowInteraction) == 0xe0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_CurrentIndex) == 0xe4, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ____isPointerInside_k__BackingField) == 0xe8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ____isPointerDown_k__BackingField) == 0xe9, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ____hasSelection_k__BackingField) == 0xea, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Selectable, ___m_CanvasGroupCache) == 0xf0, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Selectable__SelectionState, "UnityEngine.UI", "Selectable/SelectionState");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Selectable__Transition, "UnityEngine.UI", "Selectable/Transition");
NEED_NO_BOX(::UnityEngine::UI::Selectable);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Selectable*, "UnityEngine.UI", "Selectable");

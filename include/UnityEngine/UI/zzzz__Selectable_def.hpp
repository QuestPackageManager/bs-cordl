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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13015))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Selectable__Transition(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Selectable__Transition();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Selectable__Transition const None;

  /// @brief Field ColorTint value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Selectable__Transition const ColorTint;

  /// @brief Field SpriteSwap value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Selectable__Transition const SpriteSwap;

  /// @brief Field Animation value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Selectable__Transition const Animation;

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
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13016))
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

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Selectable__SelectionState(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Selectable__SelectionState();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field Normal value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Selectable__SelectionState const Normal;

  /// @brief Field Highlighted value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Selectable__SelectionState const Highlighted;

  /// @brief Field Pressed value: static_cast<int32_t>(0x2)
  static ::UnityEngine::UI::__Selectable__SelectionState const Pressed;

  /// @brief Field Selected value: static_cast<int32_t>(0x3)
  static ::UnityEngine::UI::__Selectable__SelectionState const Selected;

  /// @brief Field Disabled value: static_cast<int32_t>(0x4)
  static ::UnityEngine::UI::__Selectable__SelectionState const Disabled;

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
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(12921)), TypeDefinitionIndex(TypeDefinitionIndex(13003)), TypeDefinitionIndex(TypeDefinitionIndex(13015)),
// TypeDefinitionIndex(TypeDefinitionIndex(13023)), TypeDefinitionIndex(TypeDefinitionIndex(13112))] Self: TypeDefinitionIndex(TypeDefinitionIndex(13017)) CS Name: ::UnityEngine.UI::Selectable*
class CORDL_TYPE Selectable : public ::UnityEngine::EventSystems::UIBehaviour {
public:
  // Declarations
  using SelectionState = ::UnityEngine::UI::__Selectable__SelectionState;

  using Transition = ::UnityEngine::UI::__Selectable__Transition;

  /// @brief Field m_EnableCalled, offset 0x18, size 0x1
  __declspec(property(get = __cordl_internal_get_m_EnableCalled, put = __cordl_internal_set_m_EnableCalled)) bool m_EnableCalled;

  /// @brief Field m_Navigation, offset 0x20, size 0x28
  __declspec(property(get = __cordl_internal_get_m_Navigation, put = __cordl_internal_set_m_Navigation))::UnityEngine::UI::Navigation m_Navigation;

  /// @brief Field m_Transition, offset 0x48, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Transition, put = __cordl_internal_set_m_Transition))::UnityEngine::UI::__Selectable__Transition m_Transition;

  /// @brief Field m_Colors, offset 0x4c, size 0x58
  __declspec(property(get = __cordl_internal_get_m_Colors, put = __cordl_internal_set_m_Colors))::UnityEngine::UI::ColorBlock m_Colors;

  /// @brief Field m_SpriteState, offset 0xa8, size 0x20
  __declspec(property(get = __cordl_internal_get_m_SpriteState, put = __cordl_internal_set_m_SpriteState))::UnityEngine::UI::SpriteState m_SpriteState;

  /// @brief Field m_AnimationTriggers, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_AnimationTriggers, put = __cordl_internal_set_m_AnimationTriggers))::UnityEngine::UI::AnimationTriggers* m_AnimationTriggers;

  /// @brief Field m_Interactable, offset 0xd0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_Interactable, put = __cordl_internal_set_m_Interactable)) bool m_Interactable;

  /// @brief Field m_TargetGraphic, offset 0xd8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_TargetGraphic, put = __cordl_internal_set_m_TargetGraphic))::UnityW<::UnityEngine::UI::Graphic> m_TargetGraphic;

  /// @brief Field m_GroupsAllowInteraction, offset 0xe0, size 0x1
  __declspec(property(get = __cordl_internal_get_m_GroupsAllowInteraction, put = __cordl_internal_set_m_GroupsAllowInteraction)) bool m_GroupsAllowInteraction;

  /// @brief Field m_CurrentIndex, offset 0xe4, size 0x4
  __declspec(property(get = __cordl_internal_get_m_CurrentIndex, put = __cordl_internal_set_m_CurrentIndex)) int32_t m_CurrentIndex;

  /// @brief Field <isPointerInside>k__BackingField, offset 0xe8, size 0x1
  __declspec(property(get = __cordl_internal_get__isPointerInside_k__BackingField, put = __cordl_internal_set__isPointerInside_k__BackingField)) bool _isPointerInside_k__BackingField;

  /// @brief Field <isPointerDown>k__BackingField, offset 0xe9, size 0x1
  __declspec(property(get = __cordl_internal_get__isPointerDown_k__BackingField, put = __cordl_internal_set__isPointerDown_k__BackingField)) bool _isPointerDown_k__BackingField;

  /// @brief Field <hasSelection>k__BackingField, offset 0xea, size 0x1
  __declspec(property(get = __cordl_internal_get__hasSelection_k__BackingField, put = __cordl_internal_set__hasSelection_k__BackingField)) bool _hasSelection_k__BackingField;

  /// @brief Field m_CanvasGroupCache, offset 0xf0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_CanvasGroupCache,
                      put = __cordl_internal_set_m_CanvasGroupCache))::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* m_CanvasGroupCache;

  /// @brief Field s_Selectables, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF_s_Selectables,
                             put = setStaticF_s_Selectables))::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> s_Selectables;

  /// @brief Field s_SelectableCount, offset 0xffffffff, size 0x4
  static __declspec(property(get = getStaticF_s_SelectableCount, put = setStaticF_s_SelectableCount)) int32_t s_SelectableCount;

  __declspec(property(get = get_navigation, put = set_navigation))::UnityEngine::UI::Navigation navigation;

  __declspec(property(get = get_transition, put = set_transition))::UnityEngine::UI::__Selectable__Transition transition;

  __declspec(property(get = get_colors, put = set_colors))::UnityEngine::UI::ColorBlock colors;

  __declspec(property(get = get_spriteState, put = set_spriteState))::UnityEngine::UI::SpriteState spriteState;

  __declspec(property(get = get_animationTriggers, put = set_animationTriggers))::UnityEngine::UI::AnimationTriggers* animationTriggers;

  __declspec(property(get = get_targetGraphic, put = set_targetGraphic))::UnityW<::UnityEngine::UI::Graphic> targetGraphic;

  __declspec(property(get = get_interactable, put = set_interactable)) bool interactable;

  __declspec(property(get = get_isPointerInside, put = set_isPointerInside)) bool isPointerInside;

  __declspec(property(get = get_isPointerDown, put = set_isPointerDown)) bool isPointerDown;

  __declspec(property(get = get_hasSelection, put = set_hasSelection)) bool hasSelection;

  __declspec(property(get = get_image, put = set_image))::UnityW<::UnityEngine::UI::Image> image;

  __declspec(property(get = get_animator))::UnityW<::UnityEngine::Animator> animator;

  __declspec(property(get = get_currentSelectionState))::UnityEngine::UI::__Selectable__SelectionState currentSelectionState;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr operator ::UnityEngine::EventSystems::IMoveHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IMoveHandler"
  constexpr ::UnityEngine::EventSystems::IMoveHandler* i___UnityEngine__EventSystems__IMoveHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerDownHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerDownHandler"
  constexpr ::UnityEngine::EventSystems::IPointerDownHandler* i___UnityEngine__EventSystems__IPointerDownHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerUpHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerUpHandler"
  constexpr ::UnityEngine::EventSystems::IPointerUpHandler* i___UnityEngine__EventSystems__IPointerUpHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerEnterHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerEnterHandler"
  constexpr ::UnityEngine::EventSystems::IPointerEnterHandler* i___UnityEngine__EventSystems__IPointerEnterHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerExitHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerExitHandler"
  constexpr ::UnityEngine::EventSystems::IPointerExitHandler* i___UnityEngine__EventSystems__IPointerExitHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr operator ::UnityEngine::EventSystems::ISelectHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISelectHandler"
  constexpr ::UnityEngine::EventSystems::ISelectHandler* i___UnityEngine__EventSystems__ISelectHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr operator ::UnityEngine::EventSystems::IDeselectHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IDeselectHandler"
  constexpr ::UnityEngine::EventSystems::IDeselectHandler* i___UnityEngine__EventSystems__IDeselectHandler() noexcept;

  constexpr bool& __cordl_internal_get_m_EnableCalled();

  constexpr bool const& __cordl_internal_get_m_EnableCalled() const;

  constexpr void __cordl_internal_set_m_EnableCalled(bool value);

  constexpr ::UnityEngine::UI::Navigation& __cordl_internal_get_m_Navigation();

  constexpr ::UnityEngine::UI::Navigation const& __cordl_internal_get_m_Navigation() const;

  constexpr void __cordl_internal_set_m_Navigation(::UnityEngine::UI::Navigation value);

  constexpr ::UnityEngine::UI::__Selectable__Transition& __cordl_internal_get_m_Transition();

  constexpr ::UnityEngine::UI::__Selectable__Transition const& __cordl_internal_get_m_Transition() const;

  constexpr void __cordl_internal_set_m_Transition(::UnityEngine::UI::__Selectable__Transition value);

  constexpr ::UnityEngine::UI::ColorBlock& __cordl_internal_get_m_Colors();

  constexpr ::UnityEngine::UI::ColorBlock const& __cordl_internal_get_m_Colors() const;

  constexpr void __cordl_internal_set_m_Colors(::UnityEngine::UI::ColorBlock value);

  constexpr ::UnityEngine::UI::SpriteState& __cordl_internal_get_m_SpriteState();

  constexpr ::UnityEngine::UI::SpriteState const& __cordl_internal_get_m_SpriteState() const;

  constexpr void __cordl_internal_set_m_SpriteState(::UnityEngine::UI::SpriteState value);

  constexpr ::UnityEngine::UI::AnimationTriggers*& __cordl_internal_get_m_AnimationTriggers();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::AnimationTriggers*> const& __cordl_internal_get_m_AnimationTriggers() const;

  constexpr void __cordl_internal_set_m_AnimationTriggers(::UnityEngine::UI::AnimationTriggers* value);

  constexpr bool& __cordl_internal_get_m_Interactable();

  constexpr bool const& __cordl_internal_get_m_Interactable() const;

  constexpr void __cordl_internal_set_m_Interactable(bool value);

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_m_TargetGraphic();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_m_TargetGraphic() const;

  constexpr void __cordl_internal_set_m_TargetGraphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr bool& __cordl_internal_get_m_GroupsAllowInteraction();

  constexpr bool const& __cordl_internal_get_m_GroupsAllowInteraction() const;

  constexpr void __cordl_internal_set_m_GroupsAllowInteraction(bool value);

  constexpr int32_t& __cordl_internal_get_m_CurrentIndex();

  constexpr int32_t const& __cordl_internal_get_m_CurrentIndex() const;

  constexpr void __cordl_internal_set_m_CurrentIndex(int32_t value);

  constexpr bool& __cordl_internal_get__isPointerInside_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPointerInside_k__BackingField() const;

  constexpr void __cordl_internal_set__isPointerInside_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__isPointerDown_k__BackingField();

  constexpr bool const& __cordl_internal_get__isPointerDown_k__BackingField() const;

  constexpr void __cordl_internal_set__isPointerDown_k__BackingField(bool value);

  constexpr bool& __cordl_internal_get__hasSelection_k__BackingField();

  constexpr bool const& __cordl_internal_get__hasSelection_k__BackingField() const;

  constexpr void __cordl_internal_set__hasSelection_k__BackingField(bool value);

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*& __cordl_internal_get_m_CanvasGroupCache();

  constexpr ::cordl_internals::to_const_pointer<::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>*> const& __cordl_internal_get_m_CanvasGroupCache() const;

  constexpr void __cordl_internal_set_m_CanvasGroupCache(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::CanvasGroup>>* value);

  static inline void setStaticF_s_Selectables(::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> value);

  static inline ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> getStaticF_s_Selectables();

  static inline void setStaticF_s_SelectableCount(int32_t value);

  static inline int32_t getStaticF_s_SelectableCount();

  /// @brief Method get_allSelectablesArray, addr 0x2da3bb0, size 0x9c, virtual false, abstract: false, final false
  static inline ::ArrayW<::UnityW<::UnityEngine::UI::Selectable>, ::Array<::UnityW<::UnityEngine::UI::Selectable>>*> get_allSelectablesArray();

  /// @brief Method get_allSelectableCount, addr 0x2da3c4c, size 0x58, virtual false, abstract: false, final false
  static inline int32_t get_allSelectableCount();

  /// @brief Method get_allSelectables, addr 0x2da3ca4, size 0xa4, virtual false, abstract: false, final false
  static inline ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::UI::Selectable>>* get_allSelectables();

  /// @brief Method AllSelectablesNoAlloc, addr 0x2da3d48, size 0xbc, virtual false, abstract: false, final false
  static inline int32_t AllSelectablesNoAlloc(::ArrayW<::UnityEngine::UI::Selectable*, ::Array<::UnityEngine::UI::Selectable*>*> selectables);

  /// @brief Method get_navigation, addr 0x2da3e04, size 0x14, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::Navigation get_navigation();

  /// @brief Method set_navigation, addr 0x2da3e18, size 0x88, virtual false, abstract: false, final false
  inline void set_navigation(::UnityEngine::UI::Navigation value);

  /// @brief Method get_transition, addr 0x2da3f04, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Selectable__Transition get_transition();

  /// @brief Method set_transition, addr 0x2da3f0c, size 0x74, virtual false, abstract: false, final false
  inline void set_transition(::UnityEngine::UI::__Selectable__Transition value);

  /// @brief Method get_colors, addr 0x2da3f80, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::ColorBlock get_colors();

  /// @brief Method set_colors, addr 0x2da3f90, size 0x98, virtual false, abstract: false, final false
  inline void set_colors(::UnityEngine::UI::ColorBlock value);

  /// @brief Method get_spriteState, addr 0x2da4028, size 0x10, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::SpriteState get_spriteState();

  /// @brief Method set_spriteState, addr 0x2da4038, size 0x7c, virtual false, abstract: false, final false
  inline void set_spriteState(::UnityEngine::UI::SpriteState value);

  /// @brief Method get_animationTriggers, addr 0x2da40b4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::AnimationTriggers* get_animationTriggers();

  /// @brief Method set_animationTriggers, addr 0x2da40bc, size 0x74, virtual false, abstract: false, final false
  inline void set_animationTriggers(::UnityEngine::UI::AnimationTriggers* value);

  /// @brief Method get_targetGraphic, addr 0x2da4130, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Graphic> get_targetGraphic();

  /// @brief Method set_targetGraphic, addr 0x2da4138, size 0x74, virtual false, abstract: false, final false
  inline void set_targetGraphic(::UnityEngine::UI::Graphic* value);

  /// @brief Method get_interactable, addr 0x2da41ac, size 0x8, virtual false, abstract: false, final false
  inline bool get_interactable();

  /// @brief Method set_interactable, addr 0x2da41b4, size 0x170, virtual false, abstract: false, final false
  inline void set_interactable(bool value);

  /// @brief Method get_isPointerInside, addr 0x2da4324, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPointerInside();

  /// @brief Method set_isPointerInside, addr 0x2da432c, size 0xc, virtual false, abstract: false, final false
  inline void set_isPointerInside(bool value);

  /// @brief Method get_isPointerDown, addr 0x2da4338, size 0x8, virtual false, abstract: false, final false
  inline bool get_isPointerDown();

  /// @brief Method set_isPointerDown, addr 0x2da4340, size 0xc, virtual false, abstract: false, final false
  inline void set_isPointerDown(bool value);

  /// @brief Method get_hasSelection, addr 0x2da434c, size 0x8, virtual false, abstract: false, final false
  inline bool get_hasSelection();

  /// @brief Method set_hasSelection, addr 0x2da4354, size 0xc, virtual false, abstract: false, final false
  inline void set_hasSelection(bool value);

  static inline ::UnityEngine::UI::Selectable* New_ctor();

  /// @brief Method .ctor, addr 0x2d9e4e0, size 0x118, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_image, addr 0x2da4360, size 0x7c, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Image> get_image();

  /// @brief Method set_image, addr 0x2da43dc, size 0x8, virtual false, abstract: false, final false
  inline void set_image(::UnityEngine::UI::Image* value);

  /// @brief Method get_animator, addr 0x2da43e4, size 0x48, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::Animator> get_animator();

  /// @brief Method Awake, addr 0x2da442c, size 0x8c, virtual true, abstract: false, final false
  inline void Awake();

  /// @brief Method OnCanvasGroupChanged, addr 0x2da44b8, size 0x1c0, virtual true, abstract: false, final false
  inline void OnCanvasGroupChanged();

  /// @brief Method IsInteractable, addr 0x2da4678, size 0x20, virtual true, abstract: false, final false
  inline bool IsInteractable();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2da4698, size 0x4, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnEnable, addr 0x2d9e914, size 0x2a8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnTransformParentChanged, addr 0x2da46ec, size 0x28, virtual true, abstract: false, final false
  inline void OnTransformParentChanged();

  /// @brief Method OnSetProperty, addr 0x2da3ea0, size 0x64, virtual false, abstract: false, final false
  inline void OnSetProperty();

  /// @brief Method OnDisable, addr 0x2d9ebdc, size 0x128, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnApplicationFocus, addr 0x2da4714, size 0x5c, virtual false, abstract: false, final false
  inline void OnApplicationFocus(bool hasFocus);

  /// @brief Method get_currentSelectionState, addr 0x2da469c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UI::__Selectable__SelectionState get_currentSelectionState();

  /// @brief Method InstantClearState, addr 0x2da47bc, size 0x70, virtual true, abstract: false, final false
  inline void InstantClearState();

  /// @brief Method DoStateTransition, addr 0x2da4b44, size 0x194, virtual true, abstract: false, final false
  inline void DoStateTransition(::UnityEngine::UI::__Selectable__SelectionState state, bool instant);

  /// @brief Method FindSelectable, addr 0x2da4cd8, size 0x4ac, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectable(::UnityEngine::Vector3 dir);

  /// @brief Method GetPointOnRectEdge, addr 0x2da5184, size 0x1a4, virtual false, abstract: false, final false
  static inline ::UnityEngine::Vector3 GetPointOnRectEdge(::UnityEngine::RectTransform* rect, ::UnityEngine::Vector2 dir);

  /// @brief Method Navigate, addr 0x2da5328, size 0xb8, virtual false, abstract: false, final false
  inline void Navigate(::UnityEngine::EventSystems::AxisEventData* eventData, ::UnityEngine::UI::Selectable* sel);

  /// @brief Method FindSelectableOnLeft, addr 0x2d9f944, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnLeft();

  /// @brief Method FindSelectableOnRight, addr 0x2d9fa40, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnRight();

  /// @brief Method FindSelectableOnUp, addr 0x2d9fb3c, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnUp();

  /// @brief Method FindSelectableOnDown, addr 0x2d9fc38, size 0xd8, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::Selectable> FindSelectableOnDown();

  /// @brief Method OnMove, addr 0x2d9f894, size 0x8c, virtual true, abstract: false, final false
  inline void OnMove(::UnityEngine::EventSystems::AxisEventData* eventData);

  /// @brief Method StartColorTween, addr 0x2da482c, size 0xe8, virtual false, abstract: false, final false
  inline void StartColorTween(::UnityEngine::Color targetColor, bool instant);

  /// @brief Method DoSpriteSwap, addr 0x2da4914, size 0xa8, virtual false, abstract: false, final false
  inline void DoSpriteSwap(::UnityEngine::Sprite* newSprite);

  /// @brief Method TriggerAnimation, addr 0x2da49bc, size 0x188, virtual false, abstract: false, final false
  inline void TriggerAnimation(::StringW triggername);

  /// @brief Method IsHighlighted, addr 0x2da53e0, size 0x5c, virtual false, abstract: false, final false
  inline bool IsHighlighted();

  /// @brief Method IsPressed, addr 0x2da4770, size 0x4c, virtual false, abstract: false, final false
  inline bool IsPressed();

  /// @brief Method EvaluateAndTransitionToSelectionState, addr 0x2da543c, size 0x98, virtual false, abstract: false, final false
  inline void EvaluateAndTransitionToSelectionState();

  /// @brief Method OnPointerDown, addr 0x2d9f36c, size 0x130, virtual true, abstract: false, final false
  inline void OnPointerDown(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerUp, addr 0x2d9f5a8, size 0x28, virtual true, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerEnter, addr 0x2da54d4, size 0xc, virtual true, abstract: false, final false
  inline void OnPointerEnter(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnPointerExit, addr 0x2da54e0, size 0x8, virtual true, abstract: false, final false
  inline void OnPointerExit(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSelect, addr 0x2da54e8, size 0xc, virtual true, abstract: false, final false
  inline void OnSelect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method OnDeselect, addr 0x2da54f4, size 0x8, virtual true, abstract: false, final false
  inline void OnDeselect(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method Select, addr 0x2da54fc, size 0x104, virtual true, abstract: false, final false
  inline void Select();

  // Ctor Parameters [CppParam { name: "", ty: "Selectable", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Selectable(Selectable&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Selectable", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Selectable(Selectable const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Selectable();

public:
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

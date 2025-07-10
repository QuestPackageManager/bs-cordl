#pragma once
// IWYU pragma private; include "UnityEngine/UI/Toggle.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/EventSystems/zzzz__IEventSystemHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__IPointerClickHandler_def.hpp"
#include "UnityEngine/EventSystems/zzzz__ISubmitHandler_def.hpp"
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__ICanvasElement_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Toggle)
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class PointerEventData;
}
namespace UnityEngine::UI {
struct CanvasUpdate;
}
namespace UnityEngine::UI {
class Graphic;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class Toggle_ToggleEvent;
}
namespace UnityEngine::UI {
struct Toggle_ToggleTransition;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
struct Toggle_ToggleTransition;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class Toggle_ToggleEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::Toggle_ToggleTransition);
MARK_REF_PTR_T(::UnityEngine::UI::Toggle);
MARK_REF_PTR_T(::UnityEngine::UI::Toggle_ToggleEvent);
// Dependencies
namespace UnityEngine::UI {
// Is value type: true
// CS Name: UnityEngine.UI.Toggle/ToggleTransition
struct CORDL_TYPE Toggle_ToggleTransition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct __Toggle_ToggleTransition_Unwrapped
  enum struct __Toggle_ToggleTransition_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Fade = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator __Toggle_ToggleTransition_Unwrapped() const noexcept {
    return static_cast<__Toggle_ToggleTransition_Unwrapped>(this->value__);
  }

  /// @brief Conversion into unwrapped enum value
  constexpr explicit operator int32_t() const noexcept {
    return static_cast<int32_t>(this->value__);
  }

  // Ctor Parameters []
  // @brief default ctor
  constexpr Toggle_ToggleTransition();

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr Toggle_ToggleTransition(int32_t value__) noexcept;

  /// @brief Field Fade value: I32(1)
  static ::UnityEngine::UI::Toggle_ToggleTransition const Fade;

  /// @brief Field None value: I32(0)
  static ::UnityEngine::UI::Toggle_ToggleTransition const None;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15145 };

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Toggle_ToggleTransition, value__) == 0x0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Toggle_ToggleTransition, 0x4>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.Events.UnityEvent`1<T0>
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Toggle/ToggleEvent
class CORDL_TYPE Toggle_ToggleEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
  // Declarations
  static inline ::UnityEngine::UI::Toggle_ToggleEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4acedec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Toggle_ToggleEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Toggle_ToggleEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Toggle_ToggleEvent(Toggle_ToggleEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Toggle_ToggleEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Toggle_ToggleEvent(Toggle_ToggleEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15146 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Toggle_ToggleEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Dependencies UnityEngine.EventSystems.IEventSystemHandler, UnityEngine.EventSystems.IPointerClickHandler, UnityEngine.EventSystems.ISubmitHandler, UnityEngine.UI.ICanvasElement,
// UnityEngine.UI.Selectable, UnityEngine.UI.Toggle::ToggleTransition
namespace UnityEngine::UI {
// Is value type: false
// CS Name: UnityEngine.UI.Toggle
class CORDL_TYPE Toggle : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using ToggleEvent = ::UnityEngine::UI::Toggle_ToggleEvent;

  using ToggleTransition = ::UnityEngine::UI::Toggle_ToggleTransition;

  /// @brief Field graphic, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_graphic, put = __cordl_internal_set_graphic)) ::UnityW<::UnityEngine::UI::Graphic> graphic;

  __declspec(property(get = get_group, put = set_group)) ::UnityW<::UnityEngine::UI::ToggleGroup> group;

  __declspec(property(get = get_isOn, put = set_isOn)) bool isOn;

  /// @brief Field m_Group, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Group, put = __cordl_internal_set_m_Group)) ::UnityW<::UnityEngine::UI::ToggleGroup> m_Group;

  /// @brief Field m_IsOn, offset 0x120, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOn, put = __cordl_internal_set_m_IsOn)) bool m_IsOn;

  /// @brief Field onValueChanged, offset 0x118, size 0x8
  __declspec(property(get = __cordl_internal_get_onValueChanged, put = __cordl_internal_set_onValueChanged)) ::UnityEngine::UI::Toggle_ToggleEvent* onValueChanged;

  /// @brief Field toggleTransition, offset 0x100, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleTransition, put = __cordl_internal_set_toggleTransition)) ::UnityEngine::UI::Toggle_ToggleTransition toggleTransition;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Method GraphicUpdateComplete, addr 0x4acee3c, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method InternalToggle, addr 0x4acf960, size 0x54, virtual false, abstract: false, final false
  inline void InternalToggle();

  /// @brief Method LayoutComplete, addr 0x4acee38, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  static inline ::UnityEngine::UI::Toggle* New_ctor();

  /// @brief Method OnDestroy, addr 0x4acee40, size 0x80, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x4acf2fc, size 0x124, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method OnDisable, addr 0x4acf2dc, size 0x20, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnEnable, addr 0x4acf2b0, size 0x2c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnPointerClick, addr 0x4acf9b4, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x4acf9d8, size 0x4, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method PlayEffect, addr 0x4acec9c, size 0xc4, virtual false, abstract: false, final false
  inline void PlayEffect(bool instant);

  /// @brief Method Rebuild, addr 0x4acee34, size 0x4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method Set, addr 0x4acf420, size 0x174, virtual false, abstract: false, final false
  inline void Set(bool value, bool sendCallback);

  /// @brief Method SetIsOnWithoutNotify, addr 0x4acf814, size 0xc, virtual false, abstract: false, final false
  inline void SetIsOnWithoutNotify(bool value);

  /// @brief Method SetToggleGroup, addr 0x4aceb60, size 0x13c, virtual false, abstract: false, final false
  inline void SetToggleGroup(::UnityEngine::UI::ToggleGroup* newGroup, bool setMemberValue);

  /// @brief Method Start, addr 0x4acf958, size 0x8, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x4acf9dc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_graphic() const;

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_graphic();

  constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& __cordl_internal_get_m_Group() const;

  constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& __cordl_internal_get_m_Group();

  constexpr bool const& __cordl_internal_get_m_IsOn() const;

  constexpr bool& __cordl_internal_get_m_IsOn();

  constexpr ::UnityEngine::UI::Toggle_ToggleEvent* const& __cordl_internal_get_onValueChanged() const;

  constexpr ::UnityEngine::UI::Toggle_ToggleEvent*& __cordl_internal_get_onValueChanged();

  constexpr ::UnityEngine::UI::Toggle_ToggleTransition const& __cordl_internal_get_toggleTransition() const;

  constexpr ::UnityEngine::UI::Toggle_ToggleTransition& __cordl_internal_get_toggleTransition();

  constexpr void __cordl_internal_set_graphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr void __cordl_internal_set_m_Group(::UnityW<::UnityEngine::UI::ToggleGroup> value);

  constexpr void __cordl_internal_set_m_IsOn(bool value);

  constexpr void __cordl_internal_set_onValueChanged(::UnityEngine::UI::Toggle_ToggleEvent* value);

  constexpr void __cordl_internal_set_toggleTransition(::UnityEngine::UI::Toggle_ToggleTransition value);

  /// @brief Method .ctor, addr 0x4aced60, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_group, addr 0x4aceb38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::ToggleGroup> get_group();

  /// @brief Method get_isOn, addr 0x4acf800, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOn();

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  /// @brief Method set_group, addr 0x4aceb40, size 0x20, virtual false, abstract: false, final false
  inline void set_group(::UnityEngine::UI::ToggleGroup* value);

  /// @brief Method set_isOn, addr 0x4acf808, size 0xc, virtual false, abstract: false, final false
  inline void set_isOn(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Toggle();

public:
  // Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Toggle(Toggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Toggle(Toggle const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 15147 };

  /// @brief Field toggleTransition, offset: 0x100, size: 0x4, def value: None
  ::UnityEngine::UI::Toggle_ToggleTransition ___toggleTransition;

  /// @brief Field graphic, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___graphic;

  /// @brief Field m_Group, offset: 0x110, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::ToggleGroup> ___m_Group;

  /// @brief Field onValueChanged, offset: 0x118, size: 0x8, def value: None
  ::UnityEngine::UI::Toggle_ToggleEvent* ___onValueChanged;

  /// @brief Field m_IsOn, offset: 0x120, size: 0x1, def value: None
  bool ___m_IsOn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UI::Toggle, ___toggleTransition) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___graphic) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___m_Group) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___onValueChanged) == 0x118, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___m_IsOn) == 0x120, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Toggle, 0x128>, "Size mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Toggle_ToggleTransition, "UnityEngine.UI", "Toggle/ToggleTransition");
NEED_NO_BOX(::UnityEngine::UI::Toggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Toggle*, "UnityEngine.UI", "Toggle");
NEED_NO_BOX(::UnityEngine::UI::Toggle_ToggleEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Toggle_ToggleEvent*, "UnityEngine.UI", "Toggle/ToggleEvent");

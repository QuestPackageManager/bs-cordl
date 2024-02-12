#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Events/zzzz__UnityEvent_1_def.hpp"
#include "UnityEngine/UI/zzzz__Selectable_def.hpp"
#include "UnityEngine/UI/zzzz__Toggle_def.hpp"
#include <cstddef>
#include <cstdint>
CORDL_MODULE_EXPORT(Toggle)
namespace UnityEngine::EventSystems {
class BaseEventData;
}
namespace UnityEngine::EventSystems {
class IEventSystemHandler;
}
namespace UnityEngine::EventSystems {
class IPointerClickHandler;
}
namespace UnityEngine::EventSystems {
class ISubmitHandler;
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
class ICanvasElement;
}
namespace UnityEngine::UI {
class ToggleGroup;
}
namespace UnityEngine::UI {
class __Toggle__ToggleEvent;
}
namespace UnityEngine::UI {
struct __Toggle__ToggleTransition;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::UI {
struct __Toggle__ToggleTransition;
}
namespace UnityEngine::UI {
class Toggle;
}
namespace UnityEngine::UI {
class __Toggle__ToggleEvent;
}
// Write type traits
MARK_VAL_T(::UnityEngine::UI::__Toggle__ToggleTransition);
MARK_REF_PTR_T(::UnityEngine::UI::Toggle);
MARK_REF_PTR_T(::UnityEngine::UI::__Toggle__ToggleEvent);
// Type: ::ToggleTransition
// SizeInfo { instance_size: 4, native_size: 4, calculated_instance_size: 4, calculated_native_size: 20, minimum_alignment: 4, natural_alignment: 4, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: true
// Dependencies: []
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13027))
// CS Name: ::Toggle::ToggleTransition
struct CORDL_TYPE __Toggle__ToggleTransition {
public:
  // Declarations
  using __CORDL_BACKING_ENUM_TYPE = int32_t;

  /// @brief Nested struct ____Toggle__ToggleTransition_Unwrapped
  enum struct ____Toggle__ToggleTransition_Unwrapped : int32_t {
    __E_None = static_cast<int32_t>(0x0),
    __E_Fade = static_cast<int32_t>(0x1),
  };

  /// @brief Conversion into unwrapped enum value
  constexpr operator ____Toggle__ToggleTransition_Unwrapped() const noexcept {
    return static_cast<____Toggle__ToggleTransition_Unwrapped>(this->value__);
  }

  // Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
  constexpr __Toggle__ToggleTransition(int32_t value__) noexcept;

  // Ctor Parameters []
  // @brief default ctor
  constexpr __Toggle__ToggleTransition();

  /// @brief Field value__, offset: 0x0, size: 0x4, def value: None
  int32_t value__;

  /// @brief The size of the true value type
  static constexpr auto __IL2CPP_VALUE_TYPE_SIZE{ 0x4 };

  /// @brief Field None value: static_cast<int32_t>(0x0)
  static ::UnityEngine::UI::__Toggle__ToggleTransition const None;

  /// @brief Field Fade value: static_cast<int32_t>(0x1)
  static ::UnityEngine::UI::__Toggle__ToggleTransition const Fade;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = true;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Toggle__ToggleTransition, 0x4>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::__Toggle__ToggleTransition, value__) == 0x0, "Offset mismatch!");

} // namespace UnityEngine::UI
// Type: ::ToggleEvent
// SizeInfo { instance_size: 48, native_size: -1, calculated_instance_size: 48, calculated_native_size: 48, minimum_alignment: 8, natural_alignment: 0, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(9234)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(9234), inst: 77 })]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13028))
// CS Name: ::Toggle::ToggleEvent*
class CORDL_TYPE __Toggle__ToggleEvent : public ::UnityEngine::Events::UnityEvent_1<bool> {
public:
  // Declarations
  static inline ::UnityEngine::UI::__Toggle__ToggleEvent* New_ctor();

  /// @brief Method .ctor, addr 0x2da9c08, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__ToggleEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __Toggle__ToggleEvent(__Toggle__ToggleEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__Toggle__ToggleEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __Toggle__ToggleEvent(__Toggle__ToggleEvent const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __Toggle__ToggleEvent();

public:
  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::__Toggle__ToggleEvent, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UI
// Type: UnityEngine.UI::Toggle
// SizeInfo { instance_size: 288, native_size: -1, calculated_instance_size: 288, calculated_native_size: 281, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UI {
// Is value type: false
// Dependencies: [TypeDefinitionIndex(TypeDefinitionIndex(13017)), TypeDefinitionIndex(TypeDefinitionIndex(13027))]
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13029))
// CS Name: ::UnityEngine.UI::Toggle*
class CORDL_TYPE Toggle : public ::UnityEngine::UI::Selectable {
public:
  // Declarations
  using ToggleEvent = ::UnityEngine::UI::__Toggle__ToggleEvent;

  using ToggleTransition = ::UnityEngine::UI::__Toggle__ToggleTransition;

  /// @brief Field toggleTransition, offset 0xf8, size 0x4
  __declspec(property(get = __cordl_internal_get_toggleTransition, put = __cordl_internal_set_toggleTransition))::UnityEngine::UI::__Toggle__ToggleTransition toggleTransition;

  /// @brief Field graphic, offset 0x100, size 0x8
  __declspec(property(get = __cordl_internal_get_graphic, put = __cordl_internal_set_graphic))::UnityW<::UnityEngine::UI::Graphic> graphic;

  /// @brief Field m_Group, offset 0x108, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Group, put = __cordl_internal_set_m_Group))::UnityW<::UnityEngine::UI::ToggleGroup> m_Group;

  /// @brief Field onValueChanged, offset 0x110, size 0x8
  __declspec(property(get = __cordl_internal_get_onValueChanged, put = __cordl_internal_set_onValueChanged))::UnityEngine::UI::__Toggle__ToggleEvent* onValueChanged;

  /// @brief Field m_IsOn, offset 0x118, size 0x1
  __declspec(property(get = __cordl_internal_get_m_IsOn, put = __cordl_internal_set_m_IsOn)) bool m_IsOn;

  __declspec(property(get = get_group, put = set_group))::UnityW<::UnityEngine::UI::ToggleGroup> group;

  __declspec(property(get = get_isOn, put = set_isOn)) bool isOn;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr operator ::UnityEngine::EventSystems::IPointerClickHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IPointerClickHandler"
  constexpr ::UnityEngine::EventSystems::IPointerClickHandler* i___UnityEngine__EventSystems__IPointerClickHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr operator ::UnityEngine::EventSystems::IEventSystemHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::IEventSystemHandler"
  constexpr ::UnityEngine::EventSystems::IEventSystemHandler* i___UnityEngine__EventSystems__IEventSystemHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr operator ::UnityEngine::EventSystems::ISubmitHandler*() noexcept;

  /// @brief Convert to "::UnityEngine::EventSystems::ISubmitHandler"
  constexpr ::UnityEngine::EventSystems::ISubmitHandler* i___UnityEngine__EventSystems__ISubmitHandler() noexcept;

  /// @brief Convert operator to "::UnityEngine::UI::ICanvasElement"
  constexpr operator ::UnityEngine::UI::ICanvasElement*() noexcept;

  /// @brief Convert to "::UnityEngine::UI::ICanvasElement"
  constexpr ::UnityEngine::UI::ICanvasElement* i___UnityEngine__UI__ICanvasElement() noexcept;

  constexpr ::UnityEngine::UI::__Toggle__ToggleTransition& __cordl_internal_get_toggleTransition();

  constexpr ::UnityEngine::UI::__Toggle__ToggleTransition const& __cordl_internal_get_toggleTransition() const;

  constexpr void __cordl_internal_set_toggleTransition(::UnityEngine::UI::__Toggle__ToggleTransition value);

  constexpr ::UnityW<::UnityEngine::UI::Graphic>& __cordl_internal_get_graphic();

  constexpr ::UnityW<::UnityEngine::UI::Graphic> const& __cordl_internal_get_graphic() const;

  constexpr void __cordl_internal_set_graphic(::UnityW<::UnityEngine::UI::Graphic> value);

  constexpr ::UnityW<::UnityEngine::UI::ToggleGroup>& __cordl_internal_get_m_Group();

  constexpr ::UnityW<::UnityEngine::UI::ToggleGroup> const& __cordl_internal_get_m_Group() const;

  constexpr void __cordl_internal_set_m_Group(::UnityW<::UnityEngine::UI::ToggleGroup> value);

  constexpr ::UnityEngine::UI::__Toggle__ToggleEvent*& __cordl_internal_get_onValueChanged();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UI::__Toggle__ToggleEvent*> const& __cordl_internal_get_onValueChanged() const;

  constexpr void __cordl_internal_set_onValueChanged(::UnityEngine::UI::__Toggle__ToggleEvent* value);

  constexpr bool& __cordl_internal_get_m_IsOn();

  constexpr bool const& __cordl_internal_get_m_IsOn() const;

  constexpr void __cordl_internal_set_m_IsOn(bool value);

  /// @brief Method get_group, addr 0x2da9954, size 0x8, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::UI::ToggleGroup> get_group();

  /// @brief Method set_group, addr 0x2da995c, size 0x20, virtual false, abstract: false, final false
  inline void set_group(::UnityEngine::UI::ToggleGroup* value);

  static inline ::UnityEngine::UI::Toggle* New_ctor();

  /// @brief Method .ctor, addr 0x2da9b7c, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Rebuild, addr 0x2da9c50, size 0x4, virtual true, abstract: false, final false
  inline void Rebuild(::UnityEngine::UI::CanvasUpdate executing);

  /// @brief Method LayoutComplete, addr 0x2da9c54, size 0x4, virtual true, abstract: false, final false
  inline void LayoutComplete();

  /// @brief Method GraphicUpdateComplete, addr 0x2da9c58, size 0x4, virtual true, abstract: false, final false
  inline void GraphicUpdateComplete();

  /// @brief Method OnDestroy, addr 0x2da9c5c, size 0x80, virtual true, abstract: false, final false
  inline void OnDestroy();

  /// @brief Method OnEnable, addr 0x2daa0c8, size 0x2c, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method OnDisable, addr 0x2daa0f4, size 0x20, virtual true, abstract: false, final false
  inline void OnDisable();

  /// @brief Method OnDidApplyAnimationProperties, addr 0x2daa114, size 0x124, virtual true, abstract: false, final false
  inline void OnDidApplyAnimationProperties();

  /// @brief Method SetToggleGroup, addr 0x2da997c, size 0x13c, virtual false, abstract: false, final false
  inline void SetToggleGroup(::UnityEngine::UI::ToggleGroup* newGroup, bool setMemberValue);

  /// @brief Method get_isOn, addr 0x2daa61c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isOn();

  /// @brief Method set_isOn, addr 0x2daa624, size 0xc, virtual false, abstract: false, final false
  inline void set_isOn(bool value);

  /// @brief Method SetIsOnWithoutNotify, addr 0x2daa630, size 0xc, virtual false, abstract: false, final false
  inline void SetIsOnWithoutNotify(bool value);

  /// @brief Method Set, addr 0x2daa238, size 0x174, virtual false, abstract: false, final false
  inline void Set(bool value, bool sendCallback);

  /// @brief Method PlayEffect, addr 0x2da9ab8, size 0xc4, virtual false, abstract: false, final false
  inline void PlayEffect(bool instant);

  /// @brief Method Start, addr 0x2daa778, size 0x8, virtual true, abstract: false, final false
  inline void Start();

  /// @brief Method InternalToggle, addr 0x2daa780, size 0x54, virtual false, abstract: false, final false
  inline void InternalToggle();

  /// @brief Method OnPointerClick, addr 0x2daa7d4, size 0x24, virtual true, abstract: false, final false
  inline void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData);

  /// @brief Method OnSubmit, addr 0x2daa7f8, size 0x4, virtual true, abstract: false, final false
  inline void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData);

  /// @brief Method UnityEngine.UI.ICanvasElement.get_transform, addr 0x2daa7fc, size 0x8, virtual true, abstract: false, final true
  inline ::UnityW<::UnityEngine::Transform> UnityEngine_UI_ICanvasElement_get_transform();

  // Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  Toggle(Toggle&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "Toggle", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  Toggle(Toggle const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr Toggle();

public:
  /// @brief Field toggleTransition, offset: 0xf8, size: 0x4, def value: None
  ::UnityEngine::UI::__Toggle__ToggleTransition ___toggleTransition;

  /// @brief Field graphic, offset: 0x100, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Graphic> ___graphic;

  /// @brief Field m_Group, offset: 0x108, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::ToggleGroup> ___m_Group;

  /// @brief Field onValueChanged, offset: 0x110, size: 0x8, def value: None
  ::UnityEngine::UI::__Toggle__ToggleEvent* ___onValueChanged;

  /// @brief Field m_IsOn, offset: 0x118, size: 0x1, def value: None
  bool ___m_IsOn;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UI::Toggle, 0x120>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___toggleTransition) == 0xf8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___graphic) == 0x100, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___m_Group) == 0x108, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___onValueChanged) == 0x110, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UI::Toggle, ___m_IsOn) == 0x118, "Offset mismatch!");

} // namespace UnityEngine::UI
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Toggle__ToggleTransition, "UnityEngine.UI", "Toggle/ToggleTransition");
NEED_NO_BOX(::UnityEngine::UI::Toggle);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::Toggle*, "UnityEngine.UI", "Toggle");
NEED_NO_BOX(::UnityEngine::UI::__Toggle__ToggleEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UI::__Toggle__ToggleEvent*, "UnityEngine.UI", "Toggle/ToggleEvent");

#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ContextualMenuPopulateEvent)
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
namespace UnityEngine::UIElements {
class DropdownMenu;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextualMenuPopulateEvent);
// Type: UnityEngine.UIElements::ContextualMenuPopulateEvent
// SizeInfo { instance_size: 200, native_size: -1, calculated_instance_size: 200, calculated_native_size: 200, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ContextualMenuPopulateEvent*
class CORDL_TYPE ContextualMenuPopulateEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*> {
public:
  // Declarations
  /// @brief Field <menu>k__BackingField, offset 0xb0, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField))::UnityEngine::UIElements::DropdownMenu* _menu_k__BackingField;

  /// @brief Field <triggerEvent>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerEvent_k__BackingField,
                      put = __cordl_internal_set__triggerEvent_k__BackingField))::UnityEngine::UIElements::EventBase* _triggerEvent_k__BackingField;

  /// @brief Field m_ContextualMenuManager, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContextualMenuManager, put = __cordl_internal_set_m_ContextualMenuManager))::UnityEngine::UIElements::ContextualMenuManager* m_ContextualMenuManager;

  __declspec(property(get = get_menu, put = set_menu))::UnityEngine::UIElements::DropdownMenu* menu;

  __declspec(property(get = get_triggerEvent, put = set_triggerEvent))::UnityEngine::UIElements::EventBase* triggerEvent;

  /// @brief Method Init, addr 0x339de9c, size 0x70, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x339df0c, size 0x34, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x339dfb0, size 0x90, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  constexpr ::UnityEngine::UIElements::DropdownMenu*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::DropdownMenu*> const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::EventBase*& __cordl_internal_get__triggerEvent_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventBase*> const& __cordl_internal_get__triggerEvent_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ContextualMenuManager*& __cordl_internal_get_m_ContextualMenuManager();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ContextualMenuManager*> const& __cordl_internal_get_m_ContextualMenuManager() const;

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::UIElements::DropdownMenu* value);

  constexpr void __cordl_internal_set__triggerEvent_k__BackingField(::UnityEngine::UIElements::EventBase* value);

  constexpr void __cordl_internal_set_m_ContextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* value);

  /// @brief Method .ctor, addr 0x339df40, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_menu, addr 0x339de7c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenu* get_menu();

  /// @brief Method get_triggerEvent, addr 0x339de8c, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* get_triggerEvent();

  /// @brief Method set_menu, addr 0x339de84, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::UIElements::DropdownMenu* value);

  /// @brief Method set_triggerEvent, addr 0x339de94, size 0x8, virtual false, abstract: false, final false
  inline void set_triggerEvent(::UnityEngine::UIElements::EventBase* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextualMenuPopulateEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextualMenuPopulateEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextualMenuPopulateEvent(ContextualMenuPopulateEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextualMenuPopulateEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextualMenuPopulateEvent(ContextualMenuPopulateEvent const&) = delete;

  /// @brief Field <menu>k__BackingField, offset: 0xb0, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownMenu* ____menu_k__BackingField;

  /// @brief Field <triggerEvent>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventBase* ____triggerEvent_k__BackingField;

  /// @brief Field m_ContextualMenuManager, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::ContextualMenuManager* ___m_ContextualMenuManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextualMenuPopulateEvent, 0xc8>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ____menu_k__BackingField) == 0xb0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ____triggerEvent_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ___m_ContextualMenuManager) == 0xc0, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuPopulateEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuPopulateEvent*, "UnityEngine.UIElements", "ContextualMenuPopulateEvent");

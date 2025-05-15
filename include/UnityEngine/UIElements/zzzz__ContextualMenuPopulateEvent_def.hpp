#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextualMenuPopulateEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ContextualMenuPopulateEvent)
namespace UnityEngine::UIElements {
class ContextualMenuManager;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent___c;
}
namespace UnityEngine::UIElements {
class DropdownMenu;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IEventHandler;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextualMenuPopulateEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextualMenuPopulateEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ContextualMenuPopulateEvent/<>c
class CORDL_TYPE ContextualMenuPopulateEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c* __9;

  static inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2fa84, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a2fa7c, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::ContextualMenuPopulateEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextualMenuPopulateEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextualMenuPopulateEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextualMenuPopulateEvent___c(ContextualMenuPopulateEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextualMenuPopulateEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextualMenuPopulateEvent___c(ContextualMenuPopulateEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5880 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextualMenuPopulateEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ContextualMenuPopulateEvent
class CORDL_TYPE ContextualMenuPopulateEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::ContextualMenuPopulateEvent___c;

  /// @brief Field <menu>k__BackingField, offset 0xb8, size 0x8
  __declspec(property(get = __cordl_internal_get__menu_k__BackingField, put = __cordl_internal_set__menu_k__BackingField)) ::UnityEngine::UIElements::DropdownMenu* _menu_k__BackingField;

  /// @brief Field <triggerEvent>k__BackingField, offset 0xc0, size 0x8
  __declspec(property(get = __cordl_internal_get__triggerEvent_k__BackingField,
                      put = __cordl_internal_set__triggerEvent_k__BackingField)) ::UnityEngine::UIElements::EventBase* _triggerEvent_k__BackingField;

  /// @brief Field m_ContextualMenuManager, offset 0xc8, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ContextualMenuManager,
                      put = __cordl_internal_set_m_ContextualMenuManager)) ::UnityEngine::UIElements::ContextualMenuManager* m_ContextualMenuManager;

  __declspec(property(get = get_menu, put = set_menu)) ::UnityEngine::UIElements::DropdownMenu* menu;

  __declspec(property(get = get_triggerEvent, put = set_triggerEvent)) ::UnityEngine::UIElements::EventBase* triggerEvent;

  /// @brief Method GetPooled, addr 0x4a2f110, size 0x770, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* GetPooled(::UnityEngine::UIElements::EventBase* triggerEvent, ::UnityEngine::UIElements::DropdownMenu* menu,
                                                                                  ::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::ContextualMenuManager* menuManager);

  /// @brief Method Init, addr 0x4a2f880, size 0x70, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a2f8f0, size 0x34, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x4a2f994, size 0x8c, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  constexpr ::UnityEngine::UIElements::DropdownMenu* const& __cordl_internal_get__menu_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::DropdownMenu*& __cordl_internal_get__menu_k__BackingField();

  constexpr ::UnityEngine::UIElements::EventBase* const& __cordl_internal_get__triggerEvent_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::EventBase*& __cordl_internal_get__triggerEvent_k__BackingField();

  constexpr ::UnityEngine::UIElements::ContextualMenuManager* const& __cordl_internal_get_m_ContextualMenuManager() const;

  constexpr ::UnityEngine::UIElements::ContextualMenuManager*& __cordl_internal_get_m_ContextualMenuManager();

  constexpr void __cordl_internal_set__menu_k__BackingField(::UnityEngine::UIElements::DropdownMenu* value);

  constexpr void __cordl_internal_set__triggerEvent_k__BackingField(::UnityEngine::UIElements::EventBase* value);

  constexpr void __cordl_internal_set_m_ContextualMenuManager(::UnityEngine::UIElements::ContextualMenuManager* value);

  /// @brief Method .ctor, addr 0x4a2f924, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_menu, addr 0x4a2f0f0, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenu* get_menu();

  /// @brief Method get_triggerEvent, addr 0x4a2f100, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* get_triggerEvent();

  /// @brief Method set_menu, addr 0x4a2f0f8, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::UIElements::DropdownMenu* value);

  /// @brief Method set_triggerEvent, addr 0x4a2f108, size 0x8, virtual false, abstract: false, final false
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

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5881 };

  /// @brief Field <menu>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownMenu* ____menu_k__BackingField;

  /// @brief Field <triggerEvent>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventBase* ____triggerEvent_k__BackingField;

  /// @brief Field m_ContextualMenuManager, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ContextualMenuManager* ___m_ContextualMenuManager;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ____menu_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ____triggerEvent_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ___m_ContextualMenuManager) == 0xc8, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextualMenuPopulateEvent, 0xd0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuPopulateEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuPopulateEvent*, "UnityEngine.UIElements", "ContextualMenuPopulateEvent");
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuPopulateEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuPopulateEvent___c*, "UnityEngine.UIElements", "ContextualMenuPopulateEvent/<>c");

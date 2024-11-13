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
namespace UnityEngine::UIElements {
class __ContextualMenuPopulateEvent____c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
class __ContextualMenuPopulateEvent____c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextualMenuPopulateEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c);
// Type: ::<>c
// SizeInfo { instance_size: 16, native_size: -1, calculated_instance_size: 16, calculated_native_size: 16, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::ContextualMenuPopulateEvent::<>c*
class CORDL_TYPE __ContextualMenuPopulateEvent____c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  static __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c* __9;

  static inline ::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x49c8648, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x49c8640, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr __ContextualMenuPopulateEvent____c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "__ContextualMenuPopulateEvent____c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  __ContextualMenuPopulateEvent____c(__ContextualMenuPopulateEvent____c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "__ContextualMenuPopulateEvent____c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  __ContextualMenuPopulateEvent____c(__ContextualMenuPopulateEvent____c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5850 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Type: UnityEngine.UIElements::ContextualMenuPopulateEvent
// SizeInfo { instance_size: 208, native_size: -1, calculated_instance_size: 208, calculated_native_size: 208, minimum_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::ContextualMenuPopulateEvent*
class CORDL_TYPE ContextualMenuPopulateEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c;

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

  /// @brief Method GetPooled, addr 0x49c7cd4, size 0x770, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* GetPooled(::UnityEngine::UIElements::EventBase* triggerEvent, ::UnityEngine::UIElements::DropdownMenu* menu,
                                                                                  ::UnityEngine::UIElements::IEventHandler* target, ::UnityEngine::UIElements::ContextualMenuManager* menuManager);

  /// @brief Method Init, addr 0x49c8444, size 0x70, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x49c84b4, size 0x34, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::ContextualMenuPopulateEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x49c8558, size 0x8c, virtual true, abstract: false, final false
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

  /// @brief Method .ctor, addr 0x49c84e8, size 0x70, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method get_menu, addr 0x49c7cb4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DropdownMenu* get_menu();

  /// @brief Method get_triggerEvent, addr 0x49c7cc4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::EventBase* get_triggerEvent();

  /// @brief Method set_menu, addr 0x49c7cbc, size 0x8, virtual false, abstract: false, final false
  inline void set_menu(::UnityEngine::UIElements::DropdownMenu* value);

  /// @brief Method set_triggerEvent, addr 0x49c7ccc, size 0x8, virtual false, abstract: false, final false
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

  /// @brief Field <menu>k__BackingField, offset: 0xb8, size: 0x8, def value: None
  ::UnityEngine::UIElements::DropdownMenu* ____menu_k__BackingField;

  /// @brief Field <triggerEvent>k__BackingField, offset: 0xc0, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventBase* ____triggerEvent_k__BackingField;

  /// @brief Field m_ContextualMenuManager, offset: 0xc8, size: 0x8, def value: None
  ::UnityEngine::UIElements::ContextualMenuManager* ___m_ContextualMenuManager;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5851 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextualMenuPopulateEvent, 0xd0>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ____menu_k__BackingField) == 0xb8, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ____triggerEvent_k__BackingField) == 0xc0, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuPopulateEvent, ___m_ContextualMenuManager) == 0xc8, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuPopulateEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuPopulateEvent*, "UnityEngine.UIElements", "ContextualMenuPopulateEvent");
NEED_NO_BOX(::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::__ContextualMenuPopulateEvent____c*, "UnityEngine.UIElements", "ContextualMenuPopulateEvent/<>c");

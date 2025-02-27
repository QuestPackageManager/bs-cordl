#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextualMenuManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__MouseManipulator_def.hpp"
CORDL_MODULE_EXPORT(ContextualMenuManipulator)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
class ContextualMenuPopulateEvent;
}
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine::UIElements {
class KeyUpEvent;
}
namespace UnityEngine::UIElements {
class MouseDownEvent;
}
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuManipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextualMenuManipulator);
// Dependencies UnityEngine.UIElements.MouseManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ContextualMenuManipulator
class CORDL_TYPE ContextualMenuManipulator : public ::UnityEngine::UIElements::MouseManipulator {
public:
  // Declarations
  /// @brief Field m_MenuBuilder, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MenuBuilder, put = __cordl_internal_set_m_MenuBuilder)) ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* m_MenuBuilder;

  /// @brief Method DoDisplayMenu, addr 0x498cd00, size 0x9c, virtual false, abstract: false, final false
  inline void DoDisplayMenu(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::ContextualMenuManipulator* New_ctor(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* menuBuilder);

  /// @brief Method OnContextualMenuEvent, addr 0x498cf00, size 0x1c, virtual false, abstract: false, final false
  inline void OnContextualMenuEvent(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt);

  /// @brief Method OnKeyUpEvent, addr 0x498ce9c, size 0x64, virtual false, abstract: false, final false
  inline void OnKeyUpEvent(::UnityEngine::UIElements::KeyUpEvent* evt);

  /// @brief Method OnMouseDownEventOSX, addr 0x498cd9c, size 0x88, virtual false, abstract: false, final false
  inline void OnMouseDownEventOSX(::UnityEngine::UIElements::MouseDownEvent* evt);

  /// @brief Method OnMouseUpDownEvent, addr 0x498cc60, size 0xa0, virtual false, abstract: false, final false
  inline void OnMouseUpDownEvent(::UnityEngine::UIElements::IMouseEvent* evt);

  /// @brief Method OnMouseUpEventOSX, addr 0x498ce24, size 0x78, virtual false, abstract: false, final false
  inline void OnMouseUpEventOSX(::UnityEngine::UIElements::MouseUpEvent* evt);

  /// @brief Method RegisterCallbacksOnTarget, addr 0x498c6d0, size 0x2c8, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x498c998, size 0x2c8, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  constexpr ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* const& __cordl_internal_get_m_MenuBuilder() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*& __cordl_internal_get_m_MenuBuilder();

  constexpr void __cordl_internal_set_m_MenuBuilder(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* value);

  /// @brief Method .ctor, addr 0x498c554, size 0x17c, virtual false, abstract: false, final false
  inline void _ctor(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* menuBuilder);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextualMenuManipulator();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManipulator", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextualMenuManipulator(ContextualMenuManipulator&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextualMenuManipulator", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextualMenuManipulator(ContextualMenuManipulator const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5495 };

  /// @brief Field m_MenuBuilder, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* ___m_MenuBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuManipulator, ___m_MenuBuilder) == 0x30, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextualMenuManipulator, 0x38>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuManipulator*, "UnityEngine.UIElements", "ContextualMenuManipulator");

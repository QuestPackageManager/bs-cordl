#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextualMenuManipulator.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__PointerManipulator_def.hpp"
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
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class KeyUpEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextualMenuManipulator;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextualMenuManipulator);
// Dependencies UnityEngine.UIElements.PointerManipulator
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ContextualMenuManipulator
class CORDL_TYPE ContextualMenuManipulator : public ::UnityEngine::UIElements::PointerManipulator {
public:
  // Declarations
  /// @brief Field m_MenuBuilder, offset 0x28, size 0x8
  __declspec(property(get = __cordl_internal_get_m_MenuBuilder, put = __cordl_internal_set_m_MenuBuilder)) ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* m_MenuBuilder;

  /// @brief Method DoDisplayMenu, addr 0x6a8c26c, size 0x40, virtual false, abstract: false, final false
  inline void DoDisplayMenu(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::ContextualMenuManipulator* New_ctor(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* menuBuilder);

  /// @brief Method OnContextualMenuEvent, addr 0x6a8c324, size 0x1c, virtual false, abstract: false, final false
  inline void OnContextualMenuEvent(::UnityEngine::UIElements::ContextualMenuPopulateEvent* evt);

  /// @brief Method OnKeyUpEvent, addr 0x6a8c2ac, size 0x78, virtual false, abstract: false, final false
  inline void OnKeyUpEvent(::UnityEngine::UIElements::KeyUpEvent* evt);

  /// @brief Method OnPointerDownEventOSX, addr 0x6a8c160, size 0x28, virtual false, abstract: false, final false
  inline void OnPointerDownEventOSX(::UnityEngine::UIElements::IPointerEvent* evt);

  /// @brief Method OnPointerMoveEvent, addr 0x6a8c1b8, size 0x48, virtual false, abstract: false, final false
  inline void OnPointerMoveEvent(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerMoveEventOSX, addr 0x6a8c200, size 0x6c, virtual false, abstract: false, final false
  inline void OnPointerMoveEventOSX(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method OnPointerUpEvent, addr 0x6a8c0ac, size 0x4, virtual false, abstract: false, final false
  inline void OnPointerUpEvent(::UnityEngine::UIElements::IPointerEvent* evt);

  /// @brief Method OnPointerUpEventOSX, addr 0x6a8c188, size 0x30, virtual false, abstract: false, final false
  inline void OnPointerUpEventOSX(::UnityEngine::UIElements::IPointerEvent* evt);

  /// @brief Method ProcessPointerEvent, addr 0x6a8c0b0, size 0xb0, virtual false, abstract: false, final false
  inline void ProcessPointerEvent(::UnityEngine::UIElements::IPointerEvent* evt);

  /// @brief Method RegisterCallbacksOnTarget, addr 0x6a8b9e4, size 0x364, virtual true, abstract: false, final false
  inline void RegisterCallbacksOnTarget();

  /// @brief Method UnregisterCallbacksFromTarget, addr 0x6a8bd48, size 0x364, virtual true, abstract: false, final false
  inline void UnregisterCallbacksFromTarget();

  constexpr ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* const& __cordl_internal_get_m_MenuBuilder() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>*& __cordl_internal_get_m_MenuBuilder();

  constexpr void __cordl_internal_set_m_MenuBuilder(::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* value);

  /// @brief Method .ctor, addr 0x6a8b878, size 0x16c, virtual false, abstract: false, final false
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
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4102 };

  /// @brief Field m_MenuBuilder, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ContextualMenuPopulateEvent*>* ___m_MenuBuilder;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ContextualMenuManipulator, ___m_MenuBuilder) == 0x28, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextualMenuManipulator, 0x30>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextualMenuManipulator);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextualMenuManipulator*, "UnityEngine.UIElements", "ContextualMenuManipulator");

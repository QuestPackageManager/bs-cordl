#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseLeaveWindowEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseLeaveWindowEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class MouseLeaveWindowEvent___c;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseLeaveWindowEvent;
}
namespace UnityEngine::UIElements {
class MouseLeaveWindowEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseLeaveWindowEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseLeaveWindowEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseLeaveWindowEvent/<>c
class CORDL_TYPE MouseLeaveWindowEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseLeaveWindowEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseLeaveWindowEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2e81c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseLeaveWindowEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a2e814, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseLeaveWindowEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseLeaveWindowEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLeaveWindowEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveWindowEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLeaveWindowEvent___c(MouseLeaveWindowEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveWindowEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLeaveWindowEvent___c(MouseLeaveWindowEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5874 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseLeaveWindowEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseLeaveWindowEvent
class CORDL_TYPE MouseLeaveWindowEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseLeaveWindowEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseLeaveWindowEvent___c;

  /// @brief Method GetPooled, addr 0x4a2e52c, size 0xb4, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseLeaveWindowEvent* GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method Init, addr 0x4a2e3e8, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a2e438, size 0xa4, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseLeaveWindowEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x4a2e65c, size 0x15c, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x4a2e4dc, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLeaveWindowEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveWindowEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLeaveWindowEvent(MouseLeaveWindowEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveWindowEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLeaveWindowEvent(MouseLeaveWindowEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5875 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseLeaveWindowEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveWindowEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveWindowEvent*, "UnityEngine.UIElements", "MouseLeaveWindowEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveWindowEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveWindowEvent___c*, "UnityEngine.UIElements", "MouseLeaveWindowEvent/<>c");

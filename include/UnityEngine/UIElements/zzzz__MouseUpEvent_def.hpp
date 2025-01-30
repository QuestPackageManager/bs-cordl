#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseUpEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseUpEvent)
namespace UnityEngine::UIElements {
class IPointerEvent;
}
namespace UnityEngine::UIElements {
class MouseUpEvent___c;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseUpEvent;
}
namespace UnityEngine::UIElements {
class MouseUpEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseUpEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseUpEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseUpEvent/<>c
class CORDL_TYPE MouseUpEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseUpEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseUpEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2dcac, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseUpEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a2dca4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseUpEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseUpEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseUpEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseUpEvent___c(MouseUpEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseUpEvent___c(MouseUpEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5858 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseUpEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseUpEvent
class CORDL_TYPE MouseUpEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseUpEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseUpEvent___c;

  /// @brief Method GetPooled, addr 0x4a2dbf4, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerCancelEvent* pointerEvent);

  /// @brief Method GetPooled, addr 0x4a2dba0, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);

  /// @brief Method GetPooled, addr 0x4a2db4c, size 0x54, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* GetPooled(::UnityEngine::UIElements::PointerUpEvent* pointerEvent);

  /// @brief Method Init, addr 0x4a2d830, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a2d884, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  /// @brief Method MakeFromPointerEvent, addr 0x4a2d8e4, size 0x18c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseUpEvent* MakeFromPointerEvent(::UnityEngine::UIElements::IPointerEvent* pointerEvent);

  static inline ::UnityEngine::UIElements::MouseUpEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a2d890, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseUpEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseUpEvent(MouseUpEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseUpEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseUpEvent(MouseUpEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5859 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseUpEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseUpEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseUpEvent*, "UnityEngine.UIElements", "MouseUpEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseUpEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseUpEvent___c*, "UnityEngine.UIElements", "MouseUpEvent/<>c");

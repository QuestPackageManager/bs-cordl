#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseMoveEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseMoveEvent)
namespace UnityEngine::UIElements {
class MouseMoveEvent___c;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseMoveEvent;
}
namespace UnityEngine::UIElements {
class MouseMoveEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseMoveEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseMoveEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseMoveEvent/<>c
class CORDL_TYPE MouseMoveEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseMoveEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseMoveEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6b6ac50, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseMoveEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6b6ac4c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseMoveEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseMoveEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseMoveEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseMoveEvent___c(MouseMoveEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseMoveEvent___c(MouseMoveEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4493 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseMoveEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseMoveEvent
class CORDL_TYPE MouseMoveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseMoveEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseMoveEvent___c;

  /// @brief Method GetPooled, addr 0x6b6abac, size 0x4c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::MouseMoveEvent* GetPooled(::UnityEngine::UIElements::PointerMoveEvent* pointerEvent);

  /// @brief Method Init, addr 0x6b6aaf0, size 0x58, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x6b6ab48, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseMoveEvent* New_ctor();

  /// @brief Method .ctor, addr 0x6b6ab54, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseMoveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseMoveEvent(MouseMoveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseMoveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseMoveEvent(MouseMoveEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4494 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseMoveEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseMoveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseMoveEvent*, "UnityEngine.UIElements", "MouseMoveEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseMoveEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseMoveEvent___c*, "UnityEngine.UIElements", "MouseMoveEvent/<>c");

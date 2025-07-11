#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseEnterWindowEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseEnterWindowEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class MouseEnterWindowEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEnterWindowEvent;
}
namespace UnityEngine::UIElements {
class MouseEnterWindowEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEnterWindowEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEnterWindowEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseEnterWindowEvent/<>c
class CORDL_TYPE MouseEnterWindowEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseEnterWindowEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseEnterWindowEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2e2b4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseEnterWindowEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a2e2ac, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseEnterWindowEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseEnterWindowEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEnterWindowEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEnterWindowEvent___c(MouseEnterWindowEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEnterWindowEvent___c(MouseEnterWindowEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5872 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEnterWindowEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseEnterWindowEvent
class CORDL_TYPE MouseEnterWindowEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseEnterWindowEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseEnterWindowEvent___c;

  /// @brief Method Init, addr 0x4a2e040, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a2e094, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseEnterWindowEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x4a2e0f4, size 0x15c, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x4a2e0a0, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEnterWindowEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEnterWindowEvent(MouseEnterWindowEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterWindowEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEnterWindowEvent(MouseEnterWindowEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5873 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEnterWindowEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEnterWindowEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEnterWindowEvent*, "UnityEngine.UIElements", "MouseEnterWindowEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseEnterWindowEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEnterWindowEvent___c*, "UnityEngine.UIElements", "MouseEnterWindowEvent/<>c");

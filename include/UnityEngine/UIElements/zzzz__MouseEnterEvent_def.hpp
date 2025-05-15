#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseEnterEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseEnterEvent)
namespace UnityEngine::UIElements {
class MouseEnterEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseEnterEvent;
}
namespace UnityEngine::UIElements {
class MouseEnterEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEnterEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseEnterEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseEnterEvent/<>c
class CORDL_TYPE MouseEnterEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseEnterEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseEnterEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2e0a0, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseEnterEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a2e098, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseEnterEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseEnterEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEnterEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEnterEvent___c(MouseEnterEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEnterEvent___c(MouseEnterEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5868 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEnterEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseEnterEvent
class CORDL_TYPE MouseEnterEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseEnterEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseEnterEvent___c;

  /// @brief Method Init, addr 0x4a2df88, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a2dfdc, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseEnterEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a2dfe8, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseEnterEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseEnterEvent(MouseEnterEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseEnterEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseEnterEvent(MouseEnterEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5869 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseEnterEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseEnterEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEnterEvent*, "UnityEngine.UIElements", "MouseEnterEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseEnterEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseEnterEvent___c*, "UnityEngine.UIElements", "MouseEnterEvent/<>c");

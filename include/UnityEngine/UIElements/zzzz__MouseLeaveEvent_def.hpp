#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseLeaveEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseLeaveEvent)
namespace UnityEngine::UIElements {
class MouseLeaveEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseLeaveEvent;
}
namespace UnityEngine::UIElements {
class MouseLeaveEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseLeaveEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseLeaveEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseLeaveEvent/<>c
class CORDL_TYPE MouseLeaveEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseLeaveEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseLeaveEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2e2ec, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseLeaveEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a2e2e4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseLeaveEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseLeaveEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLeaveEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLeaveEvent___c(MouseLeaveEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLeaveEvent___c(MouseLeaveEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5870 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseLeaveEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseLeaveEvent
class CORDL_TYPE MouseLeaveEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseLeaveEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseLeaveEvent___c;

  /// @brief Method Init, addr 0x4a2e1d4, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a2e228, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::MouseLeaveEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a2e234, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseLeaveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseLeaveEvent(MouseLeaveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseLeaveEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseLeaveEvent(MouseLeaveEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5871 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseLeaveEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveEvent*, "UnityEngine.UIElements", "MouseLeaveEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseLeaveEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseLeaveEvent___c*, "UnityEngine.UIElements", "MouseLeaveEvent/<>c");

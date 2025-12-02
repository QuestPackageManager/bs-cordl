#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseCaptureEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureEvent)
namespace UnityEngine::UIElements {
class MouseCaptureEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureEvent;
}
namespace UnityEngine::UIElements {
class MouseCaptureEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseCaptureEvent/<>c
class CORDL_TYPE MouseCaptureEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseCaptureEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseCaptureEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6b61e4c, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseCaptureEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6b61e48, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseCaptureEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseCaptureEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureEvent___c(MouseCaptureEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureEvent___c(MouseCaptureEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4436 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseCaptureEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseCaptureEvent
class CORDL_TYPE MouseCaptureEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseCaptureEvent___c;

  static inline ::UnityEngine::UIElements::MouseCaptureEvent* New_ctor();

  /// @brief Method .ctor, addr 0x6b61d9c, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureEvent(MouseCaptureEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureEvent(MouseCaptureEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4437 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureEvent, 0x78>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureEvent*, "UnityEngine.UIElements", "MouseCaptureEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureEvent___c*, "UnityEngine.UIElements", "MouseCaptureEvent/<>c");

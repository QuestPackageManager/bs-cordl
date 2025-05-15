#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseCaptureOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseCaptureOutEvent)
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class MouseCaptureOutEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseCaptureOutEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseCaptureOutEvent/<>c
class CORDL_TYPE MouseCaptureOutEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseCaptureOutEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseCaptureOutEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a247ac, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseCaptureOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a247a4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseCaptureOutEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseCaptureOutEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureOutEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureOutEvent___c(MouseCaptureOutEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureOutEvent___c(MouseCaptureOutEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5790 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureOutEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseCaptureEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseCaptureOutEvent
class CORDL_TYPE MouseCaptureOutEvent : public ::UnityEngine::UIElements::MouseCaptureEventBase_1<::UnityEngine::UIElements::MouseCaptureOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseCaptureOutEvent___c;

  static inline ::UnityEngine::UIElements::MouseCaptureOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a24700, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseCaptureOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseCaptureOutEvent(MouseCaptureOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseCaptureOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseCaptureOutEvent(MouseCaptureOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5791 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseCaptureOutEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureOutEvent*, "UnityEngine.UIElements", "MouseCaptureOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseCaptureOutEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseCaptureOutEvent___c*, "UnityEngine.UIElements", "MouseCaptureOutEvent/<>c");

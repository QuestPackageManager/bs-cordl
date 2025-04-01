#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/MouseOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(MouseOutEvent)
namespace UnityEngine::UIElements {
class MouseOutEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class MouseOutEvent;
}
namespace UnityEngine::UIElements {
class MouseOutEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::MouseOutEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseOutEvent/<>c
class CORDL_TYPE MouseOutEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::MouseOutEvent___c* __9;

  static inline ::UnityEngine::UIElements::MouseOutEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a28f5c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::MouseOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a28f54, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::MouseOutEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::MouseOutEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseOutEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseOutEvent___c(MouseOutEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseOutEvent___c(MouseOutEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5878 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseOutEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.MouseOutEvent
class CORDL_TYPE MouseOutEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::MouseOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::MouseOutEvent___c;

  static inline ::UnityEngine::UIElements::MouseOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a28eb0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr MouseOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  MouseOutEvent(MouseOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "MouseOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  MouseOutEvent(MouseOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5879 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::MouseOutEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::MouseOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOutEvent*, "UnityEngine.UIElements", "MouseOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::MouseOutEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::MouseOutEvent___c*, "UnityEngine.UIElements", "MouseOutEvent/<>c");

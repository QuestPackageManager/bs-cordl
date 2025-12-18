#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerOutEvent)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class PointerOutEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerOutEvent;
}
namespace UnityEngine::UIElements {
class PointerOutEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerOutEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerOutEvent/<>c
class CORDL_TYPE PointerOutEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerOutEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerOutEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6bda674, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6bda670, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerOutEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerOutEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOutEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOutEvent___c(PointerOutEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOutEvent___c(PointerOutEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4556 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerOutEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerOutEvent
class CORDL_TYPE PointerOutEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerOutEvent___c;

  /// @brief Method Dispatch, addr 0x6bda5cc, size 0x4, virtual true, abstract: false, final false
  inline void Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  static inline ::UnityEngine::UIElements::PointerOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x6bda5d0, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerOutEvent(PointerOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerOutEvent(PointerOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4557 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerOutEvent, 0xf8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOutEvent*, "UnityEngine.UIElements", "PointerOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PointerOutEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerOutEvent___c*, "UnityEngine.UIElements", "PointerOutEvent/<>c");

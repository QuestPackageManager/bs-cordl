#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCancelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCancelEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCancelEvent;
}
namespace UnityEngine::UIElements {
class PointerCancelEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCancelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCancelEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerCancelEvent/<>c
class CORDL_TYPE PointerCancelEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerCancelEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerCancelEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a34100, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerCancelEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a340f8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerCancelEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerCancelEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCancelEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCancelEvent___c(PointerCancelEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCancelEvent___c(PointerCancelEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5919 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCancelEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerCancelEvent
class CORDL_TYPE PointerCancelEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerCancelEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerCancelEvent___c;

  /// @brief Method Init, addr 0x4a33bac, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a33bfc, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerCancelEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x4a33d50, size 0x34c, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x4a33d00, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCancelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCancelEvent(PointerCancelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCancelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCancelEvent(PointerCancelEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5920 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCancelEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCancelEvent*, "UnityEngine.UIElements", "PointerCancelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PointerCancelEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCancelEvent___c*, "UnityEngine.UIElements", "PointerCancelEvent/<>c");

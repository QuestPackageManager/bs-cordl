#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerDownEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerDownEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PointerDownEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerDownEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerDownEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerDownEvent/<>c
class CORDL_TYPE PointerDownEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerDownEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerDownEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a326c0, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerDownEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a326b8, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerDownEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerDownEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDownEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDownEvent___c(PointerDownEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDownEvent___c(PointerDownEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5911 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDownEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerDownEvent
class CORDL_TYPE PointerDownEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerDownEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerDownEvent___c;

  /// @brief Method Init, addr 0x4a32234, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a32284, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerDownEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x4a323d8, size 0x284, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x4a32388, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerDownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerDownEvent(PointerDownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerDownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerDownEvent(PointerDownEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5912 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerDownEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDownEvent*, "UnityEngine.UIElements", "PointerDownEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PointerDownEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerDownEvent___c*, "UnityEngine.UIElements", "PointerDownEvent/<>c");

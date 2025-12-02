#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ClickEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ClickEvent)
namespace UnityEngine::UIElements {
class ClickEvent___c;
}
namespace UnityEngine::UIElements {
class IPointerEvent;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ClickEvent;
}
namespace UnityEngine::UIElements {
class ClickEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::ClickEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ClickEvent/<>c
class CORDL_TYPE ClickEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ClickEvent___c* __9;

  static inline ::UnityEngine::UIElements::ClickEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6b70e28, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ClickEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6b70e24, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ClickEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::ClickEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClickEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickEvent___c(ClickEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickEvent___c(ClickEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4548 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ClickEvent
class CORDL_TYPE ClickEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::ClickEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::ClickEvent___c;

  /// @brief Method GetPooled, addr 0x6b70d54, size 0x7c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::ClickEvent* GetPooled(::UnityEngine::UIElements::IPointerEvent* pointerEvent, int32_t clickCount);

  /// @brief Method Init, addr 0x6b70c98, size 0x58, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x6b70cf0, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::ClickEvent* New_ctor();

  /// @brief Method .ctor, addr 0x6b70cfc, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ClickEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ClickEvent(ClickEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ClickEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ClickEvent(ClickEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4549 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ClickEvent, 0xf8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ClickEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickEvent*, "UnityEngine.UIElements", "ClickEvent");
NEED_NO_BOX(::UnityEngine::UIElements::ClickEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ClickEvent___c*, "UnityEngine.UIElements", "ClickEvent/<>c");

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationCancelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(NavigationCancelEvent)
namespace UnityEngine::UIElements {
class NavigationCancelEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationCancelEvent;
}
namespace UnityEngine::UIElements {
class NavigationCancelEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationCancelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationCancelEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigationCancelEvent/<>c
class CORDL_TYPE NavigationCancelEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::NavigationCancelEvent___c* __9;

  static inline ::UnityEngine::UIElements::NavigationCancelEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6b6dd18, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::NavigationCancelEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6b6dd14, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::NavigationCancelEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::NavigationCancelEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationCancelEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationCancelEvent___c(NavigationCancelEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationCancelEvent___c(NavigationCancelEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4521 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationCancelEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.NavigationEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigationCancelEvent
class CORDL_TYPE NavigationCancelEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationCancelEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::NavigationCancelEvent___c;

  static inline ::UnityEngine::UIElements::NavigationCancelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x6b6dc74, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationCancelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationCancelEvent(NavigationCancelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationCancelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationCancelEvent(NavigationCancelEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4522 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationCancelEvent, 0x70>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigationCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationCancelEvent*, "UnityEngine.UIElements", "NavigationCancelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::NavigationCancelEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationCancelEvent___c*, "UnityEngine.UIElements", "NavigationCancelEvent/<>c");

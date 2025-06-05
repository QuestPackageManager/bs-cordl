#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/NavigationSubmitEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__NavigationEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(NavigationSubmitEvent)
namespace UnityEngine::UIElements {
class NavigationSubmitEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class NavigationSubmitEvent;
}
namespace UnityEngine::UIElements {
class NavigationSubmitEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationSubmitEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::NavigationSubmitEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigationSubmitEvent/<>c
class CORDL_TYPE NavigationSubmitEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::NavigationSubmitEvent___c* __9;

  static inline ::UnityEngine::UIElements::NavigationSubmitEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a30420, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::NavigationSubmitEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a30418, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::NavigationSubmitEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::NavigationSubmitEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationSubmitEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationSubmitEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationSubmitEvent___c(NavigationSubmitEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationSubmitEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationSubmitEvent___c(NavigationSubmitEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5893 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationSubmitEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.NavigationEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.NavigationSubmitEvent
class CORDL_TYPE NavigationSubmitEvent : public ::UnityEngine::UIElements::NavigationEventBase_1<::UnityEngine::UIElements::NavigationSubmitEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::NavigationSubmitEvent___c;

  static inline ::UnityEngine::UIElements::NavigationSubmitEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a30374, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr NavigationSubmitEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "NavigationSubmitEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  NavigationSubmitEvent(NavigationSubmitEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "NavigationSubmitEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  NavigationSubmitEvent(NavigationSubmitEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5894 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::NavigationSubmitEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::NavigationSubmitEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationSubmitEvent*, "UnityEngine.UIElements", "NavigationSubmitEvent");
NEED_NO_BOX(::UnityEngine::UIElements::NavigationSubmitEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::NavigationSubmitEvent___c*, "UnityEngine.UIElements", "NavigationSubmitEvent/<>c");

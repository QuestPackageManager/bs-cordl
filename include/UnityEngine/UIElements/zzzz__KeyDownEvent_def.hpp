#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/KeyDownEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__KeyboardEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(KeyDownEvent)
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class KeyDownEvent___c;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class KeyDownEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyDownEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::KeyDownEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.KeyDownEvent/<>c
class CORDL_TYPE KeyDownEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::KeyDownEvent___c* __9;

  static inline ::UnityEngine::UIElements::KeyDownEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2bd04, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::KeyDownEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a2bcfc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::KeyDownEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::KeyDownEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyDownEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyDownEvent___c(KeyDownEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyDownEvent___c(KeyDownEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5843 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyDownEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.KeyboardEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.KeyDownEvent
class CORDL_TYPE KeyDownEvent : public ::UnityEngine::UIElements::KeyboardEventBase_1<::UnityEngine::UIElements::KeyDownEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::KeyDownEvent___c;

  /// @brief Method GetEquivalentImguiEvent, addr 0x4a2aef8, size 0xc0, virtual false, abstract: false, final false
  inline void GetEquivalentImguiEvent(::UnityEngine::Event* outImguiEvent);

  static inline ::UnityEngine::UIElements::KeyDownEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x4a2afb8, size 0x100, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method SendEquivalentNavigationEventIfAny, addr 0x4a2b0b8, size 0x908, virtual false, abstract: false, final false
  inline void SendEquivalentNavigationEventIfAny(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x4a2bc58, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr KeyDownEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  KeyDownEvent(KeyDownEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "KeyDownEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  KeyDownEvent(KeyDownEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5844 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::KeyDownEvent, 0x90>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::KeyDownEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyDownEvent*, "UnityEngine.UIElements", "KeyDownEvent");
NEED_NO_BOX(::UnityEngine::UIElements::KeyDownEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::KeyDownEvent___c*, "UnityEngine.UIElements", "KeyDownEvent/<>c");

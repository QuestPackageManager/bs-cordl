#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionStartEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionStartEvent)
namespace UnityEngine::UIElements {
class TransitionStartEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionStartEvent;
}
namespace UnityEngine::UIElements {
class TransitionStartEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionStartEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionStartEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransitionStartEvent/<>c
class CORDL_TYPE TransitionStartEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::TransitionStartEvent___c* __9;

  static inline ::UnityEngine::UIElements::TransitionStartEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a36204, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TransitionStartEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a361fc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::TransitionStartEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::TransitionStartEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionStartEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionStartEvent___c(TransitionStartEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionStartEvent___c(TransitionStartEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5940 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionStartEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TransitionEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransitionStartEvent
class CORDL_TYPE TransitionStartEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionStartEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::TransitionStartEvent___c;

  static inline ::UnityEngine::UIElements::TransitionStartEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a36158, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionStartEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionStartEvent(TransitionStartEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionStartEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionStartEvent(TransitionStartEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5941 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionStartEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionStartEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionStartEvent*, "UnityEngine.UIElements", "TransitionStartEvent");
NEED_NO_BOX(::UnityEngine::UIElements::TransitionStartEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionStartEvent___c*, "UnityEngine.UIElements", "TransitionStartEvent/<>c");

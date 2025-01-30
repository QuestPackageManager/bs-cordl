#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionCancelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionCancelEvent)
namespace UnityEngine::UIElements {
class TransitionCancelEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionCancelEvent;
}
namespace UnityEngine::UIElements {
class TransitionCancelEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionCancelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionCancelEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransitionCancelEvent/<>c
class CORDL_TYPE TransitionCancelEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::TransitionCancelEvent___c* __9;

  static inline ::UnityEngine::UIElements::TransitionCancelEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a365c4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TransitionCancelEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a365bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::TransitionCancelEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::TransitionCancelEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionCancelEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionCancelEvent___c(TransitionCancelEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionCancelEvent___c(TransitionCancelEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5944 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionCancelEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TransitionEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransitionCancelEvent
class CORDL_TYPE TransitionCancelEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionCancelEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::TransitionCancelEvent___c;

  static inline ::UnityEngine::UIElements::TransitionCancelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a36518, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionCancelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionCancelEvent(TransitionCancelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionCancelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionCancelEvent(TransitionCancelEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5945 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionCancelEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionCancelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionCancelEvent*, "UnityEngine.UIElements", "TransitionCancelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::TransitionCancelEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionCancelEvent___c*, "UnityEngine.UIElements", "TransitionCancelEvent/<>c");

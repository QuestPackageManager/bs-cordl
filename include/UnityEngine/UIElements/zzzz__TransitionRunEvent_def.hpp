#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/TransitionRunEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__TransitionEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(TransitionRunEvent)
namespace UnityEngine::UIElements {
class TransitionRunEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TransitionRunEvent;
}
namespace UnityEngine::UIElements {
class TransitionRunEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionRunEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::TransitionRunEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransitionRunEvent/<>c
class CORDL_TYPE TransitionRunEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::TransitionRunEvent___c* __9;

  static inline ::UnityEngine::UIElements::TransitionRunEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a38c7c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TransitionRunEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a38c74, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::TransitionRunEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::TransitionRunEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionRunEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionRunEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionRunEvent___c(TransitionRunEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionRunEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionRunEvent___c(TransitionRunEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5939 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionRunEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.TransitionEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.TransitionRunEvent
class CORDL_TYPE TransitionRunEvent : public ::UnityEngine::UIElements::TransitionEventBase_1<::UnityEngine::UIElements::TransitionRunEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::TransitionRunEvent___c;

  static inline ::UnityEngine::UIElements::TransitionRunEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a38bd0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TransitionRunEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TransitionRunEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TransitionRunEvent(TransitionRunEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TransitionRunEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TransitionRunEvent(TransitionRunEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5940 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TransitionRunEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TransitionRunEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionRunEvent*, "UnityEngine.UIElements", "TransitionRunEvent");
NEED_NO_BOX(::UnityEngine::UIElements::TransitionRunEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TransitionRunEvent___c*, "UnityEngine.UIElements", "TransitionRunEvent/<>c");

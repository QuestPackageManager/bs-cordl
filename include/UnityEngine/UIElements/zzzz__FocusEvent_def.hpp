#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusEvent)
namespace UnityEngine::UIElements {
class FocusEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusEvent;
}
namespace UnityEngine::UIElements {
class FocusEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusEvent/<>c
class CORDL_TYPE FocusEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::FocusEvent___c* __9;

  static inline ::UnityEngine::UIElements::FocusEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6bd1af0, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6bd1aec, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::FocusEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::FocusEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusEvent___c(FocusEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusEvent___c(FocusEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4473 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FocusEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusEvent
class CORDL_TYPE FocusEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::FocusEvent___c;

  static inline ::UnityEngine::UIElements::FocusEvent* New_ctor();

  /// @brief Method .ctor, addr 0x6bd1a4c, size 0x4c, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusEvent(FocusEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusEvent(FocusEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4474 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusEvent, 0x88>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusEvent*, "UnityEngine.UIElements", "FocusEvent");
NEED_NO_BOX(::UnityEngine::UIElements::FocusEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusEvent___c*, "UnityEngine.UIElements", "FocusEvent/<>c");

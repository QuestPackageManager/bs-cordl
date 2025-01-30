#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FocusOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(FocusOutEvent)
namespace UnityEngine::UIElements {
class FocusOutEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class FocusOutEvent;
}
namespace UnityEngine::UIElements {
class FocusOutEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::FocusOutEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusOutEvent/<>c
class CORDL_TYPE FocusOutEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::FocusOutEvent___c* __9;

  static inline ::UnityEngine::UIElements::FocusOutEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a297d4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::FocusOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a297cc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::FocusOutEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::FocusOutEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusOutEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusOutEvent___c(FocusOutEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusOutEvent___c(FocusOutEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5826 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusOutEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FocusEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.FocusOutEvent
class CORDL_TYPE FocusOutEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::FocusOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::FocusOutEvent___c;

  /// @brief Method Init, addr 0x4a296bc, size 0x54, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a29710, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::FocusOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a2971c, size 0x54, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FocusOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FocusOutEvent(FocusOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FocusOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FocusOutEvent(FocusOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5827 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::FocusOutEvent, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::FocusOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusOutEvent*, "UnityEngine.UIElements", "FocusOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::FocusOutEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::FocusOutEvent___c*, "UnityEngine.UIElements", "FocusOutEvent/<>c");

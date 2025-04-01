#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ContextClickEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__MouseEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(ContextClickEvent)
namespace UnityEngine::UIElements {
class ContextClickEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ContextClickEvent;
}
namespace UnityEngine::UIElements {
class ContextClickEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextClickEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::ContextClickEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ContextClickEvent/<>c
class CORDL_TYPE ContextClickEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::ContextClickEvent___c* __9;

  static inline ::UnityEngine::UIElements::ContextClickEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a27988, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ContextClickEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a27980, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::ContextClickEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::ContextClickEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextClickEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextClickEvent___c(ContextClickEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextClickEvent___c(ContextClickEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5864 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextClickEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.MouseEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ContextClickEvent
class CORDL_TYPE ContextClickEvent : public ::UnityEngine::UIElements::MouseEventBase_1<::UnityEngine::UIElements::ContextClickEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::ContextClickEvent___c;

  static inline ::UnityEngine::UIElements::ContextClickEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a278dc, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ContextClickEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ContextClickEvent(ContextClickEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ContextClickEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ContextClickEvent(ContextClickEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5865 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ContextClickEvent, 0xb8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ContextClickEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextClickEvent*, "UnityEngine.UIElements", "ContextClickEvent");
NEED_NO_BOX(::UnityEngine::UIElements::ContextClickEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ContextClickEvent___c*, "UnityEngine.UIElements", "ContextClickEvent/<>c");

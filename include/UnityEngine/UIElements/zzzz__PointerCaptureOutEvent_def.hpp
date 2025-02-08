#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureOutEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCaptureOutEvent)
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureOutEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureOutEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureOutEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerCaptureOutEvent/<>c
class CORDL_TYPE PointerCaptureOutEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerCaptureOutEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerCaptureOutEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a2777c, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerCaptureOutEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a27774, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerCaptureOutEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerCaptureOutEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureOutEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureOutEvent___c(PointerCaptureOutEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureOutEvent___c(PointerCaptureOutEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5784 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureOutEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerCaptureEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerCaptureOutEvent
class CORDL_TYPE PointerCaptureOutEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureOutEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerCaptureOutEvent___c;

  static inline ::UnityEngine::UIElements::PointerCaptureOutEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a276d0, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureOutEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureOutEvent(PointerCaptureOutEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureOutEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureOutEvent(PointerCaptureOutEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5785 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureOutEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureOutEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureOutEvent*, "UnityEngine.UIElements", "PointerCaptureOutEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureOutEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureOutEvent___c*, "UnityEngine.UIElements", "PointerCaptureOutEvent/<>c");

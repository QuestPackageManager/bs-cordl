#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerCaptureEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerCaptureEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerCaptureEvent)
namespace UnityEngine::UIElements {
class PointerCaptureEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerCaptureEvent;
}
namespace UnityEngine::UIElements {
class PointerCaptureEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerCaptureEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerCaptureEvent/<>c
class CORDL_TYPE PointerCaptureEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerCaptureEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerCaptureEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a245cc, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerCaptureEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a245c4, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerCaptureEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerCaptureEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureEvent___c(PointerCaptureEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureEvent___c(PointerCaptureEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5787 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerCaptureEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerCaptureEvent
class CORDL_TYPE PointerCaptureEvent : public ::UnityEngine::UIElements::PointerCaptureEventBase_1<::UnityEngine::UIElements::PointerCaptureEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerCaptureEvent___c;

  static inline ::UnityEngine::UIElements::PointerCaptureEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a24520, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerCaptureEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerCaptureEvent(PointerCaptureEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerCaptureEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerCaptureEvent(PointerCaptureEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5788 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerCaptureEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureEvent*, "UnityEngine.UIElements", "PointerCaptureEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PointerCaptureEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerCaptureEvent___c*, "UnityEngine.UIElements", "PointerCaptureEvent/<>c");

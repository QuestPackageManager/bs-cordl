#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerStationaryEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerStationaryEvent)
namespace UnityEngine::UIElements {
class PointerStationaryEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerStationaryEvent;
}
namespace UnityEngine::UIElements {
class PointerStationaryEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerStationaryEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::PointerStationaryEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerStationaryEvent/<>c
class CORDL_TYPE PointerStationaryEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerStationaryEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerStationaryEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a308c8, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerStationaryEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a308c0, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerStationaryEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerStationaryEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerStationaryEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerStationaryEvent___c(PointerStationaryEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerStationaryEvent___c(PointerStationaryEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5910 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerStationaryEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerStationaryEvent
class CORDL_TYPE PointerStationaryEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerStationaryEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerStationaryEvent___c;

  /// @brief Method Init, addr 0x4a306c0, size 0x50, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x4a30710, size 0x104, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerStationaryEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a30814, size 0x50, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerStationaryEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerStationaryEvent(PointerStationaryEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerStationaryEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerStationaryEvent(PointerStationaryEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5911 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::PointerStationaryEvent, 0x108>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::PointerStationaryEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerStationaryEvent*, "UnityEngine.UIElements", "PointerStationaryEvent");
NEED_NO_BOX(::UnityEngine::UIElements::PointerStationaryEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::PointerStationaryEvent___c*, "UnityEngine.UIElements", "PointerStationaryEvent/<>c");

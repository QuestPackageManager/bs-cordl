#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/DetachFromPanelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(DetachFromPanelEvent)
namespace UnityEngine::UIElements {
class DetachFromPanelEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DetachFromPanelEvent;
}
namespace UnityEngine::UIElements {
class DetachFromPanelEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::DetachFromPanelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::DetachFromPanelEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DetachFromPanelEvent/<>c
class CORDL_TYPE DetachFromPanelEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::DetachFromPanelEvent___c* __9;

  static inline ::UnityEngine::UIElements::DetachFromPanelEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a3cc18, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::DetachFromPanelEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a3cc10, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::DetachFromPanelEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::DetachFromPanelEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DetachFromPanelEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DetachFromPanelEvent___c(DetachFromPanelEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DetachFromPanelEvent___c(DetachFromPanelEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5898 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DetachFromPanelEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PanelChangedEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.DetachFromPanelEvent
class CORDL_TYPE DetachFromPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::DetachFromPanelEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::DetachFromPanelEvent___c;

  static inline ::UnityEngine::UIElements::DetachFromPanelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a3cb6c, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DetachFromPanelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DetachFromPanelEvent(DetachFromPanelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DetachFromPanelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DetachFromPanelEvent(DetachFromPanelEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5899 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::DetachFromPanelEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::DetachFromPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DetachFromPanelEvent*, "UnityEngine.UIElements", "DetachFromPanelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::DetachFromPanelEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DetachFromPanelEvent___c*, "UnityEngine.UIElements", "DetachFromPanelEvent/<>c");

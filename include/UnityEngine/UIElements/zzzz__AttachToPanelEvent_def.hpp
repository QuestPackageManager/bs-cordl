#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AttachToPanelEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PanelChangedEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(AttachToPanelEvent)
namespace UnityEngine::UIElements {
class AttachToPanelEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AttachToPanelEvent;
}
namespace UnityEngine::UIElements {
class AttachToPanelEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::AttachToPanelEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::AttachToPanelEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AttachToPanelEvent/<>c
class CORDL_TYPE AttachToPanelEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::AttachToPanelEvent___c* __9;

  static inline ::UnityEngine::UIElements::AttachToPanelEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a30298, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::AttachToPanelEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a30290, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::AttachToPanelEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::AttachToPanelEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttachToPanelEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttachToPanelEvent___c(AttachToPanelEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttachToPanelEvent___c(AttachToPanelEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5896 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AttachToPanelEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PanelChangedEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AttachToPanelEvent
class CORDL_TYPE AttachToPanelEvent : public ::UnityEngine::UIElements::PanelChangedEventBase_1<::UnityEngine::UIElements::AttachToPanelEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::AttachToPanelEvent___c;

  static inline ::UnityEngine::UIElements::AttachToPanelEvent* New_ctor();

  /// @brief Method .ctor, addr 0x4a301ec, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AttachToPanelEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AttachToPanelEvent(AttachToPanelEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AttachToPanelEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AttachToPanelEvent(AttachToPanelEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5897 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::AttachToPanelEvent, 0x98>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::AttachToPanelEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AttachToPanelEvent*, "UnityEngine.UIElements", "AttachToPanelEvent");
NEED_NO_BOX(::UnityEngine::UIElements::AttachToPanelEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::AttachToPanelEvent___c*, "UnityEngine.UIElements", "AttachToPanelEvent/<>c");

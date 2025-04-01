#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/BlurEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__FocusEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(BlurEvent)
namespace UnityEngine::UIElements {
class BlurEvent___c;
}
namespace UnityEngine::UIElements {
class IPanel;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class BlurEvent;
}
namespace UnityEngine::UIElements {
class BlurEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::BlurEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::BlurEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BlurEvent/<>c
class CORDL_TYPE BlurEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::BlurEvent___c* __9;

  static inline ::UnityEngine::UIElements::BlurEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x4a232c4, size 0x50, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::BlurEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x4a232bc, size 0x8, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::BlurEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::BlurEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlurEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlurEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlurEvent___c(BlurEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlurEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlurEvent___c(BlurEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5830 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BlurEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.FocusEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.BlurEvent
class CORDL_TYPE BlurEvent : public ::UnityEngine::UIElements::FocusEventBase_1<::UnityEngine::UIElements::BlurEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::BlurEvent___c;

  static inline ::UnityEngine::UIElements::BlurEvent* New_ctor();

  /// @brief Method PreDispatch, addr 0x4a23170, size 0x8c, virtual true, abstract: false, final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x4a23218, size 0x48, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr BlurEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "BlurEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  BlurEvent(BlurEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "BlurEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  BlurEvent(BlurEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5831 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::BlurEvent, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::BlurEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BlurEvent*, "UnityEngine.UIElements", "BlurEvent");
NEED_NO_BOX(::UnityEngine::UIElements::BlurEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::BlurEvent___c*, "UnityEngine.UIElements", "BlurEvent/<>c");

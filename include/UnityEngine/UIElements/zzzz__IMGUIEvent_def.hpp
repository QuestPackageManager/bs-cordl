#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/IMGUIEvent.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__EventBase_1_def.hpp"
CORDL_MODULE_EXPORT(IMGUIEvent)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class IMGUIEvent___c;
}
namespace UnityEngine {
class Event;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class IMGUIEvent;
}
namespace UnityEngine::UIElements {
class IMGUIEvent___c;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIEvent);
MARK_REF_PTR_T(::UnityEngine::UIElements::IMGUIEvent___c);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMGUIEvent/<>c
class CORDL_TYPE IMGUIEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::IMGUIEvent___c* __9;

  static inline ::UnityEngine::UIElements::IMGUIEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x6b72d90, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::IMGUIEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x6b72d8c, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::IMGUIEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::IMGUIEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent___c", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUIEvent___c(IMGUIEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent___c", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUIEvent___c(IMGUIEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4575 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIEvent___c, 0x10>, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.EventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.IMGUIEvent
class CORDL_TYPE IMGUIEvent : public ::UnityEngine::UIElements::EventBase_1<::UnityEngine::UIElements::IMGUIEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::IMGUIEvent___c;

  /// @brief Method Dispatch, addr 0x6b72d34, size 0x4, virtual true, abstract: false, final false
  inline void Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method GetPooled, addr 0x6b72bc4, size 0x8c, virtual false, abstract: false, final false
  static inline ::UnityEngine::UIElements::IMGUIEvent* GetPooled(::UnityEngine::Event* systemEvent);

  /// @brief Method Init, addr 0x6b72c50, size 0x58, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x6b72ca8, size 0xc, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::IMGUIEvent* New_ctor();

  /// @brief Method .ctor, addr 0x6b72cb4, size 0x80, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr IMGUIEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  IMGUIEvent(IMGUIEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "IMGUIEvent", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  IMGUIEvent(IMGUIEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4576 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::IMGUIEvent, 0x68>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIEvent);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIEvent*, "UnityEngine.UIElements", "IMGUIEvent");
NEED_NO_BOX(::UnityEngine::UIElements::IMGUIEvent___c);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::IMGUIEvent___c*, "UnityEngine.UIElements", "IMGUIEvent/<>c");

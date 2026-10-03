#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerUpEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerUpEvent)
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
class IMouseEvent;
}
namespace UnityEngine::UIElements {
class IPanel;
}
namespace UnityEngine::UIElements {
class PointerUpEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PointerUpEvent*);
MARK_REF_T(::UnityEngine::UIElements::PointerUpEvent___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerUpEvent*, "UnityEngine.UIElements", "PointerUpEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerUpEvent___c*, "UnityEngine.UIElements", "PointerUpEvent/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerUpEvent/<>c
class CORDL_TYPE PointerUpEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerUpEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerUpEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x7233544, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerUpEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x7233540, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerUpEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerUpEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerUpEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerUpEvent___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerUpEvent___c(PointerUpEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerUpEvent___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerUpEvent___c(PointerUpEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4545 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PointerUpEvent___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerUpEvent
class CORDL_TYPE PointerUpEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerUpEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerUpEvent___c;

  /// @brief Method Dispatch, addr 0x7233480, size 0x6c, virtual true, abstract: false, final false
  inline void Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method GetPooledCompatibilityMouseEvent, addr 0x723319c, size 0x58, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IMouseEvent* GetPooledCompatibilityMouseEvent();

  /// @brief Method Init, addr 0x723303c, size 0x88, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x72330c4, size 0x50, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerUpEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x7233250, size 0x230, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method PreDispatch, addr 0x72331f4, size 0x5c, virtual true, abstract: false, final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method .ctor, addr 0x7233114, size 0x88, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerUpEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerUpEvent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerUpEvent(PointerUpEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerUpEvent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerUpEvent(PointerUpEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4546 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PointerUpEvent) == 0x118, "Size mismatch!");

} // namespace UnityEngine::UIElements

#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/PointerMoveEvent.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include "UnityEngine/UIElements/zzzz__PointerEventBase_1_def.hpp"
CORDL_MODULE_EXPORT(PointerMoveEvent)
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
class PointerMoveEvent___c;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent___c;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::PointerMoveEvent*);
MARK_REF_T(::UnityEngine::UIElements::PointerMoveEvent___c*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerMoveEvent*, "UnityEngine.UIElements", "PointerMoveEvent");
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::PointerMoveEvent___c*, "UnityEngine.UIElements", "PointerMoveEvent/<>c");
// [CompilerGenerated]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerMoveEvent/<>c
class CORDL_TYPE PointerMoveEvent___c : public ::System::Object {
public:
  // Declarations
  /// @brief Field <>9, offset 0xffffffff, size 0x8
  __declspec(property(get = getStaticF___9, put = setStaticF___9)) ::UnityEngine::UIElements::PointerMoveEvent___c* __9;

  static inline ::UnityEngine::UIElements::PointerMoveEvent___c* New_ctor();

  /// @brief Method <.cctor>b__0_0, addr 0x7232ef8, size 0x54, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::PointerMoveEvent* __cctor_b__0_0();

  /// @brief Method .ctor, addr 0x7232ef4, size 0x4, virtual false, abstract: false, final false
  inline void _ctor();

  static inline ::UnityEngine::UIElements::PointerMoveEvent___c* getStaticF___9();

  static inline void setStaticF___9(::UnityEngine::UIElements::PointerMoveEvent___c* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerMoveEvent___c();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent___c", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerMoveEvent___c(PointerMoveEvent___c&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent___c", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerMoveEvent___c(PointerMoveEvent___c const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4543 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(sizeof(::UnityEngine::UIElements::PointerMoveEvent___c) == 0x10, "Size mismatch!");

} // namespace UnityEngine::UIElements
// [EventCategory((UnityEngine.UIElements.EventCategory)2)]
// Dependencies UnityEngine.UIElements.PointerEventBase`1<T>
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.PointerMoveEvent
class CORDL_TYPE PointerMoveEvent : public ::UnityEngine::UIElements::PointerEventBase_1<::UnityEngine::UIElements::PointerMoveEvent*> {
public:
  // Declarations
  using __c = ::UnityEngine::UIElements::PointerMoveEvent___c;

  /// @brief Field <isHandledByDraggable>k__BackingField, offset 0x114, size 0x1
  __declspec(property(get = __cordl_internal_get__isHandledByDraggable_k__BackingField, put = __cordl_internal_set__isHandledByDraggable_k__BackingField)) bool _isHandledByDraggable_k__BackingField;

  __declspec(property(get = get_isHandledByDraggable, put = set_isHandledByDraggable)) bool isHandledByDraggable;

  __declspec(property(get = get_isPointerDown)) bool isPointerDown;

  __declspec(property(get = get_isPointerUp)) bool isPointerUp;

  /// @brief Method Dispatch, addr 0x7232e34, size 0x6c, virtual true, abstract: false, final false
  inline void Dispatch(::UnityEngine::UIElements::BaseVisualElementPanel* panel);

  /// @brief Method GetPooledCompatibilityMouseEvent, addr 0x7232bcc, size 0x104, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::IMouseEvent* GetPooledCompatibilityMouseEvent();

  /// @brief Method Init, addr 0x7232a60, size 0x8c, virtual true, abstract: false, final false
  inline void Init();

  /// @brief Method LocalInit, addr 0x7232aec, size 0x54, virtual false, abstract: false, final false
  inline void LocalInit();

  static inline ::UnityEngine::UIElements::PointerMoveEvent* New_ctor();

  /// @brief Method PostDispatch, addr 0x7232d2c, size 0x108, virtual true, abstract: false, final false
  inline void PostDispatch(::UnityEngine::UIElements::IPanel* panel);

  /// @brief Method PreDispatch, addr 0x7232cd0, size 0x5c, virtual true, abstract: false, final false
  inline void PreDispatch(::UnityEngine::UIElements::IPanel* panel);

  constexpr bool const& __cordl_internal_get__isHandledByDraggable_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isHandledByDraggable_k__BackingField();

  constexpr void __cordl_internal_set__isHandledByDraggable_k__BackingField(bool value);

  /// @brief Method .ctor, addr 0x7232b40, size 0x8c, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_isHandledByDraggable, addr 0x723296c, size 0x8, virtual false, abstract: false, final false
  inline bool get_isHandledByDraggable();

  /// @brief Method get_isPointerDown, addr 0x723297c, size 0x70, virtual false, abstract: false, final false
  inline bool get_isPointerDown();

  /// @brief Method get_isPointerUp, addr 0x72329ec, size 0x74, virtual false, abstract: false, final false
  inline bool get_isPointerUp();

  /// [CompilerGenerated]
  /// @brief Method set_isHandledByDraggable, addr 0x7232974, size 0x8, virtual false, abstract: false, final false
  inline void set_isHandledByDraggable(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr PointerMoveEvent();

public:
  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  PointerMoveEvent(PointerMoveEvent&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "PointerMoveEvent", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  PointerMoveEvent(PointerMoveEvent const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4544 };

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <isHandledByDraggable>k__BackingField, offset: 0x114, size: 0x1, def value: None
  bool ____isHandledByDraggable_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::PointerMoveEvent, ____isHandledByDraggable_k__BackingField) == 0x114, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::PointerMoveEvent) == 0x118, "Size mismatch!");

} // namespace UnityEngine::UIElements

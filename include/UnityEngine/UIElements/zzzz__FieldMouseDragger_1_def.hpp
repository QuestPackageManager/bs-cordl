#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/FieldMouseDragger_1.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__BaseFieldMouseDragger_def.hpp"
#include "UnityEngine/zzzz__Rect_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(FieldMouseDragger_1)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
template <typename T> class IValueField_1;
}
namespace UnityEngine::UIElements {
class KeyDownEvent;
}
namespace UnityEngine::UIElements {
class PointerDownEvent;
}
namespace UnityEngine::UIElements {
class PointerMoveEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace UnityEngine::UIElements {
template <typename T> class FieldMouseDragger_1;
}
// Write type traits
MARK_GEN_REF_PTR_T(::UnityEngine::UIElements::FieldMouseDragger_1);
// Dependencies UnityEngine.Rect, UnityEngine.UIElements.BaseFieldMouseDragger
namespace UnityEngine::UIElements {
// cpp template
template <typename T>
// Is value type: false
// CS Name: UnityEngine.UIElements.FieldMouseDragger`1<T>
class CORDL_TYPE FieldMouseDragger_1 : public ::UnityEngine::UIElements::BaseFieldMouseDragger {
public:
  // Declarations
  /// @brief Field <dragging>k__BackingField, offset 0x30, size 0x1
  __declspec(property(get = __cordl_internal_get__dragging_k__BackingField, put = __cordl_internal_set__dragging_k__BackingField)) bool _dragging_k__BackingField;

  /// @brief Field <startValue>k__BackingField, offset 0x38, size 0x8
  __declspec(property(get = __cordl_internal_get__startValue_k__BackingField, put = __cordl_internal_set__startValue_k__BackingField)) T _startValue_k__BackingField;

  __declspec(property(get = get_dragging, put = set_dragging)) bool dragging;

  /// @brief Field m_DragElement, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DragElement, put = __cordl_internal_set_m_DragElement)) ::UnityEngine::UIElements::VisualElement* m_DragElement;

  /// @brief Field m_DragHotZone, offset 0x20, size 0x10
  __declspec(property(get = __cordl_internal_get_m_DragHotZone, put = __cordl_internal_set_m_DragHotZone)) ::UnityEngine::Rect m_DragHotZone;

  /// @brief Field m_DrivenField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get_m_DrivenField, put = __cordl_internal_set_m_DrivenField)) ::UnityEngine::UIElements::IValueField_1<T>* m_DrivenField;

  __declspec(property(get = get_startValue, put = set_startValue)) T startValue;

  /// @brief Method CanStartDrag, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool CanStartDrag(int32_t button, ::UnityEngine::Vector2 localPosition);

  static inline ::UnityEngine::UIElements::FieldMouseDragger_1<T>* New_ctor(::UnityEngine::UIElements::IValueField_1<T>* drivenField);

  /// @brief Method ProcessDownEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessDownEvent(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ProcessMoveEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessMoveEvent(bool shiftKey, bool altKey, ::UnityEngine::Vector2 deltaPosition);

  /// @brief Method ProcessUpEvent, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void ProcessUpEvent(::UnityEngine::UIElements::EventBase* evt, int32_t pointerId);

  /// @brief Method SetDragZone, addr 0x0, size 0xffffffffffffffff, virtual true, abstract: false, final true
  inline void SetDragZone(::UnityEngine::UIElements::VisualElement* dragElement, ::UnityEngine::Rect hotZone);

  /// @brief Method UpdateValueOnKeyDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateValueOnKeyDown(::UnityEngine::UIElements::KeyDownEvent* evt);

  /// @brief Method UpdateValueOnPointerDown, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateValueOnPointerDown(::UnityEngine::UIElements::PointerDownEvent* evt);

  /// @brief Method UpdateValueOnPointerMove, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateValueOnPointerMove(::UnityEngine::UIElements::PointerMoveEvent* evt);

  /// @brief Method UpdateValueOnPointerUp, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void UpdateValueOnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  constexpr bool const& __cordl_internal_get__dragging_k__BackingField() const;

  constexpr bool& __cordl_internal_get__dragging_k__BackingField();

  constexpr T const& __cordl_internal_get__startValue_k__BackingField() const;

  constexpr T& __cordl_internal_get__startValue_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_DragElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_DragElement();

  constexpr ::UnityEngine::Rect const& __cordl_internal_get_m_DragHotZone() const;

  constexpr ::UnityEngine::Rect& __cordl_internal_get_m_DragHotZone();

  constexpr ::UnityEngine::UIElements::IValueField_1<T>* const& __cordl_internal_get_m_DrivenField() const;

  constexpr ::UnityEngine::UIElements::IValueField_1<T>*& __cordl_internal_get_m_DrivenField();

  constexpr void __cordl_internal_set__dragging_k__BackingField(bool value);

  constexpr void __cordl_internal_set__startValue_k__BackingField(T value);

  constexpr void __cordl_internal_set_m_DragElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_DragHotZone(::UnityEngine::Rect value);

  constexpr void __cordl_internal_set_m_DrivenField(::UnityEngine::UIElements::IValueField_1<T>* value);

  /// @brief Method .ctor, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::IValueField_1<T>* drivenField);

  /// @brief Method get_dragging, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline bool get_dragging();

  /// @brief Method get_startValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline T get_startValue();

  /// @brief Method set_dragging, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_dragging(bool value);

  /// @brief Method set_startValue, addr 0x0, size 0xffffffffffffffff, virtual false, abstract: false, final false
  inline void set_startValue(T value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr FieldMouseDragger_1();

public:
  // Ctor Parameters [CppParam { name: "", ty: "FieldMouseDragger_1", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  FieldMouseDragger_1(FieldMouseDragger_1&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "FieldMouseDragger_1", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  FieldMouseDragger_1(FieldMouseDragger_1 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5949 };

  /// @brief Field m_DrivenField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::IValueField_1<T>* ___m_DrivenField;

  /// @brief Field m_DragElement, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_DragElement;

  /// @brief Field m_DragHotZone, offset: 0x20, size: 0x10, def value: None
  ::UnityEngine::Rect ___m_DragHotZone;

  /// @brief Field <dragging>k__BackingField, offset: 0x30, size: 0x1, def value: None
  bool ____dragging_k__BackingField;

  /// @brief Field <startValue>k__BackingField, offset: 0x38, size: 0x8, def value: None
  T ____startValue_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace UnityEngine::UIElements
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::UIElements::FieldMouseDragger_1, "UnityEngine.UIElements", "FieldMouseDragger`1");

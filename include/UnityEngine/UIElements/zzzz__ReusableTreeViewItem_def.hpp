#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReusableTreeViewItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/UIElements/zzzz__ReusableCollectionItem_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(ReusableTreeViewItem)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
template <typename T> class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class PointerUpEvent;
}
namespace UnityEngine::UIElements {
class Toggle;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReusableTreeViewItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ReusableTreeViewItem);
// Dependencies UnityEngine.UIElements.ReusableCollectionItem
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ReusableTreeViewItem
class CORDL_TYPE ReusableTreeViewItem : public ::UnityEngine::UIElements::ReusableCollectionItem {
public:
  // Declarations
  /// @brief Field m_BindableContainer, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_BindableContainer, put = __cordl_internal_set_m_BindableContainer)) ::UnityEngine::UIElements::VisualElement* m_BindableContainer;

  /// @brief Field m_Checkmark, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Checkmark, put = __cordl_internal_set_m_Checkmark)) ::UnityEngine::UIElements::VisualElement* m_Checkmark;

  /// @brief Field m_Container, offset 0x50, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityEngine::UIElements::VisualElement* m_Container;

  /// @brief Field m_Depth, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Depth, put = __cordl_internal_set_m_Depth)) int32_t m_Depth;

  /// @brief Field m_IndentElement, offset 0x58, size 0x8
  __declspec(property(get = __cordl_internal_get_m_IndentElement, put = __cordl_internal_set_m_IndentElement)) ::UnityEngine::UIElements::VisualElement* m_IndentElement;

  /// @brief Field m_IndentWidth, offset 0x84, size 0x4
  __declspec(property(get = __cordl_internal_get_m_IndentWidth, put = __cordl_internal_set_m_IndentWidth)) float_t m_IndentWidth;

  /// @brief Field m_PointerUpCallback, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_m_PointerUpCallback,
                      put = __cordl_internal_set_m_PointerUpCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* m_PointerUpCallback;

  /// @brief Field m_Toggle, offset 0x48, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Toggle, put = __cordl_internal_set_m_Toggle)) ::UnityEngine::UIElements::Toggle* m_Toggle;

  /// @brief Field m_ToggleGeometryChangedCallback, offset 0x98, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_ToggleGeometryChangedCallback,
      put = __cordl_internal_set_m_ToggleGeometryChangedCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* m_ToggleGeometryChangedCallback;

  /// @brief Field m_ToggleValueChangedCallback, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_ToggleValueChangedCallback,
                      put =
                          __cordl_internal_set_m_ToggleValueChangedCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* m_ToggleValueChangedCallback;

  /// @brief Field onPointerUp, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_onPointerUp, put = __cordl_internal_set_onPointerUp)) ::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* onPointerUp;

  /// @brief Field onToggleValueChanged, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_onToggleValueChanged,
                      put = __cordl_internal_set_onToggleValueChanged)) ::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* onToggleValueChanged;

  __declspec(property(get = get_rootElement)) ::UnityEngine::UIElements::VisualElement* rootElement;

  /// @brief Method DetachElement, addr 0x49797f4, size 0x1b4, virtual true, abstract: false, final false
  inline void DetachElement();

  /// @brief Method Indent, addr 0x4973274, size 0x14, virtual false, abstract: false, final false
  inline void Indent(int32_t depth);

  /// @brief Method Init, addr 0x4979574, size 0xcc, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* item);

  /// @brief Method InitExpandHierarchy, addr 0x4978f88, size 0x4ac, virtual false, abstract: false, final false
  inline void InitExpandHierarchy(::UnityEngine::UIElements::VisualElement* root, ::UnityEngine::UIElements::VisualElement* item);

  static inline ::UnityEngine::UIElements::ReusableTreeViewItem* New_ctor();

  /// @brief Method OnPointerUp, addr 0x4979cf4, size 0x1c, virtual false, abstract: false, final false
  inline void OnPointerUp(::UnityEngine::UIElements::PointerUpEvent* evt);

  /// @brief Method OnToggleGeometryChanged, addr 0x4979adc, size 0x218, virtual false, abstract: false, final false
  inline void OnToggleGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method OnToggleValueChanged, addr 0x4979d10, size 0x1c, virtual false, abstract: false, final false
  inline void OnToggleValueChanged(::UnityEngine::UIElements::ChangeEvent_1<bool>* evt);

  /// @brief Method PreAttachElement, addr 0x4979640, size 0x1b4, virtual true, abstract: false, final false
  inline void PreAttachElement();

  /// @brief Method SetExpandedWithoutNotify, addr 0x497333c, size 0x20, virtual false, abstract: false, final false
  inline void SetExpandedWithoutNotify(bool expanded);

  /// @brief Method SetToggleVisibility, addr 0x4973404, size 0x18, virtual false, abstract: false, final false
  inline void SetToggleVisibility(bool visible);

  /// @brief Method UpdateIndentLayout, addr 0x49799a8, size 0x134, virtual false, abstract: false, final false
  inline void UpdateIndentLayout();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_BindableContainer() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_BindableContainer();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Checkmark() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Checkmark();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_Container();

  constexpr int32_t const& __cordl_internal_get_m_Depth() const;

  constexpr int32_t& __cordl_internal_get_m_Depth();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get_m_IndentElement() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get_m_IndentElement();

  constexpr float_t const& __cordl_internal_get_m_IndentWidth() const;

  constexpr float_t& __cordl_internal_get_m_IndentWidth();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* const& __cordl_internal_get_m_PointerUpCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>*& __cordl_internal_get_m_PointerUpCallback();

  constexpr ::UnityEngine::UIElements::Toggle* const& __cordl_internal_get_m_Toggle() const;

  constexpr ::UnityEngine::UIElements::Toggle*& __cordl_internal_get_m_Toggle();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* const& __cordl_internal_get_m_ToggleGeometryChangedCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*& __cordl_internal_get_m_ToggleGeometryChangedCallback();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* const& __cordl_internal_get_m_ToggleValueChangedCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*& __cordl_internal_get_m_ToggleValueChangedCallback();

  constexpr ::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* const& __cordl_internal_get_onPointerUp() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>*& __cordl_internal_get_onPointerUp();

  constexpr ::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* const& __cordl_internal_get_onToggleValueChanged() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>*& __cordl_internal_get_onToggleValueChanged();

  constexpr void __cordl_internal_set_m_BindableContainer(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Checkmark(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Container(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_Depth(int32_t value);

  constexpr void __cordl_internal_set_m_IndentElement(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set_m_IndentWidth(float_t value);

  constexpr void __cordl_internal_set_m_PointerUpCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  constexpr void __cordl_internal_set_m_Toggle(::UnityEngine::UIElements::Toggle* value);

  constexpr void __cordl_internal_set_m_ToggleGeometryChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* value);

  constexpr void __cordl_internal_set_m_ToggleValueChangedCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value);

  constexpr void __cordl_internal_set_onPointerUp(::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  constexpr void __cordl_internal_set_onToggleValueChanged(::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value);

  /// @brief Method .ctor, addr 0x4979438, size 0x124, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onPointerUp, addr 0x49736d4, size 0xb0, virtual false, abstract: false, final false
  inline void add_onPointerUp(::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  /// @brief Method add_onToggleValueChanged, addr 0x4973784, size 0xb0, virtual false, abstract: false, final false
  inline void add_onToggleValueChanged(::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value);

  /// @brief Method get_rootElement, addr 0x497955c, size 0x18, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootElement();

  /// @brief Method remove_onPointerUp, addr 0x4973548, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onPointerUp(::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* value);

  /// @brief Method remove_onToggleValueChanged, addr 0x49735f8, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onToggleValueChanged(::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReusableTreeViewItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReusableTreeViewItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReusableTreeViewItem(ReusableTreeViewItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReusableTreeViewItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReusableTreeViewItem(ReusableTreeViewItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5491 };

  /// @brief Field m_Toggle, offset: 0x48, size: 0x8, def value: None
  ::UnityEngine::UIElements::Toggle* ___m_Toggle;

  /// @brief Field m_Container, offset: 0x50, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Container;

  /// @brief Field m_IndentElement, offset: 0x58, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_IndentElement;

  /// @brief Field m_BindableContainer, offset: 0x60, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_BindableContainer;

  /// @brief Field m_Checkmark, offset: 0x68, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ___m_Checkmark;

  /// @brief Field onPointerUp, offset: 0x70, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::PointerUpEvent*>* ___onPointerUp;

  /// @brief Field onToggleValueChanged, offset: 0x78, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* ___onToggleValueChanged;

  /// @brief Field m_Depth, offset: 0x80, size: 0x4, def value: None
  int32_t ___m_Depth;

  /// @brief Field m_IndentWidth, offset: 0x84, size: 0x4, def value: None
  float_t ___m_IndentWidth;

  /// @brief Field m_PointerUpCallback, offset: 0x88, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::PointerUpEvent*>* ___m_PointerUpCallback;

  /// @brief Field m_ToggleValueChangedCallback, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::ChangeEvent_1<bool>*>* ___m_ToggleValueChangedCallback;

  /// @brief Field m_ToggleGeometryChangedCallback, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* ___m_ToggleGeometryChangedCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_Toggle) == 0x48, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_Container) == 0x50, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_IndentElement) == 0x58, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_BindableContainer) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_Checkmark) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___onPointerUp) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___onToggleValueChanged) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_Depth) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_IndentWidth) == 0x84, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_PointerUpCallback) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_ToggleValueChangedCallback) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableTreeViewItem, ___m_ToggleGeometryChangedCallback) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReusableTreeViewItem, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ReusableTreeViewItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableTreeViewItem*, "UnityEngine.UIElements", "ReusableTreeViewItem");

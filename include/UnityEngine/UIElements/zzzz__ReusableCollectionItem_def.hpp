#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/ReusableCollectionItem.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReusableCollectionItem)
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine::UIElements::Experimental {
template <typename T> class ValueAnimation_1;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class ReusableCollectionItem;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::ReusableCollectionItem);
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.ReusableCollectionItem
class CORDL_TYPE ReusableCollectionItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field <animator>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__animator_k__BackingField,
      put = __cordl_internal_set__animator_k__BackingField)) ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* _animator_k__BackingField;

  /// @brief Field <bindableElement>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__bindableElement_k__BackingField,
                      put = __cordl_internal_set__bindableElement_k__BackingField)) ::UnityEngine::UIElements::VisualElement* _bindableElement_k__BackingField;

  /// @brief Field <id>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __cordl_internal_get__id_k__BackingField, put = __cordl_internal_set__id_k__BackingField)) int32_t _id_k__BackingField;

  /// @brief Field <index>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __cordl_internal_get__index_k__BackingField, put = __cordl_internal_set__index_k__BackingField)) int32_t _index_k__BackingField;

  /// @brief Field <isDragGhost>k__BackingField, offset 0x28, size 0x1
  __declspec(property(get = __cordl_internal_get__isDragGhost_k__BackingField, put = __cordl_internal_set__isDragGhost_k__BackingField)) bool _isDragGhost_k__BackingField;

  __declspec(property(get = get_animator, put = set_animator)) ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* animator;

  __declspec(property(get = get_bindableElement, put = set_bindableElement)) ::UnityEngine::UIElements::VisualElement* bindableElement;

  __declspec(property(get = get_id, put = set_id)) int32_t id;

  __declspec(property(get = get_index, put = set_index)) int32_t index;

  __declspec(property(get = get_isDragGhost, put = set_isDragGhost)) bool isDragGhost;

  /// @brief Field m_GeometryChangedEventCallback, offset 0x38, size 0x8
  __declspec(property(
      get = __cordl_internal_get_m_GeometryChangedEventCallback,
      put = __cordl_internal_set_m_GeometryChangedEventCallback)) ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* m_GeometryChangedEventCallback;

  /// @brief Field onDestroy, offset 0x40, size 0x8
  __declspec(property(get = __cordl_internal_get_onDestroy, put = __cordl_internal_set_onDestroy)) ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* onDestroy;

  /// @brief Field onGeometryChanged, offset 0x30, size 0x8
  __declspec(property(get = __cordl_internal_get_onGeometryChanged,
                      put = __cordl_internal_set_onGeometryChanged)) ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* onGeometryChanged;

  __declspec(property(get = get_rootElement)) ::UnityEngine::UIElements::VisualElement* rootElement;

  /// @brief Method DestroyElement, addr 0x497e49c, size 0x20, virtual true, abstract: false, final false
  inline void DestroyElement();

  /// @brief Method DetachElement, addr 0x497e390, size 0x10c, virtual true, abstract: false, final false
  inline void DetachElement();

  /// @brief Method Init, addr 0x497e2cc, size 0x8, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* item);

  static inline ::UnityEngine::UIElements::ReusableCollectionItem* New_ctor();

  /// @brief Method OnGeometryChanged, addr 0x497e74c, size 0x20, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  /// @brief Method PreAttachElement, addr 0x497e2d4, size 0xbc, virtual true, abstract: false, final false
  inline void PreAttachElement();

  /// @brief Method SetDragGhost, addr 0x497e5ac, size 0x1a0, virtual true, abstract: false, final false
  inline void SetDragGhost(bool dragGhost);

  /// @brief Method SetSelected, addr 0x497e4bc, size 0xf0, virtual true, abstract: false, final false
  inline void SetSelected(bool selected);

  constexpr ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* const& __cordl_internal_get__animator_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*& __cordl_internal_get__animator_k__BackingField();

  constexpr ::UnityEngine::UIElements::VisualElement* const& __cordl_internal_get__bindableElement_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::VisualElement*& __cordl_internal_get__bindableElement_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__id_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__id_k__BackingField();

  constexpr int32_t const& __cordl_internal_get__index_k__BackingField() const;

  constexpr int32_t& __cordl_internal_get__index_k__BackingField();

  constexpr bool const& __cordl_internal_get__isDragGhost_k__BackingField() const;

  constexpr bool& __cordl_internal_get__isDragGhost_k__BackingField();

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* const& __cordl_internal_get_m_GeometryChangedEventCallback() const;

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*& __cordl_internal_get_m_GeometryChangedEventCallback();

  constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* const& __cordl_internal_get_onDestroy() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& __cordl_internal_get_onDestroy();

  constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* const& __cordl_internal_get_onGeometryChanged() const;

  constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& __cordl_internal_get_onGeometryChanged();

  constexpr void __cordl_internal_set__animator_k__BackingField(::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* value);

  constexpr void __cordl_internal_set__bindableElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr void __cordl_internal_set__id_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__index_k__BackingField(int32_t value);

  constexpr void __cordl_internal_set__isDragGhost_k__BackingField(bool value);

  constexpr void __cordl_internal_set_m_GeometryChangedEventCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* value);

  constexpr void __cordl_internal_set_onDestroy(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  constexpr void __cordl_internal_set_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  /// @brief Method .ctor, addr 0x497e23c, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method add_onDestroy, addr 0x497e0dc, size 0xb0, virtual false, abstract: false, final false
  inline void add_onDestroy(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  /// @brief Method add_onGeometryChanged, addr 0x497df7c, size 0xb0, virtual false, abstract: false, final false
  inline void add_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  /// @brief Method get_animator, addr 0x497df38, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* get_animator();

  /// @brief Method get_bindableElement, addr 0x497df28, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_bindableElement();

  /// @brief Method get_id, addr 0x497df58, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method get_index, addr 0x497df48, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method get_isDragGhost, addr 0x497df68, size 0x8, virtual false, abstract: false, final false
  inline bool get_isDragGhost();

  /// @brief Method get_rootElement, addr 0x497df20, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootElement();

  /// @brief Method remove_onDestroy, addr 0x497e18c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onDestroy(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  /// @brief Method remove_onGeometryChanged, addr 0x497e02c, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  /// @brief Method set_animator, addr 0x497df40, size 0x8, virtual false, abstract: false, final false
  inline void set_animator(::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* value);

  /// @brief Method set_bindableElement, addr 0x497df30, size 0x8, virtual false, abstract: false, final false
  inline void set_bindableElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method set_id, addr 0x497df60, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

  /// @brief Method set_index, addr 0x497df50, size 0x8, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  /// @brief Method set_isDragGhost, addr 0x497df70, size 0xc, virtual false, abstract: false, final false
  inline void set_isDragGhost(bool value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReusableCollectionItem();

public:
  // Ctor Parameters [CppParam { name: "", ty: "ReusableCollectionItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReusableCollectionItem(ReusableCollectionItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReusableCollectionItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReusableCollectionItem(ReusableCollectionItem const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 5487 };

  /// @brief Field <bindableElement>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____bindableElement_k__BackingField;

  /// @brief Field <animator>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* ____animator_k__BackingField;

  /// @brief Field <index>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____index_k__BackingField;

  /// @brief Field <id>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____id_k__BackingField;

  /// @brief Field <isDragGhost>k__BackingField, offset: 0x28, size: 0x1, def value: None
  bool ____isDragGhost_k__BackingField;

  /// @brief Field onGeometryChanged, offset: 0x30, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* ___onGeometryChanged;

  /// @brief Field m_GeometryChangedEventCallback, offset: 0x38, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* ___m_GeometryChangedEventCallback;

  /// @brief Field onDestroy, offset: 0x40, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* ___onDestroy;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____bindableElement_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____animator_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____index_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____id_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____isDragGhost_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ___onGeometryChanged) == 0x30, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ___m_GeometryChangedEventCallback) == 0x38, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ___onDestroy) == 0x40, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReusableCollectionItem, 0x48>, "Size mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ReusableCollectionItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableCollectionItem*, "UnityEngine.UIElements", "ReusableCollectionItem");

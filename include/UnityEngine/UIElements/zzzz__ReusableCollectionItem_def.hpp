#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(ReusableCollectionItem)
namespace UnityEngine::UIElements::Experimental {
struct StyleValues;
}
namespace UnityEngine::UIElements {
class GeometryChangedEvent;
}
namespace System {
template <typename T> class Action_1;
}
namespace UnityEngine::UIElements {
template <typename TEventType> class EventCallback_1;
}
namespace UnityEngine::UIElements::Experimental {
template <typename T> class ValueAnimation_1;
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
// Type: UnityEngine.UIElements::ReusableCollectionItem
// SizeInfo { instance_size: 56, native_size: -1, calculated_instance_size: 56, calculated_native_size: 56, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2613))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7372))
// CS Name: ::UnityEngine.UIElements::ReusableCollectionItem*
class CORDL_TYPE ReusableCollectionItem : public ::System::Object {
public:
  // Declarations
  /// @brief Field <bindableElement>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __get__bindableElement_k__BackingField, put = __set__bindableElement_k__BackingField))::UnityEngine::UIElements::VisualElement* _bindableElement_k__BackingField;

  /// @brief Field <animator>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __get__animator_k__BackingField,
                      put = __set__animator_k__BackingField))::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* _animator_k__BackingField;

  /// @brief Field <index>k__BackingField, offset 0x20, size 0x4
  __declspec(property(get = __get__index_k__BackingField, put = __set__index_k__BackingField)) int32_t _index_k__BackingField;

  /// @brief Field <id>k__BackingField, offset 0x24, size 0x4
  __declspec(property(get = __get__id_k__BackingField, put = __set__id_k__BackingField)) int32_t _id_k__BackingField;

  /// @brief Field onGeometryChanged, offset 0x28, size 0x8
  __declspec(property(get = __get_onGeometryChanged, put = __set_onGeometryChanged))::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* onGeometryChanged;

  /// @brief Field m_GeometryChangedEventCallback, offset 0x30, size 0x8
  __declspec(property(get = __get_m_GeometryChangedEventCallback,
                      put = __set_m_GeometryChangedEventCallback))::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* m_GeometryChangedEventCallback;

  __declspec(property(get = get_rootElement))::UnityEngine::UIElements::VisualElement* rootElement;

  __declspec(property(get = get_bindableElement, put = set_bindableElement))::UnityEngine::UIElements::VisualElement* bindableElement;

  __declspec(property(get = get_animator, put = set_animator))::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* animator;

  __declspec(property(get = get_index, put = set_index)) int32_t index;

  __declspec(property(get = get_id, put = set_id)) int32_t id;

  constexpr ::UnityEngine::UIElements::VisualElement*& __get__bindableElement_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::VisualElement*> const& __get__bindableElement_k__BackingField() const;

  constexpr void __set__bindableElement_k__BackingField(::UnityEngine::UIElements::VisualElement* value);

  constexpr ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*& __get__animator_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>*> const&
  __get__animator_k__BackingField() const;

  constexpr void __set__animator_k__BackingField(::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* value);

  constexpr int32_t& __get__index_k__BackingField();

  constexpr int32_t const& __get__index_k__BackingField() const;

  constexpr void __set__index_k__BackingField(int32_t value);

  constexpr int32_t& __get__id_k__BackingField();

  constexpr int32_t const& __get__id_k__BackingField() const;

  constexpr void __set__id_k__BackingField(int32_t value);

  constexpr ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*& __get_onGeometryChanged();

  constexpr ::cordl_internals::to_const_pointer<::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>*> const& __get_onGeometryChanged() const;

  constexpr void __set_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  constexpr ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*& __get_m_GeometryChangedEventCallback();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>*> const& __get_m_GeometryChangedEventCallback() const;

  constexpr void __set_m_GeometryChangedEventCallback(::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* value);

  /// @brief Method get_rootElement, addr 0x2e87bcc, size 0x8, virtual true, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_rootElement();

  /// @brief Method get_bindableElement, addr 0x2e87bd4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::VisualElement* get_bindableElement();

  /// @brief Method set_bindableElement, addr 0x2e87bdc, size 0x8, virtual false, abstract: false, final false
  inline void set_bindableElement(::UnityEngine::UIElements::VisualElement* value);

  /// @brief Method get_animator, addr 0x2e87be4, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* get_animator();

  /// @brief Method set_animator, addr 0x2e87bec, size 0x8, virtual false, abstract: false, final false
  inline void set_animator(::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* value);

  /// @brief Method get_index, addr 0x2e87bf4, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_index();

  /// @brief Method set_index, addr 0x2e87bfc, size 0x8, virtual false, abstract: false, final false
  inline void set_index(int32_t value);

  /// @brief Method get_id, addr 0x2e87c04, size 0x8, virtual false, abstract: false, final false
  inline int32_t get_id();

  /// @brief Method set_id, addr 0x2e87c0c, size 0x8, virtual false, abstract: false, final false
  inline void set_id(int32_t value);

  /// @brief Method add_onGeometryChanged, addr 0x2e87c14, size 0xb0, virtual false, abstract: false, final false
  inline void add_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  /// @brief Method remove_onGeometryChanged, addr 0x2e87cc4, size 0xb0, virtual false, abstract: false, final false
  inline void remove_onGeometryChanged(::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* value);

  static inline ::UnityEngine::UIElements::ReusableCollectionItem* New_ctor();

  /// @brief Method .ctor, addr 0x2e87b14, size 0x90, virtual false, abstract: false, final false
  inline void _ctor();

  /// @brief Method Init, addr 0x2e875c8, size 0x8, virtual true, abstract: false, final false
  inline void Init(::UnityEngine::UIElements::VisualElement* item);

  /// @brief Method PreAttachElement, addr 0x2e878d0, size 0xbc, virtual true, abstract: false, final false
  inline void PreAttachElement();

  /// @brief Method DetachElement, addr 0x2e87a18, size 0xf8, virtual true, abstract: false, final false
  inline void DetachElement();

  /// @brief Method SetSelected, addr 0x2e87d74, size 0xf0, virtual true, abstract: false, final false
  inline void SetSelected(bool selected);

  /// @brief Method OnGeometryChanged, addr 0x2e87e64, size 0x20, virtual false, abstract: false, final false
  inline void OnGeometryChanged(::UnityEngine::UIElements::GeometryChangedEvent* evt);

  // Ctor Parameters [CppParam { name: "", ty: "ReusableCollectionItem", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  ReusableCollectionItem(ReusableCollectionItem&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "ReusableCollectionItem", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  ReusableCollectionItem(ReusableCollectionItem const&) = delete;

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr ReusableCollectionItem();

public:
  /// @brief Field <bindableElement>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::VisualElement* ____bindableElement_k__BackingField;

  /// @brief Field <animator>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::Experimental::ValueAnimation_1<::UnityEngine::UIElements::Experimental::StyleValues>* ____animator_k__BackingField;

  /// @brief Field <index>k__BackingField, offset: 0x20, size: 0x4, def value: None
  int32_t ____index_k__BackingField;

  /// @brief Field <id>k__BackingField, offset: 0x24, size: 0x4, def value: None
  int32_t ____id_k__BackingField;

  /// @brief Field onGeometryChanged, offset: 0x28, size: 0x8, def value: None
  ::System::Action_1<::UnityEngine::UIElements::ReusableCollectionItem*>* ___onGeometryChanged;

  /// @brief Field m_GeometryChangedEventCallback, offset: 0x30, size: 0x8, def value: None
  ::UnityEngine::UIElements::EventCallback_1<::UnityEngine::UIElements::GeometryChangedEvent*>* ___m_GeometryChangedEventCallback;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::ReusableCollectionItem, 0x38>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____bindableElement_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____animator_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____index_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ____id_k__BackingField) == 0x24, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ___onGeometryChanged) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::ReusableCollectionItem, ___m_GeometryChangedEventCallback) == 0x30, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::ReusableCollectionItem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::ReusableCollectionItem*, "UnityEngine.UIElements", "ReusableCollectionItem");

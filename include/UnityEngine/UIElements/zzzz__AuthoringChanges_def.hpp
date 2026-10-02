#pragma once
// IWYU pragma private; include "UnityEngine/UIElements/AuthoringChanges.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(AuthoringChanges)
namespace System::Collections::Generic {
template <typename T> class HashSet_1;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class AuthoringChanges;
}
// Write type traits
MARK_REF_T(::UnityEngine::UIElements::AuthoringChanges*);
DEFINE_IL2CPP_CLASS(::UnityEngine::UIElements::AuthoringChanges*, "UnityEngine.UIElements", "AuthoringChanges");
// [VisibleToOtherModules(new[] { "UnityEditor.UIToolkitAuthoringModule" })]
// Dependencies System.Object
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: UnityEngine.UIElements.AuthoringChanges
class CORDL_TYPE AuthoringChanges : public ::System::Object {
public:
  // Declarations
  /// @brief Field <addedOrMovedElements>k__BackingField, offset 0x10, size 0x8
  __declspec(property(
      get = __cordl_internal_get__addedOrMovedElements_k__BackingField,
      put = __cordl_internal_set__addedOrMovedElements_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* _addedOrMovedElements_k__BackingField;

  /// @brief Field <bindingContextChanged>k__BackingField, offset 0x30, size 0x8
  __declspec(property(
      get = __cordl_internal_get__bindingContextChanged_k__BackingField,
      put = __cordl_internal_set__bindingContextChanged_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* _bindingContextChanged_k__BackingField;

  /// @brief Field <removedFromPanel>k__BackingField, offset 0x18, size 0x8
  __declspec(property(
      get = __cordl_internal_get__removedFromPanel_k__BackingField,
      put = __cordl_internal_set__removedFromPanel_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* _removedFromPanel_k__BackingField;

  /// @brief Field <styleChanged>k__BackingField, offset 0x20, size 0x8
  __declspec(property(get = __cordl_internal_get__styleChanged_k__BackingField,
                      put = __cordl_internal_set__styleChanged_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* _styleChanged_k__BackingField;

  /// @brief Field <stylingContextChanged>k__BackingField, offset 0x28, size 0x8
  __declspec(property(
      get = __cordl_internal_get__stylingContextChanged_k__BackingField,
      put = __cordl_internal_set__stylingContextChanged_k__BackingField)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* _stylingContextChanged_k__BackingField;

  __declspec(property(get = get_addedOrMovedElements)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* addedOrMovedElements;

  __declspec(property(get = get_bindingContextChanged)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* bindingContextChanged;

  __declspec(property(get = get_removedFromPanel)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* removedFromPanel;

  __declspec(property(get = get_styleChanged)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* styleChanged;

  __declspec(property(get = get_stylingContextChanged)) ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* stylingContextChanged;

  /// @brief Method Clear, addr 0x7083700, size 0x94, virtual false, abstract: false, final false
  inline void Clear();

  /// @brief Method ContainsChanges, addr 0x7083650, size 0xb0, virtual false, abstract: false, final false
  inline bool ContainsChanges();

  static inline ::UnityEngine::UIElements::AuthoringChanges* New_ctor();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__addedOrMovedElements_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__addedOrMovedElements_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__bindingContextChanged_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__bindingContextChanged_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__removedFromPanel_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__removedFromPanel_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__styleChanged_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__styleChanged_k__BackingField();

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* const& __cordl_internal_get__stylingContextChanged_k__BackingField() const;

  constexpr ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>*& __cordl_internal_get__stylingContextChanged_k__BackingField();

  constexpr void __cordl_internal_set__addedOrMovedElements_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set__bindingContextChanged_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set__removedFromPanel_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set__styleChanged_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  constexpr void __cordl_internal_set__stylingContextChanged_k__BackingField(::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* value);

  /// @brief Method .ctor, addr 0x7083794, size 0xdc, virtual false, abstract: false, final false
  inline void _ctor();

  /// [CompilerGenerated]
  /// @brief Method get_addedOrMovedElements, addr 0x7083628, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* get_addedOrMovedElements();

  /// [CompilerGenerated]
  /// @brief Method get_bindingContextChanged, addr 0x7083648, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* get_bindingContextChanged();

  /// [CompilerGenerated]
  /// @brief Method get_removedFromPanel, addr 0x7083630, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* get_removedFromPanel();

  /// [CompilerGenerated]
  /// @brief Method get_styleChanged, addr 0x7083638, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* get_styleChanged();

  /// [CompilerGenerated]
  /// @brief Method get_stylingContextChanged, addr 0x7083640, size 0x8, virtual false, abstract: false, final false
  inline ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* get_stylingContextChanged();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr AuthoringChanges();

public:
  // Ctor Parameters [CppParam { name: "", ty: "AuthoringChanges", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  AuthoringChanges(AuthoringChanges&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "AuthoringChanges", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  AuthoringChanges(AuthoringChanges const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 4003 };

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <addedOrMovedElements>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ____addedOrMovedElements_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <removedFromPanel>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ____removedFromPanel_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <styleChanged>k__BackingField, offset: 0x20, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ____styleChanged_k__BackingField;

  /// [CompilerGenerated]
  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// @brief Field <stylingContextChanged>k__BackingField, offset: 0x28, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ____stylingContextChanged_k__BackingField;

  /// [DebuggerBrowsable((System.Diagnostics.DebuggerBrowsableState)0)]
  /// [CompilerGenerated]
  /// @brief Field <bindingContextChanged>k__BackingField, offset: 0x30, size: 0x8, def value: None
  ::System::Collections::Generic::HashSet_1<::UnityEngine::UIElements::VisualElement*>* ____bindingContextChanged_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::UIElements::AuthoringChanges, ____addedOrMovedElements_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AuthoringChanges, ____removedFromPanel_k__BackingField) == 0x18, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AuthoringChanges, ____styleChanged_k__BackingField) == 0x20, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AuthoringChanges, ____stylingContextChanged_k__BackingField) == 0x28, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::AuthoringChanges, ____bindingContextChanged_k__BackingField) == 0x30, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::UIElements::AuthoringChanges) == 0x38, "Size mismatch!");

} // namespace UnityEngine::UIElements

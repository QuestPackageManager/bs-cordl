#pragma once
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "System/zzzz__Object_def.hpp"
CORDL_MODULE_EXPORT(TextEditorEventHandler)
namespace UnityEngine::UIElements {
class EventBase;
}
namespace UnityEngine::UIElements {
class ITextInputField;
}
namespace UnityEngine::UIElements {
class TextEditorEngine;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class TextEditorEventHandler;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::UIElements::TextEditorEventHandler);
// Type: UnityEngine.UIElements::TextEditorEventHandler
// SizeInfo { instance_size: 32, native_size: -1, calculated_instance_size: 32, calculated_native_size: 32, minimum_alignment: 8, natural_alignment: 8, packing: None, specified_packing: None }
namespace UnityEngine::UIElements {
// Is value type: false
// CS Name: ::UnityEngine.UIElements::TextEditorEventHandler*
class CORDL_TYPE TextEditorEventHandler : public ::System::Object {
public:
  // Declarations
  /// @brief Field <editorEngine>k__BackingField, offset 0x10, size 0x8
  __declspec(property(get = __cordl_internal_get__editorEngine_k__BackingField,
                      put = __cordl_internal_set__editorEngine_k__BackingField))::UnityEngine::UIElements::TextEditorEngine* _editorEngine_k__BackingField;

  /// @brief Field <textInputField>k__BackingField, offset 0x18, size 0x8
  __declspec(property(get = __cordl_internal_get__textInputField_k__BackingField,
                      put = __cordl_internal_set__textInputField_k__BackingField))::UnityEngine::UIElements::ITextInputField* _textInputField_k__BackingField;

  __declspec(property(get = get_editorEngine, put = set_editorEngine))::UnityEngine::UIElements::TextEditorEngine* editorEngine;

  __declspec(property(get = get_textInputField, put = set_textInputField))::UnityEngine::UIElements::ITextInputField* textInputField;

  /// @brief Method ExecuteDefaultAction, addr 0x3383cec, size 0x158, virtual true, abstract: false, final false
  inline void ExecuteDefaultAction(::UnityEngine::UIElements::EventBase* evt);

  /// @brief Method ExecuteDefaultActionAtTarget, addr 0x3383ce8, size 0x4, virtual true, abstract: false, final false
  inline void ExecuteDefaultActionAtTarget(::UnityEngine::UIElements::EventBase* evt);

  static inline ::UnityEngine::UIElements::TextEditorEventHandler* New_ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine, ::UnityEngine::UIElements::ITextInputField* textInputField);

  constexpr ::UnityEngine::UIElements::TextEditorEngine*& __cordl_internal_get__editorEngine_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::TextEditorEngine*> const& __cordl_internal_get__editorEngine_k__BackingField() const;

  constexpr ::UnityEngine::UIElements::ITextInputField*& __cordl_internal_get__textInputField_k__BackingField();

  constexpr ::cordl_internals::to_const_pointer<::UnityEngine::UIElements::ITextInputField*> const& __cordl_internal_get__textInputField_k__BackingField() const;

  constexpr void __cordl_internal_set__editorEngine_k__BackingField(::UnityEngine::UIElements::TextEditorEngine* value);

  constexpr void __cordl_internal_set__textInputField_k__BackingField(::UnityEngine::UIElements::ITextInputField* value);

  /// @brief Method .ctor, addr 0x3383c28, size 0xc0, virtual false, abstract: false, final false
  inline void _ctor(::UnityEngine::UIElements::TextEditorEngine* editorEngine, ::UnityEngine::UIElements::ITextInputField* textInputField);

  /// @brief Method get_editorEngine, addr 0x3383c08, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::TextEditorEngine* get_editorEngine();

  /// @brief Method get_textInputField, addr 0x3383c18, size 0x8, virtual false, abstract: false, final false
  inline ::UnityEngine::UIElements::ITextInputField* get_textInputField();

  /// @brief Method set_editorEngine, addr 0x3383c10, size 0x8, virtual false, abstract: false, final false
  inline void set_editorEngine(::UnityEngine::UIElements::TextEditorEngine* value);

  /// @brief Method set_textInputField, addr 0x3383c20, size 0x8, virtual false, abstract: false, final false
  inline void set_textInputField(::UnityEngine::UIElements::ITextInputField* value);

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr TextEditorEventHandler();

public:
  // Ctor Parameters [CppParam { name: "", ty: "TextEditorEventHandler", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  TextEditorEventHandler(TextEditorEventHandler&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "TextEditorEventHandler", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  TextEditorEventHandler(TextEditorEventHandler const&) = delete;

  /// @brief Field <editorEngine>k__BackingField, offset: 0x10, size: 0x8, def value: None
  ::UnityEngine::UIElements::TextEditorEngine* ____editorEngine_k__BackingField;

  /// @brief Field <textInputField>k__BackingField, offset: 0x18, size: 0x8, def value: None
  ::UnityEngine::UIElements::ITextInputField* ____textInputField_k__BackingField;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::UIElements::TextEditorEventHandler, 0x20>, "Size mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditorEventHandler, ____editorEngine_k__BackingField) == 0x10, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::UIElements::TextEditorEventHandler, ____textInputField_k__BackingField) == 0x18, "Offset mismatch!");

} // namespace UnityEngine::UIElements
NEED_NO_BOX(::UnityEngine::UIElements::TextEditorEventHandler);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::TextEditorEventHandler*, "UnityEngine.UIElements", "TextEditorEventHandler");

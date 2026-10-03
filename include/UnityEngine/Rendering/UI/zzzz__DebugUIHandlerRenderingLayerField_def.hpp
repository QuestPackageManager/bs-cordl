#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerRenderingLayerField.hpp"
#include "beatsaber-hook/shared/types.hpp"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerRenderingLayerField)
namespace System::Collections::Generic {
template <typename T> class List_1;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerContainer;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerIndirectToggle;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering::UI {
class UIFoldout;
}
namespace UnityEngine::Rendering {
class DebugUI_RenderingLayerField;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerRenderingLayerField;
}
// Write type traits
MARK_REF_T(::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*);
DEFINE_IL2CPP_CLASS(::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField*, "UnityEngine.Rendering.UI", "DebugUIHandlerRenderingLayerField");
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerRenderingLayerField
class CORDL_TYPE DebugUIHandlerRenderingLayerField : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Container, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> m_Container;

  /// @brief Field m_Field, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field)) ::UnityEngine::Rendering::DebugUI_RenderingLayerField* m_Field;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field toggles, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_toggles,
                      put = __cordl_internal_set_toggles)) ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* toggles;

  /// @brief Field valueToggle, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_valueToggle, put = __cordl_internal_set_valueToggle)) ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> valueToggle;

  /// @brief Method GetValue, addr 0x6c34c88, size 0xa8, virtual false, abstract: false, final false
  inline bool GetValue(int32_t index);

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField* New_ctor();

  /// @brief Method Next, addr 0x6c34f8c, size 0xcc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnAction, addr 0x6c34f68, size 0x24, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDecrement, addr 0x6c34f4c, size 0x1c, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnDeselection, addr 0x6c34f04, size 0x2c, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnIncrement, addr 0x6c34f30, size 0x1c, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method OnSelection, addr 0x6c34e18, size 0xec, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetValue, addr 0x6c34d30, size 0xe8, virtual false, abstract: false, final false
  inline void SetValue(int32_t index, bool value);

  /// @brief Method SetWidget, addr 0x6c348a8, size 0x3e0, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& __cordl_internal_get_m_Container();

  constexpr ::UnityEngine::Rendering::DebugUI_RenderingLayerField* const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityEngine::Rendering::DebugUI_RenderingLayerField*& __cordl_internal_get_m_Field();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* const& __cordl_internal_get_toggles() const;

  constexpr ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>*& __cordl_internal_get_toggles();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> const& __cordl_internal_get_valueToggle() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout>& __cordl_internal_get_valueToggle();

  constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value);

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_RenderingLayerField* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_toggles(::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* value);

  constexpr void __cordl_internal_set_valueToggle(::UnityW<::UnityEngine::Rendering::UI::UIFoldout> value);

  /// @brief Method .ctor, addr 0x6c35058, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerRenderingLayerField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerRenderingLayerField", modifiers: "&&", def_value: None, comment: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerRenderingLayerField(DebugUIHandlerRenderingLayerField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerRenderingLayerField", modifiers: "const&", def_value: None, comment: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerRenderingLayerField(DebugUIHandlerRenderingLayerField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 9453 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueToggle, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> ___valueToggle;

  /// @brief Field toggles, offset: 0x70, size: 0x8, def value: None
  ::System::Collections::Generic::List_1<::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectToggle>>* ___toggles;

  /// @brief Field m_Field, offset: 0x78, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_RenderingLayerField* ___m_Field;

  /// @brief Field m_Container, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField, ___valueToggle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField, ___toggles) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField, ___m_Field) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField, ___m_Container) == 0x80, "Offset mismatch!");

static_assert(sizeof(::UnityEngine::Rendering::UI::DebugUIHandlerRenderingLayerField) == 0x88, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI

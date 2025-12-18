#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerColor.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerColor)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerContainer;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerIndirectFloatField;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering::UI {
class UIFoldout;
}
namespace UnityEngine::Rendering {
class DebugUI_ColorField;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Image;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerColor;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerColor);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerColor
class CORDL_TYPE DebugUIHandlerColor : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field colorImage, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_colorImage, put = __cordl_internal_set_colorImage)) ::UnityW<::UnityEngine::UI::Image> colorImage;

  /// @brief Field fieldA, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldA, put = __cordl_internal_set_fieldA)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldA;

  /// @brief Field fieldB, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldB, put = __cordl_internal_set_fieldB)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldB;

  /// @brief Field fieldG, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldG, put = __cordl_internal_set_fieldG)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldG;

  /// @brief Field fieldR, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldR, put = __cordl_internal_set_fieldR)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldR;

  /// @brief Field m_Container, offset 0xa0, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> m_Container;

  /// @brief Field m_Field, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field)) ::UnityEngine::Rendering::DebugUI_ColorField* m_Field;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field valueToggle, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_valueToggle, put = __cordl_internal_set_valueToggle)) ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> valueToggle;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerColor* New_ctor();

  /// @brief Method Next, addr 0x664acdc, size 0xcc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnAction, addr 0x664acb8, size 0x24, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDecrement, addr 0x664ac9c, size 0x1c, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnDeselection, addr 0x664ac54, size 0x2c, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnIncrement, addr 0x664ac80, size 0x1c, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method OnSelection, addr 0x664ab68, size 0xec, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetValue, addr 0x664aa98, size 0xcc, virtual false, abstract: false, final false
  inline void SetValue(float_t x, bool r, bool g, bool b, bool a);

  /// @brief Method SetWidget, addr 0x664a39c, size 0x52c, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method SetupSettings, addr 0x664a8c8, size 0x108, virtual false, abstract: false, final false
  inline void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field);

  /// @brief Method UpdateColor, addr 0x664a9d0, size 0xc8, virtual false, abstract: false, final false
  inline void UpdateColor();

  /// @brief Method <SetWidget>b__9_0, addr 0x664adc0, size 0x60, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__9_0();

  /// @brief Method <SetWidget>b__9_1, addr 0x664ae20, size 0x14, virtual false, abstract: false, final false
  inline void _SetWidget_b__9_1(float_t x);

  /// @brief Method <SetWidget>b__9_2, addr 0x664ae34, size 0x68, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__9_2();

  /// @brief Method <SetWidget>b__9_3, addr 0x664ae9c, size 0x14, virtual false, abstract: false, final false
  inline void _SetWidget_b__9_3(float_t x);

  /// @brief Method <SetWidget>b__9_4, addr 0x664aeb0, size 0x68, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__9_4();

  /// @brief Method <SetWidget>b__9_5, addr 0x664af18, size 0x14, virtual false, abstract: false, final false
  inline void _SetWidget_b__9_5(float_t x);

  /// @brief Method <SetWidget>b__9_6, addr 0x664af2c, size 0x68, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__9_6();

  /// @brief Method <SetWidget>b__9_7, addr 0x664af94, size 0x14, virtual false, abstract: false, final false
  inline void _SetWidget_b__9_7(float_t x);

  /// @brief Method <SetupSettings>b__11_0, addr 0x664afa8, size 0x18, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__11_0();

  /// @brief Method <SetupSettings>b__11_1, addr 0x664afc0, size 0x18, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__11_1();

  /// @brief Method <SetupSettings>b__11_2, addr 0x664afd8, size 0x1c, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__11_2();

  constexpr ::UnityW<::UnityEngine::UI::Image> const& __cordl_internal_get_colorImage() const;

  constexpr ::UnityW<::UnityEngine::UI::Image>& __cordl_internal_get_colorImage();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldA() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldA();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldB() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldB();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldG() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldG();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldR() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldR();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& __cordl_internal_get_m_Container();

  constexpr ::UnityEngine::Rendering::DebugUI_ColorField* const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityEngine::Rendering::DebugUI_ColorField*& __cordl_internal_get_m_Field();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> const& __cordl_internal_get_valueToggle() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout>& __cordl_internal_get_valueToggle();

  constexpr void __cordl_internal_set_colorImage(::UnityW<::UnityEngine::UI::Image> value);

  constexpr void __cordl_internal_set_fieldA(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_fieldB(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_fieldG(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_fieldR(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value);

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_ColorField* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_valueToggle(::UnityW<::UnityEngine::Rendering::UI::UIFoldout> value);

  /// @brief Method .ctor, addr 0x664ada8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerColor();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerColor", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerColor(DebugUIHandlerColor&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerColor", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerColor(DebugUIHandlerColor const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12488 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueToggle, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> ___valueToggle;

  /// @brief Field colorImage, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Image> ___colorImage;

  /// @brief Field fieldR, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldR;

  /// @brief Field fieldG, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldG;

  /// @brief Field fieldB, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldB;

  /// @brief Field fieldA, offset: 0x90, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldA;

  /// @brief Field m_Field, offset: 0x98, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_ColorField* ___m_Field;

  /// @brief Field m_Container, offset: 0xa0, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___valueToggle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___colorImage) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___fieldR) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___fieldG) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___fieldB) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___fieldA) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___m_Field) == 0x98, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerColor, ___m_Container) == 0xa0, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerColor, 0xa8>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerColor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerColor*, "UnityEngine.Rendering.UI", "DebugUIHandlerColor");

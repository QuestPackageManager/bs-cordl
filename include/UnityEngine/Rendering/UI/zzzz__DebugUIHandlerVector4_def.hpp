#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerVector4.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
#include <cmath>
CORDL_MODULE_EXPORT(DebugUIHandlerVector4)
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
class DebugUI_Vector4Field;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Text;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerVector4;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerVector4);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerVector4
class CORDL_TYPE DebugUIHandlerVector4 : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field fieldW, offset 0x88, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldW, put = __cordl_internal_set_fieldW)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldW;

  /// @brief Field fieldX, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldX, put = __cordl_internal_set_fieldX)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldX;

  /// @brief Field fieldY, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldY, put = __cordl_internal_set_fieldY)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldY;

  /// @brief Field fieldZ, offset 0x80, size 0x8
  __declspec(property(get = __cordl_internal_get_fieldZ, put = __cordl_internal_set_fieldZ)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> fieldZ;

  /// @brief Field m_Container, offset 0x98, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> m_Container;

  /// @brief Field m_Field, offset 0x90, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field)) ::UnityEngine::Rendering::DebugUI_Vector4Field* m_Field;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  /// @brief Field valueToggle, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_valueToggle, put = __cordl_internal_set_valueToggle)) ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> valueToggle;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerVector4* New_ctor();

  /// @brief Method Next, addr 0x665261c, size 0xcc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnAction, addr 0x66525f8, size 0x24, virtual true, abstract: false, final false
  inline void OnAction();

  /// @brief Method OnDecrement, addr 0x66525dc, size 0x1c, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnDeselection, addr 0x6652594, size 0x2c, virtual true, abstract: false, final false
  inline void OnDeselection();

  /// @brief Method OnIncrement, addr 0x66525c0, size 0x1c, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method OnSelection, addr 0x66524a8, size 0xec, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetValue, addr 0x66523f0, size 0xb8, virtual false, abstract: false, final false
  inline void SetValue(float_t v, bool x, bool y, bool z, bool w);

  /// @brief Method SetWidget, addr 0x6651e08, size 0x4e0, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method SetupSettings, addr 0x66522e8, size 0x108, virtual false, abstract: false, final false
  inline void SetupSettings(::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField* field);

  /// @brief Method <SetWidget>b__8_0, addr 0x6652700, size 0x54, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__8_0();

  /// @brief Method <SetWidget>b__8_1, addr 0x6652754, size 0x14, virtual false, abstract: false, final false
  inline void _SetWidget_b__8_1(float_t x);

  /// @brief Method <SetWidget>b__8_2, addr 0x6652768, size 0x5c, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__8_2();

  /// @brief Method <SetWidget>b__8_3, addr 0x66527c4, size 0x14, virtual false, abstract: false, final false
  inline void _SetWidget_b__8_3(float_t x);

  /// @brief Method <SetWidget>b__8_4, addr 0x66527d8, size 0x5c, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__8_4();

  /// @brief Method <SetWidget>b__8_5, addr 0x6652834, size 0x14, virtual false, abstract: false, final false
  inline void _SetWidget_b__8_5(float_t x);

  /// @brief Method <SetWidget>b__8_6, addr 0x6652848, size 0x5c, virtual false, abstract: false, final false
  inline float_t _SetWidget_b__8_6();

  /// @brief Method <SetWidget>b__8_7, addr 0x66528a4, size 0x14, virtual false, abstract: false, final false
  inline void _SetWidget_b__8_7(float_t x);

  /// @brief Method <SetupSettings>b__10_0, addr 0x66528b8, size 0x18, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__10_0();

  /// @brief Method <SetupSettings>b__10_1, addr 0x66528d0, size 0x18, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__10_1();

  /// @brief Method <SetupSettings>b__10_2, addr 0x66528e8, size 0x1c, virtual false, abstract: false, final false
  inline float_t _SetupSettings_b__10_2();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldW() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldW();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldX() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldX();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldY() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldY();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> const& __cordl_internal_get_fieldZ() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField>& __cordl_internal_get_fieldZ();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& __cordl_internal_get_m_Container();

  constexpr ::UnityEngine::Rendering::DebugUI_Vector4Field* const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Vector4Field*& __cordl_internal_get_m_Field();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> const& __cordl_internal_get_valueToggle() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::UIFoldout>& __cordl_internal_get_valueToggle();

  constexpr void __cordl_internal_set_fieldW(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_fieldX(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_fieldY(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_fieldZ(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> value);

  constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value);

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_Vector4Field* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  constexpr void __cordl_internal_set_valueToggle(::UnityW<::UnityEngine::Rendering::UI::UIFoldout> value);

  /// @brief Method .ctor, addr 0x66526e8, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerVector4();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerVector4", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerVector4(DebugUIHandlerVector4&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerVector4", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerVector4(DebugUIHandlerVector4 const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12521 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field valueToggle, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::UIFoldout> ___valueToggle;

  /// @brief Field fieldX, offset: 0x70, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldX;

  /// @brief Field fieldY, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldY;

  /// @brief Field fieldZ, offset: 0x80, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldZ;

  /// @brief Field fieldW, offset: 0x88, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerIndirectFloatField> ___fieldW;

  /// @brief Field m_Field, offset: 0x90, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Vector4Field* ___m_Field;

  /// @brief Field m_Container, offset: 0x98, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector4, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector4, ___valueToggle) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector4, ___fieldX) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector4, ___fieldY) == 0x78, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector4, ___fieldZ) == 0x80, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector4, ___fieldW) == 0x88, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector4, ___m_Field) == 0x90, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVector4, ___m_Container) == 0x98, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerVector4, 0xa0>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerVector4);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerVector4*, "UnityEngine.Rendering.UI", "DebugUIHandlerVector4");

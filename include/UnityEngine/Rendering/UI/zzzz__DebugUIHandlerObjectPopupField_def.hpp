#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerObjectPopupField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerField_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerObjectPopupField)
namespace UnityEngine::Rendering {
class DebugUI_ObjectPopupField;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerObjectPopupField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerField`1<T>
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerObjectPopupField
class CORDL_TYPE DebugUIHandlerObjectPopupField : public ::UnityEngine::Rendering::UI::DebugUIHandlerField_1<::UnityEngine::Rendering::DebugUI_ObjectPopupField*> {
public:
  // Declarations
  /// @brief Field m_Index, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  /// @brief Method ChangeSelectedObject, addr 0x65e5f04, size 0x108, virtual false, abstract: false, final false
  inline void ChangeSelectedObject();

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField* New_ctor();

  /// @brief Method OnDecrement, addr 0x65e601c, size 0x10, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnIncrement, addr 0x65e600c, size 0x10, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method SetWidget, addr 0x65e5ea0, size 0x64, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method UpdateValueLabel, addr 0x65e602c, size 0xf8, virtual true, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  /// @brief Method .ctor, addr 0x65e6124, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerObjectPopupField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerObjectPopupField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerObjectPopupField(DebugUIHandlerObjectPopupField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerObjectPopupField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerObjectPopupField(DebugUIHandlerObjectPopupField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12501 };

  /// @brief Field m_Index, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField, ___m_Index) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerObjectPopupField*, "UnityEngine.Rendering.UI", "DebugUIHandlerObjectPopupField");

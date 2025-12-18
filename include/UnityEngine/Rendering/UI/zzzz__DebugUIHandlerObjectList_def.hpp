#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerObjectList.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerField_1_def.hpp"
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerObjectList)
namespace UnityEngine::Rendering {
class DebugUI_ObjectListField;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerObjectList;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerObjectList);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerField`1<T>
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerObjectList
class CORDL_TYPE DebugUIHandlerObjectList : public ::UnityEngine::Rendering::UI::DebugUIHandlerField_1<::UnityEngine::Rendering::DebugUI_ObjectListField*> {
public:
  // Declarations
  /// @brief Field m_Index, offset 0x88, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Index, put = __cordl_internal_set_m_Index)) int32_t m_Index;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerObjectList* New_ctor();

  /// @brief Method OnDecrement, addr 0x664d82c, size 0x1c, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnIncrement, addr 0x664d810, size 0x1c, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method SetWidget, addr 0x664d7ac, size 0x64, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  /// @brief Method UpdateValueLabel, addr 0x664d848, size 0x18c, virtual true, abstract: false, final false
  inline void UpdateValueLabel();

  constexpr int32_t const& __cordl_internal_get_m_Index() const;

  constexpr int32_t& __cordl_internal_get_m_Index();

  constexpr void __cordl_internal_set_m_Index(int32_t value);

  /// @brief Method .ctor, addr 0x664d9d4, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerObjectList();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerObjectList", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerObjectList(DebugUIHandlerObjectList&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerObjectList", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerObjectList(DebugUIHandlerObjectList const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12504 };

  /// @brief Field m_Index, offset: 0x88, size: 0x4, def value: None
  int32_t ___m_Index;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerObjectList, ___m_Index) == 0x88, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerObjectList, 0x90>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerObjectList);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerObjectList*, "UnityEngine.Rendering.UI", "DebugUIHandlerObjectList");

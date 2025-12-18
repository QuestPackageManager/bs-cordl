#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerRow.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerFoldout_def.hpp"
#include <cmath>
#include <cstdint>
CORDL_MODULE_EXPORT(DebugUIHandlerRow)
namespace UnityEngine::Rendering {
class DebugUI_Table;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerRow;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerRow);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerFoldout
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerRow
class CORDL_TYPE DebugUIHandlerRow : public ::UnityEngine::Rendering::UI::DebugUIHandlerFoldout {
public:
  // Declarations
  /// @brief Field m_Timer, offset 0x80, size 0x4
  __declspec(property(get = __cordl_internal_get_m_Timer, put = __cordl_internal_set_m_Timer)) float_t m_Timer;

  /// @brief Method GetChild, addr 0x664eb84, size 0x134, virtual false, abstract: false, final false
  inline ::UnityW<::UnityEngine::GameObject> GetChild(int32_t index);

  /// @brief Method IsActive, addr 0x664ed3c, size 0x140, virtual false, abstract: false, final false
  inline bool IsActive(::UnityEngine::Rendering::DebugUI_Table* table, int32_t index, ::UnityEngine::GameObject* child);

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerRow* New_ctor();

  /// @brief Method OnEnable, addr 0x664eb7c, size 0x8, virtual true, abstract: false, final false
  inline void OnEnable();

  /// @brief Method TryGetChild, addr 0x664ecb8, size 0x84, virtual false, abstract: false, final false
  inline bool TryGetChild(int32_t index, ::ByRef<::UnityEngine::GameObject*> child);

  /// @brief Method Update, addr 0x664ee7c, size 0x3fc, virtual false, abstract: false, final false
  inline void Update();

  constexpr float_t const& __cordl_internal_get_m_Timer() const;

  constexpr float_t& __cordl_internal_get_m_Timer();

  constexpr void __cordl_internal_set_m_Timer(float_t value);

  /// @brief Method .ctor, addr 0x664f278, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerRow();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerRow", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerRow(DebugUIHandlerRow&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerRow", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerRow(DebugUIHandlerRow const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12511 };

  /// @brief Field m_Timer, offset: 0x80, size: 0x4, def value: None
  float_t ___m_Timer;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerRow, ___m_Timer) == 0x80, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerRow, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerRow);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerRow*, "UnityEngine.Rendering.UI", "DebugUIHandlerRow");

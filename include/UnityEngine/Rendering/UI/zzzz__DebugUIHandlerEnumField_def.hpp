#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerEnumField.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerField_1_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerEnumField)
namespace UnityEngine::Rendering {
class DebugUI_EnumField;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerEnumField;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerField`1<T>
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerEnumField
class CORDL_TYPE DebugUIHandlerEnumField : public ::UnityEngine::Rendering::UI::DebugUIHandlerField_1<::UnityEngine::Rendering::DebugUI_EnumField*> {
public:
  // Declarations
  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerEnumField* New_ctor();

  /// @brief Method OnDecrement, addr 0x664b614, size 0x1d8, virtual true, abstract: false, final false
  inline void OnDecrement(bool fast);

  /// @brief Method OnIncrement, addr 0x664b478, size 0x19c, virtual true, abstract: false, final false
  inline void OnIncrement(bool fast);

  /// @brief Method UpdateValueLabel, addr 0x664b7ec, size 0xa4, virtual true, abstract: false, final false
  inline void UpdateValueLabel();

  /// @brief Method .ctor, addr 0x664b890, size 0x58, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerEnumField();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerEnumField", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerEnumField(DebugUIHandlerEnumField&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerEnumField", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerEnumField(DebugUIHandlerEnumField const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12491 };

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerEnumField, 0x88>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerEnumField*, "UnityEngine.Rendering.UI", "DebugUIHandlerEnumField");

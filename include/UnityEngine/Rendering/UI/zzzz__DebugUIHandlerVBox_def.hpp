#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerVBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerVBox)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerContainer;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerVBox;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerVBox);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerVBox
class CORDL_TYPE DebugUIHandlerVBox : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Container, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> m_Container;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerVBox* New_ctor();

  /// @brief Method Next, addr 0x6650b74, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnSelection, addr 0x6650ab4, size 0xc0, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x6650a50, size 0x64, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& __cordl_internal_get_m_Container();

  constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value);

  /// @brief Method .ctor, addr 0x6650c30, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerVBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerVBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerVBox(DebugUIHandlerVBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerVBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerVBox(DebugUIHandlerVBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12518 };

  /// @brief Field m_Container, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerVBox, ___m_Container) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerVBox, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerVBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerVBox*, "UnityEngine.Rendering.UI", "DebugUIHandlerVBox");

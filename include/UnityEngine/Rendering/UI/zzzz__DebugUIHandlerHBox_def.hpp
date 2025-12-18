#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerHBox.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerHBox)
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
class DebugUIHandlerHBox;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerHBox);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerHBox
class CORDL_TYPE DebugUIHandlerHBox : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field m_Container, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> m_Container;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerHBox* New_ctor();

  /// @brief Method Next, addr 0x664cbb0, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnSelection, addr 0x664caf0, size 0xc0, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x664ca8c, size 0x64, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& __cordl_internal_get_m_Container();

  constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value);

  /// @brief Method .ctor, addr 0x664cc6c, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerHBox();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerHBox", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerHBox(DebugUIHandlerHBox&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerHBox", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerHBox(DebugUIHandlerHBox const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12498 };

  /// @brief Field m_Container, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerHBox, ___m_Container) == 0x60, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerHBox, 0x68>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerHBox);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerHBox*, "UnityEngine.Rendering.UI", "DebugUIHandlerHBox");

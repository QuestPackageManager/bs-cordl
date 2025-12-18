#pragma once
// IWYU pragma private; include "UnityEngine/Rendering/UI/DebugUIHandlerGroup.hpp"
#include "beatsaber-hook/shared/utils/typedefs.h"
#include "../../../cordl_internals/cordl_internals.hpp"
CORDL_MODULE_INIT
#include "UnityEngine/Rendering/UI/zzzz__DebugUIHandlerWidget_def.hpp"
CORDL_MODULE_EXPORT(DebugUIHandlerGroup)
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerContainer;
}
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerWidget;
}
namespace UnityEngine::Rendering {
class DebugUI_Container;
}
namespace UnityEngine::Rendering {
class DebugUI_Widget;
}
namespace UnityEngine::UI {
class Text;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace UnityEngine::Rendering::UI {
class DebugUIHandlerGroup;
}
// Write type traits
MARK_REF_PTR_T(::UnityEngine::Rendering::UI::DebugUIHandlerGroup);
// Dependencies UnityEngine.Rendering.UI.DebugUIHandlerWidget
namespace UnityEngine::Rendering::UI {
// Is value type: false
// CS Name: UnityEngine.Rendering.UI.DebugUIHandlerGroup
class CORDL_TYPE DebugUIHandlerGroup : public ::UnityEngine::Rendering::UI::DebugUIHandlerWidget {
public:
  // Declarations
  /// @brief Field header, offset 0x68, size 0x8
  __declspec(property(get = __cordl_internal_get_header, put = __cordl_internal_set_header)) ::UnityW<::UnityEngine::Transform> header;

  /// @brief Field m_Container, offset 0x78, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Container, put = __cordl_internal_set_m_Container)) ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> m_Container;

  /// @brief Field m_Field, offset 0x70, size 0x8
  __declspec(property(get = __cordl_internal_get_m_Field, put = __cordl_internal_set_m_Field)) ::UnityEngine::Rendering::DebugUI_Container* m_Field;

  /// @brief Field nameLabel, offset 0x60, size 0x8
  __declspec(property(get = __cordl_internal_get_nameLabel, put = __cordl_internal_set_nameLabel)) ::UnityW<::UnityEngine::UI::Text> nameLabel;

  static inline ::UnityEngine::Rendering::UI::DebugUIHandlerGroup* New_ctor();

  /// @brief Method Next, addr 0x664c9b8, size 0xbc, virtual true, abstract: false, final false
  inline ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerWidget> Next();

  /// @brief Method OnSelection, addr 0x664c8f8, size 0xc0, virtual true, abstract: false, final false
  inline bool OnSelection(bool fromNext, ::UnityEngine::Rendering::UI::DebugUIHandlerWidget* previous);

  /// @brief Method SetWidget, addr 0x664c804, size 0xf4, virtual true, abstract: false, final false
  inline void SetWidget(::UnityEngine::Rendering::DebugUI_Widget* widget);

  constexpr ::UnityW<::UnityEngine::Transform> const& __cordl_internal_get_header() const;

  constexpr ::UnityW<::UnityEngine::Transform>& __cordl_internal_get_header();

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> const& __cordl_internal_get_m_Container() const;

  constexpr ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer>& __cordl_internal_get_m_Container();

  constexpr ::UnityEngine::Rendering::DebugUI_Container* const& __cordl_internal_get_m_Field() const;

  constexpr ::UnityEngine::Rendering::DebugUI_Container*& __cordl_internal_get_m_Field();

  constexpr ::UnityW<::UnityEngine::UI::Text> const& __cordl_internal_get_nameLabel() const;

  constexpr ::UnityW<::UnityEngine::UI::Text>& __cordl_internal_get_nameLabel();

  constexpr void __cordl_internal_set_header(::UnityW<::UnityEngine::Transform> value);

  constexpr void __cordl_internal_set_m_Container(::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> value);

  constexpr void __cordl_internal_set_m_Field(::UnityEngine::Rendering::DebugUI_Container* value);

  constexpr void __cordl_internal_set_nameLabel(::UnityW<::UnityEngine::UI::Text> value);

  /// @brief Method .ctor, addr 0x664ca74, size 0x18, virtual false, abstract: false, final false
  inline void _ctor();

protected:
  // Ctor Parameters []
  // @brief default ctor
  constexpr DebugUIHandlerGroup();

public:
  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerGroup", modifiers: "&&", def_value: None }]
  // @brief delete move ctor to prevent accidental deref moves
  DebugUIHandlerGroup(DebugUIHandlerGroup&&) = delete;

  // Ctor Parameters [CppParam { name: "", ty: "DebugUIHandlerGroup", modifiers: "const&", def_value: None }]
  // @brief delete copy ctor to prevent accidental deref copies
  DebugUIHandlerGroup(DebugUIHandlerGroup const&) = delete;

  /// @brief IL2CPP Metadata Type Index
  static constexpr uint32_t __IL2CPP_TYPE_DEFINITION_INDEX{ 12497 };

  /// @brief Field nameLabel, offset: 0x60, size: 0x8, def value: None
  ::UnityW<::UnityEngine::UI::Text> ___nameLabel;

  /// @brief Field header, offset: 0x68, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Transform> ___header;

  /// @brief Field m_Field, offset: 0x70, size: 0x8, def value: None
  ::UnityEngine::Rendering::DebugUI_Container* ___m_Field;

  /// @brief Field m_Container, offset: 0x78, size: 0x8, def value: None
  ::UnityW<::UnityEngine::Rendering::UI::DebugUIHandlerContainer> ___m_Container;

  static constexpr bool __IL2CPP_IS_VALUE_TYPE = false;
};
// Non member Declarations
static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerGroup, ___nameLabel) == 0x60, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerGroup, ___header) == 0x68, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerGroup, ___m_Field) == 0x70, "Offset mismatch!");

static_assert(offsetof(::UnityEngine::Rendering::UI::DebugUIHandlerGroup, ___m_Container) == 0x78, "Offset mismatch!");

static_assert(::cordl_internals::size_check_v<::UnityEngine::Rendering::UI::DebugUIHandlerGroup, 0x80>, "Size mismatch!");

} // namespace UnityEngine::Rendering::UI
NEED_NO_BOX(::UnityEngine::Rendering::UI::DebugUIHandlerGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::Rendering::UI::DebugUIHandlerGroup*, "UnityEngine.Rendering.UI", "DebugUIHandlerGroup");
